Zone11A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE11A_TM22, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE11A_MOON_STONE, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	goto_if_set FLAG_ITEM_ZONE11A_TIMER_BALL, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_9
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone11A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 11
	goto_if_gt Zone11A_EventScript_Exit_2
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone11A_EventScript_Exit_7
Zone11A_EventScript_Exit_5:
	warp MAP_ZONE11SANCTUARY, 255, 22, 7
	waitstate
Zone11A_EventScript_Exit_1:
	releaseall
	end

Zone11A_EventScript_Exit_2:
	call EventScript_WarpZone0
	goto Zone11A_EventScript_Exit_1

Zone11A_EventScript_Exit_6:
	goto EventScript_BrutalExitNotSatisfied
	goto Zone11A_EventScript_Exit_5

Zone11A_EventScript_Exit_7:
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_ne Zone11A_EventScript_Exit_6
	goto Zone11A_EventScript_Exit_5


Zone11A_EventScript_LeviathanIntro::
	lockall
	applymovement 6, Common_Movement_FaceLeft
	waitmovement 0
	applymovement 6, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement 6, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 6, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 6, Common_Movement_WalkLeft
	waitmovement 0
	msgbox Zone11A_EventScript_LeviathanIntro_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone11A_EventScript_LeviathanIntro_2
	fadeoutbgm 1
	msgbox Zone11A_EventScript_LeviathanIntro_Text_2
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	setvar VAR_MUGSHOT_ID, MUGSHOT_NEWTON
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone11A_EventScript_LeviathanIntro_6
	trainerbattle_no_intro TRAINER_NEWTON_LEVIATHAN_10, Zone11A_Text_Leviathan10Defeat
Zone11A_EventScript_LeviathanIntro_5:
	applymovement 6, Common_Movement_FaceLeft
	waitmovement 0
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone11A_EventScript_LeviathanIntro_Text_3, MSGBOX_DEFAULT
	giveitem ITEM_WIDE_LENS
	msgbox Zone11A_Text_Leviathan10Post
	setflag FLAG_BEAT_LEVIATHAN_10
	setvar VAR_ZONE_11_STATE, 1
Zone11A_EventScript_LeviathanIntro_1:
	releaseall
	end

Zone11A_EventScript_LeviathanIntro_2:
	msgbox Zone11A_EventScript_LeviathanIntro_Text_1
	applymovement 6, Common_Movement_WalkRight
	waitmovement 0
	applymovement 6, Common_Movement_WalkRight
	waitmovement 0
	applymovement 6, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	goto Zone11A_EventScript_LeviathanIntro_1

Zone11A_EventScript_LeviathanIntro_6:
	trainerbattle_no_intro TRAINER_NEWTON_LEVIATHAN_10_BRUTAL, Zone11A_Text_Leviathan10Defeat
	goto Zone11A_EventScript_LeviathanIntro_5


Zone11A_EventScript_Leviathan::
	lock
	faceplayer
	msgbox Zone11A_Text_Leviathan10Post
	release
	end


Zone11A_EventScript_TM22::
	lock
	goto_if_set FLAG_ITEM_ZONE11A_TM22, Zone11A_EventScript_TM22_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE11A_TM22
	addobject VAR_LAST_TALKED
	finditem ITEM_TM22, 1
	release
	end

Zone11A_EventScript_TM22_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone11A_EventScript_MoonStone::
	lock
	goto_if_set FLAG_ITEM_ZONE11A_MOON_STONE, Zone11A_EventScript_MoonStone_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE11A_MOON_STONE
	addobject VAR_LAST_TALKED
	finditem ITEM_MOON_STONE
	release
	end

Zone11A_EventScript_MoonStone_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone11A_EventScript_TimerBall::
	lock
	goto_if_set FLAG_ITEM_ZONE11A_TIMER_BALL, Zone11A_EventScript_TimerBall_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE11A_TIMER_BALL
	addobject VAR_LAST_TALKED
	finditem ITEM_TIMER_BALL, 1
	release
	end

Zone11A_EventScript_TimerBall_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone11A_EventScript_CelebiIntro::
	lockall
	goto Zone11A_EventScript_NoCelebi
	releaseall
	end

