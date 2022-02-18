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
	msgbox ZoneB1_Text_Explanation, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_FaceUp
	waitmovement 0
	opendoor 25, 9
	waitdooranim
	applymovement 1, Common_Movement_WalkUp
	waitmovement 0
	removeobject VAR_LAST_TALKED
	setflag FLAG_HIDE_ZONEB1_GLASSMAKER
	closedoor 25, 9
	waitdooranim
	releaseall
	end

ZoneB1_Text_Notice:
	.string "Oh!$"

ZoneB1_Text_Explanation:
	.string "Welcome to {COLOR RED}Zone B1{COLOR DARK_GRAY}!\p"
	.string "This special area may contain grass, but there are no wild Pokemon. Instead, you can gather volcanic ash using this Soot Sack, and then the 
