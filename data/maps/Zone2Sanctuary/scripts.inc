Zone2Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone2Sanctuary_OnFrame
	.byte 0

Zone2Sanctuary_OnFrame:
	map_script_2 VAR_TUTORIAL, 3, Zone2Sanctuary_EventScript_Intro
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
	msgbox Zone2Sanctuary_Text_Quentin_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	msgbox Zone2Sanctuary_Text_Quentin_ExplainBossTrainers, MSGBOX_AUTOCLOSE
	delay 96
	msgbox Zone2Sanctuary_Text_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Quentin_WalkUp
	waitmovement 0
	setvar VAR_TUTORIAL, 4
	releaseall
	end

Zone2Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox Zone2Sanctuary_Text_Quentin_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone2Sanctuary_EventScript_Leave
	msgbox Zone2Sanctuary_Text_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	release
	end

Zone2Sanctuary_EventScript_Leave:
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

Zone2Sanctuary_Text_Quentin_ExplainBossTrainers:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: THE NEXT ZONE WILL CONTAIN\n"
	.string "A LABYRINTH BOSS.\p"
	.string "LABYRINTH BOSSES ARE ESPECIALLY\n"
	.string "DIFFICULT OPPONENTS THAT GIVE\l"
	.string "SIGNIFICANT REWARDS.\p"
	.string "SOME LABYRINTH BOSSES ARE OPTIONAL\n"
	.string "WHILE OTHERS ARE NOT.\p"
	.string "TYPICALLY YOU WILL NOT BE WARNED OF\n"
	.string "LABYRINTH BOSSES IN ADVANCE.$"

Zone2Sanctuary_Text_Quentin_ReachedZone:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: CONGRATULATIONS.\n"
	.string "YOU HAVE CLEARED {COLOR RED}ZONE TWO{COLOR DARK_GREY}.$"

Zone2Sanctuary_Text_Quentin_WhenUReady:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: WHEN YOU ARE PREPARED TO\n"
	.string "ENTER {COLOR RED}ZONE THREE{COLOR DARK_GREY},\l"
	.string "COME TALK TO ME.$"

Zone2Sanctuary_Text_Quentin_ReadyToLeave:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU READY TO LEAVE?\n"
	.string "YOU WILL BE ENTERING {COLOR RED}ZONE THREE{COLOR DARK_GREY}.$"
