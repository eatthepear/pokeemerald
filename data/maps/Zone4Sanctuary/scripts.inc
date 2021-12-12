Zone4Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone4Sanctuary_OnFrame
	.byte 0

Zone4Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 4, Zone4Sanctuary_EventScript_Intro
	.2byte 0

Zone4Sanctuary_EventScript_Intro:
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
	goto Zone4Sanctuary_EventScript_StonesMultichoice
	end

Zone4Sanctuary_EventScript_EndIntro:
	setvar VAR_ZONE, 5
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	end

Zone4Sanctuary_EventScript_StonesMultichoice:
	msgbox Zone4Sanctuary_Text_Reward, MSGBOX_DEFAULT
	scrollingmultichoice 1, 0, 0, 4, FALSE
	switch VAR_RESULT
	case 0, Zone4Sanctuary_EventScript_FireStone
	case 1, Zone4Sanctuary_EventScript_WaterStone
	case 2, Zone4Sanctuary_EventScript_ThunderStone
	case 3, Zone4Sanctuary_EventScript_LeafStone
	case 4, Zone4Sanctuary_EventScript_MoonStone
	case 5, Zone4Sanctuary_EventScript_SunStone
	case 6, Zone4Sanctuary_EventScript_ShinyStone
	case 7, Zone4Sanctuary_EventScript_IceStone
	end

Zone4Sanctuary_EventScript_FireStone:
	giveitem ITEM_FIRE_STONE
	goto Zone4Sanctuary_EventScript_EndIntro
	end

Zone4Sanctuary_EventScript_WaterStone:
	giveitem ITEM_WATER_STONE
	goto Zone4Sanctuary_EventScript_EndIntro
	end

Zone4Sanctuary_EventScript_ThunderStone:
	giveitem ITEM_THUNDER_STONE
	goto Zone4Sanctuary_EventScript_EndIntro
	end

Zone4Sanctuary_EventScript_LeafStone:
	giveitem ITEM_LEAF_STONE
	goto Zone4Sanctuary_EventScript_EndIntro
	end

Zone4Sanctuary_EventScript_MoonStone:
	giveitem ITEM_MOON_STONE
	goto Zone4Sanctuary_EventScript_EndIntro
	end

Zone4Sanctuary_EventScript_SunStone:
	giveitem ITEM_SUN_STONE
	goto Zone4Sanctuary_EventScript_EndIntro
	end

Zone4Sanctuary_EventScript_ShinyStone:
	giveitem ITEM_SHINY_STONE
	goto Zone4Sanctuary_EventScript_EndIntro
	end

Zone4Sanctuary_EventScript_IceStone:
	giveitem ITEM_ICE_STONE
	goto Zone4Sanctuary_EventScript_EndIntro
	end

Zone4Sanctuary_Text_Reward:
	.string "An Evolutionary Stone!\n"
	.string "Choose whichever one you'd like!$"

Zone4Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone4Sanctuary_EventScript_NextZoneCheck
	case 1, EventScript_Advice
	case 2, EventScript_Settings
	case 3, EventScript_WhenUReady
	case MULTI_B_PRESSED, EventScript_WhenUReady
	end

Zone4Sanctuary_EventScript_NextZoneCheck:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone4Sanctuary_EventScript_Leave
	goto EventScript_WhenUReady
	end

Zone4Sanctuary_EventScript_Leave:
	call EventScript_LeavingSetup
	setflag FLAG_IN_ZONE_NOT_SANCTUARY
	warp MAP_ZONE5A, 255, 43, 31
	end
