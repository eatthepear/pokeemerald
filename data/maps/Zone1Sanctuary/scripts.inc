Zone1Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone1Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone1Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE, 1, Zone1Sanctuary_EventScript_Intro
	.2byte 0


Zone1Sanctuary_EventScript_Intro::
	lockall
	call EventScript_EnterSanctuary
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_RewardClear
	msgbox Zone1Sanctuary_Text_Reward
	giveitem ITEM_EXP_SHARE
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
Zone1Sanctuary_EventScript_NextZone_1:
	goto EventScript_WhenUReady
	return

Zone1Sanctuary_EventScript_NextZone_3:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone1Sanctuary_EventScript_NextZone_6
	goto Zone1Sanctuary_EventScript_NextZone_1

Zone1Sanctuary_EventScript_NextZone_4:
	goto EventScript_Settings
	goto Zone1Sanctuary_EventScript_NextZone_1

Zone1Sanctuary_EventScript_NextZone_5:
	goto EventScript_Documentation
	goto Zone1Sanctuary_EventScript_NextZone_1

Zone1Sanctuary_EventScript_NextZone_6:
	call EventScript_LeavingSetup
	warp MAP_ZONE2A, 255, 4, 3
	waitstate
	goto Zone1Sanctuary_EventScript_NextZone_1


Zone1Sanctuary_Text_Reward::
	.string "The Experience Share!$"
