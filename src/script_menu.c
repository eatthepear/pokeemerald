#include "global.h"
#include "main.h"
#include "event_data.h"
#include "field_effect.h"
#include "field_specials.h"
#include "item.h"
#include "menu.h"
#include "palette.h"
#include "script.h"
#include "script_menu.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "constants/field_specials.h"
#include "constants/items.h"
#include "constants/script_menu.h"
#include "constants/songs.h"
#include "list_menu.h"

#include "data/script_menu.h"

static EWRAM_DATA u8 sProcessInputDelay = 0;

static u8 sLilycoveSSTidalSelections[SSTIDAL_SELECTION_COUNT];

static void Task_HandleMultichoiceInput(u8 taskId);
static void Task_HandleYesNoInput(u8 taskId);
static void Task_HandleMultichoiceGridInput(u8 taskId);
static void DrawMultichoiceMenu(u8 left, u8 top, u8 multichoiceId, bool8 ignoreBPress, u8 cursorPos);
static void InitMultichoiceCheckWrap(bool8 ignoreBPress, u8 count, u8 windowId, u8 multichoiceId);
static void DrawLinkServicesMultichoiceMenu(u8 multichoiceId);
static void CreatePCMultichoice(void);
static void CreateLilycoveSSTidalMultichoice(void);
static bool8 IsPicboxClosed(void);
static void CreateStartMenuForPokenavTutorial(void);
static void InitMultichoiceNoWrap(bool8 ignoreBPress, u8 unusedCount, u8 windowId, u8 multichoiceId);

bool8 ScriptMenu_Multichoice(u8 left, u8 top, u8 multichoiceId, bool8 ignoreBPress)
{
    if (FuncIsActiveTask(Task_HandleMultichoiceInput) == TRUE)
    {
        return FALSE;
    }
    else
    {
        gSpecialVar_Result = 0xFF;
        DrawMultichoiceMenu(left, top, multichoiceId, ignoreBPress, 0);
        return TRUE;
    }
}

bool8 ScriptMenu_MultichoiceWithDefault(u8 left, u8 top, u8 multichoiceId, bool8 ignoreBPress, u8 defaultChoice)
{
    if (FuncIsActiveTask(Task_HandleMultichoiceInput) == TRUE)
    {
        return FALSE;
    }
    else
    {
        gSpecialVar_Result = 0xFF;
        DrawMultichoiceMenu(left, top, multichoiceId, ignoreBPress, defaultChoice);
        return TRUE;
    }
}

// Unused
static u16 GetLengthWithExpandedPlayerName(const u8 *str)
{
    u16 length = 0;

    while (*str != EOS)
    {
        if (*str == PLACEHOLDER_BEGIN)
        {
            str++;
            if (*str == PLACEHOLDER_ID_PLAYER)
            {
                length += StringLength(gSaveBlock2Ptr->playerName);
                str++;
            }
        }
        else
        {
            str++;
            length++;
        }
    }

    return length;
}

void DrawMultichoiceMenuCustom(u8 left, u8 top, u8 multichoiceId, u8 ignoreBPress, u8 cursorPos, const struct MenuAction *actions, int count)
{
    int i, windowId, width = 0;
    u8 newWidth;

    for (i = 0; i < count; i++)
    {
        width = DisplayTextAndGetWidth(actions[i].text, width);
    }

    newWidth = ConvertPixelWidthToTileWidth(width);
    left = ScriptMenu_AdjustLeftCoordFromWidth(left, newWidth);
    windowId = CreateWindowFromRect(left, top, newWidth, count * 2);
    SetStandardWindowBorderStyle(windowId, 0);
    PrintMenuTable(windowId, count, actions);
    InitMenuInUpperLeftCornerNormal(windowId, count, cursorPos);
    ScheduleBgCopyTilemapToVram(0);
    InitMultichoiceCheckWrap(ignoreBPress, count, windowId, multichoiceId);
}

static void DrawMultichoiceMenu(u8 left, u8 top, u8 multichoiceId, u8 ignoreBPress, u8 cursorPos)
{
    DrawMultichoiceMenuCustom(left, top, multichoiceId, ignoreBPress, cursorPos, sMultichoiceLists[multichoiceId].list, sMultichoiceLists[multichoiceId].count);
}

void TryDrawRepelMenu(void)
{
    static const u16 repelItems[] = {ITEM_REPEL, ITEM_SUPER_REPEL, ITEM_MAX_REPEL};
    struct MenuAction menuItems[4] = {NULL};
    int i, count = 0;

    for (i = 0; i < ARRAY_COUNT(repelItems); i++)
    {
        if (CheckBagHasItem(repelItems[i], 1))
        {
            VarSet(VAR_0x8004 + count, repelItems[i]);
            menuItems[count].text = ItemId_GetName(repelItems[i]);
            count++;
        }
    }

    if (count > 1)
        DrawMultichoiceMenuCustom(0, 0, 0, FALSE, 0, menuItems, count);

    gSpecialVar_Result = (count > 1);
}

void HandleRepelMenuChoice(void)
{
    gSpecialVar_0x8004 = VarGet(VAR_0x8004 + gSpecialVar_Result); // Get item Id;
    VarSet(VAR_REPEL_STEP_COUNT, ItemId_GetHoldEffectParam(gSpecialVar_0x8004));
}

#define tLeft           data[0]
#define tTop            data[1]
#define tRight          data[2]
#define tBottom         data[3]
#define tIgnoreBPress   data[4]
#define tDoWrap         data[5]
#define tWindowId       data[6]
#define tMultichoiceId  data[7]

