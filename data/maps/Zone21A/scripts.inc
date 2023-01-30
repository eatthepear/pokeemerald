Zone21A_MapScripts::
	.byte 0

Zone21A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 21
	goto_if_gt EventScript_WarpZone0
	call_if_set FLAG_SETTINGS_BRUTAL, Zone21A_EventScript_CheckBrutal
	warp MAP_ZONE21SANCTUARY, 255, 22, 7
	releaseall
	end

Zone21A_EventScript_CheckBrutal:
	goto_if_not_defeated TRAINER_HOWARD, Zone21A_EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_ELOISE, Zone21A_EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_ALLY_AND_EMMY, Zone21A_EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_AMIR, Zone21A_EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_GETHIN, Zone21A_EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_BERNARD, Zone21A_EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_ELLIE, Zone21A_EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_RUSTY, Zone21A_EventScript_BrutalExitNotSatisfied
	return

Zone21A_EventScript_BrutalExitNotSatisfied:
	@ msgbox gText_BrutalExitNotSatisfied, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	releaseall
	end

Zone21A_EventScript_SecretWarp::
	lockall
	compare VAR_ZONE_21_STATE, 1
	goto_if_eq Zone21A_EventScript_EndWarp
	warp MAP_ZONE21D, 255, 2, 28
	releaseall
	end

Zone21A_EventScript_EndWarp:
	releaseall
	end

Zone21A_EventScript_SetState1::
	lockall
	setvar VAR_ZONE_21_STATE, 1
	releaseall
	end

Zone21A_EventScript_SetState0::
	lockall
	setvar VAR_ZONE_21_STATE, 0
	releaseall
	end

Zone21A_EventScript_BattleGirl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ZONE21A_TM29, Zone21A_EventScript_ReceivedTM29
	msgbox Zone21A_Text_GiveTM29, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM29
	setflag FLAG_RECEIVED_ZONE21A_TM29
	release
	end

Zone21A_Text_GiveTM29:
	.string "I work hard, so I can break even\n"
	.string "the toughest of opponents!\p"
	.string "Take this, so your Pokémon can\n"
	.string "break even the toughest of screens!$"

Zone21A_EventScript_ReceivedTM29:
	msgbox Zone21A_Text_ReceivedTM29, MSGBOX_AUTOCLOSE
	release
	end

Zone21A_Text_ReceivedTM29:
	.string "Leave me be, I'm busy training\n"
	.string "for my next challenge!$"

Zone21A_EventScript_Howard::
	trainerbattle_single TRAINER_HOWARD, Zone21A_Text_HowardIntro, Zone21A_Text_HowardDefeat
	msgbox Zone21A_Text_HowardPostBattle, MSGBOX_AUTOCLOSE
	end

Zone21A_Text_HowardIntro:
	.string "Are you into stocks?\n"
	.string "They're all the rage these days!$"

Zone21A_Text_HowardDefeat:
	.string "Stonks!$"

Zone21A_Text_HowardPostBattle:
	.string "Stocks are the key to get rich.\n"
	.string "Or inheriting money. That too.$"

Zone21A_EventScript_Eloise::
	trainerbattle_single TRAINER_ELOISE, Zone21A_Text_EloiseIntro, Zone21A_Text_EloiseDefeat
	msgbox Zone21A_Text_EloisePostBattle, MSGBOX_AUTOCLOSE
	end

Zone21A_Text_EloiseIntro:
	.string "My lovely Pokémon are ready to\n"
	.string "battle!$"

Zone21A_Text_EloiseDefeat:
	.string "It seems your Pokémon were better\n"
	.string "prepared!$"

Zone21A_Text_EloisePostBattle:
	.string "Next time, I'll get you!$"

Zone21A_EventScript_AllyAndEmmy::
	trainerbattle_double TRAINER_ALLY_AND_EMMY, Zone21A_Text_AllyAndEmmyIntro, Zone21A_Text_AllyAndEmmyDefeat, gText_NotEnoughMons
	msgbox Zone21A_Text_AllyAndEmmyPostBattle, MSGBOX_DEFAULT
	release
	end

Zone21A_Text_AllyAndEmmyIntro:
	.string "Ally: Emmy, you're my favorite!\p"
	.string "Emmy: No, you're my favorite!$"