Zone11A_EventScript_NoCelebi:
	msgbox Zone11A_Text_SacredTree, MSGBOX_AUTOCLOSE
	releaseall
	end

Zone11A_Text_SacredTree:
	.string "This appears to be a sacred tree.$"

Zone11A_EventScript_Jeanette::
	trainerbattle_single TRAINER_JEANETTE, Zone11A_Text_JeanetteIntro, Zone11A_Text_JeanetteDefeat
	msgbox Zone11A_Text_JeanettePostBattle, MSGBOX_AUTOCLOSE
	end

Zone11A_Text_JeanetteIntro:
	.string "You snuck up on me!$"

Zone11A_Text_JeanetteDefeat:
	.string "What a shocker!$"

Zone11A_Text_JeanettePostBattle:
	.string "You had the element of surprise.$"

Zone11A_EventScript_Regina::
	trainerbattle_single TRAINER_REGINA, Zone11A_Text_ReginaIntro, Zone11A_Text_ReginaDefeat
	msgbox Zone11A_Text_ReginaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone11A_Text_ReginaIntro:
	.string "Do you hear the call?$"

Zone11A_Text_ReginaDefeat:
	.string "The spirits… I can hear their voices!$"

Zone11A_Text_ReginaPostBattle:
	.string "It might just be the wind whistling,\n"
	.string "but I'm sure the voices are from the\l"
	.string "beyond.$"

Zone11A_EventScript_EmmaandLeo::
	trainerbattle_double TRAINER_EMMA_AND_LEO, Zone11A_Text_EmmaandLeoIntro, Zone11A_Text_EmmaandLeoDefeat, gText_NotEnoughMons
	msgbox Zone11A_Text_EmmaandLeoPostBattle, MSGBOX_DEFAULT
	release
	end

Zone11A_Text_EmmaandLeoIntro:
	.string "Leo: I'm gonna show my girlfriend\n"
	.string "that I'm brave!\p"
	.string "Emma: Ugh. Enforcing gender norms,\n"
	.string "am I right?$"

Zone11A_Text_EmmaandLeoDefeat:
	.string "Leo: My toxic masculinity, ruined!\p"
	.string "Emma: Maybe I need a new SO…$"

Zone11A_Text_EmmaandLeoPostBattle:
	.string "Leo: Don't talk to my girlfriend!\p"
	.string "Emma: Pff.$"

Zone11A_EventScript_Joel::
	trainerbattle_single TRAINER_JOEL, Zone11A_Text_JoelIntro, Zone11A_Text_JoelDefeat
	msgbox Zone11A_Text_JoelPostBattle, MSGBOX_AUTOCLOSE
	end

Zone11A_Text_JoelIntro:
	.string "Ugh, another forest maze?\n"
	.string "At least this one doesn't have warps…$"

Zone11A_Text_JoelDefeat:
	.string "Another defeat?\n"
	.string "Luck is just not on my side today…$"

Zone11A_Text_JoelPostBattle:
	.string "I'll see you another day.$"

Zone11A_EventScript_LeviathanIntro_Text_0:
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Excuse me, I realize this is\n"
	.string "rather sudden, but would you like to be\l"
	.string "a part of my experiment?$"

Zone11A_EventScript_LeviathanIntro_Text_1:
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: I see.$"

Zone11A_EventScript_LeviathanIntro_Text_2:
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Thank you! The experiment name\n"
	.string "is: Gravity and its Pokémon\l"
	.string "battle-winning properties!$"

Zone11A_EventScript_LeviathanIntro_Text_3:
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Gravity is not the only way to\n"
	.string "utilize lower accuracy moves\l"
	.string "consistently.\p"
	.string "I'd like you to have this Wide Lens.$"

Zone11A_Text_Leviathan10Defeat::
	.string "Alas, not even the power of Gravity is\nstrong enough to win me a battle…$"

Zone11A_Text_Leviathan10Post::
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Unfortunately, I'm afraid the\n"
	.string "path ahead is blocked off until my\l"
	.string "experiments finish.\p"
	.string "Perhaps come back far in the future,\n"
	.string "when I've finished here.$"
