Zone8A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE8A_MAGNET, Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE8A_SPELL_TAG, Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	goto_if_set FLAG_ITEM_ZONE8A_BLACK_GLASSES, Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_9
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone8A_EventScript_ItemMagnet::
	lock
	goto_if_set FLAG_ITEM_ZONE8A_MAGNET, Zone8A_EventScript_ItemMagnet_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE8A_MAGNET
	addobject VAR_LAST_TALKED
	finditem ITEM_MAGNET, 1
	release
	end

Zone8A_EventScript_ItemMagnet_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone8A_EventScript_ItemSpellTag::
	lock
	goto_if_set FLAG_ITEM_ZONE8A_SPELL_TAG, Zone8A_EventScript_ItemSpellTag_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE8A_SPELL_TAG
	addobject VAR_LAST_TALKED
	finditem ITEM_SPELL_TAG, 1
	release
	end

Zone8A_EventScript_ItemSpellTag_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone8A_EventScript_ItemBlackGlasses::
	lock
	goto_if_set FLAG_ITEM_ZONE8A_BLACK_GLASSES, Zone8A_EventScript_ItemBlackGlasses_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE8A_BLACK_GLASSES
	addobject VAR_LAST_TALKED
	finditem ITEM_BLACK_GLASSES, 1
	release
	end

Zone8A_EventScript_ItemBlackGlasses_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone8A_EventScript_Jimmy::
	trainerbattle_single TRAINER_JIMMY, Zone8A_Text_JimmyIntro, Zone8A_Text_JimmyDefeat
	msgbox Zone8A_Text_JimmyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone8A_Text_JimmyIntro:
	.string "Rare Pokémon… Do you have them?$"

Zone8A_Text_JimmyDefeat:
	.string "You do! You do have rare Pokémon!$"

Zone8A_Text_JimmyPostBattle:
	.string "I want to collect all the rare\n"
	.string "Pokémon in the world!$"

Zone8A_EventScript_Emiliano::
	trainerbattle_single TRAINER_EMILIANO, Zone8A_Text_EmilianoIntro, Zone8A_Text_EmilianoDefeat
	msgbox Zone8A_Text_EmilianoPostBattle, MSGBOX_AUTOCLOSE
	end

Zone8A_Text_EmilianoIntro:
	.string "I'm so hungry…$"

Zone8A_Text_EmilianoDefeat:
	.string "It's because I keep thinking about\n"
	.string "pancakes!$"

Zone8A_Text_EmilianoPostBattle:
	.string "Mmm… Pancakes…$"