static void InitMultichoiceCheckWrap(bool8 ignoreBPress, u8 count, u8 windowId, u8 multichoiceId)
{
    u8 i;
    u8 taskId;
    sProcessInputDelay = 2;

    for (i = 0; i < ARRAY_COUNT(sLinkServicesMultichoiceIds); i++)
    {
        if (sLinkServicesMultichoiceIds[i] == multichoiceId)
        {
            sProcessInputDelay = 12;
        }
    }

    taskId = CreateTask(Task_HandleMultichoiceInput, 80);

    gTasks[taskId].tIgnoreBPress = ignoreBPress;

    if (count > 3)
        gTasks[taskId].tDoWrap = TRUE;
    else
        gTasks[taskId].tDoWrap = FALSE;

    gTasks[taskId].tWindowId = windowId;
    gTasks[taskId].tMultichoiceId = multichoiceId;

    DrawLinkServicesMultichoiceMenu(multichoiceId);
}

static void Task_HandleMultichoiceInput(u8 taskId)
{
    s8 selection;
    s16 *data = gTasks[taskId].data;

    if (!gPaletteFade.active)
    {
        if (sProcessInputDelay)
        {
            sProcessInputDelay--;
        }
        else
        {
            if (!tDoWrap)
                selection = Menu_ProcessInputNoWrap();
            else
                selection = Menu_ProcessInput();

            if (JOY_NEW(DPAD_UP | DPAD_DOWN))
            {
                DrawLinkServicesMultichoiceMenu(tMultichoiceId);
            }

            if (selection != MENU_NOTHING_CHOSEN)
            {
                if (selection == MENU_B_PRESSED)
                {
                    if (tIgnoreBPress)
                        return;
                    PlaySE(SE_SELECT);
                    gSpecialVar_Result = MULTI_B_PRESSED;
                }
                else
                {
                    gSpecialVar_Result = selection;
                }
                ClearToTransparentAndRemoveWindow(tWindowId);
                DestroyTask(taskId);
                EnableBothScriptContexts();
            }
        }
    }
}

bool8 ScriptMenu_YesNo(u8 left, u8 top)
{
    u8 taskId;

    if (FuncIsActiveTask(Task_HandleYesNoInput) == TRUE)
    {
        return FALSE;
    }
    else
    {
        gSpecialVar_Result = 0xFF;
        DisplayYesNoMenuDefaultYes();
        taskId = CreateTask(Task_HandleYesNoInput, 0x50);
        return TRUE;
    }
}

// Unused
bool8 IsScriptActive(void)
{
    if (gSpecialVar_Result == 0xFF)
        return FALSE;
    else
        return TRUE;
}

static void Task_HandleYesNoInput(u8 taskId)
{
    if (gTasks[taskId].tRight < 5)
    {
        gTasks[taskId].tRight++;
        return;
    }

    switch (Menu_ProcessInputNoWrapClearOnChoose())
    {
    case MENU_NOTHING_CHOSEN:
        return;
    case MENU_B_PRESSED:
    case 1:
        PlaySE(SE_SELECT);
        gSpecialVar_Result = 0;
        break;
    case 0:
        gSpecialVar_Result = 1;
        break;
    }

    DestroyTask(taskId);
    EnableBothScriptContexts();
}

bool8 ScriptMenu_MultichoiceGrid(u8 left, u8 top, u8 multichoiceId, bool8 ignoreBPress, u8 columnCount)
{
    if (FuncIsActiveTask(Task_HandleMultichoiceGridInput) == TRUE)
    {
        return FALSE;
    }
    else
    {
        u8 taskId;
        u8 rowCount, newWidth;
        int i, width;

        gSpecialVar_Result = 0xFF;
        width = 0;

        for (i = 0; i < sMultichoiceLists[multichoiceId].count; i++)
        {
            width = DisplayTextAndGetWidth(sMultichoiceLists[multichoiceId].list[i].text, width);
        }

        newWidth = ConvertPixelWidthToTileWidth(width);

        left = ScriptMenu_AdjustLeftCoordFromWidth(left, columnCount * newWidth);
        rowCount = sMultichoiceLists[multichoiceId].count / columnCount;

        taskId = CreateTask(Task_HandleMultichoiceGridInput, 80);

        gTasks[taskId].tIgnoreBPress = ignoreBPress;
        gTasks[taskId].tWindowId = CreateWindowFromRect(left, top, columnCount * newWidth, rowCount * 2);
        SetStandardWindowBorderStyle(gTasks[taskId].tWindowId, 0);
        PrintMenuGridTable(gTasks[taskId].tWindowId, newWidth * 8, columnCount, rowCount, sMultichoiceLists[multichoiceId].list);
        InitMenuActionGrid(gTasks[taskId].tWindowId, newWidth * 8, columnCount, rowCount, 0);
        CopyWindowToVram(gTasks[taskId].tWindowId, COPYWIN_FULL);
        return TRUE;
    }
}

static void Task_HandleMultichoiceGridInput(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    s8 selection = Menu_ProcessGridInput();

    switch (selection)
    {
    case MENU_NOTHING_CHOSEN:
        return;
    case MENU_B_PRESSED:
        if (tIgnoreBPress)
            return;
        PlaySE(SE_SELECT);
        gSpecialVar_Result = MULTI_B_PRESSED;
        break;
    default:
        gSpecialVar_Result = selection;
        break;
    }

    ClearToTransparentAndRemoveWindow(tWindowId);
    DestroyTask(taskId);
    EnableBothScriptContexts();
}

#undef tWindowId

bool16 ScriptMenu_CreatePCMultichoice(void)
{
    if (FuncIsActiveTask(Task_HandleMultichoiceInput) == TRUE)
    {
        return FALSE;
    }
    else
    {
        gSpecialVar_Result = 0xFF;
        CreatePCMultichoice();
        return TRUE;
    }
}

