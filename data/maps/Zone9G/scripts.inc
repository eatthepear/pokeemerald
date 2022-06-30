Zone9G_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone9G_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone9G_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE9G_CHARCOAL, Zone9G_MapScripts_MAP_SCRIPT_ON_RESUME_1
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone9G_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone9G_EventScript_ItemCharcoal::
	lock
	goto_if_set FLAG_ITEM_ZONE9G_CHARCOAL, Zone9G_EventScript_ItemCharcoal_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE9G_CHARCOAL
	addobject VAR_LAST_TALKED
	finditem ITEM_CHARCOAL, 1
	release
	end

Zone9G_EventScript_ItemCharcoal_2:
	msgbox gText_ItemChestIsEmpty
	release
	end

