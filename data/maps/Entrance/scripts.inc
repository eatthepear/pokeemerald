Entrance_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Entrance_OnFrame
	.byte 0

Entrance_OnFrame:
	map_script_2 VAR_TUTORIAL, 0, Entrance_EventScript_Intro
	.2byte 0

Entrance_EventScript_Intro:
	lockall
	setflag FLAG_SYS_B_DASH
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_WalkUp
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Entrance_Text_Quentin_Welcome, MSGBOX_DEFAULT
	setvar VAR_TUTORIAL, 1
	end

Entrance_Movement_Player_WalkUp:
	walk_up
	walk_uo
	walk_up
	walk_up	
	step_end

Entrance_Text_Quentin_Welcome:
	.string "Hello there!$"