static void CreatePCMultichoice(void)
{
    u8 y = 8;
    u32 pixelWidth = 0;
    u8 width;
    u8 numChoices;
    u8 windowId;
    int i;

    for (i = 0; i < ARRAY_COUNT(sPCNameStrings); i++)
    {
        pixelWidth = DisplayTextAndGetWidth(sPCNameStrings[i], pixelWidth);
    }

    if (FlagGet(FLAG_SYS_GAME_CLEAR))
    {
        pixelWidth = DisplayTextAndGetWidth(gText_HallOfFame, pixelWidth);
    }

    width = ConvertPixelWidthToTileWidth(pixelWidth);

    // Include Hall of Fame option if player is champion
    if (FlagGet(FLAG_SYS_GAME_CLEAR))
    {
        numChoices = 4;
        windowId = CreateWindowFromRect(0, 0, width, 8);
        SetStandardWindowBorderStyle(windowId, 0);
        AddTextPrinterParameterized(windowId, FONT_NORMAL, gText_HallOfFame, y, 33, TEXT_SKIP_DRAW, NULL);
        AddTextPrinterParameterized(windowId, FONT_NORMAL, gText_LogOff, y, 49, TEXT_SKIP_DRAW, NULL);
    }
    else
    {
        numChoices = 3;
        windowId = CreateWindowFromRect(0, 0, width, 6);
        SetStandardWindowBorderStyle(windowId, 0);
        AddTextPrinterParameterized(windowId, FONT_NORMAL, gText_LogOff, y, 33, TEXT_SKIP_DRAW, NULL);
    }

    // Change PC name if player has met Lanette
    if (FlagGet(FLAG_SYS_PC_LANETTE))
        AddTextPrinterParameterized(windowId, FONT_NORMAL, gText_LanettesPC, y, 1, TEXT_SKIP_DRAW, NULL);
    else
        AddTextPrinterParameterized(windowId, FONT_NORMAL, gText_SomeonesPC, y, 1, TEXT_SKIP_DRAW, NULL);

    StringExpandPlaceholders(gStringVar4, gText_PlayersPC);
    PrintPlayerNameOnWindow(windowId, gStringVar4, y, 17);
    InitMenuInUpperLeftCornerNormal(windowId, numChoices, 0);
    CopyWindowToVram(windowId, COPYWIN_FULL);
    InitMultichoiceCheckWrap(FALSE, numChoices, windowId, MULTI_PC);
}

void ScriptMenu_DisplayPCStartupPrompt(void)
{
    LoadMessageBoxAndFrameGfx(0, TRUE);
    AddTextPrinterParameterized2(0, FONT_NORMAL, gText_WhichPCShouldBeAccessed, 0, NULL, 2, 1, 3);
}

bool8 ScriptMenu_CreateLilycoveSSTidalMultichoice(void)
{
    if (FuncIsActiveTask(Task_HandleMultichoiceInput) == TRUE)
    {
        return FALSE;
    }
    else
    {
        gSpecialVar_Result = 0xFF;
        CreateLilycoveSSTidalMultichoice();
        return TRUE;
    }
}

