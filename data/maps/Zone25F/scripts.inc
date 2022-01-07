Zone25F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, Zone25F_SetHoleWarp
	.byte 0

Zone25F_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_ZONE25G
	end

Zone25F_EventScript_ShinyStone::
	finditem ITEM_SHINY_STONE
	end
