Zone10Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone10Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone10Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE, 10, Zone10Sanctuary_EventScript_Intro
	.2byte 0


Zone10Sanctuary_EventScript_Intro::
	lockall
	call EventScript_EnterSanctuary
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_RewardClear, MSGBOX_DEFAULT
	msgbox Zone10Sanctuary_Text_Reward, MSGBOX_DEFAULT
	giveitem ITEM_MACHETE
	goto_if_set FLAG_SETTINGS_INFINITE, Zone10Sanctuary_EventScript_Intro_2
Zone10Sanctuary_EventScript_Intro_1:
	msgbox gText_Colress_Unlocked, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Colress_UnlockedServices, MSGBOX_DEFAULT
	waitfanfare
	setvar VAR_ZONE, 11
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	end

Zone10Sanctuary_EventScript_Intro_2:
	msgbox Zone10Sanctuary_EventScript_Intro_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_YELLOW_SHARD, 900
	goto Zone10Sanctuary_EventScript_Intro_1


Zone10Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone10Sanctuary_EventScript_NextZone_3
	case 1, Zone10Sanctuary_EventScript_NextZone_4
	case 2, Zone10Sanctuary_EventScript_NextZone_5
Zone10Sanctuary_EventScript_NextZone_1:
	goto EventScript_WhenUReady
	return

Zone10Sanctuary_EventScript_NextZone_3:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone10Sanctuary_EventScript_NextZone_6
	goto Zone10Sanctuary_EventScript_NextZone_1

Zone10Sanctuary_EventScript_NextZone_4:
	goto EventScript_Settings
	goto Zone10Sanctuary_EventScript_NextZone_1

Zone10Sanctuary_EventScript_NextZone_5:
	goto EventScript_Documentation
	goto Zone10Sanctuary_EventScript_NextZone_1

Zone10Sanctuary_EventScript_NextZone_6:
	call EventScript_LeavingSetup
	warp MAP_ZONE11A, 255, 46, 2
	waitstate
	goto Zone10Sanctuary_EventScript_NextZone_1


Zone10Sanctuary_EventScript_Intro_Text_0:
	.string "You also get Yellow Shards!$"

Zone10Sanctuary_Text_Reward::
	.string "The Machete!$"
