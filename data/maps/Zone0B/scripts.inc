Zone0B_EventScript_EeveeGirl::
	lock
	faceplayer
	goto_if_set FLAG_ZONE0B_RECEIVED_EEVEE, Zone0B_EventScript_EeveeGirl_2
Zone0B_EventScript_EeveeGirl_1:
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone0B_EventScript_EeveeGirl_6
Zone0B_EventScript_EeveeGirl_4:
	msgbox Zone0B_Text_EeveeGiveaway, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone0B_EventScript_EeveeGirl_10
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone0B_EventScript_EeveeGirl_13
	msgbox Zone0B_Text_SureThing, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_EventScript_EeveeGirl_17
Zone0B_EventScript_EeveeGirl_15:
	givemon SPECIES_EEVEE, 5, ITEM_NONE
	setmonmetlocation VAR_TEMP_2, 252
	playfanfare MUS_OBTAIN_ITEM
	message Zone0B_Text_ReceivedEevee
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_EEVEE
	msgbox Zone0B_Text_HowBoutNickname, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_EventScript_EeveeGirl_21
Zone0B_EventScript_EeveeGirl_20:
	setflag FLAG_ZONE0B_RECEIVED_EEVEE
	goto Zone0B_EventScript_EeveeUnique
	return

Zone0B_EventScript_EeveeGirl_2:
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_1

Zone0B_EventScript_EeveeGirl_5:
	goto_if_mon_caught SPECIES_EEVEE, Zone0B_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_VAPOREON, Zone0B_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_JOLTEON, Zone0B_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_FLAREON, Zone0B_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_ESPEON, Zone0B_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_UMBREON, Zone0B_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_LEAFEON, Zone0B_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_GLACEON, Zone0B_EventScript_EeveeUnique
	goto_if_mon_caught SPECIES_SYLVEON, Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_4

Zone0B_EventScript_EeveeGirl_6:
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_EventScript_EeveeGirl_5
	goto Zone0B_EventScript_EeveeGirl_4

Zone0B_EventScript_EeveeGirl_10:
	msgbox Zone0B_Text_NoThanks
	release
	end

Zone0B_EventScript_EeveeGirl_13:
	msgbox Zone0B_EventScript_EeveeGirl_Text_0
	hidemoneybox
	release
	end

Zone0B_EventScript_EeveeGirl_16:
	checkspeciesclause SPECIES_EEVEE
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_EeveeGirl_23
	goto Zone0B_EventScript_EeveeGirl_15

Zone0B_EventScript_EeveeGirl_17:
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone0B_EventScript_EeveeGirl_16
	goto Zone0B_EventScript_EeveeGirl_15

Zone0B_EventScript_EeveeGirl_21:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0B_EventScript_EeveeGirl_20

Zone0B_EventScript_EeveeGirl_23:
	msgbox Zone0B_EventScript_EeveeGirl_Text_1
	release
	end


Zone0B_EventScript_EeveeUnique::
	msgbox Zone0B_Text_EeveeUnique
	release
	return


Zone0B_EventScript_BreederM::
	lock
	faceplayer
	goto_if_set FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES, Zone0B_EventScript_BreederM_2
	msgbox Zone0B_EventScript_BreederM_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_EventScript_BreederM_5
Zone0B_EventScript_BreederM_4:
	msgbox Zone0B_Text_Pokedex, MSGBOX_DEFAULT
	release
	end

Zone0B_EventScript_BreederM_2:
	msgbox Zone0B_Text_Pokedex, MSGBOX_DEFAULT
	release
	end

