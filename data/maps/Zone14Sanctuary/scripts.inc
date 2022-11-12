Zone14Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone14Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone14Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE, 13, Zone14Sanctuary_EventScript_Intro
	.2byte 0


Zone14Sanctuary_EventScript_Intro::
	lockall
	call EventScript_EnterSanctuary
	msgbox Zone14Sanctuary_Text_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	msgbox Zone14Sanctuary_Text_RewardClear13, MSGBOX_DEFAULT
	msgbox Zone14Sanctuary_Text_13Reward, MSGBOX_DEFAULT
	giveitem ITEM_ACRO_BIKE
	msgbox Zone14Sanctuary_Text_RewardClear14, MSGBOX_DEFAULT
	msgbox Zone14Sanctuary_Text_14Reward, MSGBOX_DEFAULT
	giveitem ITEM_TM25
	closemessage
	setvar VAR_ZONE, 15
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	return


Zone14Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	removeitem ITEM_MACH_BIKE
	additem ITEM_ACRO_BIKE
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone14Sanctuary_EventScript_NextZone_3
	case 1, Zone14Sanctuary_EventScript_NextZone_4
	case 2, Zone14Sanctuary_EventScript_NextZone_5
Zone14Sanctuary_EventScript_NextZone_1:
	goto EventScript_WhenUReady
	return

Zone14Sanctuary_EventScript_NextZone_3:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone14Sanctuary_EventScript_NextZone_6
	goto Zone14Sanctuary_EventScript_NextZone_1

Zone14Sanctuary_EventScript_NextZone_4:
	goto EventScript_Settings
	goto Zone14Sanctuary_EventScript_NextZone_1

Zone14Sanctuary_EventScript_NextZone_5:
	goto EventScript_Documentation
	goto Zone14Sanctuary_EventScript_NextZone_1

Zone14Sanctuary_EventScript_NextZone_6:
	call EventScript_LeavingSetup
	warp MAP_ZONE15A, 255, 4, 4
	waitstate
	goto Zone14Sanctuary_EventScript_NextZone_1


Zone14Sanctuary_Text_Colress_ReachedZone::
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR RED}Zone 13{COLOR DARK_GRAY} and {COLOR RED}Zone 14{COLOR DARK_GRAY}.$"

Zone14Sanctuary_Text_RewardClear13::
	.string "Your reward for clearing {COLOR RED}Zone 13{COLOR DARK_GRAY} is…$"

Zone14Sanctuary_Text_13Reward::
	.string "The Bicycle!$"

Zone14Sanctuary_Text_RewardClear14::
	.string "Your reward for clearing {COLOR RED}Zone 14{COLOR DARK_GRAY} is…$"

Zone14Sanctuary_Text_14Reward::
	.string "TM25 - Bulldoze!$"
