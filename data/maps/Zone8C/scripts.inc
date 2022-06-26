Zone8C_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE8C_NEVER_MELT_ICE, Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE8C_FULL_HEAL, Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	goto_if_set FLAG_ITEM_ZONE8C_SUPER_REPEL, Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_9
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_9:
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone8C_EventScript_ItemNeverMeltIce::
	lock
	goto_if_set FLAG_ITEM_ZONE8C_NEVER_MELT_ICE, Zone8C_EventScript_ItemNeverMeltIce_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE8C_NEVER_MELT_ICE
	addobject VAR_LAST_TALKED
	finditem ITEM_NEVER_MELT_ICE, 1
	release
	end

Zone8C_EventScript_ItemNeverMeltIce_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone8C_EventScript_ItemFullHeal::
	lock
	goto_if_set FLAG_ITEM_ZONE8C_FULL_HEAL, Zone8C_EventScript_ItemFullHeal_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE8C_FULL_HEAL
	addobject VAR_LAST_TALKED
	finditem ITEM_FULL_HEAL, 1
	release
	end

Zone8C_EventScript_ItemFullHeal_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone8C_EventScript_ItemSuperRepel::
	lock
	goto_if_set FLAG_ITEM_ZONE8C_SUPER_REPEL, Zone8C_EventScript_ItemSuperRepel_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE8C_SUPER_REPEL
	addobject VAR_LAST_TALKED
	finditem ITEM_SUPER_REPEL, 1
	release
	end

Zone8C_EventScript_ItemSuperRepel_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone8C_EventScript_Neil::
       trainerbattle_single TRAINER_NEIL, Zone8C_Text_NeilIntro, Zone8C_Text_NeilDefeat
       msgbox Zone8C_Text_NeilPostBattle, MSGBOX_AUTOCLOSE
       end
	   
Zone8C_Text_NeilIntro:
       .string "I'm looking for another path down...$"

Zone8C_Text_NeilDefeat:
       .string "But all I found is you.$"

Zone8C_Text_NeilPostBattle:
       .string "Maybe it's on the other side\n"
       .string "of the mountain?$"

Zone8C_EventScript_Tamara::
       trainerbattle_single TRAINER_TAMARA, Zone8C_Text_TamaraIntro, Zone8C_Text_TamaraDefeat
       msgbox Zone8C_Text_TamaraPostBattle, MSGBOX_AUTOCLOSE

Zone8C_Text_TamaraIntro:
       .string "Ah, I'm hopelessly lost…$"

Zone8C_Text_TamaraDefeat:
       .string "Now I can add defeat to my\n"
       .string "list of misfortunes…$"

Zone8C_Text_TamaraPostBattle:
       .string "I should really drop my pessimistic\n"
       .string "attitude, I know.$"
