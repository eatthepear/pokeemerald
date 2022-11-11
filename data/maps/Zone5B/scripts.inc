Zone5B_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone5B_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone5B_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE_5_STATE, 1, Zone5B_EventScript_Intro
	.2byte 0


Zone5B_EventScript_Intro::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	special RemoveCameraObject
	applymovement 2, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	playmoncry SPECIES_PORYGON, 2
	applymovement 2, Zone5B_Porygon_AnimateDown
	waitmovement 0
	waitmoncry
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	applymovement 2, Common_Movement_WalkDown
	waitmovement 0
	special RemoveCameraObject
	applymovement 2, Common_Movement_WalkDown
	waitmovement 0
	msgbox Zone5B_EventScript_Intro_Text_0
	playmoncry SPECIES_PORYGON, 2
	applymovement 2, Zone5B_Porygon_AnimateDown
	waitmovement 0
	waitmoncry
	applymovement 2, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 2, Common_Movement_WalkDown
	waitmovement 0
	applymovement 2, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	applymovement 2, Zone5B_Porygon_AnimateRight
	waitmovement 0
	applymovement 2, Common_Movement_WalkUp
	waitmovement 0
	applymovement 2, Common_Movement_WalkRight
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement 2, Zone5B_Porygon_AnimateDown
	waitmovement 0
	applymovement 2, Common_Movement_WalkRight
	waitmovement 0
	applymovement 2, Common_Movement_WalkDown
	waitmovement 0
	applymovement 2, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement 2, Zone5B_Porygon_AnimateLeft
	waitmovement 0
	applymovement 2, Common_Movement_WalkUp
	waitmovement 0
	applymovement 2, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement 2, Zone5B_Porygon_AnimateDown
	waitmovement 0
	msgbox Zone5B_EventScript_Intro_Text_1
	playmoncry SPECIES_PORYGON, 2
	delay 40
	waitmoncry
	applymovement 2, Zone5B_Porygon_AnimateDown
	waitmovement 0
	applymovement 2, Zone5B_Porygon_AnimateDown
	waitmovement 0
	applymovement 2, Common_Movement_WalkUp
	waitmovement 0
	applymovement 2, Common_Movement_WalkUp
	waitmovement 0
	removeobject 2
	setflag FLAG_HIDE_ZONE5B_SHINY_PORYGON
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox Zone5B_EventScript_Intro_Text_2
	setvar VAR_ZONE_5_STATE, 2
	releaseall
	return


Zone5B_Porygon_AnimateRight:
	walk_in_place_slow_right
	walk_in_place_slow_right
	walk_in_place_slow_right
	step_end

Zone5B_Porygon_AnimateDown:
	walk_in_place_slow_down
	walk_in_place_slow_down
	walk_in_place_slow_down
	step_end

Zone5B_Porygon_AnimateLeft:
	walk_in_place_slow_left
	walk_in_place_slow_left
	walk_in_place_slow_left
	step_end

Zone5B_EventScript_Intro_Text_0:
	.string "This {COLOR BLUE}Porygon{COLOR DARK_GRAY} is a strange color…\p"
	.string "It almost seems… familiar?$"

Zone5B_EventScript_Intro_Text_1:
	.string "The {COLOR BLUE}Porygon{COLOR DARK_GRAY} looks confused…$"

Zone5B_EventScript_Intro_Text_2:
	.string "The strange-colored {COLOR BLUE}Porygon{COLOR DARK_GRAY}\n"
	.string "disappeared!$"
