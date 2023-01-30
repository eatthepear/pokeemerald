Zone16A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE16A_TM27, Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE16A_WATER_STONE, Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	goto_if_set FLAG_ITEM_ZONE16A_DIVE_BALL, Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_10
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
	goto_if_set FLAG_ITEM_ZONE16A_TIMER_BALL, Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_13
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone16A_EventScript_LilyLeft::
	lockall
	applymovement 7, Common_Movement_WalkLeft
	waitmovement 0
	goto Zone16A_EventScript_LilyRight
	return


Zone16A_EventScript_LilyRight::
	lockall
	fadeoutbgm 1
	applymovement 7, Zone16A_Movement_LilyWalkDown
	waitmovement 0
	msgbox Zone16A_Text_Leviathan14Intro1, MSGBOX_DEFAULT
	setweather WEATHER_RAIN
	doweather
	msgbox Zone16A_EventScript_LilyRight_Text_0, MSGBOX_DEFAULT
	msgbox Zone16A_Text_Leviathan14Intro2
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone16A_EventScript_LilyRight_2
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone16A_EventScript_LilyRight_2
	setvar VAR_MUGSHOT_ID, MUGSHOT_LILY
	trainerbattle_no_intro TRAINER_LILY_LEVIATHAN_14, Zone16A_Text_Leviathan14Defeat
Zone16A_EventScript_LilyRight_1:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone16A_EventScript_LilyRight_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_TM28
	resetweather
	doweather
	msgbox Zone16A_EventScript_LilyRight_Text_2
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 7
	setflag FLAG_BEAT_LEVIATHAN_14
	fadescreenswapbuffers FADE_FROM_BLACK
	setvar VAR_ZONE_16_STATE, 1
	release
	end

Zone16A_EventScript_LilyRight_2:
	setvar VAR_MUGSHOT_ID, MUGSHOT_LILY
	trainerbattle_no_intro TRAINER_LILY_LEVIATHAN_14_BRUTAL, Zone16A_Text_Leviathan14Defeat
	goto Zone16A_EventScript_LilyRight_1


Zone16A_Movement_LilyWalkDown:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Zone16A_EventScript_SandPile::
	lockall
	random 5
	compare VAR_RESULT, 0
	goto_if_eq Zone16A_EventScript_SandPile_2
	msgbox Zone16A_EventScript_SandPile_Text_1
Zone16A_EventScript_SandPile_1:
	releaseall
	end

Zone16A_EventScript_SandPile_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	msgbox Zone16A_EventScript_SandPile_Text_0, MSGBOX_DEFAULT
	waitmovement 0
	closemessage
	random 4
	switch VAR_RESULT
	case 0, Zone16A_EventScript_SandPile_7
	case 1, Zone16A_EventScript_SandPile_8
	case 2, Zone16A_EventScript_SandPile_9
	case 3, Zone16A_EventScript_SandPile_10
Zone16A_EventScript_SandPile_5:
	dowildbattle
	goto Zone16A_EventScript_SandPile_1

Zone16A_EventScript_SandPile_7:
	setwildbattle SPECIES_PINCURCHIN, 28, ITEM_NONE
	playmoncry SPECIES_PINCURCHIN, 2
	delay 40
	waitmoncry
	goto Zone16A_EventScript_SandPile_5

Zone16A_EventScript_SandPile_8:
	setwildbattle SPECIES_PYUKUMUKU, 28, ITEM_NONE
	playmoncry SPECIES_PYUKUMUKU, 2
	delay 40
	waitmoncry
	goto Zone16A_EventScript_SandPile_5

Zone16A_EventScript_SandPile_9:
	setwildbattle SPECIES_SANDYGAST, 28, ITEM_NONE
	playmoncry SPECIES_SANDYGAST, 2
	delay 40
	waitmoncry
	goto Zone16A_EventScript_SandPile_5

Zone16A_EventScript_SandPile_10:
	setwildbattle SPECIES_WIMPOD, 28, ITEM_NONE
	playmoncry SPECIES_WIMPOD, 2
	delay 40
	waitmoncry
	goto Zone16A_EventScript_SandPile_5


Zone16A_EventScript_TM27::
	lock
	goto_if_set FLAG_ITEM_ZONE16A_TM27, Zone16A_EventScript_TM27_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE16A_TM27
	addobject VAR_LAST_TALKED
	finditem ITEM_TM27, 1
	release
	end

Zone16A_EventScript_TM27_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone16A_EventScript_WaterStone::
	lock
	goto_if_set FLAG_ITEM_ZONE16A_WATER_STONE, Zone16A_EventScript_WaterStone_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE16A_WATER_STONE
	addobject VAR_LAST_TALKED
	finditem ITEM_WATER_STONE, 1
	release
	end

Zone16A_EventScript_WaterStone_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone16A_EventScript_DiveBall::
	lock
	goto_if_set FLAG_ITEM_ZONE16A_DIVE_BALL, Zone16A_EventScript_DiveBall_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE16A_DIVE_BALL
	addobject VAR_LAST_TALKED
	finditem ITEM_DIVE_BALL, 1
	release
	end