Zone21A_Text_AllyAndEmmyDefeat:
	.string "Ally: Aw, Emmy, I messed up!\p"
	.string "Emmy: That's ok, I did too!$"

Zone21A_Text_AllyAndEmmyPostBattle:
	.string "Ally: We'll work harder next\n"
	.string "time, right, Emmy?\p"
	.string "Emmy: That's right!$"

Zone21A_EventScript_Amir::
	trainerbattle_single TRAINER_AMIR, Zone21A_Text_AmirIntro, Zone21A_Text_AmirDefeat
	msgbox Zone21A_Text_AmirPostBattle, MSGBOX_AUTOCLOSE
	end

Zone21A_Text_AmirIntro:
	.string "When I was young, I always dreamed\n"
	.string "of being a farmer.$"

Zone21A_Text_AmirDefeat:
	.string "Now I just like rare Pokémon!$"

Zone21A_Text_AmirPostBattle:
	.string "Although, I do think Herdier is neat...$"

Zone21A_EventScript_Gethin::
	trainerbattle_single TRAINER_GETHIN, Zone21A_Text_GethinIntro, Zone21A_Text_GethinDefeat
	msgbox Zone21A_Text_GethinPostBattle, MSGBOX_AUTOCLOSE
	end

Zone21A_Text_GethinIntro:
	.string "I sense... a secret!$"

Zone21A_Text_GethinDefeat:
	.string "Hidden away...$"

Zone21A_Text_GethinPostBattle:
	.string "A hidden passageway emanating psychic\n"
	.string "energy...$"

Zone21A_EventScript_Bernard::
	trainerbattle_single TRAINER_BERNARD, Zone21A_Text_BernardIntro, Zone21A_Text_BernardDefeat
	msgbox Zone21A_Text_BernardPostBattle, MSGBOX_AUTOCLOSE
	end

Zone21A_Text_BernardIntro:
	.string "This uniform is ridiculous!\p"
	.string "How can they expect us to wear it the\n"
	.string "whole time?$"

Zone21A_Text_BernardDefeat:
	.string "It's uncomfortable and it's itchy!$"

Zone21A_Text_BernardPostBattle:
	.string "Maybe I should have gotten a larger\n"
	.string "size uniform.$"

Zone21A_EventScript_Ellie::
	trainerbattle_single TRAINER_ELLIE, Zone21A_Text_EllieIntro, Zone21A_Text_EllieDefeat
	msgbox Zone21A_Text_ElliePostBattle, MSGBOX_AUTOCLOSE
	end

Zone21A_Text_EllieIntro:
	.string "Mother said to be careful of Bugs.$"

Zone21A_Text_EllieDefeat:
	.string "They come in all shapes and sizes!$"

Zone21A_Text_ElliePostBattle:
	.string "But I just find them neat!$"

Zone21A_EventScript_Rusty::
	trainerbattle_single TRAINER_RUSTY, Zone21A_Text_RustyIntro, Zone21A_Text_RustyDefeat
	msgbox Zone21A_Text_RustyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone21A_Text_RustyIntro:
	.string "I set fire!\n"
	.string "To the rain!$"

Zone21A_Text_RustyDefeat:
	.string "Something something,\n"
	.string "something something!$"

Zone21A_Text_RustyPostBattle:
	.string "I can't remember the next line in the\n"
	.string "song. Something to do with a name?$"

Zone21A_EventScript_Sign::
	msgbox Zone21A_Text_Sign, MSGBOX_SIGN
	end

Zone21A_Text_Sign:
	.string "Lakeside Cottage$"

Zone21A_EventScript_QuickBall::
	finditem ITEM_QUICK_BALL
	end

Zone21A_EventScript_UltraBall::
	finditem ITEM_ULTRA_BALL
	end

Zone21A_EventScript_HeatRock::
	finditem ITEM_HEAT_ROCK
	end

Zone21A_EventScript_SuperRepel::
	finditem ITEM_SUPER_REPEL
	end

Zone21A_EventScript_Everstone::
	finditem ITEM_EVERSTONE
	end

Zone21A_EventScript_TM28::
	finditem ITEM_TM28
	end