Zone0B_EventScript_BreederM_5:
	msgbox Zone0B_EventScript_BreederM_Text_1
	delay 32
	msgbox Zone0B_EventScript_BreederM_Text_2
	fadescreenswapbuffers FADE_TO_BLACK
	setseenmon SPECIES_BULBASAUR
	setseenmon SPECIES_CHARMANDER
	setseenmon SPECIES_SQUIRTLE
	setseenmon SPECIES_CHIKORITA
	setseenmon SPECIES_CYNDAQUIL
	setseenmon SPECIES_TOTODILE
	setseenmon SPECIES_TREECKO
	setseenmon SPECIES_TORCHIC
	setseenmon SPECIES_MUDKIP
	setseenmon SPECIES_TURTWIG
	setseenmon SPECIES_CHIMCHAR
	setseenmon SPECIES_PIPLUP
	setseenmon SPECIES_SNIVY
	setseenmon SPECIES_TEPIG
	setseenmon SPECIES_OSHAWOTT
	setseenmon SPECIES_CHESPIN
	setseenmon SPECIES_FENNEKIN
	setseenmon SPECIES_FROAKIE
	setseenmon SPECIES_ROWLET
	setseenmon SPECIES_LITTEN
	setseenmon SPECIES_POPPLIO
	setseenmon SPECIES_GROOKEY
	setseenmon SPECIES_SCORBUNNY
	setseenmon SPECIES_SOBBLE
	delay 48
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox Zone0B_EventScript_BreederM_Text_3, MSGBOX_DEFAULT
	setflag FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES
	goto Zone0B_EventScript_BreederM_4


Zone0B_MapScripts::
	.byte 0

Zone0B_Text_EeveeGiveaway:
	.string "Hiya!\p"
	.string "We're running a special gift\n"
	.string "Pokémon promotion!\p"
	.string "If you'd like, you can have your\n"
	.string "very own Eevee! What do you say?$"

Zone0B_Text_EeveeUnique:
	.string "Eevee is quite a unique Pokémon.\n"
	.string "So many different evolutions!$"

Zone0B_Text_NoThanks:
	.string "No? Well, I'll be here anyways,\n"
	.string "in case you change your mind.$"

Zone0B_Text_SureThing:
	.string "Sure thing! Here ya go!$"

Zone0B_Text_HowBoutNickname:
	.string "Would you like to give a nickname\n"
	.string "to Eevee?$"

Zone0B_Text_ReceivedEevee:
	.string "Received Eevee!$"

Zone0B_PokemonDayCare_EventScript_DaycareWoman::
	lock
	faceplayer
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_PokemonDayCare_EventScript_Closed
	specialvar VAR_RESULT, GetDaycareState
	compare VAR_RESULT, DAYCARE_EGG_WAITING
	goto_if_eq Zone0B_PokemonDayCare_EventScript_EggWaiting
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OneMonInDaycare
	compare VAR_RESULT, DAYCARE_TWO_MONS
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TwoMonsInDaycare
	msgbox Zone0B_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
	msgbox Zone0B_PokemonDayCare_Text_FineThenComeAgain, MSGBOX_DEFAULT
	release
	end

Zone0B_PokemonDayCare_EventScript_Closed:
	msgbox Zone0B_PokemonDayCare_Text_Closed, MSGBOX_AUTOCLOSE
	release
	end

Zone0B_PokemonDayCare_Text_Closed:
	.string "Apologies, we have too many Pokémon\n"
	.string "to take care of and not enough\l"
	.string "space, so we will be unable to take\l"
	.string "care of your Pokémon at this time.$"

Zone0B_PokemonDayCare_EventScript_GiveMonToRaise:
	specialvar VAR_RESULT, CountPartyNonEggMons
	compare VAR_RESULT, 1
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyOneMon
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
	compare VAR_RESULT, 2
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyTwoAliveMons
	msgbox Zone0B_PokemonDayCare_Text_WhichMonShouldWeRaise, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseSendDaycareMon
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq Zone0B_PokemonDayCare_EventScript_ComeAgain
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
	compare VAR_RESULT, 0
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyOneAliveMon
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
	waitse
	playmoncry VAR_0x8005, 0
	msgbox Zone0B_PokemonDayCare_Text_WellRaiseYourMon, MSGBOX_DEFAULT
	waitmoncry
	special StoreSelectedPokemonInDaycare
	incrementgamestat GAME_STAT_USED_DAYCARE
	specialvar VAR_RESULT, GetDaycareState
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CanRaiseOneMore
	release
	end

Zone0B_PokemonDayCare_EventScript_ComeAgain:
	msgbox Zone0B_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
	release
	end

Zone0B_PokemonDayCare_EventScript_CanRaiseOneMore:
	msgbox Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
	end

