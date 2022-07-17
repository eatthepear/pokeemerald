Zone13A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE13A_LEAF_STONE, Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE13A_SHINY_STONE, Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME_5
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone13A_EventScript_ParasolLady::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_ZONE13A_UTILITY_UMBRELLA, Zone13A_EventScript_ParasolLady_2
Zone13A_EventScript_ParasolLady_1:
	msgbox Zone13A_EventScript_ParasolLady_Text_1
	release
	end

Zone13A_EventScript_ParasolLady_2:
	msgbox Zone13A_EventScript_ParasolLady_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_UTILITY_UMBRELLA
	setflag FLAG_RECEIVED_ZONE13A_UTILITY_UMBRELLA
	goto Zone13A_EventScript_ParasolLady_1


Zone13A_EventScript_LeafStone::
	lock
	goto_if_set FLAG_ITEM_ZONE13A_LEAF_STONE, Zone13A_EventScript_LeafStone_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE13A_LEAF_STONE
	addobject VAR_LAST_TALKED
	finditem ITEM_LEAF_STONE, 1
	release
	end

Zone13A_EventScript_LeafStone_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone13A_EventScript_ShinyStone::
	lock
	goto_if_set FLAG_ITEM_ZONE13A_SHINY_STONE, Zone13A_EventScript_ShinyStone_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE13A_SHINY_STONE
	addobject VAR_LAST_TALKED
	finditem ITEM_SHINY_STONE, 1
	release
	end

Zone13A_EventScript_ShinyStone_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone13A_EventScript_Violet::
	trainerbattle_single TRAINER_VIOLET, Zone13A_Text_VioletIntro, Zone13A_Text_VioletDefeat
	msgbox Zone13A_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
	end

Zone13A_Text_VioletIntro:
	.string "Ah, finally, a pleasant aroma!$"

Zone13A_Text_VioletDefeat:
	.string "I wasn't talking about you!\n"
	.string "I meant the flowers!$"

Zone13A_Text_VioletPostBattle:
	.string "Though, you do smell nice.\n"
	.string "Uh, nevermind.$"
	
Zone13A_EventScript_Wanda::
	trainerbattle_single TRAINER_WANDA, Zone13A_Text_WandaIntro, Zone13A_Text_WandaDefeat
	msgbox Zone13A_Text_WandaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone13A_Text_WandaIntro:
	.string "Would you like to see my Pokémon?\n"
	.string "I paid big money to get them!$"

Zone13A_Text_WandaDefeat:
	.string "Well, kind of.\n"
	.string "It's a long story.$"

Zone13A_Text_WandaPostBattle:
	.string "Have you ever heard the word\n"
	.string "nepotism?$"

Zone13A_EventScript_AmberandKim::
	trainerbattle_double TRAINER_AMBER_AND_KIM, Zone13A_Text_AmberandKimIntro, Zone13A_Text_AmberandKimDefeat, gText_NotEnoughMons
	msgbox Zone13A_Text_AmberandKimPostBattle, MSGBOX_DEFAULT
	release
	end

Zone13A_Text_AmberandKimIntro:
	.string "Amber: As twins, we're in sync!\n"
	.string "We always finish each others\p"
	.string "Kim: Sandwiches!$"

Zone13A_Text_AmberandKimDefeat:
	.string "Amber: Let it go!\p"
	.string "Kim: I love Frozen!$"

Zone13A_Text_AmberandKimPostBattle:
	.string "Amber: Kim, next time, hit em with\n"
	.string "the one-two, okay?\p"
	.string "Kim: Okay, sister!$"

Zone13A_EventScript_JanandErin::
	trainerbattle_double TRAINER_JAN_AND_ERIN, Zone13A_Text_JanandErinIntro, Zone13A_Text_JanandErinDefeat, gText_NotEnoughMons
	msgbox Zone13A_Text_JanandErinPostBattle, MSGBOX_DEFAULT
	release
	end

Zone13A_Text_JanandErinIntro:
	.string "Jan: After our time together\n"
	.string "terrorizing new trainers in Kalos,\p"
	.string "Erin: We've come to rain on your\n"
	.string "parade with our Furfrou!$"

Zone13A_Text_JanandErinDefeat:
	.string "Jan: My Furfrou!\p"
	.string "Erin: My Furfrou!$"

Zone13A_Text_JanandErinPostBattle:
	.string "Jan: Maybe it's time to settle down.\p"
	.string "Erin: Yeah. In Hoenn, maybe.$"

Zone13A_EventScript_Steve::
	trainerbattle_single TRAINER_STEVE, Zone13A_Text_SteveIntro, Zone13A_Text_SteveDefeat
	msgbox Zone13A_Text_StevePostBattle, MSGBOX_AUTOCLOSE
	end

Zone13A_Text_SteveIntro:
	.string "I can hear them buzzing!\n"
	.string "Where are you, my precious Bug\l"
	.string "Pokémon?$"

Zone13A_Text_SteveDefeat:
	.string "Bzzt!$"

Zone13A_Text_StevePostBattle:
	.string "The only pest I found was you!$"

Zone13A_EventScript_Sign::
	msgbox Zone13A_Text_Sign, MSGBOX_SIGN
	end

Zone13A_Text_Sign:
	.string "Mining Facility$"

Zone13A_EventScript_ParasolLady_Text_0:
	.string "Rain or shine, it's important to protect\n"
	.string "yourself from the elements!$"

Zone13A_EventScript_ParasolLady_Text_1:
	.string "The Utility Umbrella nullifies the\n"
	.string "effects of harsh sunlight or rain on\l"
	.string "the user.\p"
	.string "Isn't that neat?$"
