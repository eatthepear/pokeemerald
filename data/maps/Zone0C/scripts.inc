Zone0C_EventScript_EeveeGirl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ZONE0C_EEVEE, Zone0C_EventScript_EeveeGirl_2
Zone0C_EventScript_EeveeGirl_1:
	goto_if_unset FLAG_RANDOMIZER_ON, Zone0C_EventScript_EeveeGirl_5
Zone0C_EventScript_EeveeGirl_4:
	msgbox Zone0C_Text_EeveeGiveaway, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone0C_EventScript_EeveeGirl_8
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone0C_EventScript_EeveeGirl_11
	msgbox Zone0C_Text_SureThing, MSGBOX_DEFAULT
	setflag FLAG_BOOSTED_IVS
	givemon SPECIES_EEVEE, 5, ITEM_NONE
	clearflag FLAG_BOOSTED_IVS
	callnative SetEeveeGivenAtEncounter
	setvar VAR_TEMP_1, SPECIES_EEVEE
	playfanfare MUS_OBTAIN_ITEM
	message Zone0C_Text_ReceivedEevee
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_EEVEE
	msgbox Zone0C_Text_HowBoutNickname, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0C_EventScript_EeveeGirl_14
Zone0C_EventScript_EeveeGirl_13:
	setflag FLAG_RECEIVED_ZONE0C_EEVEE
	goto Zone0C_EventScript_EeveeUnique
	return

Zone0C_EventScript_EeveeGirl_2:
	goto Zone0C_EventScript_EeveeUnique
	goto Zone0C_EventScript_EeveeGirl_1

Zone0C_EventScript_EeveeGirl_5:
	goto_if_mon_caught SPECIES_EEVEE, Zone0C_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_VAPOREON, Zone0C_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_JOLTEON, Zone0C_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_FLAREON, Zone0C_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_ESPEON, Zone0C_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_UMBREON, Zone0C_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_LEAFEON, Zone0C_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_GLACEON, Zone0C_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_SYLVEON, Zone0C_EventScript_EeveeUnique
	goto Zone0C_EventScript_EeveeGirl_4

Zone0C_EventScript_EeveeGirl_8:
	msgbox Zone0C_Text_NoThanks
	release
	end

Zone0C_EventScript_EeveeGirl_11:
	msgbox Zone0C_Text_CantGive
	release
	end

Zone0C_EventScript_EeveeGirl_14:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0C_EventScript_EeveeGirl_13


Zone0C_EventScript_EeveeUnique::
	msgbox Zone0C_Text_EeveeUnique
	release
	return


Zone0C_MapScripts::
	.byte 0

Zone0C_Text_CantGive:
	.string "Looks like you've got a full party.\n"
	.string "Make some space, then come back!$"

Zone0C_Text_EeveeGiveaway:
	.string "Hiya!\p"
	.string "We're running a special gift\n"
	.string "Pokémon promotion!\p"
	.string "If you'd like, you can have your\n"
	.string "very own Eevee! What do you say?$"

Zone0C_Text_EeveeUnique:
	.string "Eevee is quite a unique Pokémon.\n"
	.string "So many different evolutions!$"

Zone0C_Text_NoThanks:
	.string "No? Well, I'll be here anyways,\n"
	.string "in case you change your mind.$"

Zone0C_Text_SureThing:
	.string "Sure thing! Here ya go!$"

Zone0C_Text_HowBoutNickname:
	.string "Would you like to give a nickname\n"
	.string "to Eevee?$"

Zone0C_Text_ReceivedEevee:
	.string "Received Eevee!$"

Zone0C_PokemonDayCare_EventScript_DaycareWoman::
	lock
	faceplayer
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone0C_PokemonDayCare_EventScript_Closed
	goto_if_set FLAG_NUZLOCKE_ON, Zone0C_PokemonDayCare_EventScript_Closed
	specialvar VAR_RESULT, GetDaycareState
	compare VAR_RESULT, DAYCARE_EGG_WAITING
	goto_if_eq Zone0C_PokemonDayCare_EventScript_EggWaiting
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq Zone0C_PokemonDayCare_EventScript_OneMonInDaycare
	compare VAR_RESULT, DAYCARE_TWO_MONS
	goto_if_eq Zone0C_PokemonDayCare_EventScript_TwoMonsInDaycare
	msgbox Zone0C_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0C_PokemonDayCare_EventScript_GiveMonToRaise
	msgbox Zone0C_PokemonDayCare_Text_FineThenComeAgain, MSGBOX_DEFAULT
	release
	end

Zone0C_PokemonDayCare_EventScript_Closed:
	msgbox Zone0C_PokemonDayCare_Text_Closed, MSGBOX_AUTOCLOSE
	release
	end

Zone0C_PokemonDayCare_Text_Closed:
	.string "Apologies, we have too many Pokémon\n"
	.string "to take care of and not enough\l"
	.string "space, so we will be unable to take\l"
	.string "care of your Pokémon at this time.$"

