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


Zone16A_EventScript_Michael::
	lock
	compare VAR_ZONE_16_STATE, 0
	goto_if_ne Zone16A_EventScript_Michael_2
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 66
	goto_if_eq Zone16A_EventScript_Michael_5
Zone16A_EventScript_Michael_4:
	goto Zone16A_EventScript_InitiateKatieMichaelBattles
	return

Zone16A_EventScript_Michael_2:
	faceplayer
	msgbox Zone16A_EventScript_Michael_Text_0
	release
	end

Zone16A_EventScript_Michael_5:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone16A_EventScript_Michael_4


Zone16A_EventScript_Katie::
	lock
	compare VAR_ZONE_16_STATE, 0
	goto_if_ne Zone16A_EventScript_Katie_2
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 69
	goto_if_eq Zone16A_EventScript_Katie_5
Zone16A_EventScript_Katie_4:
	goto Zone16A_EventScript_InitiateKatieMichaelBattles
	return

Zone16A_EventScript_Katie_2:
	faceplayer
	msgbox Zone16A_EventScript_Katie_Text_0
	release
	end

Zone16A_EventScript_Katie_5:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone16A_EventScript_Katie_4


Zone16A_EventScript_InitiateKatieMichaelBattles::
	msgbox Zone16A_EventScript_InitiateKatieMichaelBattles_Text_0
	msgbox Zone16A_EventScript_InitiateKatieMichaelBattles_Text_1
	msgbox Zone16A_EventScript_Michael_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone16A_EventScript_InitiateKatieMichaelBattles_2
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone16A_EventScript_InitiateKatieMichaelBattles_Text_3
	trainerbattle_no_intro TRAINER_KATIE, Zone16A_EventScript_InitiateKatieMichaelBattles_Text_4
	goto_if_unset FLAG_BRUTAL_MODE_ON, Zone16A_EventScript_InitiateKatieMichaelBattles_5
Zone16A_EventScript_InitiateKatieMichaelBattles_4:
	msgbox Zone16A_EventScript_InitiateKatieMichaelBattles_Text_5
	trainerbattle_no_intro TRAINER_MICHAEL, Zone16A_EventScript_InitiateKatieMichaelBattles_Text_6
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone16A_EventScript_InitiateKatieMichaelBattles_Text_7
	msgbox Zone16A_EventScript_InitiateKatieMichaelBattles_Text_8
	setvar VAR_ZONE_16_STATE, 1
	release
	end

Zone16A_EventScript_InitiateKatieMichaelBattles_2:
	msgbox Zone16A_EventScript_InitiateKatieMichaelBattles_Text_2
	release
	end

Zone16A_EventScript_InitiateKatieMichaelBattles_5:
	special HealPlayerParty
	goto Zone16A_EventScript_InitiateKatieMichaelBattles_4


Zone16A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 16
	goto_if_gt Zone16A_EventScript_Exit_2
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone16A_EventScript_Exit_7
Zone16A_EventScript_Exit_5:
	warp MAP_ZONE16SANCTUARY, 255, 22, 7
	waitstate
Zone16A_EventScript_Exit_1:
	releaseall
	end

Zone16A_EventScript_Exit_2:
	call EventScript_WarpZone0
	goto Zone16A_EventScript_Exit_1

Zone16A_EventScript_Exit_6:
	goto EventScript_BrutalExitNotSatisfied
	goto Zone16A_EventScript_Exit_5

Zone16A_EventScript_Exit_7:
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_ne Zone16A_EventScript_Exit_6
	goto Zone16A_EventScript_Exit_5


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
	.string "The sea is teeming with life.\n"
	.string "Don't litter!$"

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
	.string "Have you ever been to a\n"
	.string "Lazy River?$"

Zone16A_Text_TanishaDefeat:
	.string "It's the best place for Tubers!$"

Zone16A_Text_TanishaPostBattle:
	.string "Lazy River is the best!$"

Zone16A_EventScript_Robert::
	trainerbattle_single TRAINER_ROBERT, Zone16A_Text_RobertIntro, Zone16A_Text_RobertDefeat
	msgbox Zone16A_Text_RobertPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_RobertIntro:
	.string "Have you ever been to a\n"
	.string "Lazy River?$"

Zone16A_Text_RobertDefeat:
	.string "It's the best place for Tubers!$"

Zone16A_Text_RobertPostBattle:
	.string "Lazy River is the best!$"

Zone16A_EventScript_Chris::
	trainerbattle_single TRAINER_CHRIS, Zone16A_Text_ChrisIntro, Zone16A_Text_ChrisDefeat
	msgbox Zone16A_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_ChrisIntro:
	.string "Have you ever been to a\n"
	.string "Lazy River?$"

Zone16A_Text_ChrisDefeat:
	.string "It's the best place for Tubers!$"

Zone16A_Text_ChrisPostBattle:
	.string "Lazy River is the best!$"

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

Zone16A_EventScript_Michael_Text_0:
	.string "{COLOR BLUE}Michael{COLOR DARK_GRAY}:$"

Zone16A_EventScript_Katie_Text_0:
	.string "{COLOR BLUE}Katie{COLOR DARK_GRAY}:$"

Zone16A_EventScript_InitiateKatieMichaelBattles_Text_0:
	.string "{COLOR BLUE}Michael{COLOR DARK_GRAY}: Hello! We're the dynamic\n"
	.string "swimming duo!$"

Zone16A_EventScript_InitiateKatieMichaelBattles_Text_1:
	.string "{COLOR BLUE}Katie{COLOR DARK_GRAY}: The thing is, my friend to the\n"
	.string "south of here is looking for a trainer\l"
	.string "skilled enough to take care of a\l"
	.string "Lapras.$"

Zone16A_EventScript_InitiateKatieMichaelBattles_Text_2:
	.string "{COLOR BLUE}Katie{COLOR DARK_GRAY}: Oh! How cowardly.$"

Zone16A_EventScript_InitiateKatieMichaelBattles_Text_3:
	.string "{COLOR BLUE}Katie{COLOR DARK_GRAY}: Well then, I'm up first! Better\n"
	.string "hope luck is on your side!$"

Zone16A_EventScript_InitiateKatieMichaelBattles_Text_4:
	.string "Katie: The critical hits didn't come\n"
	.string "through!$"

Zone16A_EventScript_InitiateKatieMichaelBattles_Text_5:
	.string "{COLOR BLUE}Michael{COLOR DARK_GRAY}: Next up is me! I won't need any\n"
	.string "crits to beat you!$"

Zone16A_EventScript_InitiateKatieMichaelBattles_Text_6:
	.string "Michael: You won even without landing a\n"
	.string "critical hit!$"

Zone16A_EventScript_InitiateKatieMichaelBattles_Text_7:
	.string "{COLOR BLUE}Katie{COLOR DARK_GRAY}: You got us! We'll let you cross\n"
	.string "the river.$"

Zone16A_EventScript_InitiateKatieMichaelBattles_Text_8:
	.string "{COLOR BLUE}Michael{COLOR DARK_GRAY}: We'll even give you this item,\n"
	.string "too!$"
