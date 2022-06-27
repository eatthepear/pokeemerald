Zone5A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE5A_QUICK_BALL, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE5A_TM03, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_5
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone5A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 5
	goto_if_gt Zone5A_EventScript_Exit_2
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone5A_EventScript_Exit_7
Zone5A_EventScript_Exit_5:
	clearflag FLAG_IN_ZONE_NOT_SANCTUARY
	warp MAP_ZONE5SANCTUARY, 255, 22, 7
Zone5A_EventScript_Exit_1:
	releaseall
	end

Zone5A_EventScript_Exit_2:
	clearflag FLAG_IN_ZONE_NOT_SANCTUARY
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 31, 32
	waitstate
	goto Zone5A_EventScript_Exit_1

Zone5A_EventScript_Exit_6:
	goto EventScript_BrutalExitNotSatisfied
	goto Zone5A_EventScript_Exit_5

Zone5A_EventScript_Exit_7:
	checktrainerflag TRAINER_ANNE_AND_JUNE
	goto_if 0, Zone5A_EventScript_Exit_6
	checktrainerflag TRAINER_GILBERT
	goto_if 0, Zone5A_EventScript_Exit_6
	goto Zone5A_EventScript_Exit_5


Zone5A_EventScript_LeviathanBattle::
	lockall
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 29
	goto_if_eq Zone5A_EventScript_LeviathanBattle_2
	compare VAR_TEMP_0, 27
	goto_if_eq Zone5A_EventScript_LeviathanBattle_3
Zone5A_EventScript_LeviathanBattle_1:
	msgbox Zone5A_EventScript_LeviathanBattle_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone5A_EventScript_LeviathanBattle_7
	msgbox Zone5A_EventScript_LeviathanBattle_Text_2
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	trainerbattle_no_intro TRAINER_KEVIN, Zone5A_EventScript_LeviathanBattle_Text_3
	applymovement 10, Common_Movement_FaceRight
	waitmovement 0
	msgbox Zone5A_EventScript_LeviathanBattle_Text_4
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone5A_EventScript_LeviathanBattle_Text_5
	fadeoutbgm 1
	applymovement 4, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox Zone5A_EventScript_LeviathanBattle_Text_6
	applymovement 4, Common_Movement_WalkDown
	waitmovement 0
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	applymovement 10, Common_Movement_FaceDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox Zone5A_EventScript_LeviathanBattle_Text_7
	goto_if_unset FLAG_BRUTAL_MODE_ON, Zone5A_EventScript_LeviathanBattle_10
Zone5A_EventScript_LeviathanBattle_9:
	setvar VAR_MUGSHOT_ID, MUGSHOT_DECLAN
	trainerbattle_no_intro TRAINER_DECLAN_LEVIATHAN_5, Zone5A_Text_Leviathan5Defeat
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	applymovement 10, Common_Movement_WalkRight
	waitmovement 0
	applymovement 10, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone5A_EventScript_LeviathanBattle_Text_8
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone5A_EventScript_LeviathanBattle_Text_9
	delay 64
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone5A_EventScript_LeviathanBattle_Text_10
	giveitem ITEM_TM04, 1
	closemessage
	msgbox Zone5A_EventScript_LeviathanBattle_Text_11
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone5A_EventScript_LeviathanBattle_Text_12
	fadescreen FADE_TO_BLACK
	removeobject 4
	setflag FLAG_BEAT_LEVIATHAN_5
	removeobject 10
	fadescreen FADE_FROM_BLACK
	setvar VAR_ZONE_5_STATE, 1
	release
	end

Zone5A_EventScript_LeviathanBattle_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone5A_EventScript_LeviathanBattle_1

Zone5A_EventScript_LeviathanBattle_3:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone5A_EventScript_LeviathanBattle_1

Zone5A_EventScript_LeviathanBattle_7:
	msgbox Zone5A_EventScript_LeviathanBattle_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

Zone5A_EventScript_LeviathanBattle_10:
	special HealPlayerParty
	goto Zone5A_EventScript_LeviathanBattle_9


Zone5A_EventScript_Breeder::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_ZONE0C_EEVEE, Zone5A_EventScript_Breeder_2
	msgbox Zone5A_EventScript_Breeder_Text_1
Zone5A_EventScript_Breeder_5:
	compare VAR_TEMP_0, 1
	goto_if_ne Zone5A_EventScript_Breeder_6
	msgbox Zone5A_EventScript_Breeder_Text_11
	goto_if_unset FLAG_BRUTAL_MODE_ON, Zone5A_EventScript_Breeder_9
