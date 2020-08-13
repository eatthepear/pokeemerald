Entrance_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Entrance_OnFrame
	.byte 0

Entrance_OnFrame:
	map_script_2 VAR_TUTORIAL, 0, Entrance_EventScript_Intro
	.2byte 0

Entrance_EventScript_Intro:
	lockall
	setflag FLAG_SYS_B_DASH
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	msgbox Entrance_Text_Quentin_Welcome, MSGBOX_DEFAULT
	applymovement 1, Entrance_Movement_Quentin_WalkDown
	waitmovement 0
	msgbox Entrance_Text_Quentin_Welcome, MSGBOX_DEFAULT
	applymovement 1, Entrance_Movement_Quentin_FirstShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_FirstShop
	waitmovement 0
	msgbox Entrance_Text_Quentin_Welcome, MSGBOX_DEFAULT
	applymovement 1, Entrance_Movement_Quentin_SecondShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_SecondShop
	waitmovement 0
	msgbox Entrance_Text_Quentin_Welcome, MSGBOX_DEFAULT
	applymovement 1, Entrance_Movement_Quentin_ThirdShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_ThirdShop
	waitmovement 0
	msgbox Entrance_Text_Quentin_Welcome, MSGBOX_DEFAULT
	applymovement 1, Entrance_Movement_Quentin_FourthShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_FourthShop
	waitmovement 0
	msgbox Entrance_Text_Quentin_Welcome, MSGBOX_DEFAULT
	applymovement 1, Entrance_Movement_Quentin_BackMid
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_BackMid
	waitmovement 0
	msgbox Entrance_Text_Quentin_Welcome, MSGBOX_DEFAULT
	applymovement 1, Entrance_Movement_Quentin_BackTop
	waitmovement 0
	setvar VAR_TUTORIAL, 1
	end

Entrance_Text_Quentin_Welcome:
	.string "Hello there!$"

Entrance_Movement_Quentin_WalkDown:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Entrance_Movement_Quentin_FirstShop:
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	face_up
	step_end

Entrance_Movement_Player_FirstShop:
	delay 16
	walk_left
	walk_left
	walk_left
	delay 16
	face_up
	step_end

Entrance_Movement_Quentin_SecondShop:
	walk_up
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Entrance_Movement_Player_SecondShop:
	face_up
	delay 16
	face_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	delay 16
	face_up
	step_end

Entrance_Movement_Quentin_ThirdShop:
	walk_up
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

Entrance_Movement_Player_ThirdShop:
	face_up
	delay 16
	face_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	delay 16
	face_up
	step_end

Entrance_Movement_Quentin_FourthShop:
	walk_up
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Entrance_Movement_Player_FourthShop:
	face_up
	delay_16
	face_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	delay_16
	face_up
	step_end

Entrance_Movement_Quentin_BackMid:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end

Entrance_Movement_Player_BackMid:
	face_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Entrance_Movement_Quentin_BackTop:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end