// gSpecialVar_0x8004 is 1 if the Sailor was shown multiple event tickets at the same time
// otherwise gSpecialVar_0x8004 is 0
static void CreateLilycoveSSTidalMultichoice(void)
{
    u8 selectionCount = 0;
    u8 count;
    u32 pixelWidth;
    u8 width;
    u8 windowId;
    u8 i;
    u32 j;

    for (i = 0; i < SSTIDAL_SELECTION_COUNT; i++)
    {
        sLilycoveSSTidalSelections[i] = 0xFF;
    }

    GetFontAttribute(FONT_NORMAL, FONTATTR_MAX_LETTER_WIDTH);

    if (gSpecialVar_0x8004 == 0)
    {
        sLilycoveSSTidalSelections[selectionCount] = SSTIDAL_SELECTION_SLATEPORT;
        selectionCount++;

        if (FlagGet(FLAG_MET_SCOTT_ON_SS_TIDAL) == TRUE)
        {
            sLilycoveSSTidalSelections[selectionCount] = SSTIDAL_SELECTION_BATTLE_FRONTIER;
            selectionCount++;
        }
    }

    if (CheckBagHasItem(ITEM_EON_TICKET, 1) == TRUE && FlagGet(FLAG_ENABLE_SHIP_SOUTHERN_ISLAND) == TRUE)
    {
        if (gSpecialVar_0x8004 == 0)
        {
            sLilycoveSSTidalSelections[selectionCount] = SSTIDAL_SELECTION_SOUTHERN_ISLAND;
            selectionCount++;
        }

        if (gSpecialVar_0x8004 == 1 && FlagGet(FLAG_SHOWN_EON_TICKET) == FALSE)
        {
            sLilycoveSSTidalSelections[selectionCount] = SSTIDAL_SELECTION_SOUTHERN_ISLAND;
            selectionCount++;
            FlagSet(FLAG_SHOWN_EON_TICKET);
        }
    }

    if (CheckBagHasItem(ITEM_MYSTIC_TICKET, 1) == TRUE && FlagGet(FLAG_ENABLE_SHIP_NAVEL_ROCK) == TRUE)
    {
        if (gSpecialVar_0x8004 == 0)
        {
            sLilycoveSSTidalSelections[selectionCount] = SSTIDAL_SELECTION_NAVEL_ROCK;
            selectionCount++;
        }

        if (gSpecialVar_0x8004 == 1 && FlagGet(FLAG_SHOWN_MYSTIC_TICKET) == FALSE)
        {
            sLilycoveSSTidalSelections[selectionCount] = SSTIDAL_SELECTION_NAVEL_ROCK;
            selectionCount++;
            FlagSet(FLAG_SHOWN_MYSTIC_TICKET);
        }
    }

    if (CheckBagHasItem(ITEM_AURORA_TICKET, 1) == TRUE && FlagGet(FLAG_ENABLE_SHIP_BIRTH_ISLAND) == TRUE)
    {
        if (gSpecialVar_0x8004 == 0)
        {
            sLilycoveSSTidalSelections[selectionCount] = SSTIDAL_SELECTION_BIRTH_ISLAND;
            selectionCount++;
        }

        if (gSpecialVar_0x8004 == 1 && FlagGet(FLAG_SHOWN_AURORA_TICKET) == FALSE)
        {
            sLilycoveSSTidalSelections[selectionCount] = SSTIDAL_SELECTION_BIRTH_ISLAND;
            selectionCount++;
            FlagSet(FLAG_SHOWN_AURORA_TICKET);
        }
    }

    if (CheckBagHasItem(ITEM_OLD_SEA_MAP, 1) == TRUE && FlagGet(FLAG_ENABLE_SHIP_FARAWAY_ISLAND) == TRUE)
    {
        if (gSpecialVar_0x8004 == 0)
        {
            sLilycoveSSTidalSelections[selectionCount] = SSTIDAL_SELECTION_FARAWAY_ISLAND;
            selectionCount++;
        }

        if (gSpecialVar_0x8004 == 1 && FlagGet(FLAG_SHOWN_OLD_SEA_MAP) == FALSE)
        {
            sLilycoveSSTidalSelections[selectionCount] = SSTIDAL_SELECTION_FARAWAY_ISLAND;
            selectionCount++;
            FlagSet(FLAG_SHOWN_OLD_SEA_MAP);
        }
    }

    sLilycoveSSTidalSelections[selectionCount] = SSTIDAL_SELECTION_EXIT;
    selectionCount++;

    if (gSpecialVar_0x8004 == 0 && FlagGet(FLAG_MET_SCOTT_ON_SS_TIDAL) == TRUE)
    {
        count = selectionCount;
    }

    count = selectionCount;
    if (count == SSTIDAL_SELECTION_COUNT)
    {
        gSpecialVar_0x8004 = SCROLL_MULTI_SS_TIDAL_DESTINATION;
        ShowScrollableMultichoice();
    }
    else
    {
        pixelWidth = 0;

        for (j = 0; j < SSTIDAL_SELECTION_COUNT; j++)
        {
            u8 selection = sLilycoveSSTidalSelections[j];
            if (selection != 0xFF)
            {
                pixelWidth = DisplayTextAndGetWidth(sLilycoveSSTidalDestinations[selection], pixelWidth);
            }
        }

        width = ConvertPixelWidthToTileWidth(pixelWidth);
        windowId = CreateWindowFromRect(MAX_MULTICHOICE_WIDTH - width, (6 - count) * 2, width, count * 2);
        SetStandardWindowBorderStyle(windowId, 0);

        for (selectionCount = 0, i = 0; i < SSTIDAL_SELECTION_COUNT; i++)
        {
            if (sLilycoveSSTidalSelections[i] != 0xFF)
            {
                AddTextPrinterParameterized(windowId, FONT_NORMAL, sLilycoveSSTidalDestinations[sLilycoveSSTidalSelections[i]], 8, selectionCount * 16 + 1, TEXT_SKIP_DRAW, NULL);
                selectionCount++;
            }
        }

        InitMenuInUpperLeftCornerNormal(windowId, count, count - 1);
        CopyWindowToVram(windowId, COPYWIN_FULL);
        InitMultichoiceCheckWrap(FALSE, count, windowId, MULTI_SSTIDAL_LILYCOVE);
    }
}

void GetLilycoveSSTidalSelection(void)
{
    if (gSpecialVar_Result != MULTI_B_PRESSED)
    {
        gSpecialVar_Result = sLilycoveSSTidalSelections[gSpecialVar_Result];
    }
}

#define tState       data[0]
#define tMonSpecies  data[1]
#define tMonSpriteId data[2]
#define tWindowX     data[3]
#define tWindowY     data[4]
#define tWindowId    data[5]

static void Task_PokemonPicWindow(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->tState)
    {
    case 0:
        task->tState++;
        break;
    case 1:
        // Wait until state is advanced by ScriptMenu_HidePokemonPic
        break;
    case 2:
        FreeResourcesAndDestroySprite(&gSprites[task->tMonSpriteId], task->tMonSpriteId);
        task->tState++;
        break;
    case 3:
        ClearToTransparentAndRemoveWindow(task->tWindowId);
        DestroyTask(taskId);
        break;
    }
}

bool8 ScriptMenu_ShowPokemonPic(u16 species, u8 x, u8 y)
{
    u8 taskId;
    u8 spriteId;

    if (FindTaskIdByFunc(Task_PokemonPicWindow) != TASK_NONE)
    {
        return FALSE;
    }
    else
    {
        spriteId = CreateMonSprite_PicBox(species, x * 8 + 40, y * 8 + 40, 0);
        taskId = CreateTask(Task_PokemonPicWindow, 0x50);
        gTasks[taskId].tWindowId = CreateWindowFromRect(x, y, 8, 8);
        gTasks[taskId].tState = 0;
        gTasks[taskId].tMonSpecies = species;
        gTasks[taskId].tMonSpriteId = spriteId;
        gSprites[spriteId].callback = SpriteCallbackDummy;
        gSprites[spriteId].oam.priority = 0;
        SetStandardWindowBorderStyle(gTasks[taskId].tWindowId, 1);
        ScheduleBgCopyTilemapToVram(0);
        return TRUE;
    }
}

bool8 (*ScriptMenu_HidePokemonPic(void))(void)
{
    u8 taskId = FindTaskIdByFunc(Task_PokemonPicWindow);

    if (taskId == TASK_NONE)
        return NULL;
    gTasks[taskId].tState++;
    return IsPicboxClosed;
}

static bool8 IsPicboxClosed(void)
{
    if (FindTaskIdByFunc(Task_PokemonPicWindow) == TASK_NONE)
        return TRUE;
    else
        return FALSE;
}

