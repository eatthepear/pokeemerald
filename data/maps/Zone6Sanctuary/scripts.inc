Zone6Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone6Sanctuary_OnFrame
	.byte 0

Zone6Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 6, Zone6Sanctuary_EventScript_Intro
	.2byte 0

Zone6Sanctuary_EventScript_Intro:
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
	msgbox Zone6Sanctuary_Text_Reward, MSGBOX_AUTOCLOSE
	giveitem ITEM_SLEDGEHAMMER
	closemessage
	setvar VAR_ZONE, 7
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone6Sanctuary_EventScript_ExplainBrutal
	msgbox Zone6Sanctuary_Text_Colress_Explain, MSGBOX_AUTOCLOSE
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	end

Zone6Sanctuary_EventScript_ExplainBrutal:
	msgbox Zone6Sanctuary_Text_Colress_ExplainBrutal, MSGBOX_AUTOCLOSE
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	end

Zone6Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone6Sanctuary_EventScript_NextZoneCheck
	case 1, EventScript_Advice
	case 2, EventScript_Settings
	case 3, EventScript_WhenUReady
	case MULTI_B_PRESSED, EventScript_WhenUReady
	end

Zone6Sanctuary_EventScript_NextZoneCheck:
	buffernumberstring 0, VAR_ZONE
	msgbox Zone6Sanctuary_Text_Colress_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone6Sanctuary_EventScript_Leave
	goto Zone6Sanctuary_EventScript_WhenUReady
	end

Zone6Sanctuary_EventScript_WhenUReady:
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	release
	end

Zone6Sanctuary_EventScript_Leave:
	call EventScript_LeavingSetup
	setflag FLAG_IN_ZONE_NOT_SANCTUARY
	warp MAP_ZONE7A, 255, 5, 34
	end

Zone6Sanctuary_Text_Colress_Explain:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones,\n"
	.string "{COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.\p"
	.string "However, there will be a single use\n"
	.string "healing stop available.$"

Zone6Sanctuary_Text_Colress_ExplainBrutal:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones,\n"
	.string "{COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.$"

Zone6Sanctuary_Text_Colress_WhenUReady:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to\n"
	.string "enter {COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}, speak to me.$"

Zone6Sanctuary_Text_Colress_ReadyToLeave:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\n"
	.string "You will be entering\l"
	.string "{COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}.$"

Zone6Sanctuary_Text_Reward:
	.string "The Sledgehammer!$"
