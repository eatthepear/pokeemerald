Zone6Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone6Sanctuary_OnFrame
	.byte 0

Zone6Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 6, Zone6Sanctuary_EventScript_Intro
	.2byte 0

Zone6Sanctuary_EventScript_Intro:
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
	addmoney 6000, 0
	playfanfare MUS_FANFA4
	updatemoneybox 0, 0
	buffernumberstring 0, VAR_ZONE
	msgbox gText_ReceivedMoney, MSGBOX_DEFAULT
	waitfanfare
	hidemoneybox
	setvar VAR_ZONE, 7
	msgbox Zone6Sanctuary_Text_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Quentin_WalkUp
	waitmovement 0
	releaseall
	end

Zone6Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	buffernumberstring 0, VAR_ZONE
	msgbox Zone6Sanctuary_Text_Quentin_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone6Sanctuary_EventScript_Leave
	buffernumberstring 0, VAR_ZONE
	msgbox Zone6Sanctuary_Text_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	release
	end

Zone6Sanctuary_EventScript_Leave:
	call EventScript_LeavingSetup
	warp MAP_ZONE7A, 255, 5, 34
	end

Zone6Sanctuary_Text_Quentin_WhenUReady:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: THE NEXT TWO ZONES,\n"
	.string "{COLOR RED}ZONE 7{COLOR DARK_GREY} AND {COLOR RED}ZONE 8{COLOR DARK_GREY}, ARE COMBINED.\p"
	.string "YOU WILL NOT BE ABLE TO ACCESS A\n"
	.string "SANCTUARY IN BETWEEN THE ZONES.\p"
	.string "HOWEVER, THERE WILL BE A SINGLE USE\n"
	.string "HEALING STOP AVAILABLE.\p"
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: WHEN YOU ARE PREPARED TO\n"
	.string "ENTER {COLOR RED}ZONE 7{COLOR DARK_GREY} AND  {COLOR RED}ZONE 8{COLOR DARK_GREY},\l"
	.string "COME TALK TO ME.$"

Zone6Sanctuary_Text_Quentin_ReadyToLeave:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU READY TO LEAVE?\n"
	.string "YOU WILL BE ENTERING\l"
	.string "{COLOR RED}ZONE 7{COLOR DARK_GREY} and {COLOR RED}ZONE 8{COLOR DARK_GREY}.$"
