Zone8Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone8Sanctuary_OnFrame
	.byte 0

Zone8Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 7, Zone8Sanctuary_EventScript_Intro
	.2byte 0

Zone8Sanctuary_EventScript_Intro:
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
	msgbox Zone8Sanctuary_Text_Quentin_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	msgbox Zone8Sanctuary_Text_RewardClear, MSGBOX_AUTOCLOSE
	msgbox Zone8Sanctuary_Text_ReceivedRockTomb, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM01
	closemessage
	setvar VAR_ZONE, 6
	msgbox gText_Quentin_Unlocked, MSGBOX_AUTOCLOSE
	@ playfanfare MUS_FANFA4
	@ msgbox gText_Quentin_UnlockedGeneral, MSGBOX_DEFAULT
	@ waitfanfare
	playfanfare MUS_FANFA4
	msgbox gText_Quentin_UnlockedUnique, MSGBOX_DEFAULT
	waitfanfare
	playfanfare MUS_FANFA4
	msgbox gText_Quentin_UnlockedServices, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Quentin_WalkUp
	waitmovement 0
	releaseall
	end

Zone8Sanctuary_Text_Quentin_ReachedZone:
	

Zone8Sanctuary_Text_RewardClear:

Zone8Sanctuary_Text_ReceivedRockTomb:

