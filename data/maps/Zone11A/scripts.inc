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
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone11A_EventScript_LeviathanIntro_6
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone11A_EventScript_LeviathanIntro_6
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


Zone11A_EventScript_BuyRuin::
	lock
	faceplayer
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone11A_EventScript_BuyRuin_4
Zone11A_EventScript_BuyRuin_3:
	showmoneybox 0, 0, 0
	msgbox Zone11A_EventScript_BuyRuin_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone11A_EventScript_BuyRuin_7
	checkmoney 4000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Zone11A_EventScript_BuyRuin_10
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone11A_EventScript_BuyRuin_14
	call EventScript_NuzlockeVerifyGift
	removemoney 4000
	updatemoneybox
	msgbox Zone11A_EventScript_BuyRuin_Text_5
	closemessage
	hidemoneybox
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone11A_EventScript_BuyRuin_17
	msgbox Zone11A_EventScript_BuyRuin_Text_7, MSGBOX_DEFAULT
	multichoice2 21, 0, Zone11A_Text_RuinMultichoice, TRUE
	switch VAR_RESULT
	case 0, Zone11A_EventScript_BuyRuin_28
	case 1, Zone11A_EventScript_BuyRuin_29
	case 2, Zone11A_EventScript_BuyRuin_30
	case 3, Zone11A_EventScript_BuyRuin_31
Zone11A_EventScript_BuyRuin_16:
	givemon VAR_TEMP_1, 20, ITEM_NONE
	setmonmetlocation VAR_TEMP_2, 246
	bufferspeciesname 0, VAR_TEMP_1
	msgbox Zone11A_EventScript_BuyRuin_Text_8
	playfanfare MUS_OBTAIN_ITEM
	message Zone11A_EventScript_BuyRuin_Text_9
	waitmessage
	waitfanfare
	msgbox Zone11A_EventScript_BuyRuin_Text_10, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone11A_EventScript_BuyRuin_21
Zone11A_EventScript_BuyRuin_20:
	msgbox Zone11A_EventScript_BuyRuin_Text_11, MSGBOX_DEFAULT
Zone11A_EventScript_BuyRuin_1:
	release
	end

Zone11A_EventScript_BuyRuin_2:
	msgbox Zone11A_EventScript_BuyRuin_Text_0
	release
	end

Zone11A_EventScript_BuyRuin_4:
	goto_if_set FLAG_ZONE11A_NUZLOCKE_BOUGHT_RUIN, Zone11A_EventScript_BuyRuin_2
	goto Zone11A_EventScript_BuyRuin_3

Zone11A_EventScript_BuyRuin_7:
	closemessage
	hidemoneybox
	msgbox Zone11A_EventScript_BuyRuin_Text_2
	goto Zone11A_EventScript_BuyRuin_1

Zone11A_EventScript_BuyRuin_10:
	msgbox Zone11A_EventScript_BuyRuin_Text_3
	hidemoneybox
	goto Zone11A_EventScript_BuyRuin_1

Zone11A_EventScript_BuyRuin_14:
	msgbox Zone11A_EventScript_BuyRuin_Text_4
	hidemoneybox
	release
	end

Zone11A_EventScript_BuyRuin_17:
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone11A_EventScript_BuyRuin_24
	setvar VAR_TEMP_3, 0
	checkspeciesclause SPECIES_BALTOY
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_33
Zone11A_EventScript_BuyRuin_32:
	checkspeciesclause SPECIES_GOLETT
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_36
Zone11A_EventScript_BuyRuin_35:
	checkspeciesclause SPECIES_YAMASK
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_39
Zone11A_EventScript_BuyRuin_38:
	checkspeciesclause SPECIES_YAMASK_GALARIAN
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_42
Zone11A_EventScript_BuyRuin_41:
	compare VAR_TEMP_3, 4
	goto_if_eq Zone11A_EventScript_BuyRuin_45
Zone11A_EventScript_BuyRuin_47:
	compare VAR_TEMP_1, 0
	goto_if_eq Zone11A_EventScript_BuyRuin_48
Zone11A_EventScript_BuyRuin_23:
	setflag FLAG_ZONE11A_NUZLOCKE_BOUGHT_RUIN
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_21:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Zone11A_EventScript_BuyRuin_20

Zone11A_EventScript_BuyRuin_24:
	setvar VAR_TEMP_1, SPECIES_BALTOY
	goto Zone11A_EventScript_BuyRuin_23

Zone11A_EventScript_BuyRuin_28:
	setvar VAR_TEMP_1, SPECIES_BALTOY
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_29:
	setvar VAR_TEMP_1, SPECIES_GOLETT
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_30:
	setvar VAR_TEMP_1, SPECIES_YAMASK
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_31:
	setvar VAR_TEMP_1, SPECIES_YAMASK_GALARIAN
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_33:
	addvar VAR_TEMP_3, 1
	goto Zone11A_EventScript_BuyRuin_32

