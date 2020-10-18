Zone0A_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone0A_OnFrame
	.byte 0

Zone0A_OnFrame:
	map_script_2 VAR_ZONE0_WARPS, 0, Zone0A_EventScript_Intro
	.2byte 0

Zone0A_EventScript_Intro:
	lockall
	call EventScript_MoveCameraUp
	applymovement 1, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	call EventScript_MoveCameraDown
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	msgbox Zone0A_Text_Intro, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_WalkUp
	waitmovement 0
	applymovement 1, Common_Movement_WalkUp
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	setvar VAR_ZONE0_WARPS, 1
	releaseall
	end

Zone0A_Text_Intro:
	.string "Hello, {PLAYER}.\n"
	.string "I'm the Day-Care Man.\p"
	.string "Welcome to our peaceful Zone 0.\p"
	.string "There are no trainers here, no\n"
	.string "challenges to face. Everything is\l"
	.string "meant to help you on your journey.\p"
	.string "Zone 0 has three main attractions:\n"
	.string "The Pokémon Day Care, which I run;\l"
	.string "the purple building, or the TPI,\l"
	.string "which gives access to warp\l"
	.string "technology; and the Berry fields.\p"
	.string "I definitely suggest exploring as\n"
	.string "this Zone was built to help\l"
	.string "challengers such as yourself.$"
