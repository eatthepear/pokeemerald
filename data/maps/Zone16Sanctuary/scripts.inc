Zone16Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone16Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone16Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE, 16, Zone16Sanctuary_EventScript_Intro
	.2byte 0


Zone16Sanctuary_EventScript_Intro::
	lockall
	call EventScript_EnterSanctuary
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_RewardClear, MSGBOX_DEFAULT
	msgbox Zone16Sanctuary_Text_Reward, MSGBOX_DEFAULT
	giveitem ITEM_ABSORB_BULB, 3
	giveitem ITEM_LUMINOUS_MOSS, 3
	setvar VAR_ZONE, 17
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	end


Zone16Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone16Sanctuary_EventScript_NextZone_3
	case 1, Zone16Sanctuary_EventScript_NextZone_4
	case 2, Zone16Sanctuary_EventScript_NextZone_5
Zone16Sanctuary_EventScript_NextZone_1:
	goto EventScript_WhenUReady
	return

Zone16Sanctuary_EventScript_NextZone_3:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone16Sanctuary_EventScript_NextZone_6
	goto Zone16Sanctuary_EventScript_NextZone_1

Zone16Sanctuary_EventScript_NextZone_4:
	goto EventScript_Settings
	goto Zone16Sanctuary_EventScript_NextZone_1

Zone16Sanctuary_EventScript_NextZone_5:
	goto EventScript_Documentation
	goto Zone16Sanctuary_EventScript_NextZone_1

Zone16Sanctuary_EventScript_NextZone_6:
	call EventScript_LeavingSetup
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	setflag FLAG_HIDE_ZONE17A_PORYGON
	setflag FLAG_BEAT_LEVIATHAN_15
	warp MAP_ZONE17A, 255, 13, 38
	waitstate
	goto Zone16Sanctuary_EventScript_NextZone_1


Zone16Sanctuary_Text_Reward::
	.string "3 Absorb Bulbs and 3 Luminous Mosses!$"