Zone5A_EventScript_Breeder_8:
	delay 16
	msgbox Zone5A_EventScript_Breeder_Text_13
	fadescreen FADE_TO_BLACK
	removeobject 11
	setflag FLAG_RECEIVED_ZONE5A_EEVEE_EVO_ITEM
	fadescreen FADE_FROM_BLACK
	release
	return

Zone5A_EventScript_Breeder_2:
	msgbox Zone5A_EventScript_Breeder_Text_0
	release
	end

Zone5A_EventScript_Breeder_6:
	msgbox Zone5A_EventScript_Breeder_Text_2, MSGBOX_DEFAULT
	scrollingmultichoice 1, 0, 0, 5, 0
	switch VAR_RESULT
	case 0, Zone5A_EventScript_Breeder_12
	case 1, Zone5A_EventScript_Breeder_13
	case 2, Zone5A_EventScript_Breeder_14
	case 3, Zone5A_EventScript_Breeder_15
	case 4, Zone5A_EventScript_Breeder_16
	case 5, Zone5A_EventScript_Breeder_17
	case 6, Zone5A_EventScript_Breeder_18
	case 7, Zone5A_EventScript_Breeder_19
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_9:
	msgbox Zone5A_EventScript_Breeder_Text_12
	goto Zone5A_EventScript_Breeder_8

Zone5A_EventScript_Breeder_12:
	msgbox Zone5A_EventScript_Breeder_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone5A_EventScript_Breeder_20
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_13:
	msgbox Zone5A_EventScript_Breeder_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone5A_EventScript_Breeder_22
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_14:
	msgbox Zone5A_EventScript_Breeder_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone5A_EventScript_Breeder_24
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_15:
	msgbox Zone5A_EventScript_Breeder_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone5A_EventScript_Breeder_26
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_16:
	msgbox Zone5A_EventScript_Breeder_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone5A_EventScript_Breeder_28
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_17:
	msgbox Zone5A_EventScript_Breeder_Text_8, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone5A_EventScript_Breeder_30
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_18:
	msgbox Zone5A_EventScript_Breeder_Text_9, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone5A_EventScript_Breeder_32
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_19:
	msgbox Zone5A_EventScript_Breeder_Text_10, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone5A_EventScript_Breeder_34
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_20:
	msgbox Zone5A_Text_HereGem
	giveitem ITEM_WATER_GEM
	setvar VAR_TEMP_0, 1
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_22:
	msgbox Zone5A_Text_HereGem
	giveitem ITEM_ELECTRIC_GEM
	setvar VAR_TEMP_0, 1
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_24:
	msgbox Zone5A_Text_HereGem
	giveitem ITEM_FIRE_GEM
	setvar VAR_TEMP_0, 1
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_26:
	msgbox Zone5A_Text_HereGem
	giveitem ITEM_PSYCHIC_GEM
	setvar VAR_TEMP_0, 1
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_28:
	msgbox Zone5A_Text_HereGem
	giveitem ITEM_DARK_GEM
	setvar VAR_TEMP_0, 1
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_30:
	msgbox Zone5A_Text_HereGem
	giveitem ITEM_GRASS_GEM
	setvar VAR_TEMP_0, 1
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_32:
	msgbox Zone5A_Text_HereGem
	giveitem ITEM_ICE_GEM
	setvar VAR_TEMP_0, 1
	goto Zone5A_EventScript_Breeder_5

Zone5A_EventScript_Breeder_34:
	msgbox Zone5A_Text_HereGem
	giveitem ITEM_FAIRY_GEM
	setvar VAR_TEMP_0, 1
	goto Zone5A_EventScript_Breeder_5


Zone5A_EventScript_ItemQuickBall::
	lock
	goto_if_set FLAG_ITEM_ZONE5A_QUICK_BALL, Zone5A_EventScript_ItemQuickBall_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE5A_QUICK_BALL
	addobject VAR_LAST_TALKED
	finditem ITEM_QUICK_BALL, 1
	release
	end

Zone5A_EventScript_ItemQuickBall_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone5A_EventScript_ItemTM03::
	lock
	goto_if_set FLAG_ITEM_ZONE5A_TM03, Zone5A_EventScript_ItemTM03_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE5A_TM03
	addobject VAR_LAST_TALKED
	finditem ITEM_TM03
	release
	end

