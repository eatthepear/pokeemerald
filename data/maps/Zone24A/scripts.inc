Zone24A_MapScripts::
	.byte 0

Zone24A_EventScript_LookDown::
	lockall
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Zone24A_Movement_Camera_MoveCameraDown
	waitmovement 0
	delay 96
	applymovement OBJ_EVENT_ID_CAMERA, Zone24A_Movement_Camera_MoveCameraUp
	waitmovement 0
	special RemoveCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	releaseall
	end

Zone24A_Movement_Camera_MoveCameraDown:
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	step_end

Zone24A_Movement_Camera_MoveCameraUp:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

Zone24A_EventScript_Christi::
	trainerbattle_single TRAINER_CHRISTI, Zone24A_Text_ChristiIntro, Zone24A_Text_ChristiDefeat
	msgbox Zone24A_Text_ChristiPostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_ChristiIntro:
	.string "$"

Zone24A_Text_ChristiDefeat:
	.string "$"

Zone24A_Text_ChristiPostBattle:
	.string "$"

Zone24A_EventScript_Spencer::
	trainerbattle_single TRAINER_SPENCER, Zone24A_Text_SpencerIntro, Zone24A_Text_SpencerDefeat
	msgbox Zone24A_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_SpencerIntro:
	.string "$"

Zone24A_Text_SpencerDefeat:
	.string "$"

Zone24A_Text_SpencerPostBattle:
	.string "$"

Zone24A_EventScript_Haywood::
	trainerbattle_single TRAINER_HAYWOOD, Zone24A_Text_HaywoodIntro, Zone24A_Text_HaywoodDefeat
	msgbox Zone24A_Text_HaywoodPostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_HaywoodIntro:
	.string "$"

Zone24A_Text_HaywoodDefeat:
	.string "$"

Zone24A_Text_HaywoodPostBattle:
	.string "$"

Zone24A_EventScript_Monroe::
	trainerbattle_single TRAINER_MONROE, Zone24A_Text_MonroeIntro, Zone24A_Text_MonroeDefeat
	msgbox Zone24A_Text_MonroePostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_MonroeIntro:
	.string "$"

Zone24A_Text_MonroeDefeat:
	.string "$"

Zone24A_Text_MonroePostBattle:
	.string "$"

Zone24A_EventScript_David::
	trainerbattle_single TRAINER_DAVID, Zone24A_Text_DavidIntro, Zone24A_Text_DavidDefeat
	msgbox Zone24A_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_DavidIntro:
	.string "$"

Zone24A_Text_DavidDefeat:
	.string "$"

Zone24A_Text_DavidPostBattle:
	.string "$"

Zone24A_EventScript_Dominik::
	trainerbattle_single TRAINER_DOMINIK, Zone24A_Text_DominikIntro, Zone24A_Text_DominikDefeat
	msgbox Zone24A_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_DominikIntro:
	.string "$"

Zone24A_Text_DominikDefeat:
	.string "$"

Zone24A_Text_DominikPostBattle:
	.string "$"

Zone24A_EventScript_Douglas::
	trainerbattle_single TRAINER_DOUGLAS, Zone24A_Text_DouglasIntro, Zone24A_Text_DouglasDefeat
	msgbox Zone24A_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_DouglasIntro:
	.string "$"

Zone24A_Text_DouglasDefeat:
	.string "$"

Zone24A_Text_DouglasPostBattle:
	.string "$"

Zone24A_EventScript_Nadine::
	trainerbattle_single TRAINER_NADINE, Zone24A_Text_NadineIntro, Zone24A_Text_NadineDefeat
	msgbox Zone24A_Text_NadinePostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_NadineIntro:
	.string "$"

Zone24A_Text_NadineDefeat:
	.string "$"

Zone24A_Text_NadinePostBattle:
	.string "$"