Zone16A_EventScript_DiveBall_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone16A_EventScript_TimerBall::
	lock
	goto_if_set FLAG_ITEM_ZONE16A_TIMER_BALL, Zone16A_EventScript_TimerBall_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE16A_TIMER_BALL
	addobject VAR_LAST_TALKED
	finditem ITEM_TIMER_BALL, 1
	release
	end

Zone16A_EventScript_TimerBall_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone16A_EventScript_Sign::
	msgbox Zone16A_Text_Sign, MSGBOX_SIGN
	end

Zone16A_Text_Sign:
	.string "Sand piles may contain Pokémon.\p"
	.string "Be cautious!\n"
	.string "They don't like being disturbed!$"

Zone16A_EventScript_Iona::
	trainerbattle_single TRAINER_IONA, Zone16A_Text_IonaIntro, Zone16A_Text_IonaDefeat
	msgbox Zone16A_Text_IonaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_IonaIntro:
	.string "The Water Pokémon are tickling\n"
	.string "my toes!$"

Zone16A_Text_IonaDefeat:
	.string "Oh, that was just seaweed.$"

Zone16A_Text_IonaPostBattle:
	.string "Don't you love that there is such\n"
	.string "a diversity of Water Pokémon?$"

Zone16A_EventScript_Berke::
	trainerbattle_single TRAINER_BERKE, Zone16A_Text_BerkeIntro, Zone16A_Text_BerkeDefeat
	msgbox Zone16A_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_BerkeIntro:
	.string "Just keep swimming,\n"
	.string "just keep swimming!$"

Zone16A_Text_BerkeDefeat:
	.string "It's a good motto, right?$"

Zone16A_Text_BerkePostBattle:
	.string "Who's Dory?$"

Zone16A_EventScript_Tanisha::
	trainerbattle_single TRAINER_TANISHA, Zone16A_Text_TanishaIntro, Zone16A_Text_TanishaDefeat
	msgbox Zone16A_Text_TanishaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_TanishaIntro:
	.string "Training Pokémon is hard work!$"

Zone16A_Text_TanishaDefeat:
	.string "It seems I've succeeded in training\n"
	.string "your Pokémon!$"

Zone16A_Text_TanishaPostBattle:
	.string "You're welcome, by the way!$"

Zone16A_EventScript_Robert::
	trainerbattle_single TRAINER_ROBERT, Zone16A_Text_RobertIntro, Zone16A_Text_RobertDefeat
	msgbox Zone16A_Text_RobertPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_RobertIntro:
	.string "Hey there!\n"
	.string "How do you do?$"

Zone16A_Text_RobertDefeat:
	.string "We're the rhyming Hiker pair!$"

Zone16A_Text_RobertPostBattle:
	.string "Rhyming is easy…$"

Zone16A_EventScript_Chris::
	trainerbattle_single TRAINER_CHRIS, Zone16A_Text_ChrisIntro, Zone16A_Text_ChrisDefeat
	msgbox Zone16A_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_ChrisIntro:
	.string "Hey there!\n"
	.string "What's hip, hopping, and new?$"

Zone16A_Text_ChrisDefeat:
	.string "You beat us fair and square!$"

Zone16A_Text_ChrisPostBattle:
	.string "Battling makes me queasy…$"

Zone16A_EventScript_Angus::
	trainerbattle_single TRAINER_ANGUS, Zone16A_Text_AngusIntro, Zone16A_Text_AngusDefeat
	msgbox Zone16A_Text_AngusPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_AngusIntro:
	.string "Fishing isn't just a hobby.\n"
	.string "It's a lifestyle!$"

Zone16A_Text_AngusDefeat:
	.string "I've fished up defeat!$"

Zone16A_Text_AngusPostBattle:
	.string "Dive Balls can help capture\n"
	.string "Pokémon while fishing.$"

Zone16A_EventScript_LilyRight_Text_0:
	.string "It suddenly began to rain!$"

Zone16A_EventScript_LilyRight_Text_1:
	.string "{COLOR BLUE}Lily{COLOR DARK_GRAY}: Well then. I suppose you'll be\n"
	.string "wanting your reward.\p"
	.string "Here you go.$"

Zone16A_EventScript_LilyRight_Text_2:
	.string "{COLOR BLUE}Lily{COLOR DARK_GRAY}: It seems the rain has stopped.\p"
	.string "I'll be enjoying the rest of my day with\n"
	.string "a nice dip in the water.\l"
	.string "Goodbye.$"

Zone16A_EventScript_SandPile_Text_0:
	.string "There was a Pokémon in the sand pile!$"

Zone16A_EventScript_SandPile_Text_1:
	.string "It's a pile of sand.$"

Zone16A_Text_Leviathan14Intro1::
	.string "{COLOR BLUE}Lily{COLOR DARK_GRAY}: Did you know that you can smell\n"
	.string "plants better right before a storm?$"

Zone16A_Text_Leviathan14Intro2::
	.string "{COLOR BLUE}Lily{COLOR DARK_GRAY}: Oh, would you look at that.\p"
	.string "No wonder I could smell the flowers so\n"
	.string "well!\p"
	.string "Don't you know the rain just makes my\n"
	.string "flowers stronger?$"

Zone16A_Text_Leviathan14Defeat::
	.string "Woe is me…$"
