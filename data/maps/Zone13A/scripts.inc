Zone13A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE13A_MENTAL_HERB, Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME_1
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone13A_EventScript_MentalHerb::
	lock
	goto_if_set FLAG_ITEM_ZONE13A_MENTAL_HERB, Zone13A_EventScript_MentalHerb_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE13A_MENTAL_HERB
	addobject VAR_LAST_TALKED
	finditem ITEM_MENTAL_HERB, 1
	release
	end

Zone13A_EventScript_MentalHerb_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone13A_EventScript_Violet::
	trainerbattle_single TRAINER_VIOLET, Zone13A_Text_VioletIntro, Zone13A_Text_VioletDefeat
	msgbox Zone13A_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
	end

Zone13A_Text_VioletIntro:
	.string "This grass is far too tall\n"
	.string "for someone of my stature!$"

Zone13A_Text_VioletDefeat:
	.string "I meant financial stature!\n"
	.string "I'm not short!$"

Zone13A_Text_VioletPostBattle:
	.string "Errr… Never mind.$"
	
Zone13A_EventScript_Wanda::
	trainerbattle_single TRAINER_WANDA, Zone13A_Text_WandaIntro, Zone13A_Text_WandaDefeat
	msgbox Zone13A_Text_WandaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone13A_Text_WandaIntro:
	.string "This grass is far too tall\n"
	.string "for someone of my stature!$"

Zone13A_Text_WandaDefeat:
	.string "I meant financial stature!\n"
	.string "I'm not short!$"

Zone13A_Text_WandaPostBattle:
	.string "Errr… Never mind.$"

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
	.string "This grass is far too tall\n"
	.string "for someone of my stature!$"

Zone13A_Text_SteveDefeat:
	.string "I meant financial stature!\n"
	.string "I'm not short!$"

Zone13A_Text_StevePostBattle:
	.string "Errr… Never mind.$"

Zone13A_EventScript_Sign::
	msgbox Zone13A_Text_Sign, MSGBOX_SIGN
	end

Zone13A_Text_Sign:
	.string "Mining Facility$"
