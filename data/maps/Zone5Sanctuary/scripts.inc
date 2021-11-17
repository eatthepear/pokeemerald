Zone5Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone5Sanctuary_OnFrame
	.byte 0

Zone5Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 5, Zone5Sanctuary_EventScript_Intro
	.2byte 0

Zone5Sanctuary_EventScript_Intro:
	lockall
	setvar VAR_HEAL_SHOP_USED, 0
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
	msgbox Zone5Sanctuary_Text_Reward, MSGBOX_AUTOCLOSE
	giveitem ITEM_SLEDGEHAMMER, 1
	closemessage
	setvar VAR_ZONE, 6
	msgbox gText_Colress_Unlocked, MSGBOX_AUTOCLOSE
	@ playfanfare MUS_OBTAIN_ITEM
	@ msgbox gText_Colress_UnlockedGeneral, MSGBOX_DEFAULT
	@ waitfanfare
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Colress_UnlockedUnique, MSGBOX_DEFAULT
	waitfanfare
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Colress_UnlockedServices, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	end

Zone5Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU_2, 0
	switch VAR_RESULT
	case 0, Zone5Sanctuary_EventScript_NextZoneCheck
	case 1, EventScript_WarpToZone0
	case 2, EventScript_Advice
	case 3, EventScript_Rules
	case 4, EventScript_WhenUReady
	case MULTI_B_PRESSED, EventScript_WhenUReady
	end

Zone5Sanctuary_EventScript_NextZoneCheck:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone5Sanctuary_EventScript_Leave
	goto EventScript_WhenUReady
	end

Zone5Sanctuary_EventScript_Leave:
	call EventScript_LeavingSetup
	setflag FLAG_IN_ZONE_NOT_SANCTUARY
	warp MAP_ZONE6A, 255, 21, 25
	end

Zone5Sanctuary_Text_Reward:
	.string "The Sledgehammer.$"