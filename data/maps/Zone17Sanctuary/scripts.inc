Zone17Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone17Sanctuary_OnFrame
	.byte 0

Zone17Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 17, Zone17Sanctuary_EventScript_Intro
	.2byte 0

Zone17Sanctuary_EventScript_Intro:
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
	msgbox Zone17Sanctuary_Text_Reward, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM22
	closemessage
	setvar VAR_ZONE, 18
	buffernumberstring 0, VAR_ZONE
	msgbox Zone17Sanctuary_Text_Colress_Explain, MSGBOX_AUTOCLOSE
	msgbox Zone17Sanctuary_Text_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	end

Zone17Sanctuary_Text_Colress_Explain:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones,\n"
	.string "{COLOR RED}Zone 18{COLOR DARK_GRAY} and {COLOR RED}Zone 19{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.$"

Zone17Sanctuary_Text_Colress_WhenUReady:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to\n"
	.string "enter {COLOR RED}Zone 18{COLOR DARK_GRAY} and {COLOR RED}Zone 19{COLOR DARK_GRAY}, speak to me.$"

Zone17Sanctuary_EventScript_WhenUReady:
	msgbox Zone17Sanctuary_Text_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	release
	end

Zone17Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone17Sanctuary_EventScript_NextZoneCheck
	case 1, EventScript_Advice
	case 2, EventScript_Settings
	case 3, EventScript_WhenUReady
	case MULTI_B_PRESSED, EventScript_WhenUReady
	end

Zone17Sanctuary_EventScript_NextZoneCheck:
	buffernumberstring 0, VAR_ZONE
	msgbox Zone17Sanctuary_Text_Colress_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone17Sanctuary_EventScript_Leave
	goto EventScript_WhenUReady
	end

Zone17Sanctuary_Text_Colress_ReadyToLeave:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\n"
	.string "You will be entering\l"
	.string "{COLOR RED}Zone 18{COLOR DARK_GRAY} and {COLOR RED}Zone 19{COLOR DARK_GRAY}.$"

Zone17Sanctuary_EventScript_Leave:
	call EventScript_LeavingSetup
	setflag FLAG_HIDE_ZONE18B_MAN
	setflag FLAG_IN_ZONE_NOT_SANCTUARY
	warp MAP_ZONE18A, 255, 28, 19
	release
	end

Zone17Sanctuary_Text_Reward:
	.string "TM22 - Shadow Claw!$"
