Zone3Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone3Sanctuary_OnFrame
	.byte 0

Zone3Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 3, Zone3Sanctuary_EventScript_Intro
	.2byte 0

Zone3Sanctuary_EventScript_Intro:
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
	addmoney 3000, 0
	playfanfare MUS_FANFA4
	updatemoneybox 0, 0
	buffernumberstring 0, VAR_ZONE
	msgbox gText_ReceivedMoney, MSGBOX_DEFAULT
	waitfanfare
	hidemoneybox
	setvar VAR_ZONE, 4
	msgbox gText_Quentin_Unlocked, MSGBOX_AUTOCLOSE
	playfanfare MUS_FANFA4
	msgbox gText_Quentin_UnlockedGeneral, MSGBOX_DEFAULT
	waitfanfare
	playfanfare MUS_FANFA4
	msgbox gText_Quentin_UnlockedUnique, MSGBOX_DEFAULT
	waitfanfare
	@ playfanfare MUS_FANFA4
	@ msgbox gText_Quentin_UnlockedServices, MSGBOX_DEFAULT
	@ waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Quentin_WalkUp
	waitmovement 0
	releaseall
	end
	
Zone3Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone3Sanctuary_EventScript_Leave
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	release
	end

Zone3Sanctuary_EventScript_Leave:
	call EventScript_LeavingSetup
	warp MAP_ZONE4A, 255, 7, 6
	end
