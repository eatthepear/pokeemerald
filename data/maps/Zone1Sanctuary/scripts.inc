Zone1Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone1Sanctuary_OnFrame
	.byte 0

Zone1Sanctuary_OnFrame:
	map_script_2 VAR_TUTORIAL, 2, Zone1Sanctuary_EventScript_Intro
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
	msgbox Zone1Sanctuary_Text_Quentin_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	msgbox Zone1Sanctuary_Text_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Quentin_WalkUp
	waitmovement 0
	giveitem ITEM_TM27 @testing PP scripts
	setvar VAR_TUTORIAL, 3
	releaseall
	end

Zone1Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox Zone1Sanctuary_Text_Quentin_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone1Sanctuary_EventScript_Leave
	msgbox Zone1Sanctuary_Text_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
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
	warp MAP_ZONE2A, 255, 16, 28
	end

Zone1Sanctuary_Text_Quentin_ReachedZone:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: CONGRATULATIONS.\n"
	.string "YOU HAVE CLEARED {COLOR RED}ZONE ONE{COLOR DARK_GREY}.$"

Zone1Sanctuary_Text_Quentin_WhenUReady:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: WHEN YOU ARE PREPARED TO\n"
	.string "ENTER {COLOR RED}ZONE TWO{COLOR DARK_GREY},\l"
	.string "COME TALK TO ME.$"

Zone1Sanctuary_Text_Quentin_ReadyToLeave:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: ARE YOU READY TO LEAVE?\n"
	.string "YOU WILL BE ENTERING {COLOR RED}ZONE TWO{COLOR DARK_GREY}.$"