#undef tState
#undef tMonSpecies
#undef tMonSpriteId
#undef tWindowX
#undef tWindowY
#undef tWindowId

u8 CreateWindowFromRect(u8 x, u8 y, u8 width, u8 height)
{
    struct WindowTemplate template = CreateWindowTemplate(0, x + 1, y + 1, width, height, 15, 100);
    u8 windowId = AddWindow(&template);
    PutWindowTilemap(windowId);
    return windowId;
}

void ClearToTransparentAndRemoveWindow(u8 windowId)
{
    ClearStdWindowAndFrameToTransparent(windowId, TRUE);
    RemoveWindow(windowId);
}

static void DrawLinkServicesMultichoiceMenu(u8 multichoiceId)
{
    switch (multichoiceId)
    {
    case MULTI_WIRELESS_NO_BERRY:
        FillWindowPixelBuffer(0, PIXEL_FILL(1));
        AddTextPrinterParameterized2(0, FONT_NORMAL, sWirelessOptionsNoBerryCrush[Menu_GetCursorPos()], 0, NULL, 2, 1, 3);
        break;
    case MULTI_CABLE_CLUB_WITH_RECORD_MIX:
        FillWindowPixelBuffer(0, PIXEL_FILL(1));
        AddTextPrinterParameterized2(0, FONT_NORMAL, sCableClubOptions_WithRecordMix[Menu_GetCursorPos()], 0, NULL, 2, 1, 3);
        break;
    case MULTI_WIRELESS_NO_RECORD:
        FillWindowPixelBuffer(0, PIXEL_FILL(1));
        AddTextPrinterParameterized2(0, FONT_NORMAL, sWirelessOptions_NoRecordMix[Menu_GetCursorPos()], 0, NULL, 2, 1, 3);
        break;
    case MULTI_WIRELESS_ALL_SERVICES:
        FillWindowPixelBuffer(0, PIXEL_FILL(1));
        AddTextPrinterParameterized2(0, FONT_NORMAL, sWirelessOptions_AllServices[Menu_GetCursorPos()], 0, NULL, 2, 1, 3);
        break;
    case MULTI_WIRELESS_NO_RECORD_BERRY:
        FillWindowPixelBuffer(0, PIXEL_FILL(1));
        AddTextPrinterParameterized2(0, FONT_NORMAL, sWirelessOptions_NoRecordMixBerryCrush[Menu_GetCursorPos()], 0, NULL, 2, 1, 3);
        break;
    case MULTI_CABLE_CLUB_NO_RECORD_MIX:
        FillWindowPixelBuffer(0, PIXEL_FILL(1));
        AddTextPrinterParameterized2(0, FONT_NORMAL, sCableClubOptions_NoRecordMix[Menu_GetCursorPos()], 0, NULL, 2, 1, 3);
        break;
    }
}

bool16 ScriptMenu_CreateStartMenuForPokenavTutorial(void)
{
    if (FuncIsActiveTask(Task_HandleMultichoiceInput) == TRUE)
    {
        return FALSE;
    }
    else
    {
        gSpecialVar_Result = 0xFF;
        CreateStartMenuForPokenavTutorial();
        return TRUE;
    }
}

static void CreateStartMenuForPokenavTutorial(void)
{
    u8 windowId = CreateWindowFromRect(21, 0, 7, 18);
    SetStandardWindowBorderStyle(windowId, 0);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, gText_MenuOptionPokedex, 8, 9, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, gText_MenuOptionPokemon, 8, 25, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, gText_MenuOptionBag, 8, 41, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, gText_MenuOptionPokenav, 8, 57, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, gSaveBlock2Ptr->playerName, 8, 73, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, gText_MenuOptionSave, 8, 89, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, gText_MenuOptionOption, 8, 105, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, gText_MenuOptionExit, 8, 121, TEXT_SKIP_DRAW, NULL);
    InitMenuNormal(windowId, FONT_NORMAL, 0, 9, 16, ARRAY_COUNT(MultichoiceList_ForcedStartMenu), 0);
    InitMultichoiceNoWrap(FALSE, ARRAY_COUNT(MultichoiceList_ForcedStartMenu), windowId, MULTI_FORCED_START_MENU);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

#define tWindowId       data[6]

static void InitMultichoiceNoWrap(bool8 ignoreBPress, u8 unusedCount, u8 windowId, u8 multichoiceId)
{
    u8 taskId;
    sProcessInputDelay = 2;
    taskId = CreateTask(Task_HandleMultichoiceInput, 80);
    gTasks[taskId].tIgnoreBPress = ignoreBPress;
    gTasks[taskId].tDoWrap = 0;
    gTasks[taskId].tWindowId = windowId;
    gTasks[taskId].tMultichoiceId = multichoiceId;
}

#undef tLeft
#undef tTop
#undef tRight
#undef tBottom
#undef tIgnoreBPress
#undef tDoWrap
#undef tWindowId
#undef tMultichoiceId

static int DisplayTextAndGetWidthInternal(const u8 *str)
{
    u8 temp[64];
    StringExpandPlaceholders(temp, str);
    return GetStringWidth(FONT_NORMAL, temp, 0);
}

int DisplayTextAndGetWidth(const u8 *str, int prevWidth)
{
    int width = DisplayTextAndGetWidthInternal(str);
    if (width < prevWidth)
    {
        width = prevWidth;
    }
    return width;
}

int ConvertPixelWidthToTileWidth(int width)
{
    return (((width + 9) / 8) + 1) > MAX_MULTICHOICE_WIDTH ? MAX_MULTICHOICE_WIDTH : (((width + 9) / 8) + 1);
}

