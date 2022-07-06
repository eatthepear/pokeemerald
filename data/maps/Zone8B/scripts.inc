Zone8B_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE8B_HARD_STONE, Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE8B_DUSK_BALL, Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	goto_if_set FLAG_ITEM_ZONE8B_SUPER_POTION, Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_9
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_9:
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone8B_EventScript_ItemHardStone::
	lock
	goto_if_set FLAG_ITEM_ZONE8B_HARD_STONE, Zone8B_EventScript_ItemHardStone_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE8B_HARD_STONE
	addobject VAR_LAST_TALKED
	finditem ITEM_HARD_STONE, 1
	release
	end

Zone8B_EventScript_ItemHardStone_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone8B_EventScript_ItemDuskBall::
	lock
	goto_if_set FLAG_ITEM_ZONE8B_DUSK_BALL, Zone8B_EventScript_ItemDuskBall_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE8B_DUSK_BALL
	addobject VAR_LAST_TALKED
	finditem ITEM_DUSK_BALL, 1
	release
	end

Zone8B_EventScript_ItemDuskBall_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone8B_EventScript_ItemSuperPotion::
	lock
	goto_if_set FLAG_ITEM_ZONE8B_SUPER_POTION, Zone8B_EventScript_ItemSuperPotion_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE8B_SUPER_POTION
	addobject VAR_LAST_TALKED
	finditem ITEM_SUPER_POTION, 1
	release
	end

Zone8B_EventScript_ItemSuperPotion_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone8B_EventScript_Jayden::
	trainerbattle_single TRAINER_JAYDEN, Zone8B_Text_JaydenIntro, Zone8B_Text_JaydenDefeat
	msgbox Zone8B_Text_JaydenPostBattle, MSGBOX_AUTOCLOSE
	end

Zone8B_Text_JaydenIntro:
	.string "I'm an explorer, a spelunkerer,\n"
	.string "an adventurer, a Hiker!$"

Zone8B_Text_JaydenDefeat:
	.string "Also a bit of a sore loser…$"

Zone8B_Text_JaydenPostBattle:
	.string "Next time, I'll be a winner too!$"

Zone8B_EventScript_Karen::
	trainerbattle_single TRAINER_KAREN, Zone8B_Text_KarenIntro, Zone8B_Text_KarenDefeat
	msgbox Zone8B_Text_KarenPostBattle, MSGBOX_AUTOCLOSE
	end

Zone8B_Text_KarenIntro:
	.string "Can I speak to your manager?$"

Zone8B_Text_KarenDefeat:
	.string "What do you mean you don't have a\n"
	.string "manager?$"

Zone8B_Text_KarenPostBattle:
	.string "Argh! You're a cheapskate,\n"
	.string "just like the rest of them!$"