Zone5A_EventScript_ItemTM03_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone5A_EventScript_AnneAndJune::
	trainerbattle_double TRAINER_ANNE_AND_JUNE, Zone5A_Text_AnneAndJuneIntro, Zone5A_Text_AnneAndJuneDefeat, gText_NotEnoughMons
	msgbox Zone5A_Text_AnneAndJunePostBattle, MSGBOX_DEFAULT
	release
	end

Zone5A_Text_AnneAndJuneIntro:
	.string "Anne: We're teammates!\p"
	.string "June: No, I'm the Senior and\n"
	.string "you're the Junior!$"

Zone5A_Text_AnneAndJuneDefeat:
	.string "Anne: I guess you were right…\p"
	.string "June: We still lost though…$"

Zone5A_Text_AnneAndJunePostBattle:
	.string "Anne: Maybe we needed better…\p"
	.string "June: Coordination?\p"
	.string "Anne: Yeah, exactly that!$"

Zone5A_EventScript_Gilbert::
	trainerbattle_single TRAINER_GILBERT, Zone5A_Text_GilbertIntro, Zone5A_Text_GilbertDefeat
	msgbox Zone5A_Text_GilbertPostBattle, MSGBOX_AUTOCLOSE
	end

Zone5A_Text_GilbertIntro:
	.string "I've fished up a wild Trainer!$"

Zone5A_Text_GilbertDefeat:
	.string "You're too tough to take down!$"

Zone5A_Text_GilbertPostBattle:
	.string "I can't seem to catch a break!\p"
	.string "Get it? Catch?$"

Zone5A_EventScript_Rebecca::
	trainerbattle_single TRAINER_REBECCA, Zone5A_Text_RebeccaIntro, Zone5A_Text_RebeccaDefeat
	msgbox Zone5A_Text_RebeccaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone5A_Text_RebeccaIntro:
	.string "In order to pass, you have to beat\n"
	.string "the Fearsome Foursome!$"

Zone5A_Text_RebeccaDefeat:
	.string "First of the Fearsome Foursome down!$"

Zone5A_Text_RebeccaPostBattle:
	.string "Defeat leaves me in disgrace…$"

Zone5A_EventScript_Caitlyn::
	trainerbattle_single TRAINER_CAITLYN, Zone5A_Text_CaitlynIntro, Zone5A_Text_CaitlynDefeat
	msgbox Zone5A_Text_CaitlynPostBattle, MSGBOX_AUTOCLOSE
	end

Zone5A_Text_CaitlynIntro:
	.string "The second of the Fearsome Foursome!\n"
	.string "That's me!$"

Zone5A_Text_CaitlynDefeat:
	.string "Second of the Fearsome Foursome down!$"

Zone5A_Text_CaitlynPostBattle:
	.string "They say second is the best…$"

Zone5A_EventScript_Ryan::
	trainerbattle_single TRAINER_RYAN, Zone5A_Text_RyanIntro, Zone5A_Text_RyanDefeat
	msgbox Zone5A_Text_RyanPostBattle, MSGBOX_AUTOCLOSE
	end

Zone5A_Text_RyanIntro:
	.string "Fearsome Foursome, number three!\n"
	.string "Be careful, I'm strong!$"

Zone5A_Text_RyanDefeat:
	.string "Third of the Fearsome Foursome down!$"

Zone5A_Text_RyanPostBattle:
	.string "There's only one left. Don't be afraid!$"

Zone5A_EventScript_Sign::
	msgbox Zone5A_Text_Sign, MSGBOX_SIGN
	end

Zone5A_Text_Sign:
	.string "Trainer Tips!\p"
	.string "You can sort items in the Bag\n"
	.string "using {START_BUTTON}.$"

Zone5A_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: So… if it isn't the trainer who's\n"
	.string "been beating all my fellow club\l"
	.string "members.\p"
	.string "Well then. Would you like to challenge\n"
	.string "the final member of the Fearsome\l"
	.string "Foursome?$"

Zone5A_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Oh, I see how it is. Scared, huh?$"

Zone5A_EventScript_LeviathanBattle_Text_2:
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Finally! My Bugs are writhing\n"
	.string "with excitement!$"

Zone5A_EventScript_LeviathanBattle_Text_3:
	.string "It can't be!$"

