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
	applymovement 1, Entrance_Movement_Quentin_WalkDown
	applymovement OBJECT_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 1
	msgbox Entrance_Text_Quentin_Welcome, MSGBOX_DEFAULT
	end

Entrance_Movement_Quentin_WalkDown:
	walk_down
	walk_down
	walk_down
	walk_down	
	step_end

Entrance_Text_Quentin_Welcome:
	.string "Hello there!$"
