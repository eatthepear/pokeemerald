Zone1Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone1Sanctuary_OnFrame
	.byte 0

Zone1Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 1, Zone1Sanctuary_EventScript_Intro
	.2byte 0

Zone1Sanctuary_EventScript_Intro:
	lockall
	setvar VAR_HEAL_SHOP_USED, 0
	call EventScript_MoveCameraUp
	applymovement 1, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	call EventScript_MoveCameraDown
	applymovement 1, Common_Movement_Colress_WalkDown
	waitmovement 0
	playfanfare MUS_OBTAIN_BADGE
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_RewardClear, MSGBOX_AUTOCLOSE
	showmoneybox 0, 0, 0
	msgbox Zone1Sanctuary_Text_Reward, MSGBOX_AUTOCLOSE
	addmoney 1000, 0
	playfanfare MUS_OBTAIN_ITEM
	updatemoneybox 0, 0
	msgbox Zone1Sanctuary_Text_ReceivedMoney, MSGBOX_DEFAULT
	waitfanfare
	hidemoneybox
	setvar VAR_ZONE, 2
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	end

Zone1Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone1Sanctuary_EventScript_Leave
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	release
	end

Zone1Sanctuary_EventScript_Leave:
	call EventScript_LeavingSetup
	warp MAP_ZONE2A, 255, 4, 3
	end

Zone1Sanctuary_Text_Reward:
	.string "¥1000!$"

Zone1Sanctuary_Text_ReceivedMoney:
	.string "Received ¥1000!$"
