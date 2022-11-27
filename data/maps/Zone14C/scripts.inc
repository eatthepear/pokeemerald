Zone14C_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone14C_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_TRANSITION, Zone14C_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Zone14C_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE14C_DUSK_STONE, Zone14C_MapScripts_MAP_SCRIPT_ON_RESUME_1
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone14C_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return

Zone14C_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflashlevel 4
	return


Zone14C_EventScript_DuskStone::
	lock
	goto_if_set FLAG_ITEM_ZONE14C_DUSK_STONE, Zone14C_EventScript_DuskStone_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE14C_DUSK_STONE
	addobject VAR_LAST_TALKED
	finditem ITEM_DUSK_STONE, 1
	release
	end

Zone14C_EventScript_DuskStone_2:
	msgbox gText_ItemChestIsEmpty
	release
	end

