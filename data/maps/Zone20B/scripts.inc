Zone20B_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone20B_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone20B_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone20B_MapScripts_MAP_SCRIPT_ON_RESUME:
	compare VAR_ZONE_20_STATE, 0
	goto_if_eq Zone20B_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

Zone20B_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	fadeoutbgm 1
	return

Zone20B_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE_20_STATE, 0, Zone20B_EventScript_LeviathanBattle
	.2byte 0


Zone20B_EventScript_LeviathanBattle::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	setvar VAR_ZONE_20_STATE, 1
	releaseall
	end

