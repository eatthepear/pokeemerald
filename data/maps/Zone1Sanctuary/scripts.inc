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
	applymovement 1, Common_Movement_Quentin_WalkDown
	waitmovement 0
	playfanfare MUS_ME_BACHI
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	showmoneybox 0, 0, 0
	buffernumberstring 0, VAR_ZONE
	msgbox gText_RewardClear, MSGBOX_AUTOCLOSE
	addmoney 1000, 0
	playfanfare MUS_FANFA4
	updatemoneybox 0, 0
	buffernumberstring 0, VAR_ZONE
	msgbox gText_ReceivedMoney, MSGBOX_DEFAULT
	waitfanfare
	hidemoneybox
	setvar VAR_ZONE, 2
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Quentin_WalkUp
	waitmovement 0
	releaseall
	end

Zone1Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone1Sanctuary_EventScript_Leave
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	release
	end

Zone1Sanctuary_EventScript_Leave:
	msgbox gText_Quentin_Onwards, MSGBOX_AUTOCLOSE
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 6
	call_if_eq EventScript_LeaveLeft
	compare VAR_TEMP_0, 7
	call_if_eq EventScript_LeaveMiddle
	compare VAR_TEMP_0, 8
	call_if_eq EventScript_LeaveRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	warp MAP_ZONE2A, 255, 4, 3
	end