Zone0B_PokemonDayCare_EventScript_OnlyOneMon:
	msgbox Zone0B_PokemonDayCare_Text_YouHaveJustOneMon, MSGBOX_DEFAULT
	release
	end

Zone0B_PokemonDayCare_EventScript_OnlyOneAliveMon:
	msgbox Zone0B_PokemonDayCare_Text_WhatWillYouBattleWith, MSGBOX_DEFAULT
	release
	end

Zone0B_PokemonDayCare_EventScript_OnlyTwoAliveMons:
	msgbox Zone0B_PokemonDayCare_Text_YoullBeLeftWithJustOne, MSGBOX_DEFAULT
	release
	end

Zone0B_PokemonDayCare_EventScript_EggWaiting:
	msgbox Zone0B_PokemonDayCare_Text_HusbandWasLookingForYou, MSGBOX_DEFAULT
	release
	end

Zone0B_PokemonDayCare_EventScript_YourMonHasGrownXLevels:
	msgbox Zone0B_PokemonDayCare_Text_YourMonHasGrownXLevels, MSGBOX_DEFAULT
	return

Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained:
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
	compare VAR_RESULT, 0
	call_if_ne Zone0B_PokemonDayCare_EventScript_YourMonHasGrownXLevels
	return

Zone0B_PokemonDayCare_EventScript_OneMonInDaycare:
	msgbox Zone0B_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
	msgbox Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
	msgbox Zone0B_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
	end

Zone0B_PokemonDayCare_EventScript_TryRetrieveMon:
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone0B_PokemonDayCare_EventScript_NoRoom
	specialvar VAR_RESULT, GetDaycareState
	setvar VAR_0x8004, 0
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CostPrompt
	special ShowDaycareLevelMenu
	waitstate
	copyvar VAR_0x8004, VAR_RESULT
	compare VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU
	goto_if_eq Zone0B_PokemonDayCare_EventScript_ComeAgain
	goto Zone0B_PokemonDayCare_EventScript_CostPrompt
	end

Zone0B_PokemonDayCare_EventScript_CostPrompt:
	special GetDaycareCost
	msgbox Zone0B_PokemonDayCare_Text_ItWillCostX, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CheckEnoughMoney
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
	end

Zone0B_PokemonDayCare_EventScript_CheckEnoughMoney:
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
	compare VAR_RESULT, 1
	goto_if_eq Zone0B_PokemonDayCare_EventScript_RetrieveMon
	msgbox Zone0B_PokemonDayCare_Text_NotEnoughMoney, MSGBOX_DEFAULT
	release
	end

Zone0B_PokemonDayCare_EventScript_RetrieveMon:
	applymovement LOCALID_DAYCARE_LADY, Zone0B_PokemonDayCare_Movement_RetrieveDaycareMon
	waitmovement 0
	specialvar VAR_RESULT, TakePokemonFromDaycare
	special SubtractMoneyFromVar0x8005
	playse SE_SHOP
	msgbox Zone0B_PokemonDayCare_Text_HeresYourMon, MSGBOX_DEFAULT
	waitse
	playmoncry VAR_RESULT, 0
	msgbox Zone0B_PokemonDayCare_Text_TookBackMon, MSGBOX_DEFAULT
	waitmoncry
	specialvar VAR_RESULT, GetDaycareState
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq Zone0B_PokemonDayCare_EventScript_AskRetrieveOtherMon
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
	end

Zone0B_PokemonDayCare_EventScript_AskRetrieveOtherMon:
	msgbox Zone0B_PokemonDayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
	end

Zone0B_PokemonDayCare_EventScript_NoRoom:
	msgbox Zone0B_PokemonDayCare_Text_YourTeamIsFull, MSGBOX_DEFAULT
	release
	end

Zone0B_PokemonDayCare_Movement_RetrieveDaycareMon:
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

Zone0B_PokemonDayCare_EventScript_TwoMonsInDaycare:
	msgbox Zone0B_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
	setvar VAR_0x8004, 1
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
	msgbox Zone0B_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
	msgbox Zone0B_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
	release
	end

