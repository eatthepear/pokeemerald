Zone26Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone26Sanctuary_OnFrame
	.byte 0

Zone26Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 26, Zone26Sanctuary_EventScript_Intro
	.2byte 0

Zone26Sanctuary_EventScript_Intro:
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
	msgbox gText_RewardClear, MSGBOX_AUTOCLOSE
	msgbox Zone26Sanctuary_Text_Reward, MSGBOX_AUTOCLOSE
	giveitem ITEM_CLEANSE_TAG
	closemessage
	setvar VAR_ZONE, 27
	buffernumberstring 0, VAR_ZONE
	msgbox Zone26Sanctuary_Text_Colress_Explain, MSGBOX_AUTOCLOSE
	msgbox Zone26Sanctuary_Text_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	end

Zone26Sanctuary_Text_Colress_Explain:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones,\n"
	.string "{COLOR RED}Zone 27{COLOR DARK_GRAY} and {COLOR RED}Zone 28{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.$"

Zone26Sanctuary_Text_Colress_WhenUReady:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to\n"
	.string "enter {COLOR RED}Zone 27{COLOR DARK_GRAY} and {COLOR RED}Zone 28{COLOR DARK_GRAY}, speak to me.$"

Zone26Sanctuary_EventScript_WhenUReady:
	msgbox Zone26Sanctuary_Text_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	release
	end

Zone26Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone26Sanctuary_EventScript_NextZoneCheck
	case 1, EventScript_Documentation
	case 2, EventScript_Settings
	case 3, EventScript_WhenUReady
	case MULTI_B_PRESSED, EventScript_WhenUReady
	end

Zone26Sanctuary_EventScript_NextZoneCheck:
	buffernumberstring 0, VAR_ZONE
	msgbox Zone26Sanctuary_Text_Colress_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone26Sanctuary_EventScript_Leave
	goto EventScript_WhenUReady
	end

Zone26Sanctuary_EventScript_Leave:
	call EventScript_LeavingSetup
	setflag FLAG_IN_ZONE_NOT_SANCTUARY
	warp MAP_ZONE24A, 255, 31, 26
	release
	end

Zone26Sanctuary_Text_Reward:
	.string "The Cleanse Tag!$"

Zone26Sanctuary_Text_Colress_ReadyToLeave:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\n"
	.string "You will be entering\l"
	.string "{COLOR RED}Zone 27{COLOR DARK_GRAY} and {COLOR RED}Zone 28{COLOR DARK_GRAY}.$"
