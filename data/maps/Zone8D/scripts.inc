Zone8D_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone8D_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone8D_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE_8_STATE, 0, Zone8D_EventScript_WallyIntro
	.2byte 0


Zone8D_EventScript_WallyIntro::
	lockall
	applymovement 4, Common_Movement_FaceDown
	waitmovement 0
	applymovement 4, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	msgbox Zone8D_EventScript_WallyIntro_Text_0
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Zone8D_Movement_Camera_GoUp
	waitmovement 0
	special RemoveCameraObject
	msgbox Zone8D_EventScript_WallyIntro_Text_1
	setvar VAR_ZONE_8_STATE, 1
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Zone8D_Movement_Camera_GoDown
	waitmovement 0
	special RemoveCameraObject
	applymovement 4, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone8D_Text_Wally_YesNo, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone8D_EventScript_WallyIntro_2
Zone8D_EventScript_WallyIntro_1:
	msgbox Zone8D_Text_Wally_Preparations
	releaseall
	end

Zone8D_EventScript_WallyIntro_2:
	goto Zone8D_EventScript_InitiateLeviathan8
	goto Zone8D_EventScript_WallyIntro_1


Zone8D_EventScript_WallyYesNo::
	lock
	faceplayer
	msgbox Zone8D_Text_Wally_YesNo, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone8D_EventScript_WallyYesNo_2
Zone8D_EventScript_WallyYesNo_1:
	msgbox Zone8D_Text_Wally_Preparations
	release
	end

Zone8D_EventScript_WallyYesNo_2:
	goto Zone8D_EventScript_InitiateLeviathan8
	goto Zone8D_EventScript_WallyYesNo_1


Zone8D_EventScript_GoWithWally::
	lockall
	msgbox Zone8D_EventScript_GoWithWally_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end


Zone8D_EventScript_InitiateLeviathan8::
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_0
	delay 48
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_1
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 6
	goto_if_eq Zone8D_EventScript_InitiateLeviathan8_2
	compare VAR_TEMP_0, 7
	goto_if_eq Zone8D_EventScript_InitiateLeviathan8_3
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
Zone8D_EventScript_InitiateLeviathan8_1:
	applymovement 4, Zone8D_Movement_Wally_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Zone8D_Movement_Player_WalkUp
	waitmovement 0
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_2
	applymovement 2, Common_Movement_ExclamationMark
	applymovement 3, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	fadeoutbgm 1
	applymovement 2, Common_Movement_FaceDown
	applymovement 3, Common_Movement_FaceDown
	waitmovement 0
	delay 96
	applymovement 2, Common_Movement_FaceRight
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_3
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_4
	applymovement 3, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_5
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	setflag FLAG_FORCE_BATTLE_ANIM_ON
Zone8D_EventScript_InitiateLeviathan8_8:
	msgbox gText_PleasePick3Mons
	special SavePlayerParty
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	setvar VAR_MUGSHOT_ID, MUGSHOT_MIRAGE
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone8D_EventScript_InitiateLeviathan8_16
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_MIRAGE_LEVIATHAN_8, 0, NULL, Zone8D_EventScript_InitiateLeviathan8_Text_6
	compare VAR_RESULT, 0
	goto_if_ne Zone8D_EventScript_InitiateLeviathan8_23
	special LoadPlayerParty
	goto Zone8D_EventScript_InitiateLeviathan8_8

Zone8D_EventScript_InitiateLeviathan8_2:
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	goto Zone8D_EventScript_InitiateLeviathan8_1

Zone8D_EventScript_InitiateLeviathan8_3:
	compare VAR_TEMP_1, 10
	goto_if_eq Zone8D_EventScript_InitiateLeviathan8_10
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	goto Zone8D_EventScript_InitiateLeviathan8_1

Zone8D_EventScript_InitiateLeviathan8_7:
	special ReducePlayerPartyToSelectedMons
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
	setvar VAR_0x8005, MULTI_BATTLE_2_VS_1 | MULTI_BATTLE_CHOOSE_MONS
	setvar VAR_0x8006, TRAINER_WALLY_ZONE8D
	setvar VAR_0x8007, TRAINER_BACK_PIC_WALLY
	special DoSpecialTrainerBattle
	waitstate
	frontier_saveparty
	special LoadPlayerParty
	compare VAR_RESULT, 1
	goto_if_ne Zone8D_EventScript_InitiateLeviathan8_14
