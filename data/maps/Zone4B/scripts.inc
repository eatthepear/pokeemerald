Zone4B_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone4B_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4B_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE4B_AWAKENING, Zone4B_MapScripts_MAP_SCRIPT_ON_RESUME_1
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone4B_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone4B_EventScript_ItemAwakening::
	lock
	goto_if_set FLAG_ITEM_ZONE4B_AWAKENING, Zone4B_EventScript_ItemAwakening_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE4B_AWAKENING
	addobject VAR_LAST_TALKED
	finditem ITEM_AWAKENING, 1
	release
	end

Zone4B_EventScript_ItemAwakening_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone4B_EventScript_Ralph::
	trainerbattle_single TRAINER_RALPH, Zone4B_Text_RalphIntro, Zone4B_Text_RalphDefeat
	msgbox Zone4B_Text_RalphPostBattle, MSGBOX_AUTOCLOSE
	end

Zone4B_Text_RalphIntro:
	.string "Ugh, where am I? Maybe you'll\n"
	.string "tell me if I beat you!$"

Zone4B_Text_RalphDefeat:
	.string "You don't know either? Oof!$"

Zone4B_Text_RalphPostBattle:
	.string "I guess the more important question is\n"
	.string "where am I going?$"

Zone4B_EventScript_Sign::
	msgbox Zone4B_Text_Sign, MSGBOX_SIGN
	end

Zone4B_Text_Sign:
	.string "Trainer Tips!\p"
	.string "You can see detailed information\n"
	.string "about a Pokémon species in its\l"
	.string "Pokédex entry after capturing it.$"
