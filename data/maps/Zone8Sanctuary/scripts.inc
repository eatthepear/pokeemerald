Zone8Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone8Sanctuary_OnFrame
	.byte 0

Zone8Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 7, Zone8Sanctuary_EventScript_Intro
	.2byte 0

Zone8Sanctuary_EventScript_Intro:
	lockall
	releaseall
	end