Zone8D_EventScript_InitiateLeviathan8_13:
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_7
	applymovement 2, Common_Movement_FaceRight
	waitmovement 0
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_8
	fadescreenswapbuffers FADE_TO_BLACK
	playmoncry SPECIES_PORYGON, 2
	delay 40
	waitmoncry
	removeobject 1
	removeobject 2
	removeobject 3
	setflag FLAG_BEAT_LEVIATHAN_8
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	fadescreenswapbuffers FADE_FROM_BLACK
	applymovement 4, Common_Movement_WalkUp
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_9
	waitmovement 0
	applymovement 4, Common_Movement_WalkDown
	waitmovement 0
	applymovement 4, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_10
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	delay 32
	applymovement 4, Common_Movement_FaceRight
	waitmovement 0
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_11
	delay 96
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_12
	giveitem ITEM_EVIOLITE, 1
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_13
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 4, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement 4, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_14
	applymovement 4, Common_Movement_WalkUp
	waitmovement 0
	setflag FLAG_HIDE_ZONE8D_WALLY
	removeobject 4
	setvar VAR_ZONE_8_STATE, 2
	releaseall
	end

Zone8D_EventScript_InitiateLeviathan8_10:
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	goto Zone8D_EventScript_InitiateLeviathan8_1

Zone8D_EventScript_InitiateLeviathan8_14:
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	goto Zone8D_EventScript_InitiateLeviathan8_13

Zone8D_EventScript_InitiateLeviathan8_16:
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_MIRAGE_LEVIATHAN_8_BRUTAL, 0, NULL, Zone8D_EventScript_InitiateLeviathan8_Text_6
	compare VAR_RESULT, 0
	goto_if_ne Zone8D_EventScript_InitiateLeviathan8_20
	special LoadPlayerParty
	goto Zone8D_EventScript_InitiateLeviathan8_8

Zone8D_EventScript_InitiateLeviathan8_20:
	goto Zone8D_EventScript_InitiateLeviathan8_7

Zone8D_EventScript_InitiateLeviathan8_23:
	goto Zone8D_EventScript_InitiateLeviathan8_7


Zone8D_EventScript_Exit::
	lockall
	compare VAR_ZONE, 8
	goto_if_gt Zone8D_EventScript_Exit_2
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone8D_EventScript_Exit_7
Zone8D_EventScript_Exit_5:
	clearflag FLAG_IN_ZONE_NOT_SANCTUARY
	setflag FLAG_HIDE_MAX_3
	setflag FLAG_ZONE7_HEAL_USED
	warp MAP_ZONE8SANCTUARY, 255, 22, 7
Zone8D_EventScript_Exit_1:
	releaseall
	end

Zone8D_EventScript_Exit_2:
	clearflag FLAG_IN_ZONE_NOT_SANCTUARY
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 43, 32
	waitstate
	goto Zone8D_EventScript_Exit_1

Zone8D_EventScript_Exit_6:
	goto EventScript_BrutalExitNotSatisfied
	goto Zone8D_EventScript_Exit_5

