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
	msgbox Zone8D_EventScript_WallyIntro_Text_0
	delay 40
	msgbox Zone8D_EventScript_WallyIntro_Text_1
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Zone8D_Movement_Camera_GoUp
	waitmovement 0
	special RemoveCameraObject
	msgbox Zone8D_EventScript_WallyIntro_Text_2
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
	applymovement 4, Common_Movement_WalkUp
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
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_3, MSGBOX_DEFAULT
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_4, MSGBOX_DEFAULT
	applymovement 3, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_5
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	setflag FLAG_FORCE_BATTLE_ANIM_ON
Zone8D_EventScript_InitiateLeviathan8_8:
	msgbox gText_PleasePick3Mons
	choose_mons
	compare VAR_RESULT, 0
	goto_if_ne Zone8D_EventScript_InitiateLeviathan8_19
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
	compare VAR_TEMP_1, 11
	goto_if_eq Zone8D_EventScript_InitiateLeviathan8_10
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	goto Zone8D_EventScript_InitiateLeviathan8_1

Zone8D_EventScript_InitiateLeviathan8_7:
	setvar VAR_MUGSHOT_ID, MUGSHOT_MIRAGE
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone8D_EventScript_InitiateLeviathan8_14
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone8D_EventScript_InitiateLeviathan8_14
	multi_2_vs_1 TRAINER_MIRAGE_LEVIATHAN_8, Zone8D_EventScript_InitiateLeviathan8_Text_6, TRAINER_WALLY_ZONE8D, TRAINER_BACK_PIC_WALLY
Zone8D_EventScript_InitiateLeviathan8_13:
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne Zone8D_EventScript_InitiateLeviathan8_22
Zone8D_EventScript_InitiateLeviathan8_21:
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_7, MSGBOX_DEFAULT
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
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_9
	delay 32
	applymovement 4, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_10, MSGBOX_DEFAULT
	giveitem ITEM_EVIOLITE, 1
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_11, MSGBOX_DEFAULT
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Zone8D_Movement_Camera_GoUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement 4, Zone8D_Movement_Wally_WalkUp
	waitmovement 0
	special RemoveCameraObject
	applymovement 4, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_12
	delay 40
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	fadescreenswapbuffers FADE_TO_BLACK
	playmoncry SPECIES_PORYGON, 0
	waitmoncry
	setflag FLAG_HIDE_ZONE8D_WALLY
	removeobject 4
	fadescreenswapbuffers FADE_FROM_BLACK
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Zone8D_Movement_Camera_GoDown
	waitmovement 0
	special RemoveCameraObject
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
	multi_2_vs_1 TRAINER_MIRAGE_LEVIATHAN_8_BRUTAL, Zone8D_EventScript_InitiateLeviathan8_Text_6, TRAINER_WALLY_ZONE8D, TRAINER_BACK_PIC_WALLY
	goto Zone8D_EventScript_InitiateLeviathan8_13

Zone8D_EventScript_InitiateLeviathan8_19:
	goto Zone8D_EventScript_InitiateLeviathan8_7

Zone8D_EventScript_InitiateLeviathan8_22:
	fadescreenswapbuffers FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	goto Zone8D_EventScript_InitiateLeviathan8_21


Zone8D_Movement_Camera_GoUp:
	walk_up
	walk_up
	walk_up
	step_end

Zone8D_Movement_Camera_GoDown:
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
	walk_right
	walk_up
	step_end

Zone8D_EventScript_WallyIntro_Text_0:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Um… E-excuse me…\p"
	.string "I'm {COLOR BLUE}Wally{COLOR DARK_GRAY}…{PAUSE_UNTIL_PRESS} N-nice to meet you…{PAUSE_UNTIL_PRESS} Um…$"

Zone8D_EventScript_WallyIntro_Text_1:
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: Are you taking on the {COLOR RED}Pokémon\n"
	.string "Battle Labyrinth{COLOR DARK_GRAY} too?\l"
	.string "These two Zones have b-been quite a\l"
	.string "challenge for me so far.\p"
	.string "I'm s-sure the exit is just a little\n"
	.string "ahead.$"

Zone8D_EventScript_WallyIntro_Text_2:
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: I need to pass through, b-but\n"
	.string "they've been blocking the way.\p"
	.string "They look really strong though…\n"
	.string "I'm worried I w-won't be able to defeat\l"
	.string "them alone.$"

Zone8D_EventScript_GoWithWally_Text_0:
	.string "You don't want to battle without {COLOR BLUE}Wally{COLOR DARK_GRAY}.\n"
	.string "His aid will be invaluable.$"

Zone8D_EventScript_InitiateLeviathan8_Text_0:
	.string "Thank you. What's your name?$"

Zone8D_EventScript_InitiateLeviathan8_Text_1:
	.string "{COLOR BLUE}{PLAYER}{COLOR DARK_GRAY}. I'll remember that.$"

Zone8D_EventScript_InitiateLeviathan8_Text_2:
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: E-excuse me! We would like to\n"
	.string "pass through!$"

Zone8D_EventScript_InitiateLeviathan8_Text_3:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: It is back again.\n"
	.string "With a friend this time.$"

Zone8D_EventScript_InitiateLeviathan8_Text_4:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: This should be… entertaining.\p"
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
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: Who were those p-people?\n"
	.string "And what was with that Pokémon they\l"
	.string "had with them?\p"
	.string "That was a Shiny {COLOR BLUE}Porygon{COLOR DARK_GRAY}, w-wasn't it?$"

Zone8D_EventScript_InitiateLeviathan8_Text_10:
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: Um… anyways, thanks for your\n"
	.string "help, {PLAYER}.\p"
	.string "I um… I want you to have this.$"

Zone8D_EventScript_InitiateLeviathan8_Text_11:
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: It's not… the flashiest item, but\n"
	.string "I'm sure it'll be useful.$"

Zone8D_EventScript_InitiateLeviathan8_Text_12:
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: I hope we meet again.\p"
	.string "Goodbye, {PLAYER}.$"

Zone8D_Text_Wally_YesNo::
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: Will you join forces with me to\n"
	.string "defeat them?$"

Zone8D_Text_Wally_Preparations::
	.string "You… must have preparations to do.\p"
	.string "I-I'll just be waiting here, for you. Let\n"
	.string "me know when you're ready.$"