Zone5A_EventScript_LeviathanBattle_Text_4:
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Declan, man, if only you had\n"
	.string "joined our club!\p"
	.string "We could have been the Fearsome\n"
	.string "Fivesome!$"

Zone5A_EventScript_LeviathanBattle_Text_5:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: …\n"
	.string "…\l"
	.string "I told you already, Kevin.\l"
	.string "I don't want to be part of that\l"
	.string "nonsense Fearsome Foursome club…\l"
	.string "…\l"
	.string "My club is the only club for me…$"

Zone5A_EventScript_LeviathanBattle_Text_6:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Ah! Another person! Hey you!$"

Zone5A_EventScript_LeviathanBattle_Text_7:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Want to join my club? The name:\n"
	.string "The Bug Maniacs!\p"
	.string "…\n"
	.string "…\l"
	.string "You don't?!\p"
	.string "You'll change your mind after {COLOR BLUE}Leviathan\n"
	.string "Declan{COLOR DARK_GRAY} beats you with his fabulous Bug\l"
	.string "Pokémon!$"

Zone5A_EventScript_LeviathanBattle_Text_8:
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Look, Declan, dude, I get it.\p"
	.string "You don't want to join the Fearsome\n"
	.string "Fivesome.\p"
	.string "Maybe it doesn't have the right ring or\n"
	.string "something.\p"
	.string "But at least let's train together. Maybe\n"
	.string "we can beat this trainer next time.$"

Zone5A_EventScript_LeviathanBattle_Text_9:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Fine. You're right, you're right.$"

Zone5A_EventScript_LeviathanBattle_Text_10:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Oh! Right. I forgot you're here.\p"
	.string "…\n"
	.string "…\l"
	.string "…\l"
	.string "A reward?\l"
	.string "…\l"
	.string "Look, I don't go around giving out sweet\l"
	.string "rewards to non-club members.\l"
	.string "…\l"
	.string "…\p"
	.string "All right, fine. Take this TM and leave\n"
	.string "me alone!$"

Zone5A_EventScript_LeviathanBattle_Text_11:
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Sheesh. Harsh, much?$"

Zone5A_EventScript_LeviathanBattle_Text_12:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Oh, shut it. Let's just get out\n"
	.string "of here.$"

Zone5A_EventScript_Breeder_Text_0:
	.string "Hello, {PLAYER}!\n"
	.string "I work at the Pokémon Day-Care.\p"
	.string "There's a special Eevee giveaway at the\n"
	.string "Day-Care, so go check that out!$"

Zone5A_EventScript_Breeder_Text_1:
	.string "Hello, {PLAYER}!\n"
	.string "I work at the Pokémon Day-Care.\p"
	.string "We've been studying how Eevee evolves\n"
	.string "differently based on which elemental\l"
	.string "Gem it holds when it levels up.$"

Zone5A_EventScript_Breeder_Text_2:
	.string "What's your favorite evolution of\n"
	.string "Eevee?$"

Zone5A_EventScript_Breeder_Text_3:
	.string "Oh, so you like Vaporeon?$"

Zone5A_EventScript_Breeder_Text_4:
	.string "Oh, so you like Jolteon?$"

Zone5A_EventScript_Breeder_Text_5:
	.string "Oh, so you like Flareon?$"

Zone5A_EventScript_Breeder_Text_6:
	.string "Oh, so you like Espeon?$"

Zone5A_EventScript_Breeder_Text_7:
	.string "Oh, so you like Umbreon?$"

Zone5A_EventScript_Breeder_Text_8:
	.string "Oh, so you like Leafeon?$"

Zone5A_EventScript_Breeder_Text_9:
	.string "Oh, so you like Glaceon?$"

Zone5A_EventScript_Breeder_Text_10:
	.string "Oh, so you like Sylveon?$"

Zone5A_EventScript_Breeder_Text_11:
	.string "I hope you can put that Gem to good\n"
	.string "use.$"

Zone5A_EventScript_Breeder_Text_12:
	.string "If you want to evolve your Eevee into a\n"
	.string "different evolution, you can always\l"
	.string "find Gems by smashing rocks with a\l"
	.string "Sledgehammer!$"

Zone5A_EventScript_Breeder_Text_13:
	.string "Well, I'm off to help other trainers.\p"
	.string "See you!$"

Zone5A_Text_Leviathan5Defeat::
	.string "But how?! My Bugs!$"

Zone5A_Text_HereGem::
	.string "Then I suppose this would be of good\n"
	.string "use to you!$"
