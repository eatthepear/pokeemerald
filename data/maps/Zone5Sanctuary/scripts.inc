Zone5Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone5Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone5Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE, 5, Zone5Sanctuary_EventScript_Intro
	.2byte 0


Zone5Sanctuary_EventScript_Intro::
	lockall
	call EventScript_EnterSanctuary
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_RewardClear
	msgbox Zone5Sanctuary_Text_Reward
	giveitem ITEM_RED_SHARD, 5
	msgbox gText_Colress_Unlocked
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Colress_UnlockedUnique, MSGBOX_DEFAULT
	waitfanfare
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Colress_UnlockedServices, MSGBOX_DEFAULT
	waitfanfare
	setvar VAR_ZONE, 6
	compare VAR_ZONE_0_STATE, 0
	goto_if_eq Zone5Sanctuary_EventScript_Intro_2
Zone5Sanctuary_EventScript_Intro_1:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	return

Zone5Sanctuary_EventScript_Intro_2:
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox Zone5Sanctuary_EventScript_Intro_Text_0
	setflag FLAG_IN_ZONE_NOT_SANCTUARY
	warpteleport MAP_ZONE0A, 255, 17, 10
	waitstate
	goto Zone5Sanctuary_EventScript_Intro_1


Zone5Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone5Sanctuary_EventScript_NextZone_3
	case 1, Zone5Sanctuary_EventScript_NextZone_4
	case 2, Zone5Sanctuary_EventScript_NextZone_5
Zone5Sanctuary_EventScript_NextZone_1:
	goto EventScript_WhenUReady
	return

Zone5Sanctuary_EventScript_NextZone_3:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone5Sanctuary_EventScript_NextZone_6
	goto Zone5Sanctuary_EventScript_NextZone_1

Zone5Sanctuary_EventScript_NextZone_4:
	goto EventScript_Settings
	goto Zone5Sanctuary_EventScript_NextZone_1

Zone5Sanctuary_EventScript_NextZone_5:
	goto EventScript_Documentation
	goto Zone5Sanctuary_EventScript_NextZone_1

Zone5Sanctuary_EventScript_NextZone_6:
	call EventScript_LeavingSetup
	warp MAP_ZONE6A, 255, 19, 22
	waitstate
	goto Zone5Sanctuary_EventScript_NextZone_1


Zone5Sanctuary_EventScript_Intro_Text_0:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: It seems you haven't entered\n"
	.string "Zone 0 yet.\p"
	.string "Zone 0 holds many useful areas that are\n"
	.string "helpful to challengers.\p"
	.string "You can typically access it using the\n"
	.string "warp pad in a Sanctuary, but just this\l"
	.string "once I will warp you there myself.$"

Zone5Sanctuary_Text_Reward::
	.string "5 Red Shards!$"
