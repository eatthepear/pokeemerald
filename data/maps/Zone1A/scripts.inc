Zone1A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE1A_POTION, Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE1A_QUICK_CLAW, Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_5
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone1A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 1
	goto_if_gt Zone1A_EventScript_Exit_2
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone1A_EventScript_Exit_7
Zone1A_EventScript_Exit_5:
	warp MAP_ZONE1SANCTUARY, 255, 22, 7
	waitstate
Zone1A_EventScript_Exit_1:
	releaseall
	end

Zone1A_EventScript_Exit_2:
	call EventScript_WarpZone0
	goto Zone1A_EventScript_Exit_1

Zone1A_EventScript_Exit_6:
	goto EventScript_BrutalExitNotSatisfied
	goto Zone1A_EventScript_Exit_5

Zone1A_EventScript_Exit_7:
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_ne Zone1A_EventScript_Exit_6
	goto Zone1A_EventScript_Exit_5


Zone1A_EventScript_LeviathanBattle::
	lock
	faceplayer
	fadeoutbgm 1
	msgbox Zone1A_Text_Leviathan1Intro
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone1A_EventScript_LeviathanBattle_2
	setvar VAR_MUGSHOT_ID, MUGSHOT_COREY
	trainerbattle_no_intro TRAINER_COREY_LEVIATHAN_1, Zone1A_Text_Leviathan1Defeat
Zone1A_EventScript_LeviathanBattle_1:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone1A_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_ORAN_BERRY, 10
	msgbox Zone1A_EventScript_LeviathanBattle_Text_1
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 6
	setflag FLAG_BEAT_LEVIATHAN_1
	fadescreen FADE_FROM_BLACK
	release
	end

Zone1A_EventScript_LeviathanBattle_2:
	setvar VAR_MUGSHOT_ID, MUGSHOT_COREY
	trainerbattle_no_intro TRAINER_COREY_LEVIATHAN_1_BRUTAL, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1


Zone1A_EventScript_ItemPotion::
	lock
	goto_if_set FLAG_ITEM_ZONE1A_POTION, Zone1A_EventScript_ItemPotion_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE1A_POTION
	addobject VAR_LAST_TALKED
	finditem ITEM_POTION, 1
	release
	end

Zone1A_EventScript_ItemPotion_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone1A_EventScript_ItemQuickClaw::
	lock
	goto_if_set FLAG_ITEM_ZONE1A_QUICK_CLAW, Zone1A_EventScript_ItemQuickClaw_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE1A_QUICK_CLAW
	addobject VAR_LAST_TALKED
	finditem ITEM_QUICK_CLAW, 1
	release
	end

Zone1A_EventScript_ItemQuickClaw_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone1A_EventScript_PorygonSign::
	msgbox Zone1A_EventScript_PorygonSign_Text_0, MSGBOX_DEFAULT
	showmonpic SPECIES_PORYGON, 10, 3
	waitbuttonpress
	hidemonpic
	release
	end


Zone1A_EventScript_Nina::
	trainerbattle_single TRAINER_NINA, Zone1A_Text_NinaIntro, Zone1A_Text_NinaDefeat
	msgbox Zone1A_Text_NinaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone1A_Text_NinaIntro:
	.string "Hey, you! Let's battle!$"

Zone1A_Text_NinaDefeat:
	.string "Aww… Come on!$"

Zone1A_Text_NinaPostBattle:
	.string "I always lose…$"

Zone1A_EventScript_Mariam::
	trainerbattle_single TRAINER_MARIAM, Zone1A_Text_MariamIntro, Zone1A_Text_MariamDefeat
	msgbox Zone1A_Text_MariamPostBattle, MSGBOX_AUTOCLOSE
	end

Zone1A_Text_MariamIntro:
	.string "Be careful, I'm tough!$"

Zone1A_Text_MariamDefeat:
	.string "Sheesh!$"

Zone1A_Text_MariamPostBattle:
	.string "Maybe I need more Pokémon.$"

Zone1A_EventScript_Oscar::
	trainerbattle_single TRAINER_OSCAR, Zone1A_Text_OscarIntro, Zone1A_Text_OscarDefeat
	msgbox Zone1A_Text_OscarPostBattle, MSGBOX_AUTOCLOSE
	end

Zone1A_Text_OscarIntro:
	.string "Fear my might!$"

Zone1A_Text_OscarDefeat:
	.string "Beaten! Disgrace!$"

Zone1A_Text_OscarPostBattle:
	.string "I must reclaim my honor…$"

Zone1A_EventScript_Sign::
	msgbox Zone1A_Text_Sign, MSGBOX_SIGN
	end

Zone1A_Text_Sign:
	.string "Trainer Tips!\p"
	.string "Press {R_BUTTON} to enable\n"
	.string "or disable Auto Run.$"

Zone1A_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: I thought if I gave my Skwovet\n"
	.string "an Oran Berry, I would be able to win.\l"
	.string "Oran Berries really are the best!\p"
	.string "Here, let me share some with you and\n"
	.string "your Pokémon!$"

Zone1A_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Well, anyways, I've gotta run\n"
	.string "now.\p"
	.string "Bye bye!$"

Zone1A_EventScript_PorygonSign_Text_0:
	.string "Every Zone has its own challenges.\n"
	.string "In order to reach the Sanctuary and\l"
	.string "clear a Zone, you must find {COLOR RED}Porygon{COLOR DARK_GRAY}.$"

Zone1A_Text_Leviathan1Intro::
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Hi! My name's Corey.\n"
	.string "I'm the resident Leviathan around here.\p"
	.string "If you want to go forward, you'll have\n"
	.string "to beat me!\p"
	.string "So, let's get right to it!\p"
	.string "I challenge you to a battle!$"

Zone1A_Text_Leviathan1Defeat::
	.string "Drats! Even the Oran Berry wasn't\n"
	.string "enough!$"
