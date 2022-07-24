Zone25Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone25Sanctuary_OnFrame
	.byte 0

Zone25Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 24, Zone25Sanctuary_EventScript_Intro
	.2byte 0

Zone25Sanctuary_EventScript_Intro:
	lockall
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
	msgbox Zone25Sanctuary_Text_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	msgbox Zone25Sanctuary_Text_RewardClear24, MSGBOX_AUTOCLOSE
	msgbox Zone25Sanctuary_Text_24Reward, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM38
	msgbox Zone25Sanctuary_Text_RewardClear25, MSGBOX_AUTOCLOSE
	msgbox Zone25Sanctuary_Text_25Reward, MSGBOX_AUTOCLOSE
	giveitem ITEM_MEGA_RING
	closemessage
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
	msgbox gText_Colress_UnlockedWarp, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE, 26
	setvar VAR_ZONE_B1_STATE, 1
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	end

Zone25Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone25Sanctuary_EventScript_NextZoneCheck
	case 1, EventScript_Documentation
	case 2, EventScript_Settings
	case 3, EventScript_WhenUReady
	case MULTI_B_PRESSED, EventScript_WhenUReady
	end

Zone25Sanctuary_EventScript_NextZoneCheck:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone25Sanctuary_EventScript_Leave
	goto EventScript_WhenUReady
	end

Zone25Sanctuary_EventScript_Leave:
	call EventScript_LeavingSetup
	warp MAP_ZONE26A, 255, 13, 29
	release
	end

Zone25Sanctuary_Text_Colress_ReachedZone:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR RED}Zone 24{COLOR DARK_GRAY} and {COLOR RED}Zone 25{COLOR DARK_GRAY}.$"

Zone25Sanctuary_Text_RewardClear24:
	.string "Your reward for clearing {COLOR RED}Zone 24{COLOR DARK_GRAY} is...$"

Zone25Sanctuary_Text_24Reward:
	.string "TM38 - Rock Slide!$"

Zone25Sanctuary_Text_RewardClear25:
	.string "Your reward for clearing {COLOR RED}Zone 25{COLOR DARK_GRAY} is...$"

Zone25Sanctuary_Text_25Reward:
	.string "The Mega Ring!$"
