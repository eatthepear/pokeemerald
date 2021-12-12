Zone8Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone8Sanctuary_OnFrame
	.byte 0

Zone8Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 7, Zone8Sanctuary_EventScript_Intro
	.2byte 0

Zone8Sanctuary_EventScript_Intro:
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
	msgbox Zone8Sanctuary_Text_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	msgbox Zone8Sanctuary_Text_RewardClear7, MSGBOX_AUTOCLOSE
	msgbox Zone8Sanctuary_Text_7Reward, MSGBOX_AUTOCLOSE
	giveitem ITEM_BLUE_SHARD, 3
	msgbox Zone8Sanctuary_Text_RewardClear8, MSGBOX_AUTOCLOSE
	msgbox Zone8Sanctuary_Text_8Reward, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM03
	closemessage
	setvar VAR_ZONE, 9
	msgbox gText_Colress_Unlocked, MSGBOX_AUTOCLOSE
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Colress_UnlockedGeneral, MSGBOX_DEFAULT
	waitfanfare
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

Zone8Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone8Sanctuary_EventScript_NextZoneCheck
	case 1, EventScript_Advice
	case 2, EventScript_Settings
	case 3, EventScript_WhenUReady
	case MULTI_B_PRESSED, EventScript_WhenUReady
	end

Zone8Sanctuary_EventScript_NextZoneCheck:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone8Sanctuary_EventScript_Leave
	goto EventScript_WhenUReady
	end

Zone8Sanctuary_EventScript_Leave:
	call EventScript_LeavingSetup
	setflag FLAG_IN_ZONE_NOT_SANCTUARY
	warp MAP_ZONE9A, 255, 23, 13
	end

Zone8Sanctuary_Text_Colress_ReachedZone:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}.$"

Zone8Sanctuary_Text_RewardClear7:
	.string "Your reward for clearing {COLOR RED}Zone 7{COLOR DARK_GRAY} is...$"

Zone8Sanctuary_Text_7Reward:
	.string "3 Blue Shards!$"

Zone8Sanctuary_Text_RewardClear8:
	.string "Your reward for clearing {COLOR RED}Zone 8{COLOR DARK_GRAY} is...$"

Zone8Sanctuary_Text_8Reward:
	.string "TM03 - Rock Tomb.$"