Zone8D_EventScript_Exit_7:
	checktrainerflag TRAINER_MILLIE
	goto_if 0, Zone8D_EventScript_Exit_6
	checktrainerflag TRAINER_JAMAL
	goto_if 0, Zone8D_EventScript_Exit_6
	checktrainerflag TRAINER_PAIGE
	goto_if 0, Zone8D_EventScript_Exit_6
	checktrainerflag TRAINER_SETH
	goto_if 0, Zone8D_EventScript_Exit_6
	checktrainerflag TRAINER_CONNIE
	goto_if 0, Zone8D_EventScript_Exit_6
	checktrainerflag TRAINER_CHAD
	goto_if 0, Zone8D_EventScript_Exit_6
	checktrainerflag TRAINER_JIMMY
	goto_if 0, Zone8D_EventScript_Exit_6
	checktrainerflag TRAINER_EMILIANO
	goto_if 0, Zone8D_EventScript_Exit_6
	checktrainerflag TRAINER_MARCUS
	goto_if 0, Zone8D_EventScript_Exit_6
	checktrainerflag TRAINER_KAREN
	goto_if 0, Zone8D_EventScript_Exit_6
	checktrainerflag TRAINER_JAYDEN
	goto_if 0, Zone8D_EventScript_Exit_6
	checktrainerflag TRAINER_NEIL
	goto_if 0, Zone8D_EventScript_Exit_6
	checktrainerflag TRAINER_TAMARA
	goto_if 0, Zone8D_EventScript_Exit_6
	goto_if_unset FLAG_BEAT_LEVIATHAN_7, Zone8D_EventScript_Exit_6
	goto Zone8D_EventScript_Exit_5


Zone8D_Movement_Camera_GoUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Zone8D_Movement_Camera_GoDown:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Zone8D_Movement_Wally_WalkUp:
	walk_up
	walk_up
	walk_up
	step_end

Zone8D_Movement_Player_WalkUp:
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	step_end

Zone8D_EventScript_WallyIntro_Text_0:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Um… E-excuse me…\p"
	.string "I'm Wally… and I…$"

Zone8D_EventScript_WallyIntro_Text_1:
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: I need to pass through, b-but\n"
	.string "they've been blocking the passage.\p"
	.string "I tried to beat them in b-battle, but I\n"
	.string "wasn't strong enough to beat even one\l"
	.string "of them.$"

Zone8D_EventScript_GoWithWally_Text_0:
	.string "You don't want to battle without Wally.\n"
	.string "His aid will be invaluable.$"

Zone8D_EventScript_InitiateLeviathan8_Text_0:
	.string "Thank you. What's your name?$"

Zone8D_EventScript_InitiateLeviathan8_Text_1:
	.string "{PLAYER}. I'll remember that.$"

Zone8D_EventScript_InitiateLeviathan8_Text_2:
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: E-excuse me! I would like to pass\n"
	.string "through!$"

Zone8D_EventScript_InitiateLeviathan8_Text_3:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: It is back again.\n"
	.string "With a friend this time.$"

Zone8D_EventScript_InitiateLeviathan8_Text_4:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: This should be... entertaining.\p"
	.string "Deal with them.$"

Zone8D_EventScript_InitiateLeviathan8_Text_5:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: At once.$"

Zone8D_EventScript_InitiateLeviathan8_Text_6:
	.string "…$"

Zone8D_EventScript_InitiateLeviathan8_Text_7:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: I was defeated…$"

Zone8D_EventScript_InitiateLeviathan8_Text_8:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: No matter. It's done.$"

Zone8D_EventScript_InitiateLeviathan8_Text_9:
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: Where did they go?$"

Zone8D_EventScript_InitiateLeviathan8_Text_10:
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: I d-don't understand.\p"
	.string "How could they have just vanished?$"

Zone8D_EventScript_InitiateLeviathan8_Text_11:
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: Did you see that Pokémon with\n"
	.string "them?\p"
	.string "I'm not sure what that was about,\n"
	.string "either.$"

Zone8D_EventScript_InitiateLeviathan8_Text_12:
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: Um… anyways, thanks for your\n"
	.string "help, {PLAYER}.\p"
	.string "I um… I want you to have this.$"

Zone8D_EventScript_InitiateLeviathan8_Text_13:
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: It's not… the flashiest item, but\n"
	.string "I'm sure it'll be useful.$"

Zone8D_EventScript_InitiateLeviathan8_Text_14:
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: I hope we meet again.\p"
	.string "Goodbye, {PLAYER}.$"

Zone8D_Text_Wally_YesNo::
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: Will you join forces with me to\n"
	.string "defeat them?$"

Zone8D_Text_Wally_Preparations::
	.string "You… must have preparations to do.\p"
	.string "I-I'll just be waiting here, for you. Let\n"
	.string "me know when you're ready.$"
