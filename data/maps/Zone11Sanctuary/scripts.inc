Zone11Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone11Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone11Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE, 11, Zone11Sanctuary_EventScript_Intro
	.2byte 0


Zone11Sanctuary_EventScript_Intro::
	lockall
	call EventScript_EnterSanctuary
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_RewardClear, MSGBOX_DEFAULT
	msgbox Zone11Sanctuary_Text_Reward, MSGBOX_DEFAULT
	giveitem ITEM_TM23
	setvar VAR_ZONE, 12
	msgbox Zone11Sanctuary_Text_NoBagAccessInNextZone, MSGBOX_DEFAULT
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	end


Zone11Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone11Sanctuary_EventScript_NextZone_3
	case 1, Zone11Sanctuary_EventScript_NextZone_4
	case 2, Zone11Sanctuary_EventScript_NextZone_5
Zone11Sanctuary_EventScript_NextZone_1:
	goto EventScript_WhenUReady
	return

Zone11Sanctuary_EventScript_NextZone_3:
	msgbox Zone11Sanctuary_Text_NoBagAccessInNextZone, MSGBOX_DEFAULT
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone11Sanctuary_EventScript_NextZone_6
	goto Zone11Sanctuary_EventScript_NextZone_1

Zone11Sanctuary_EventScript_NextZone_4:
	goto EventScript_Settings
	goto Zone11Sanctuary_EventScript_NextZone_1

Zone11Sanctuary_EventScript_NextZone_5:
	goto EventScript_Documentation
	goto Zone11Sanctuary_EventScript_NextZone_1

Zone11Sanctuary_EventScript_NextZone_6:
	call EventScript_LeavingSetup
	setflag FLAG_SYS_NO_BAG_START_MENU
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone11Sanctuary_EventScript_NextZone_9
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone11Sanctuary_EventScript_NextZone_9
Zone11Sanctuary_EventScript_NextZone_8:
	warp MAP_ZONE12A, 255, 9, 17
	waitstate
	goto Zone11Sanctuary_EventScript_NextZone_1

Zone11Sanctuary_EventScript_NextZone_9:
	setflag FLAG_HIDE_ZONE12A_NURSE
	goto Zone11Sanctuary_EventScript_NextZone_8


Zone11Sanctuary_Text_NoBagAccessInNextZone::
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next zone, {COLOR RED}Zone 12{COLOR DARK_GRAY},\n"
	.string "restricts the use of your Bag.\p"
	.string "You will not be able to use items from\n"
	.string "your Bag outside of battle.$"

Zone11Sanctuary_Text_Reward::
	.string "TM23 - Pluck!$"