Zone11A_EventScript_BuyRuin_36:
	addvar VAR_TEMP_3, 1
	goto Zone11A_EventScript_BuyRuin_35

Zone11A_EventScript_BuyRuin_39:
	addvar VAR_TEMP_3, 1
	goto Zone11A_EventScript_BuyRuin_38

Zone11A_EventScript_BuyRuin_42:
	addvar VAR_TEMP_3, 1
	goto Zone11A_EventScript_BuyRuin_41

Zone11A_EventScript_BuyRuin_45:
	msgbox Zone11A_EventScript_BuyRuin_Text_6
	addmoney 4000
	release
	end

Zone11A_EventScript_BuyRuin_48:
	random 4
	switch VAR_RESULT
	case 0, Zone11A_EventScript_BuyRuin_51
	case 1, Zone11A_EventScript_BuyRuin_52
	case 2, Zone11A_EventScript_BuyRuin_53
	case 3, Zone11A_EventScript_BuyRuin_54
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_51:
	checkspeciesclause SPECIES_BALTOY
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_56
	setvar VAR_TEMP_1, SPECIES_BALTOY
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_52:
	checkspeciesclause SPECIES_GOLETT
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_59
	setvar VAR_TEMP_1, SPECIES_GOLETT
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_53:
	checkspeciesclause SPECIES_YAMASK
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_62
	setvar VAR_TEMP_1, SPECIES_YAMASK
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_54:
	checkspeciesclause SPECIES_YAMASK_GALARIAN
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_65
	setvar VAR_TEMP_1, SPECIES_YAMASK_GALARIAN
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_56:
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_59:
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_62:
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_65:
	goto Zone11A_EventScript_BuyRuin_47


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


Zone11A_Text_RuinMultichoice:
    .string "Baltoy$"
    .string "Golett$"
    .string "Yamask$"
    .string "Yamask-G$"
    .string "$"

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
	.string "Ah! An angry spirit!$"

Zone11A_Text_JeanetteDefeat:
	.string "I wasn't talking about you,\n"
	.string "I meant behind you!$"

Zone11A_Text_JeanettePostBattle:
	.string "It's gone now…$"

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

Zone11A_EventScript_Marion::
	trainerbattle_single TRAINER_MARION, Zone11A_Text_MarionIntro, Zone11A_Text_MarionDefeat
	msgbox Zone11A_Text_MarionPostBattle, MSGBOX_AUTOCLOSE
	end

Zone11A_Text_MarionIntro:
	.string "My psychic powers have no match!$"

Zone11A_Text_MarionDefeat:
	.string "You're too powerful…$"

Zone11A_Text_MarionPostBattle:
	.string "Your power level…\n"
	.string "It's over 9000!$"

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

Zone11A_EventScript_BuyRuin_Text_0:
	.string "I'm not offering any of these other\n"
	.string "Pokémon for sale anymore.$"

Zone11A_EventScript_BuyRuin_Text_1:
	.string "Hello, traveler! I search the world for\n"
	.string "ruins. It looks like there aren't any\l"
	.string "here, but I do have some rare Pokémon\l"
	.string "to offer you.\p"
	.string "For ¥4000, you can have one of Baltoy,\n"
	.string "Golett, Yamask, or Yamask-G!$"

Zone11A_EventScript_BuyRuin_Text_2:
	.string "I promise it won't ruin you!$"

Zone11A_EventScript_BuyRuin_Text_3:
	.string "You don't have enough money.$"

Zone11A_EventScript_BuyRuin_Text_4:
	.string "Your party is full. Clear a party slot,\n"
	.string "then come back.$"

Zone11A_EventScript_BuyRuin_Text_5:
	.string "Alrighty, I hope this won't ruin you!$"

Zone11A_EventScript_BuyRuin_Text_6:
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone11A_EventScript_BuyRuin_Text_7:
	.string "Choose which Pokémon you would like.$"

Zone11A_EventScript_BuyRuin_Text_8:
	.string "Here's your {STR_VAR_1}.$"

Zone11A_EventScript_BuyRuin_Text_9:
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone11A_EventScript_BuyRuin_Text_10:
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone11A_EventScript_BuyRuin_Text_11:
	.string "I know these Pokémon are a little\n"
	.string "spooky, but they're quite endearing\l"
	.string "after a while!$"

Zone11A_Text_Leviathan10Defeat::
	.string "Alas, not even the power of Gravity is\nstrong enough to win me a battle…$"

Zone11A_Text_Leviathan10Post::
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Unfortunately, I'm afraid the\n"
	.string "path ahead is blocked off until my\l"
	.string "experiments finish.\p"
	.string "Perhaps come back far in the future,\n"
	.string "when I've finished here.$"
