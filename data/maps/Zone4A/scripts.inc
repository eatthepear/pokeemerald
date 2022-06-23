Zone4A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE4A_BURN_HEAL, Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_1
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone4A_EventScript_ItemBurnHeal::
	lock
	goto_if_set FLAG_ITEM_ZONE4A_BURN_HEAL, Zone4A_EventScript_ItemBurnHeal_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE4A_BURN_HEAL
	addobject VAR_LAST_TALKED
	finditem ITEM_BURN_HEAL, 1
	release
	end

Zone4A_EventScript_ItemBurnHeal_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone4A_EventScript_Sign::
	msgbox Zone4A_Text_Sign, MSGBOX_SIGN
	end

Zone4A_Text_Sign:
	.string "These woods are enchanted…\n"
	.string "Don't get lost!$"

Zone4A_EventScript_Herman::
	trainerbattle_single TRAINER_HERMAN, Zone4A_Text_HermanIntro, Zone4A_Text_HermanDefeat
	msgbox Zone4A_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
	end

Zone4A_Text_HermanIntro:
	.string "I keep going through this exit,\n"
	.string "'cause it might lead somewhere!$"

Zone4A_Text_HermanDefeat:
	.string "But I keep getting back here!$"

Zone4A_Text_HermanPostBattle:
	.string "Try something else?\n"
	.string "No, I'm sure this is the right way!$"
