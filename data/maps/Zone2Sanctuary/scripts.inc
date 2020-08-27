Zone2Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone2Sanctuary_OnFrame
	.byte 0

Zone2Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 2, Zone2Sanctuary_EventScript_Intro
	.2byte 0

Zone2Sanctuary_EventScript_Intro:
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
	addmoney 2000, 0
	playfanfare MUS_FANFA4
	updatemoneybox 0, 0
	buffernumberstring 0, VAR_ZONE
	msgbox gText_ReceivedMoney, MSGBOX_DEFAULT
	waitfanfare
	hidemoneybox
	setvar VAR_ZONE, 3
	setflag FLAG_HIDE_LEVIATHAN1
	removeobject 4, MAP_ZONE3A
	msgbox Zone2Sanctuary_Text_Quentin_ExplainLeviathans, MSGBOX_AUTOCLOSE
	delay 96
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Quentin_WalkUp
	waitmovement 0
	releaseall
	end

Zone2Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone2Sanctuary_EventScript_Leave
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	release
	end

Zone2Sanctuary_EventScript_Leave:
	call EventScript_LeavingSetup
	warp MAP_ZONE3A, 255, 38, 25
	end

Zone2Sanctuary_Text_Quentin_ExplainLeviathans:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: THE NEXT ZONE WILL CONTAIN\n"
	.string "A {COLOR RED}LEVIATHAN{COLOR DARK_GREY}.\p"
	.string "{COLOR RED}LEVIATHANS{COLOR DARK_GREY} ARE DIFFICULT BOSSES\n"
	.string "THAT APPEAR IN SOME ZONES.\p"
	.string "TYPICALLY YOU WILL NOT BE WARNED OF\n"
	.string "LABYRINTH BOSSES IN ADVANCE.\p"
	.string "DEFEATING A {COLOR RED}LEVIATHAN{COLOR DARK_GREY} GIFTS YOU\n"
	.string "GREAT REWARDS.$"
