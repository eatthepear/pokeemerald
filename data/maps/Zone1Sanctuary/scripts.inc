Zone1Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone1Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone1Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE, 1, Zone1Sanctuary_EventScript_Intro
	.2byte 0


Zone1Sanctuary_EventScript_Intro::
	lockall
	clearflag FLAG_IN_ZONE_NOT_SANCTUARY
	call EventScript_MoveCameraUp
	applymovement 1, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	playse SE_PIN
	waitmovement 0
	waitse
	call EventScript_MoveCameraDown
	applymovement 1, Common_Movement_Colress_WalkDown
	waitmovement 0
	playfanfare MUS_OBTAIN_BADGE
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_RewardClear
	msgbox Zone1Sanctuary_Text_Reward
	giveitem ITEM_TM01
	setvar VAR_ZONE, 2
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	end


Zone1Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone1Sanctuary_EventScript_NextZone_3
	case 1, Zone1Sanctuary_EventScript_NextZone_4
	case 2, Zone1Sanctuary_EventScript_NextZone_5
	case 3, Zone1Sanctuary_EventScript_NextZone_6
	case MULTI_B_PRESSED, Zone1Sanctuary_EventScript_NextZone_7
Zone1Sanctuary_EventScript_NextZone_1:
	release
	end

Zone1Sanctuary_EventScript_NextZone_3:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone1Sanctuary_EventScript_NextZone_9
Zone1Sanctuary_EventScript_NextZone_8:
	goto EventScript_WhenUReady
	goto Zone1Sanctuary_EventScript_NextZone_1

Zone1Sanctuary_EventScript_NextZone_4:
	goto EventScript_Advice
	goto Zone1Sanctuary_EventScript_NextZone_1

Zone1Sanctuary_EventScript_NextZone_5:
	goto EventScript_Settings
	goto Zone1Sanctuary_EventScript_NextZone_1

Zone1Sanctuary_EventScript_NextZone_6:
	goto EventScript_WhenUReady
	goto Zone1Sanctuary_EventScript_NextZone_1

Zone1Sanctuary_EventScript_NextZone_7:
	goto EventScript_WhenUReady
	goto Zone1Sanctuary_EventScript_NextZone_1

Zone1Sanctuary_EventScript_NextZone_9:
	call EventScript_LeavingSetup
	setflag FLAG_IN_ZONE_NOT_SANCTUARY
	warp MAP_ZONE2A, 255, 4, 3
	goto Zone1Sanctuary_EventScript_NextZone_8


Zone1Sanctuary_Text_Reward::
	.string "TM01 - Protect!$"
