Zone10B_MapScripts::
	.byte 0

Zone10B_EventScript_SideQuestLuckyEgg::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ZONE10B_LUCKY_EGG, Zone10B_EventScript_LuckyEggFinished
	msgbox Zone10B_Text_LuckyEggIntro, MSGBOX_AUTOCLOSE
	specialvar VAR_RESULT, GetCaughtSpeciesCount
	compare VAR_RESULT, 30
	goto_if_ge Zone10B_EventScript_GiveLuckyEgg @go to if greater than or equal
	applymovement 3, Common_Movement_FaceRight
	waitmovement 0
	release
	end

Zone10B_Text_LuckyEggIntro:
	.string "You know what would make a\n"
	.string "Collector like me happy? Meeting\l"
	.string "someone who has caught 30 different\l"
	.string "species of Pokémon. Now, that\l"
	.string "person is someone I'd like to meet!$"

Zone10B_EventScript_GiveLuckyEgg:
	msgbox Zone10B_Text_GiveLuckyEgg, MSGBOX_AUTOCLOSE
	setflag FLAG_RECEIVED_ZONE10B_LUCKY_EGG
	giveitem ITEM_LUCKY_EGG, 1
	goto Zone10B_EventScript_LuckyEggFinished
	end

Zone10B_Text_GiveLuckyEgg:
	.string "Whoah, you've caught 30 species of\n"
	.string "Pokémon? That's amazing.\p"
	.string "I aspire to be like you. Here, I\n"
	.string "want you to have this.$"

Zone10B_EventScript_LuckyEggFinished:
	msgbox Zone10B_Text_Maybe30, MSGBOX_AUTOCLOSE
	applymovement 3, Common_Movement_FaceRight
	waitmovement 0
	release
	end

Zone10B_Text_Maybe30:
	.string "Maybe I can catch 30 species of\n"
	.string "Pokémon some day too.$"

Zone10B_EventScript_SideQuestSubstitute::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ZONE10B_SUBSTITUTE, Zone10B_EventScript_GaveSubstitute
	msgbox Zone10B_Text_SubstituteIntro, MSGBOX_AUTOCLOSE
	goto_if_not_defeated TRAINER_ARNOLD, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_DEXTER, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_JEREMIAH, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_ARTHUR, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_JEMMA, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_BORIS, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_ANNABELLE, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_RALPH, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_CHLOE_AND_KAYA, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_LUCIA, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_FRED, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_FRANK, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_MELANIE, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_CONSTANCE, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_RONAN, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_LEVIATHAN3, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_MILLIE, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_PAIGE, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_JAMAL, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_EMILIANO, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_MARCUS, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_JAYDEN, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_ANITA, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_NEIL, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_PEARLIE, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_KYLE, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_ALANA, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_DEWEY, Zone10B_EventScript_NoSubstitute
	goto_if_not_defeated TRAINER_CONRAD, Zone10B_EventScript_NoSubstitute
	setflag FLAG_RECEIVED_ZONE10B_SUBSTITUTE
	msgbox Zone10B_Text_GiveSubstitute, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM05
	goto Zone10B_EventScript_GaveSubstitute
	end

Zone10B_Text_SubstituteIntro:
	.string "Greetings, young one. In my\n"
	.string "possession, I hold a useful TM for\l"
	.string "your Pokémon, but only if you have\l"
	.string "proven yourself in battle.\p"
	.string "You must defeat all Trainers in\n"
	.string "Zones 1-10.$"

Zone10B_Text_GiveSubstitute:
	.string "Impressive, young one. I see you\n"
	.string "have defeated all those trainers.\p"
	.string "Here is the TM05 - Substitute.$"

Zone10B_EventScript_NoSubstitute:
	msgbox Zone10B_Text_NoSubstitute, MSGBOX_AUTOCLOSE
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

Zone10B_Text_NoSubstitute:
	.string "You still have trainers to defeat.$"

Zone10B_EventScript_GaveSubstitute:
	msgbox Zone10B_Text_SubstituteExplain, MSGBOX_AUTOCLOSE
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

