Zone6Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone6Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone6Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE, 6, Zone6Sanctuary_EventScript_Intro
	.2byte 0


Zone6Sanctuary_EventScript_Intro::
	lockall
	call EventScript_EnterSanctuary
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_RewardClear
	msgbox Zone6Sanctuary_Text_Reward
	giveitem ITEM_SLEDGEHAMMER
	setvar VAR_ZONE, 7
	msgbox Zone6Sanctuary_Text_Colress_Explain
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	return


Zone6Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone6Sanctuary_EventScript_NextZone_3
	case 1, Zone6Sanctuary_EventScript_NextZone_4
	case 2, Zone6Sanctuary_EventScript_NextZone_5
Zone6Sanctuary_EventScript_NextZone_1:
	goto EventScript_WhenUReady
	return

Zone6Sanctuary_EventScript_NextZone_3:
	msgbox Zone6Sanctuary_Text_Colress_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone6Sanctuary_EventScript_NextZone_6
	goto Zone6Sanctuary_EventScript_NextZone_1

Zone6Sanctuary_EventScript_NextZone_4:
	goto EventScript_Advice
	goto Zone6Sanctuary_EventScript_NextZone_1

Zone6Sanctuary_EventScript_NextZone_5:
	goto EventScript_Settings
	goto Zone6Sanctuary_EventScript_NextZone_1

Zone6Sanctuary_EventScript_NextZone_6:
	call EventScript_LeavingSetup
	warp MAP_ZONE7A, 255, 5, 34
	waitstate
	goto Zone6Sanctuary_EventScript_NextZone_1


Zone6Sanctuary_Text_Reward::
	.string "The Sledgehammer!$"

Zone6Sanctuary_Text_Colress_Explain::
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones, {COLOR RED}Zone 7{COLOR DARK_GRAY} and\n"
	.string "{COLOR RED}Zone 8{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.$"

Zone6Sanctuary_Text_Colress_WhenUReady::
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}, speak to me.$"

Zone6Sanctuary_Text_Colress_ReadyToLeave::
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\n"
	.string "You will be entering\l"
	.string "{COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}.$"