Zone0C_PokemonDayCare_EventScript_GiveMonToRaise:
	specialvar VAR_RESULT, CountPartyNonEggMons
	compare VAR_RESULT, 1
	goto_if_eq Zone0C_PokemonDayCare_EventScript_OnlyOneMon
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
	compare VAR_RESULT, 2
	goto_if_eq Zone0C_PokemonDayCare_EventScript_OnlyTwoAliveMons
	msgbox Zone0C_PokemonDayCare_Text_WhichMonShouldWeRaise, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseSendDaycareMon
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq Zone0C_PokemonDayCare_EventScript_ComeAgain
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
	compare VAR_RESULT, 0
	goto_if_eq Zone0C_PokemonDayCare_EventScript_OnlyOneAliveMon
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
	waitse
	playmoncry VAR_0x8005, 0
	msgbox Zone0C_PokemonDayCare_Text_WellRaiseYourMon, MSGBOX_DEFAULT
	waitmoncry
	special StoreSelectedPokemonInDaycare
	incrementgamestat GAME_STAT_USED_DAYCARE
	specialvar VAR_RESULT, GetDaycareState
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq Zone0C_PokemonDayCare_EventScript_CanRaiseOneMore
	release
	end

Zone0C_PokemonDayCare_EventScript_ComeAgain:
	msgbox Zone0C_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
	release
	end

Zone0C_PokemonDayCare_EventScript_CanRaiseOneMore:
	msgbox Zone0C_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0C_PokemonDayCare_EventScript_GiveMonToRaise
	goto Zone0C_PokemonDayCare_EventScript_ComeAgain
	end

Zone0C_PokemonDayCare_EventScript_OnlyOneMon:
	msgbox Zone0C_PokemonDayCare_Text_YouHaveJustOneMon, MSGBOX_DEFAULT
	release
	end

Zone0C_PokemonDayCare_EventScript_OnlyOneAliveMon:
	msgbox Zone0C_PokemonDayCare_Text_WhatWillYouBattleWith, MSGBOX_DEFAULT
	release
	end

Zone0C_PokemonDayCare_EventScript_OnlyTwoAliveMons:
	msgbox Zone0C_PokemonDayCare_Text_YoullBeLeftWithJustOne, MSGBOX_DEFAULT
	release
	end

Zone0C_PokemonDayCare_EventScript_EggWaiting:
	msgbox Zone0C_PokemonDayCare_Text_HusbandWasLookingForYou, MSGBOX_DEFAULT
	release
	end

Zone0C_PokemonDayCare_EventScript_YourMonHasGrownXLevels:
	msgbox Zone0C_PokemonDayCare_Text_YourMonHasGrownXLevels, MSGBOX_DEFAULT
	return

Zone0C_PokemonDayCare_EventScript_DisplayLevelsGained:
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
	compare VAR_RESULT, 0
	call_if_ne Zone0C_PokemonDayCare_EventScript_YourMonHasGrownXLevels
	return

Zone0C_PokemonDayCare_EventScript_OneMonInDaycare:
	msgbox Zone0C_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Zone0C_PokemonDayCare_EventScript_DisplayLevelsGained
	msgbox Zone0C_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0C_PokemonDayCare_EventScript_GiveMonToRaise
	msgbox Zone0C_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0C_PokemonDayCare_EventScript_TryRetrieveMon
	goto Zone0C_PokemonDayCare_EventScript_ComeAgain
	end

Zone0C_PokemonDayCare_EventScript_TryRetrieveMon:
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone0C_PokemonDayCare_EventScript_NoRoom
	specialvar VAR_RESULT, GetDaycareState
	setvar VAR_0x8004, 0
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq Zone0C_PokemonDayCare_EventScript_CostPrompt
	special ShowDaycareLevelMenu
	waitstate
	copyvar VAR_0x8004, VAR_RESULT
	compare VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU
	goto_if_eq Zone0C_PokemonDayCare_EventScript_ComeAgain
	goto Zone0C_PokemonDayCare_EventScript_CostPrompt
	end

Zone0C_PokemonDayCare_EventScript_CostPrompt:
	special GetDaycareCost
	msgbox Zone0C_PokemonDayCare_Text_ItWillCostX, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0C_PokemonDayCare_EventScript_CheckEnoughMoney
	goto Zone0C_PokemonDayCare_EventScript_ComeAgain
	end

Zone0C_PokemonDayCare_EventScript_CheckEnoughMoney:
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
	compare VAR_RESULT, 1
	goto_if_eq Zone0C_PokemonDayCare_EventScript_RetrieveMon
	msgbox Zone0C_PokemonDayCare_Text_NotEnoughMoney, MSGBOX_DEFAULT
	release
	end