Zone0B_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon:
	.string "I'm the Day-Care Lady.\p"
	.string "We can raise a Pokémon for you\n"
	.string "for a flat cost of ¥500,\l"
	.string "plus ¥200 per level gained.\p"
	.string "Would you like us to raise one?$"

Zone0B_PokemonDayCare_Text_WhichMonShouldWeRaise:
	.string "Which Pokémon should we raise for\n"
	.string "you?$"

Zone0B_PokemonDayCare_Text_WellRaiseYourMon:
	.string "Fine, we'll raise your {STR_VAR_1}\n"
	.string "for a while.\p"
	.string "Come back for it later.$"

Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore:
	.string "We can raise two of your Pokémon.\n"
	.string "Would you like us to raise one more?$"

Zone0B_PokemonDayCare_Text_HusbandWasLookingForYou:
	.string "My husband was looking for you.$"

Zone0B_PokemonDayCare_Text_FineThenComeAgain:
	.string "Oh, fine, then.\n"
	.string "Come again.$"

Zone0B_PokemonDayCare_Text_NotEnoughMoney:
	.string "You don't have enough money…$"

Zone0B_PokemonDayCare_Text_TakeOtherOneBackToo:
	.string "Will you take back the other one,\n"
	.string "too?$"

Zone0B_PokemonDayCare_Text_ComeAgain:
	.string "Fine.\n"
	.string "Come again.$"

Zone0B_PokemonDayCare_Text_GoodToSeeYou:
	.string "Ah, it's you! Good to see you.\n"
	.string "Your Pokémon can only be doing good!$"

Zone0B_PokemonDayCare_Text_YourMonHasGrownXLevels:
	.string "By level, your {STR_VAR_1} has\n"
	.string "grown by {STR_VAR_2}.$"

Zone0B_PokemonDayCare_Text_YourTeamIsFull:
	.string "Your Pokémon team is full.\n"
	.string "Make room, then come see me.$"

Zone0B_PokemonDayCare_Text_ItWillCostX:
	.string "If you want your {STR_VAR_1} back,\n"
	.string "it will cost ¥{STR_VAR_2}.$"

Zone0B_PokemonDayCare_Text_HeresYourMon:
	.string "Perfect!\n"
	.string "Here's your Pokémon.$"

Zone0B_PokemonDayCare_Text_TookBackMon:
	.string "{PLAYER} took back {STR_VAR_1} from\n"
	.string "the Day-Care Lady.$"

Zone0B_PokemonDayCare_Text_YouHaveJustOneMon:
	.string "Oh? But you have just one\n"
	.string "Pokémon.\p"
	.string "Come back another time.$"

Zone0B_PokemonDayCare_Text_TakeYourMonBack:
	.string "Will you take your Pokémon back?$"

Zone0B_PokemonDayCare_Text_WhatWillYouBattleWith:
	.string "If you leave me that Pokémon,\n"
	.string "what will you battle with?\p"
	.string "Come back another time.$"

Zone0B_PokemonDayCare_Text_YoullBeLeftWithJustOne:
	.string "Huh?\n"
	.string "Now, now.\p"
	.string "If you leave that Pokémon with\n"
	.string "me, you'll be left with just one.\p"
	.string "You will be better off if you catch\n"
	.string "some more, I dare say.$"

Zone0B_EventScript_EeveeGirl_Text_0:
	.string "Looks like you've got a full party.\n"
	.string "Make some space, then come back!$"

Zone0B_EventScript_EeveeGirl_Text_1:
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in Eevee's\l"
	.string "evolution lines.$"

Zone0B_EventScript_BreederM_Text_0:
	.string "Hey there! Would you like to see some\n"
	.string "Pokémon in my sketchbook?\p"
	.string "They could be useful for your Pokédex!$"

Zone0B_EventScript_BreederM_Text_1:
	.string "Here you go…$"

Zone0B_EventScript_BreederM_Text_2:
	.string "{PLAYER} started entering in the\n"
	.string "information into the Pokédex…$"

Zone0B_EventScript_BreederM_Text_3:
	.string "{PLAYER}'s Pokédex was filled with\n"
	.string "entries of starter Pokémon!$"

Zone0B_Text_Pokedex::
	.string "Good luck completing your Pokédex.$"
