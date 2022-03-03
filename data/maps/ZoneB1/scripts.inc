ZoneB1_MapScripts::
	map_script_2 VAR_ZONEB1_STATE, 2, ZoneB1_EventScript_Intro
	.byte 0

ZoneB1_EventScript_Intro:
	lockall
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox ZoneB1_Text_Notice, MSGBOX_AUTOCLOSE
	delay 16
	applymovement 1, Common_Movement_FaceUp
	waitmovement 0
	opendoor 25, 9
	waitdooranim
	applymovement 1, Common_Movement_WalkUp
	waitmovement 0
	removeobject VAR_LAST_TALKED
	closedoor 25, 9
	waitdooranim
	releaseall
	end

ZoneB1_Text_Notice:
	.string "Oh!$"