Zone0C_PokemonDayCare_EventScript_RetrieveMon:
	applymovement LOCALID_DAYCARE_LADY, Zone0C_PokemonDayCare_Movement_RetrieveDaycareMon
	waitmovement 0
	specialvar VAR_RESULT, TakePokemonFromDaycare
	special SubtractMoneyFromVar0x8005
	playse SE_SHOP
	msgbox Zone0C_PokemonDayCare_Text_HeresYourMon, MSGBOX_DEFAULT
	waitse
	playmoncry VAR_RESULT, 0
	msgbox Zone0C_PokemonDayCare_Text_TookBackMon, MSGBOX_DEFAULT
	waitmoncry
	specialvar VAR_RESULT, GetDaycareState
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq Zone0C_PokemonDayCare_EventScript_AskRetrieveOtherMon
	goto Zone0C_PokemonDayCare_EventScript_ComeAgain
	end

Zone0C_PokemonDayCare_EventScript_AskRetrieveOtherMon:
	msgbox Zone0C_PokemonDayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0C_PokemonDayCare_EventScript_TryRetrieveMon
	goto Zone0C_PokemonDayCare_EventScript_ComeAgain
	end

Zone0C_PokemonDayCare_EventScript_NoRoom:
	msgbox Zone0C_PokemonDayCare_Text_YourTeamIsFull, MSGBOX_DEFAULT
	release
	end

Zone0C_PokemonDayCare_Movement_RetrieveDaycareMon:
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	face_up
	walk_slow_up
	set_invisible
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	set_visible
	walk_slow_down
	step_end

Zone0C_PokemonDayCare_EventScript_TwoMonsInDaycare:
	msgbox Zone0C_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Zone0C_PokemonDayCare_EventScript_DisplayLevelsGained
	setvar VAR_0x8004, 1
	call Zone0C_PokemonDayCare_EventScript_DisplayLevelsGained
	msgbox Zone0C_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0C_PokemonDayCare_EventScript_TryRetrieveMon
	msgbox Zone0C_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
	release
	end

Zone0C_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon:
	.string "I'm the Day-Care Lady.\p"
	.string "We can raise a Pokémon for you\n"
	.string "for a flat cost of ¥500,\l"
	.string "plus ¥200 per level gained.\p"
	.string "Would you like us to raise one?$"

Zone0C_PokemonDayCare_Text_WhichMonShouldWeRaise:
	.string "Which Pokémon should we raise for\n"
	.string "you?$"

Zone0C_PokemonDayCare_Text_WellRaiseYourMon:
	.string "Fine, we'll raise your {STR_VAR_1}\n"
	.string "for a while.\p"
	.string "Come back for it later.$"

Zone0C_PokemonDayCare_Text_WeCanRaiseOneMore:
	.string "We can raise two of your Pokémon.\n"
	.string "Would you like us to raise one more?$"

Zone0C_PokemonDayCare_Text_HusbandWasLookingForYou:
	.string "My husband was looking for you.$"

Zone0C_PokemonDayCare_Text_FineThenComeAgain:
	.string "Oh, fine, then.\n"
	.string "Come again.$"

Zone0C_PokemonDayCare_Text_NotEnoughMoney:
	.string "You don't have enough money…$"

Zone0C_PokemonDayCare_Text_TakeOtherOneBackToo:
	.string "Will you take back the other one,\n"
	.string "too?$"

Zone0C_PokemonDayCare_Text_ComeAgain:
	.string "Fine.\n"
	.string "Come again.$"

Zone0C_PokemonDayCare_Text_GoodToSeeYou:
	.string "Ah, it's you! Good to see you.\n"
	.string "Your Pokémon can only be doing good!$"

Zone0C_PokemonDayCare_Text_YourMonHasGrownXLevels:
	.string "By level, your {STR_VAR_1} has\n"
	.string "grown by {STR_VAR_2}.$"

Zone0C_PokemonDayCare_Text_YourTeamIsFull:
	.string "Your Pokémon team is full.\n"
	.string "Make room, then come see me.$"

Zone0C_PokemonDayCare_Text_ItWillCostX:
	.string "If you want your {STR_VAR_1} back,\n"
	.string "it will cost ¥{STR_VAR_2}.$"

Zone0C_PokemonDayCare_Text_HeresYourMon:
	.string "Perfect!\n"
	.string "Here's your Pokémon.$"

Zone0C_PokemonDayCare_Text_TookBackMon:
	.string "{PLAYER} took back {STR_VAR_1} from\n"
	.string "the Day-Care Lady.$"

Zone0C_PokemonDayCare_Text_YouHaveJustOneMon:
	.string "Oh? But you have just one\n"
	.string "Pokémon.\p"
	.string "Come back another time.$"

Zone0C_PokemonDayCare_Text_TakeYourMonBack:
	.string "Will you take your Pokémon back?$"

Zone0C_PokemonDayCare_Text_WhatWillYouBattleWith:
	.string "If you leave me that Pokémon,\n"
	.string "what will you battle with?\p"
	.string "Come back another time.$"

Zone0C_PokemonDayCare_Text_YoullBeLeftWithJustOne:
	.string "Huh?\n"
	.string "Now, now.\p"
	.string "If you leave that Pokémon with\n"
	.string "me, you'll be left with just one.\p"
	.string "You will be better off if you catch\n"
	.string "some more, I dare say.$"