Zone10B_Text_SubstituteExplain:
	.string "The move Substitute is a unique\n"
	.string "move with many applications.\l"
	.string "Use it cleverly, young one.$"

Zone10B_EventScript_BerryExchange::
	lock
	faceplayer
	msgbox Zone10B_Text_BerriesOffer, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_BerryCheck
	msgbox Zone10B_Text_BerriesTooBad, MSGBOX_AUTOCLOSE
	goto Zone10B_EventScript_BerryEnd
	end

Zone10B_Text_BerriesOffer:
	.string "That smell...\n"
	.string "The delicious aroma of Berries!\p"
	.string "Listen, you know how some berries\n"
	.string "can treat status conditions?\p"
	.string "Well, if I have 10 of each of those\n"
	.string "Berries, I can craft them into\l"
	.string "5 Revives. How about it?$"

Zone10B_Text_BerriesTooBad:
	.string "Aw, that's too bad.\n"
	.string "It's a good offer though!"

Zone10B_EventScript_BerryCheck:
	checkitem ITEM_CHERI_BERRY, 10
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_NotEnoughCheri
	checkitem ITEM_CHESTO_BERRY, 10
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_NotEnoughChesto
	checkitem ITEM_PECHA_BERRY, 10
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_NotEnoughPecha
	checkitem ITEM_RAWST_BERRY, 10
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_NotEnoughRawst
	checkitem ITEM_ASPEAR_BERRY, 10
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_NotEnoughAspear
	removeitem ITEM_CHERI_BERRY, 10
	removeitem ITEM_CHESTO_BERRY, 10
	removeitem ITEM_PECHA_BERRY, 10
	removeitem ITEM_RAWST_BERRY, 10
	removeitem ITEM_ASPEAR_BERRY, 10
	msgbox Zone10B_Text_BerryCrafting, MSGBOX_AUTOCLOSE
	giveitem ITEM_REVIVE, 5
	msgbox Zone10B_Text_GoodDay, MSGBOX_AUTOCLOSE
	goto Zone10B_EventScript_BerryEnd
	end
	
Zone10B_Text_BerryCrafting:
	.string "Alright... Here we go...{DELAY_96}\n"
	.string "And bam! 5 Revives!$"

Zone10B_Text_GoodDay:
	.string "Good day.$"

Zone10B_EventScript_NotEnoughAspear:
	msgbox Zone10B_Text_NotEnoughAspear, MSGBOX_AUTOCLOSE
	goto Zone10B_EventScript_BerryEnd
	end
	
Zone10B_Text_NotEnoughAspear:
	.string "It looks like you don't have enough\n"
	.string "Aspear Berries.$"

Zone10B_EventScript_NotEnoughRawst:
	msgbox Zone10B_Text_NotEnoughRawst, MSGBOX_AUTOCLOSE
	goto Zone10B_EventScript_BerryEnd
	end
	
Zone10B_Text_NotEnoughRawst:
	.string "It looks like you don't have enough\n"
	.string "Rawst Berries.$"

Zone10B_EventScript_NotEnoughPecha:
	msgbox Zone10B_Text_NotEnoughPecha, MSGBOX_AUTOCLOSE
	goto Zone10B_EventScript_BerryEnd
	end
	
Zone10B_Text_NotEnoughPecha:
	.string "It looks like you don't have enough\n"
	.string "Pecha Berries.$"

Zone10B_EventScript_NotEnoughChesto:
	msgbox Zone10B_Text_NotEnoughChesto, MSGBOX_AUTOCLOSE
	goto Zone10B_EventScript_BerryEnd
	end
	
Zone10B_Text_NotEnoughChesto:
	.string "It looks like you don't have enough\n"
	.string "Chesto Berries.$"

Zone10B_EventScript_NotEnoughCheri:
	msgbox Zone10B_Text_NotEnoughCheri, MSGBOX_AUTOCLOSE
	goto Zone10B_EventScript_BerryEnd
	end
	
Zone10B_Text_NotEnoughCheri:
	.string "It looks like you don't have enough\n"
	.string "Cheri Berries.$"

Zone10B_EventScript_BerryEnd:
	applymovement 5, Common_Movement_FaceLeft
	waitmovement 0
	release
	end
