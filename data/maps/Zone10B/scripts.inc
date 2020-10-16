Zone10B_MapScripts::
	.byte 0

Zone10B_EventScript_Adamina::
	lockall
	faceplayer
	checkitem ITEM_RUBY, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_AdaminaIntro
	goto Zone10B_EventScript_AdaminaLeave
	end

Zone10B_EventScript_Kirlia::
	lockall
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 6
	call_if_eq Zone10B_EventScript_Down
	compare VAR_TEMP_0, 7
	call_if_eq Zone10B_EventScript_Right
	checkitem ITEM_RUBY, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_AdaminaIntro
	goto Zone10B_EventScript_AdaminaLeave
	end
	
Zone10B_EventScript_Down:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

Zone10B_EventScript_Right:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	call Zone10B_EventScript_Down
	return

Zone10B_EventScript_AdaminaIntro:
	msgbox Zone10B_Text_Adamina_Sorry, MSGBOX_AUTOCLOSE
	giveitem ITEM_RUBY
	msgbox Zone10B_Text_Adamina_SafeSpace, MSGBOX_DEFAULT
	delay 96
	msgbox Zone10B_Text_Adamina_TellYouWhat, MSGBOX_AUTOCLOSE
	release
	end

Zone10B_Text_Adamina_Sorry:
	.string "You...\n"
	.string "...\p"
	.string "Look.\n"
	.string "I said some harsh words earlier.\l"
	.string "Consider this part of my apology.$"

Zone10B_Text_Adamina_SafeSpace:
	.string "Adamina: This is my tavern.\n"
	.string "It's my safe space.\p"
	.string "All the people from around here\n"
	.string "gather for shelter from the\l"
	.string "sandstorm.\p"
	.string "I just... feel defensive around\n"
	.string "outsiders. Because it feels like\l"
	.string "family here, you know?$"

Zone10B_Text_Adamina_TellYouWhat:
	.string "Adamina: Tell you what, you can\n"
	.string "stay as long as you like to chat\l"
	.string "with the people here.\p"
	.string "When you're ready to leave this\n"
	.string "Zone, come speak to me.$"

Zone10B_EventScript_AdaminaLeave:
	msgbox Zone10B_Text_Adamina_AreYouLeaving, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_Exit
	msgbox Zone10B_Text_Adamina_WhenReady, MSGBOX_AUTOCLOSE
	release
	end

Zone10B_Text_Adamina_AreYouLeaving:
	.string "Adamina: Are you leaving the Zone?$"

Zone10B_Text_Adamina_WhenReady:
	.string "Come speak to me when you're ready.$"

Zone10B_EventScript_Exit:
	msgbox Zone10B_Text_Adamina_UseWell, MSGBOX_AUTOCLOSE
	delay 96
	playmoncry SPECIES_KIRLIA, 0
	msgbox Zone10B_Text_Adamina_UseTeleport, MSGBOX_AUTOCLOSE
	waitmoncry
	warpteleport MAP_ZONE9SANCTUARY, 255, 7, 7
	releaseall
	end

Zone10B_Text_Adamina_UseWell:
	.string "Okay. Use that Waystone well.$"

Zone10B_Text_Adamina_UseTeleport:
	.string "Kirlia, use Teleport!$"

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
	goto_if_set FLAG_NUZLOCKE_ON, Zone10B_EventScript_BerryExchangeNuzlocke
	msgbox Zone10B_Text_BerriesOfferVanilla, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_BerryCheck
	msgbox Zone10B_Text_BerriesTooBad, MSGBOX_AUTOCLOSE
	goto Zone10B_EventScript_BerryEnd
	end

Zone10B_EventScript_BerryExchangeNuzlocke:
	msgbox Zone10B_Text_BerriesOfferNuzlocke, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_BerryCheck
	msgbox Zone10B_Text_BerriesTooBad, MSGBOX_AUTOCLOSE
	goto Zone10B_EventScript_BerryEnd
	end

