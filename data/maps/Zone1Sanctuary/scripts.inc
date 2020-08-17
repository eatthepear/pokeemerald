Zone1Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone1Sanctuary_OnFrame
	.byte 0

Zone1Sanctuary_OnFrame:
	map_script_2 VAR_TUTORIAL, 2, Zone1Sanctuary_EventScript_Intro
	.2byte 0

Zone1Sanctuary_EventScript_Intro:
	lockall
	call EventScript_MoveCameraUp
	applymovement 1, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement 1, Common_Movement_Quentin_WalkDown
	waitmovement 0
	msgbox gText_Quentin_ReachedZone, MSGBOX_AUTOCLOSE
	setvar VAR_TUTORIAL, 3
	end
	