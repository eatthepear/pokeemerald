ZoneB1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ZoneB1_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, ZoneB1_OnTransition
	.byte 0

ZoneB1_OnFrame:
	map_script_2 VAR_ZONEB1_STATE, 2, ZoneB1_EventScript_Intro
	.2byte 0

ZoneB1_OnTransition:
	goto_if_eq VAR_ZONEB1_STATE, 2, ZoneB1_EventScript_MoveJudge
	end

ZoneB1_EventScript_MoveJudge:
	setobjectxyperm 1, 4, 16
	end

ZoneB1_EventScript_Intro:
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox ZoneB1_Text_Notice, MSGBOX_AUTOCLOSE
	delay 16
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	setobjectxyperm 1, 13, 16
	msgbox ZoneB1_Text_Explain, MSGBOX_AUTOCLOSE
	applymovement 1, ZoneB1_Movement_WalkAway
	waitmovement 0
	setvar VAR_ZONEB1_STATE, 3
	releaseall
	end

ZoneB1_Text_Notice:
	.string "Oh!$"

ZoneB1_Text_Explain:
	.string "Welcome to the Trivia Hall!\p"
	.string "Just step right up to the stage,\n"
	.string "answer some trivia questions, and\l"
	.string "you could earn great rewards!\p"
	.string "Get questions right in a row to win\n"
	.string "fabulous prizes!$"

ZoneB1_EventScript_BackToZone0::
	lockall
	warpteleport MAP_ZONE0D, 255, 2, 32
	releaseall
	end

ZoneB1_Movement_WalkAway:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	face_down
	step_end

ZoneB1_EventScript_Left::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto ZoneB1_EventScript_JudgeScript
	end

ZoneB1_EventScript_Right::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto ZoneB1_EventScript_JudgeScript
	end

ZoneB1_EventScript_Judge::
	lockall
	faceplayer
	goto ZoneB1_EventScript_JudgeScript
	end

ZoneB1_EventScript_JudgeScript:
	msgbox ZoneB1_Text_JudgePlay, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, ZoneB1_EventScript_StartTrivia
	releaseall
	end

ZoneB1_EventScript_StartTrivia:
	msgbox ZoneB1_Text_Go, MSGBOX_AUTOCLOSE
	releaseall
	end

ZoneB1_Text_JudgePlay:
	.string "Would you like to participate in\n"
	.string "the Trivia Challenge?$"

ZoneB1_Text_Go:
	.string "Good luck!$"