int ScriptMenu_AdjustLeftCoordFromWidth(int left, int width)
{
    int adjustedLeft = left;

    if (left + width > MAX_MULTICHOICE_WIDTH)
    {
        if (MAX_MULTICHOICE_WIDTH - width < 0)
        {
            adjustedLeft = 0;
        }
        else
        {
            adjustedLeft = MAX_MULTICHOICE_WIDTH - width;
        }
    }

    return adjustedLeft;
}

// Text displayed as options.
static const u8 sText_Bulbasaur[] = _("Bulbasaur");
static const u8 sText_Charmander[] = _("Charmander");
static const u8 sText_Squirtle[] = _("Squirtle");
static const u8 sText_Chikorita[] = _("Chikorita");
static const u8 sText_Cyndaquil[] = _("Cyndaquil");
static const u8 sText_Totodile[] = _("Totodile");
static const u8 sText_Treecko[] = _("Treecko");
static const u8 sText_Torchic[] = _("Torchic");
static const u8 sText_Mudkip[] = _("Mudkip");
static const u8 sText_Turtwig[] = _("Turtwig");
static const u8 sText_Chimchar[] = _("Chimchar");
static const u8 sText_Piplup[] = _("Piplup");
static const u8 sText_Snivy[] = _("Snivy");
static const u8 sText_Tepig[] = _("Tepig");
static const u8 sText_Oshawott[] = _("Oshawott");
static const u8 sText_Chespin[] = _("Chespin");
static const u8 sText_Fennekin[] = _("Fennekin");
static const u8 sText_Froakie[] = _("Froakie");
static const u8 sText_Rowlet[] = _("Rowlet");
static const u8 sText_Litten[] = _("Litten");
static const u8 sText_Popplio[] = _("Popplio");
static const u8 sText_Grookey[] = _("Grookey");
static const u8 sText_Scorbunny[] = _("Scorbunny");
static const u8 sText_Sobble[] = _("Sobble");
static const u8 sText_Random[] = _("Random");
static const u8 sText_Vaporeon[] = _("Vaporeon");
static const u8 sText_Jolteon[] = _("Jolteon");
static const u8 sText_Flareon[] = _("Flareon");
static const u8 sText_Espeon[] = _("Espeon");
static const u8 sText_Umbreon[] = _("Umbreon");
static const u8 sText_Leafeon[] = _("Leafeon");
static const u8 sText_Glaceon[] = _("Glaceon");
static const u8 sText_Sylveon[] = _("Sylveon");
static const u8 sText_MoveTutorIcyWind[] = _("Icy Wind");
static const u8 sText_MoveTutorGrassKnot[] = _("Grass Knot");
static const u8 sText_MoveTutorLowKick[] = _("Low Kick");
static const u8 sText_MoveTutorHealBell[] = _("Heal Bell");
static const u8 sText_MoveTutorHelpingHand[] = _("Helping Hand");
static const u8 sText_MoveTutorSleepTalk[] = _("Sleep Talk");
static const u8 sText_MoveTutorStealthRock[] = _("Stealth Rock");
static const u8 sText_MoveTutorTaunt[] = _("Taunt");
static const u8 sText_MoveTutorFirePunch[] = _("Fire Punch");
static const u8 sText_MoveTutorIcePunch[] = _("Ice Punch");
static const u8 sText_MoveTutorThunderPunch[] = _("Thunder Punch");
static const u8 sText_MoveTutorUTurn[] = _("U-Turn");
static const u8 sText_MoveTutorVoltSwitch[] = _("Volt Switch");
static const u8 sText_MoveTutorDefog[] = _("Defog");
static const u8 sText_MoveTutorPainSplit[] = _("Pain Split");
static const u8 sText_MoveTutorTrick[] = _("Trick");
static const u8 sText_MoveTutorBounce[] = _("Bounce");
static const u8 sText_MoveTutorFlipTurn[] = _("Flip Turn");
static const u8 sText_MoveTutorIronHead[] = _("Iron Head");
static const u8 sText_MoveTutorKnockOff[] = _("Knock Off");
static const u8 sText_MoveTutorZenHeadbutt[] = _("Zen Headbutt");
static const u8 sText_MoveTutorRoost[] = _("Roost");
static const u8 sText_MoveTutorSynthesis[] = _("Synthesis");
static const u8 sText_MoveTutorTailwind[] = _("Tailwind");
static const u8 sText_MoveTutorDracoMeteor[] = _("Draco Meteor");
static const u8 sText_MoveTutorExpandingForce[] = _("Expanding Force");
static const u8 sText_MoveTutorHeatWave[] = _("Heat Wave");
static const u8 sText_MoveTutorPoltergeist[] = _("Poltergeist");
static const u8 sText_MoveTutorPowerWhip[] = _("Power Whip");
static const u8 sText_MoveTutorSuperpower[] = _("Superpower");
static const u8 sText_MoveTutorSwordsDance[] = _("Swords Dance");
static const u8 sText_MoveTutorNastyPlot[] = _("Nasty Plot");
static const u8 sText_Lonely[] = _("Lonely");
static const u8 sText_Adamant[] = _("Adamant");
static const u8 sText_Naughty[] = _("Naughty");
static const u8 sText_Brave[] = _("Brave");
static const u8 sText_Bold[] = _("Bold");
static const u8 sText_Impish[] = _("Impish");
static const u8 sText_Lax[] = _("Lax");
static const u8 sText_Relaxed[] = _("Relaxed");
static const u8 sText_Modest[] = _("Modest");
static const u8 sText_Mild[] = _("Mild");
static const u8 sText_Rash[] = _("Rash");
static const u8 sText_Quiet[] = _("Quiet");
static const u8 sText_Calm[] = _("Calm");
static const u8 sText_Gentle[] = _("Gentle");
static const u8 sText_Careful[] = _("Careful");
static const u8 sText_Sassy[] = _("Sassy");
static const u8 sText_Timid[] = _("Timid");
static const u8 sText_Hasty[] = _("Hasty");
static const u8 sText_Jolly[] = _("Jolly");
static const u8 sText_Naive[] = _("Naive");
static const u8 sText_Serious[] = _("Serious");

