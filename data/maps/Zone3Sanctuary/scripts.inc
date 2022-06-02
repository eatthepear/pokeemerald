Zone3Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone3Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone3Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE, 3, Zone3Sanctuary_EventScript_Intro
	.2byte 0


Zone3Sanctuary_EventScript_Intro::
	lockall
	call EventScript_EnterSanctuary
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_RewardClear
	msgbox Zone3Sanctuary_Text_Reward
	playfanfare MUS_OBTAIN_ITEM
	msgbox Zone3Sanctuary_Text_RewardReceived, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	additem ITEM_NORMAL_GEM
	additem ITEM_FIRE_GEM
	additem ITEM_WATER_GEM
	additem ITEM_ELECTRIC_GEM
	additem ITEM_GRASS_GEM
	additem ITEM_ICE_GEM
	additem ITEM_FIGHTING_GEM
	additem ITEM_POISON_GEM
	additem ITEM_GROUND_GEM
	additem ITEM_FLYING_GEM
	additem ITEM_PSYCHIC_GEM
	additem ITEM_BUG_GEM
	additem ITEM_ROCK_GEM
	additem ITEM_GHOST_GEM
	additem ITEM_DRAGON_GEM
	additem ITEM_DARK_GEM
	additem ITEM_STEEL_GEM
	additem ITEM_FAIRY_GEM
	msgbox gText_Colress_Unlocked
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Colress_UnlockedGeneral, MSGBOX_DEFAULT
	waitfanfare
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Colress_UnlockedUnique, MSGBOX_DEFAULT
	waitfanfare
	setvar VAR_ZONE, 4
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	return


Zone3Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone3Sanctuary_EventScript_NextZone_3
	case 1, Zone3Sanctuary_EventScript_NextZone_4
	case 2, Zone3Sanctuary_EventScript_NextZone_5
Zone3Sanctuary_EventScript_NextZone_1:
	goto EventScript_WhenUReady
	return

Zone3Sanctuary_EventScript_NextZone_3:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone3Sanctuary_EventScript_NextZone_6
	goto Zone3Sanctuary_EventScript_NextZone_1

Zone3Sanctuary_EventScript_NextZone_4:
	goto EventScript_Settings
	goto Zone3Sanctuary_EventScript_NextZone_1

Zone3Sanctuary_EventScript_NextZone_5:
	goto EventScript_Documentation
	goto Zone3Sanctuary_EventScript_NextZone_1

Zone3Sanctuary_EventScript_NextZone_6:
	call EventScript_LeavingSetup
	warp MAP_ZONE4A, 255, 4, 3
	waitstate
	goto Zone3Sanctuary_EventScript_NextZone_1


Zone3Sanctuary_Text_Reward::
	.string "Elemental Gems!$"

Zone3Sanctuary_Text_RewardReceived::
	.string "{PLAYER} received Gems!$"
