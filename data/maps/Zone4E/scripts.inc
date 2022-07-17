Zone4E_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE4E_SUPER_POTION, Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_1
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone4E_EventScript_Exit::
	lockall
	compare VAR_ZONE, 4
	goto_if_gt Zone4E_EventScript_Exit_2
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone4E_EventScript_Exit_7
Zone4E_EventScript_Exit_5:
	clearflag FLAG_IN_ZONE_NOT_SANCTUARY
	warp MAP_ZONE4SANCTUARY, 255, 22, 7
Zone4E_EventScript_Exit_1:
	releaseall
	end

Zone4E_EventScript_Exit_2:
	clearflag FLAG_IN_ZONE_NOT_SANCTUARY
	clearflag FLAG_IS_REVISITING_ZONE
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 27, 32
	waitstate
	goto Zone4E_EventScript_Exit_1

Zone4E_EventScript_Exit_6:
	goto EventScript_BrutalExitNotSatisfied
	goto Zone4E_EventScript_Exit_5

Zone4E_EventScript_Exit_7:
	checktrainerflag TRAINER_HERMAN
	goto_if 0, Zone4E_EventScript_Exit_6
	checktrainerflag TRAINER_RALPH
	goto_if 0, Zone4E_EventScript_Exit_6
	checktrainerflag TRAINER_SANTIAGO
	goto_if 0, Zone4E_EventScript_Exit_6
	checktrainerflag TRAINER_CHLOE_AND_KAYA
	goto_if 0, Zone4E_EventScript_Exit_6
	checktrainerflag TRAINER_LUCIA
	goto_if 0, Zone4E_EventScript_Exit_6
	checktrainerflag TRAINER_FRED
	goto_if 0, Zone4E_EventScript_Exit_6
	goto Zone4E_EventScript_Exit_5


Zone4E_EventScript_LeviathanBattle::
	lock
	faceplayer
	fadeoutbgm 1
	msgbox Zone4E_Text_Leviathan4Intro
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone4E_EventScript_LeviathanBattle_2
	setvar VAR_MUGSHOT_ID, MUGSHOT_RITA
	trainerbattle_no_intro TRAINER_RITA_LEVIATHAN_4, Zone4E_Text_Leviathan4Defeat
Zone4E_EventScript_LeviathanBattle_1:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone4E_EventScript_LeviathanBattle_Text_0
	giveitem ITEM_TM02
	msgbox Zone4E_EventScript_LeviathanBattle_Text_1
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 2
	setflag FLAG_BEAT_LEVIATHAN_4
	fadescreen FADE_FROM_BLACK
	release
	end

Zone4E_EventScript_LeviathanBattle_2:
	setvar VAR_MUGSHOT_ID, MUGSHOT_RITA
	trainerbattle_no_intro TRAINER_RITA_LEVIATHAN_4_BRUTAL, Zone4E_Text_Leviathan4Defeat
	goto Zone4E_EventScript_LeviathanBattle_1


Zone4E_EventScript_ItemSuperPotion::
	lock
	goto_if_set FLAG_ITEM_ZONE4E_SUPER_POTION, Zone4E_EventScript_ItemSuperPotion_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE4E_SUPER_POTION
	addobject VAR_LAST_TALKED
	finditem ITEM_SUPER_POTION, 1
	release
	end

Zone4E_EventScript_ItemSuperPotion_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone4E_EventScript_Sign::
	msgbox Zone4E_Text_Sign, MSGBOX_SIGN
	end

Zone4E_Text_Sign:
	.string "Trainer Tips!\p"
	.string "While you are on the Pokémon stats\n"
	.string "screen, you can press {A_BUTTON} to switch\l"
	.string "between stats, IVs, or EVs.$"

Zone4E_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: That was great! I hope our\n"
	.string "Pokémon are friends now, too!\p"
	.string "Here, I want you to have this gift, from\n"
	.string "me!\p"
	.string "The best way to bring out one's inner\n"
	.string "power is through friendship!$"

Zone4E_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: Alright, I'm off to go meet some\n"
	.string "more friends!\p"
	.string "See you around!$"

Zone4E_Text_Leviathan4Intro::
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: Hey! I'm {COLOR BLUE}Rita{COLOR DARK_GRAY}.\p"
	.string "Nice to meet you!\p"
	.string "People always criticize me for being too\n"
	.string "friendly with others.\p"
	.string "But I just find that's the best way to\n"
	.string "make new friends!\p"
	.string "Well, how about a battle, friend?$"

Zone4E_Text_Leviathan4Defeat::
	.string "That was a lovely battle.\n"
	.string "Thank you!$"