// Sets of multichoices.
static const struct ListMenuItem Starters[] =
{
    {sText_Bulbasaur, 0},
    {sText_Charmander, 1},
    {sText_Squirtle, 2},
    {sText_Chikorita, 3},
    {sText_Cyndaquil, 4},
    {sText_Totodile, 5},
    {sText_Treecko, 6},
    {sText_Torchic, 7},
    {sText_Mudkip, 8},
    {sText_Turtwig, 9},
    {sText_Chimchar, 10},
    {sText_Piplup, 11},
    {sText_Snivy, 12},
    {sText_Tepig, 13},
    {sText_Oshawott, 14},
    {sText_Chespin, 15},
    {sText_Fennekin, 16},
    {sText_Froakie, 17},
    {sText_Rowlet, 18},
    {sText_Litten, 19},
    {sText_Popplio, 20},
    {sText_Grookey, 21},
    {sText_Scorbunny, 22},
    {sText_Sobble, 23},
    {sText_Random, 24},
};

static const struct ListMenuItem EvolutionaryGems[] =
{
    {sText_Vaporeon, 0},
    {sText_Jolteon, 1},
    {sText_Flareon, 2},
    {sText_Espeon, 3},
    {sText_Umbreon, 4},
    {sText_Leafeon, 5},
    {sText_Glaceon, 6},
    {sText_Sylveon, 7},
};

static const struct ListMenuItem MoveTutorLevel1[] =
{
    {sText_MoveTutorIcyWind, 0},
    {sText_MoveTutorGrassKnot, 1},
    {sText_MoveTutorLowKick, 2},
    {sText_MoveTutorHealBell, 3},
    {sText_MoveTutorHelpingHand, 4},
    {sText_MoveTutorSleepTalk, 5},
    {sText_MoveTutorStealthRock, 6},
    {sText_MoveTutorTaunt, 7},
};

static const struct ListMenuItem MoveTutorLevel2[] =
{
    {sText_MoveTutorIcyWind, 0},
    {sText_MoveTutorGrassKnot, 1},
    {sText_MoveTutorLowKick, 2},
    {sText_MoveTutorHealBell, 3},
    {sText_MoveTutorHelpingHand, 4},
    {sText_MoveTutorSleepTalk, 5},
    {sText_MoveTutorStealthRock, 6},
    {sText_MoveTutorTaunt, 7},
    {sText_MoveTutorFirePunch, 8},
    {sText_MoveTutorIcePunch, 9},
    {sText_MoveTutorThunderPunch, 10},
    {sText_MoveTutorFlipTurn, 11},
    {sText_MoveTutorUTurn, 12},
    {sText_MoveTutorDefog, 13},
    {sText_MoveTutorPainSplit, 14},
    {sText_MoveTutorTrick, 15},
};

static const struct ListMenuItem MoveTutorLevel3[] =
{
    {sText_MoveTutorIcyWind, 0},
    {sText_MoveTutorGrassKnot, 1},
    {sText_MoveTutorLowKick, 2},
    {sText_MoveTutorHealBell, 3},
    {sText_MoveTutorHelpingHand, 4},
    {sText_MoveTutorSleepTalk, 5},
    {sText_MoveTutorStealthRock, 6},
    {sText_MoveTutorTaunt, 7},
    {sText_MoveTutorFirePunch, 8},
    {sText_MoveTutorIcePunch, 9},
    {sText_MoveTutorThunderPunch, 10},
    {sText_MoveTutorFlipTurn, 11},
    {sText_MoveTutorUTurn, 12},
    {sText_MoveTutorDefog, 13},
    {sText_MoveTutorPainSplit, 14},
    {sText_MoveTutorTrick, 15},
    {sText_MoveTutorBounce, 16},
    {sText_MoveTutorIronHead, 17},
    {sText_MoveTutorKnockOff, 18},
    {sText_MoveTutorVoltSwitch, 19},
    {sText_MoveTutorZenHeadbutt, 20},
    {sText_MoveTutorRoost, 21},
    {sText_MoveTutorSynthesis, 22},
    {sText_MoveTutorTailwind, 23},
};

static const struct ListMenuItem MoveTutorLevel4[] =
{
    {sText_MoveTutorIcyWind, 0},
    {sText_MoveTutorGrassKnot, 1},
    {sText_MoveTutorLowKick, 2},
    {sText_MoveTutorHealBell, 3},
    {sText_MoveTutorHelpingHand, 4},
    {sText_MoveTutorSleepTalk, 5},
    {sText_MoveTutorStealthRock, 6},
    {sText_MoveTutorTaunt, 7},
    {sText_MoveTutorFirePunch, 8},
    {sText_MoveTutorIcePunch, 9},
    {sText_MoveTutorThunderPunch, 10},
    {sText_MoveTutorFlipTurn, 11},
    {sText_MoveTutorUTurn, 12},
    {sText_MoveTutorDefog, 13},
    {sText_MoveTutorPainSplit, 14},
    {sText_MoveTutorTrick, 15},
    {sText_MoveTutorBounce, 16},
    {sText_MoveTutorIronHead, 17},
    {sText_MoveTutorKnockOff, 18},
    {sText_MoveTutorVoltSwitch, 19},
    {sText_MoveTutorZenHeadbutt, 20},
    {sText_MoveTutorRoost, 21},
    {sText_MoveTutorSynthesis, 22},
    {sText_MoveTutorTailwind, 23},
    {sText_MoveTutorDracoMeteor, 24},
    {sText_MoveTutorExpandingForce, 25},
    {sText_MoveTutorHeatWave, 26},
    {sText_MoveTutorPoltergeist, 27},
    {sText_MoveTutorPowerWhip, 28},
    {sText_MoveTutorSuperpower, 29},
    {sText_MoveTutorSwordsDance, 30},
    {sText_MoveTutorNastyPlot, 31},
};

