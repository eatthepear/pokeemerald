Zone2Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone2Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone2Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE, 2, Zone2Sanctuary_EventScript_Intro
	.2byte 0


Zone2Sanctuary_EventScript_Intro::
	lockall
	call EventScript_EnterSanctuary
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_RewardClear
	msgbox Zone2Sanctuary_Text_Reward
	setflag FLAG_SYS_DEXNAV_GET
	playfanfare MUS_OBTAIN_ITEM
	msgbox Zone2Sanctuary_EventScript_Intro_Text_0, MSGBOX_DEFAULT
	waitfanfare
	setvar VAR_ZONE, 3
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	return


Zone2Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone2Sanctuary_EventScript_NextZone_3
	case 1, Zone2Sanctuary_EventScript_NextZone_4
	case 2, Zone2Sanctuary_EventScript_NextZone_5
Zone2Sanctuary_EventScript_NextZone_1:
	goto EventScript_WhenUReady
	return

Zone2Sanctuary_EventScript_NextZone_3:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone2Sanctuary_EventScript_NextZone_6
	goto Zone2Sanctuary_EventScript_NextZone_1

Zone2Sanctuary_EventScript_NextZone_4:
	goto EventScript_Settings
	goto Zone2Sanctuary_EventScript_NextZone_1

Zone2Sanctuary_EventScript_NextZone_5:
	goto EventScript_Documentation
	goto Zone2Sanctuary_EventScript_NextZone_1

Zone2Sanctuary_EventScript_NextZone_6:
	call EventScript_LeavingSetup
	setflag FLAG_HIDE_ZONE3A_PHILLIPA
	setflag FLAG_HIDE_ZONE3A_REMI
	warp MAP_ZONE3A, 255, 38, 25
	waitstate
	goto Zone2Sanctuary_EventScript_NextZone_1


Zone2Sanctuary_EventScript_Intro_Text_0:
	.string "{PLAYER} received the {COLOR RED}DexNav{COLOR DARK_GRAY}!$"

Zone2Sanctuary_Text_Reward::
	.string "The {COLOR RED}DexNav{COLOR DARK_GRAY}!$"
