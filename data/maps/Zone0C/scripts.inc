Zone0C_MapScripts::
	.byte 0

Zone0C_EventScript_Jaya::
	lock
	faceplayer
	call_if_set FLAG_NUZLOCKE_ON, EventScript_DeleteFaintedPartyPokemon
	compare VAR_HEAL_SHOP_USED, 0
	goto_if_eq Zone0C_EventScript_JayaDeny
	compare VAR_TEMP_0, 1
	goto_if_eq Zone0C_EventScript_JayaIntro
	msgbox Zone0C_EventScript_Jaya_Sorry, MSGBOX_AUTOCLOSE
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 9
	goto_if_eq Zone0C_EventScript_JayaWalkRight
	applymovement 2, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	setvar VAR_TEMP_0, 1
	release
	end

Zone0C_EventScript_JayaWalkRight:
	applymovement 2, Common_Movement_WalkRight
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	setvar VAR_TEMP_0, 1
	release
	end

Zone0C_EventScript_JayaDeny:
	msgbox Zone0C_Text_Jaya_Deny, MSGBOX_AUTOCLOSE
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Zone0C_Text_Jaya_Deny:
	.string "{COLOR BLUE}Jaya{COLOR DARK_GRAY}: It looks like the PC won't\n"
	.string "boot up if you haven't used\l"
	.string "Joy's Healing Shop recently...$"

Zone0C_EventScript_JayaIntro:
	setflag FLAG_SYS_PC_LANETTE
	msgbox Zone0C_Text_Jaya_Intro, MSGBOX_AUTOCLOSE
	release
	end

Zone0C_EventScript_Jaya_Sorry:
	.string "{COLOR BLUE}Jaya{COLOR DARK_GRAY}: Alright, I guess I'm done.$"

Zone0C_Text_Jaya_Intro:
	.string "{COLOR BLUE}Jaya{COLOR DARK_GRAY}: My name is Jaya.\p"
	.string "I'm actually one of the scientists\n"
	.string "who worked on the original PSS.$"

Zone0C_PokemonDayCare_EventScript_DaycareWoman::
	lock
	faceplayer
	call_if_set FLAG_NUZLOCKE_ON, EventScript_DeleteFaintedPartyPokemon
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

Zone0C_PokemonDayCare_EventScript_GiveMonToRaise:
	call_if_set FLAG_NUZLOCKE_ON, Zone0C_PokemonDayCare_EventScript_NuzlockeDialog
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

Zone0C_PokemonDayCare_EventScript_NuzlockeDialog:
	msgbox Zone0C_PokemonDayCare_Text_FirstTakeFallen, MSGBOX_DEFAULT
	call EventScript_DeleteFaintedPartyPokemon
	return

Zone0C_PokemonDayCare_Text_FirstTakeFallen:
	.string "First, I'll take any fallen\n"
	.string "Pokémon away...$"

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