static const struct ListMenuItem Natures[] =
{
    {sText_Lonely, 0},
    {sText_Adamant, 1},
    {sText_Naughty, 2},
    {sText_Brave, 3},
    {sText_Bold, 4},
    {sText_Impish, 5},
    {sText_Lax, 6},
    {sText_Relaxed, 7},
    {sText_Modest, 8},
    {sText_Mild, 9},
    {sText_Rash, 10},
    {sText_Quiet, 11},
    {sText_Calm, 12},
    {sText_Gentle, 13},
    {sText_Careful, 14},
    {sText_Sassy, 15},
    {sText_Timid, 16},
    {sText_Hasty, 17},
    {sText_Jolly, 18},
    {sText_Naive, 19},
    {sText_Serious, 20},
};

// Table of your multichoice sets.
struct
{
    const struct ListMenuItem *set;
    int count;
} static const sScrollingSets[] =
{
    {Starters, ARRAY_COUNT(Starters)},
    {EvolutionaryGems, ARRAY_COUNT(EvolutionaryGems)},
    {MoveTutorLevel1, ARRAY_COUNT(MoveTutorLevel1)},
    {MoveTutorLevel2, ARRAY_COUNT(MoveTutorLevel2)},
    {MoveTutorLevel3, ARRAY_COUNT(MoveTutorLevel3)},
    {MoveTutorLevel4, ARRAY_COUNT(MoveTutorLevel4)},
    {Natures, ARRAY_COUNT(Natures)},
};

static void Task_ScrollingMultichoiceInput(u8 taskId);

static const struct ListMenuTemplate sMultichoiceListTemplate =
{
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 1,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = 1,
    .cursorKind = 0
};

// 0x8004 = set id
// 0x8005 = window X
// 0x8006 = window y
// 0x8007 = showed at once
// 0x8008 = Allow B press
void ScriptMenu_ScrollingMultichoice(void)
{
    int i, windowId, taskId, width = 0;
    int setId = gSpecialVar_0x8004;
    int left = gSpecialVar_0x8005;
    int top = gSpecialVar_0x8006;
    int maxShowed = gSpecialVar_0x8007;
    
    for (i = 0; i < sScrollingSets[setId].count; i++)
        width = DisplayTextAndGetWidth(sScrollingSets[setId].set[i].name, width);
    
    width = ConvertPixelWidthToTileWidth(width);
    left = ScriptMenu_AdjustLeftCoordFromWidth(left, width);
    windowId = CreateWindowFromRect(left, top, width, maxShowed * 2);
    SetStandardWindowBorderStyle(windowId, 0);
    CopyWindowToVram(windowId, 3);
    
    gMultiuseListMenuTemplate = sMultichoiceListTemplate;
    gMultiuseListMenuTemplate.windowId = windowId;
    gMultiuseListMenuTemplate.items = sScrollingSets[setId].set;
    gMultiuseListMenuTemplate.totalItems = sScrollingSets[setId].count;
    gMultiuseListMenuTemplate.maxShowed = maxShowed;
    
    taskId = CreateTask(Task_ScrollingMultichoiceInput, 0);
    gTasks[taskId].data[0] = ListMenuInit(&gMultiuseListMenuTemplate, 0, 0);
    gTasks[taskId].data[1] = gSpecialVar_0x8008;
    gTasks[taskId].data[2] = windowId;
}

static void Task_ScrollingMultichoiceInput(u8 taskId)
{
    bool32 done = FALSE;
    s32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);
    
    switch (input)
    {
        case LIST_HEADER:
        case LIST_NOTHING_CHOSEN:
            break;
        case LIST_CANCEL:
            if (gTasks[taskId].data[1])
            {
                gSpecialVar_Result = 0x7F;
                done = TRUE;
            }
            break;
        default:
            gSpecialVar_Result = input;
            done = TRUE;
            break;
    }
    
    if (done)
    {
        DestroyListMenuTask(gTasks[taskId].data[0], NULL, NULL);
        ClearStdWindowAndFrame(gTasks[taskId].data[2], TRUE);
        RemoveWindow(gTasks[taskId].data[2]);
        EnableBothScriptContexts();
        DestroyTask(taskId);
    }
}

bool8 ScriptMenu_MultichoiceGridCustom(u8 left, u8 top, u8 cursorPos, bool8 ignoreBPress, u8 columnCount, const struct MenuAction *actions, int count){
    if (FuncIsActiveTask(Task_HandleMultichoiceGridInput) == TRUE){
        return FALSE;
    }
    else{
        u8 taskId;
        u8 rowCount, newWidth;
        int i, width;
        gSpecialVar_Result = 0xFF;
        width = 0;
        for (i = 0; i < count; i++){
            width = DisplayTextAndGetWidth(actions[i].text, width);
        }
        newWidth = ConvertPixelWidthToTileWidth(width);
        left = ScriptMenu_AdjustLeftCoordFromWidth(left, columnCount * newWidth);
        rowCount = count / columnCount;
        taskId = CreateTask(Task_HandleMultichoiceGridInput, 80);
        gTasks[taskId].data[4] = ignoreBPress;
        gTasks[taskId].data[6] = CreateWindowFromRect(left, top, columnCount * newWidth, rowCount * 2);
        SetStandardWindowBorderStyle(gTasks[taskId].data[6], 0);
        PrintMenuGridTable(gTasks[taskId].data[6], newWidth * 8, columnCount, rowCount, actions);
        InitMenuActionGrid(gTasks[taskId].data[6], newWidth * 8, columnCount, rowCount, cursorPos);
        CopyWindowToVram(gTasks[taskId].data[6], COPYWIN_FULL);
        return TRUE;
    }
}