Zone10B_Text_BerriesOfferVanilla:
	.string "That smell...\n"
	.string "The delicious aroma of Berries!\p"
	.string "Listen, you know how some berries\n"
	.string "can treat status conditions?\p"
	.string "Well, if I have 10 of each of those\n"
	.string "Berries, I can craft them into\l"
	.string "5 Revives. How about it?$"

Zone10B_Text_BerriesOfferNuzlocke:
	.string "That smell...\n"
	.string "The delicious aroma of Berries!\p"
	.string "Listen, you know how some berries\n"
	.string "can treat status conditions?\p"
	.string "I'll pay you ¥7500 for 10 of each\n"
	.string "of those Berries. How about it?$"

Zone10B_Text_BerriesTooBad:
	.string "Aw, that's too bad.\n"
	.string "It's a good offer though!$"

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
	goto_if_set FLAG_NUZLOCKE_ON, Zone10B_EventScript_BerryNuzlockeMoney
	msgbox Zone10B_Text_BerryCraftingVanilla, MSGBOX_AUTOCLOSE
	giveitem ITEM_REVIVE, 5
	msgbox Zone10B_Text_GoodDay, MSGBOX_AUTOCLOSE
	goto Zone10B_EventScript_BerryEnd
	end
	
Zone10B_EventScript_BerryNuzlockeMoney:
	showmoneybox 0, 0, 0
	msgbox Zone10B_Text_BerryCraftingNuzlocke, MSGBOX_AUTOCLOSE
	msgbox Zone10B_Text_Received7500, MSGBOX_AUTOCLOSE
	addmoney 7500, 0
	playfanfare MUS_OBTAIN_ITEM
	updatemoneybox 0, 0
	msgbox Zone4Sanctuary_Text_ReceivedMoney, MSGBOX_DEFAULT
	waitfanfare
	hidemoneybox
	msgbox Zone10B_Text_GoodDay, MSGBOX_AUTOCLOSE
	goto Zone10B_EventScript_BerryEnd
	end

Zone10B_Text_BerryCraftingVanilla:
	.string "Alright... Here we go...\n"
	.string "And bam! 5 Revives!$"

Zone10B_Text_BerryCraftingNuzlocke:
	.string "Thank you, and here is your ¥7500.$"

Zone10B_Text_Received7500:
	.string "Received ¥7500!$"

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

Zone10B_EventScript_FossilScientist::
	lock
	faceplayer
	msgbox Zone10B_Text_Fossils, MSGBOX_AUTOCLOSE
	applymovement 6, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

Zone10B_Text_Fossils:
	.string "You got fossils?\n"
	.string "No? Ok, back to my drink.$"

Zone10B_EventScript_WaterMerchant::
	lock
	faceplayer
	showmoneybox 0, 0, 0
	msgbox Zone10B_Text_WaterOffer, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_WaterCheckMoney
	closemessage
	hidemoneybox
	msgbox Zone10B_Text_NoWater, MSGBOX_AUTOCLOSE
	releaseall
	end

Zone10B_Text_WaterOffer:
	.string "In the desert, it's supply and\n"
	.string "demand. And the demand is water.\p"
	.string "For you only: 500 for one Fresh\n"
	.string "Water. Want it or not?$"

Zone10B_Text_NoWater:
	.string "Ah, fine.$"

Zone10B_EventScript_WaterCheckMoney:
	checkmoney 500, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_WaterNotEnough
	goto Zone10B_EventScript_BuyWater
	end

Zone10B_EventScript_WaterNotEnough:
	msgbox Zone10B_Text_NotEnough, MSGBOX_AUTOCLOSE
	hidemoneybox
	releaseall
	end

Zone10B_Text_NotEnough:
	.string "You don't have enough money.$"

Zone10B_EventScript_BuyWater:
	removemoney 500, 0
	updatemoneybox 0, 0
	msgbox Zone10B_Text_GiveWater, MSGBOX_AUTOCLOSE
	giveitem ITEM_FRESH_WATER, 1
	hidemoneybox
	release
	end

Zone10B_Text_GiveWater:
	.string "Here you go.$"
