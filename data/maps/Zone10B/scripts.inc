Zone10B_MapScripts::
	.byte 0

Zone10B_EventScript_Adamina::
	lockall
	faceplayer
	call Zone10B_EventScript_CheckIntro
	goto Zone10B_EventScript_AdaminaLeave
	end

Zone10B_EventScript_Kirlia::
	lockall
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 6
	call_if_eq Zone10B_EventScript_Down
	compare VAR_TEMP_0, 7
	call_if_eq Zone10B_EventScript_Right
	call Zone10B_EventScript_CheckIntro
	goto Zone10B_EventScript_AdaminaLeave
	end
	
Zone10B_EventScript_CheckIntro:
	goto_if_set FLAG_ADAMINA_WARP_INTRO, Zone10B_EventScript_AdaminaLeave
	checkitem ITEM_RUBY, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_AdaminaIntro
	return

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
	setflag FLAG_ADAMINA_WARP_INTRO
	release
	end

Zone10B_Text_Adamina_Sorry:
	.string "You...\n"
	.string "...\p"
	.string "Look.\n"
	.string "I said some harsh words earlier.\l"
	.string "Consider this part of my apology.$"

Zone10B_Text_Adamina_SafeSpace:
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: This is my tavern.\n"
	.string "It's my safe space.\p"
	.string "All the people from around here\n"
	.string "gather for shelter from the\l"
	.string "sandstorm.\p"
	.string "I just... feel defensive around\n"
	.string "outsiders. Because it feels like\l"
	.string "family here, you know?$"

Zone10B_Text_Adamina_TellYouWhat:
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Tell you what, you can\n"
	.string "stay as long as you like to chat\l"
	.string "with the people here.\p"
	.string "When you're ready to leave,\n"
	.string "come speak to me.$"

Zone10B_EventScript_AdaminaLeave:
	msgbox Zone10B_Text_Adamina_AreYouLeaving, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_Exit
	msgbox Zone10B_Text_Adamina_WhenReady, MSGBOX_AUTOCLOSE
	release
	end

Zone10B_Text_Adamina_AreYouLeaving:
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Are you leaving the Zone?$"

Zone10B_Text_Adamina_WhenReady:
	.string "Come speak to me when you're ready.$"

Zone10B_EventScript_Exit:
	compare VAR_ZONE, 10
	goto_if_gt EventScript_WarpZone0
	msgbox Zone10B_Text_Adamina_UseWell, MSGBOX_AUTOCLOSE
	delay 96
	playmoncry SPECIES_KIRLIA, 0
	msgbox Zone10B_Text_Adamina_UseTeleport, MSGBOX_AUTOCLOSE
	waitmoncry
	warpteleport MAP_ZONE10SANCTUARY, 255, 7, 7
	releaseall
	end

Zone10B_Text_Adamina_UseWell:
	.string "Okay. Use that Warpstone well.$"

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
	goto_if_not_defeated TRAINER_HARPER, Zone10B_EventScript_NoSubstitute
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
	.string "You must have defeated all\n"
	.string "Trainers available thus far.$"

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
	.string "Listen, you know how some berries\n"
	.string "can treat status conditions?\p"
	.string "Well, I'm looking to start a Berry\n"
	.string "farm. If you have 10 of each of\l"
	.string "those Berries, I'll trade them\l"
	.string "for 5 Revives. How about it?$"

Zone10B_Text_BerriesOfferNuzlocke:
	.string "Listen, you know how some berries\n"
	.string "can treat status conditions?\p"
	.string "Well, I'm looking to start a Berry\n"
	.string "farm. If you have 10 of each of\l"
	.string "those Berries, I'll pay you ¥7500\l"
	.string "for them. How about it?$"

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
	addmoney 7500, 0
	playfanfare MUS_OBTAIN_ITEM
	msgbox Zone10B_Text_Received7500, MSGBOX_AUTOCLOSE
	updatemoneybox 0, 0
	waitfanfare
	hidemoneybox
	msgbox Zone10B_Text_GoodDay, MSGBOX_AUTOCLOSE
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 5
	setflag FLAG_HIDE_ZONE10B_BERRYMAN
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

Zone10B_Text_BerryCraftingVanilla:
	.string "Alright... Here we go...\n"
	.string "And bam! 5 Revives!$"

Zone10B_Text_BerryCraftingNuzlocke:
	.string "Thank you, and here is your ¥7500.$"

Zone10B_Text_Received7500:
	.string "Received ¥7500!$"

Zone10B_Text_GoodDay:
	.string "Thank you.\n"
	.string "I'll be seeing you around!$"

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
	setvar VAR_TEMP_2, 0
	checkitem ITEM_HELIX_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_GiveOmanyte
	checkitem ITEM_DOME_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_GiveKabuto
	checkitem ITEM_OLD_AMBER, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_GiveAerodactyl
	checkitem ITEM_ROOT_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_GiveLileep
	checkitem ITEM_CLAW_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_GiveAnorith
	checkitem ITEM_SKULL_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_GiveCranidos
	checkitem ITEM_ARMOR_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_GiveShieldon
	checkitem ITEM_COVER_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_GiveTirtouga
	checkitem ITEM_PLUME_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_GiveArchen
	checkitem ITEM_JAW_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_GiveTyrunt
	checkitem ITEM_SAIL_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_GiveAmaura
	msgbox Zone10B_Text_NoFossils, MSGBOX_AUTOCLOSE
	goto Zone10B_EventScript_FossilDone
	end

Zone10B_EventScript_GiveOmanyte:
	bufferitemname 0, ITEM_HELIX_FOSSIL
	bufferspeciesname 1, SPECIES_OMANYTE
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_HELIX_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	call_if_eq Zone10B_EventScript_SetupPC
	compare VAR_TEMP_2, 0
	call_if_eq Zone10B_EventScript_SetupParty
	givemon SPECIES_OMANYTE, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_OMANYTE
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_SendFossilMonParty
	end

Zone10B_EventScript_GiveKabuto:
	bufferitemname 0, ITEM_DOME_FOSSIL
	bufferspeciesname 1, SPECIES_KABUTO
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_DOME_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	call_if_eq Zone10B_EventScript_SetupPC
	compare VAR_TEMP_2, 0
	call_if_eq Zone10B_EventScript_SetupParty
	givemon SPECIES_KABUTO, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_KABUTO
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_SendFossilMonParty
	end

Zone10B_EventScript_GiveAerodactyl:
	bufferitemname 0, ITEM_OLD_AMBER
	bufferspeciesname 1, SPECIES_AERODACTYL
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_OLD_AMBER
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	call_if_eq Zone10B_EventScript_SetupPC
	compare VAR_TEMP_2, 0
	call_if_eq Zone10B_EventScript_SetupParty
	givemon SPECIES_AERODACTYL, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_AERODACTYL
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_SendFossilMonParty
	end

Zone10B_EventScript_GiveLileep:
	bufferitemname 0, ITEM_ROOT_FOSSIL
	bufferspeciesname 1, SPECIES_LILEEP
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_ROOT_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	call_if_eq Zone10B_EventScript_SetupPC
	compare VAR_TEMP_2, 0
	call_if_eq Zone10B_EventScript_SetupParty
	givemon SPECIES_LILEEP, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_LILEEP
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_SendFossilMonParty
	end

Zone10B_EventScript_GiveAnorith:
	bufferitemname 0, ITEM_CLAW_FOSSIL
	bufferspeciesname 1, SPECIES_ANORITH
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_CLAW_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	call_if_eq Zone10B_EventScript_SetupPC
	compare VAR_TEMP_2, 0
	call_if_eq Zone10B_EventScript_SetupParty
	givemon SPECIES_ANORITH, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_ANORITH
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_SendFossilMonParty
	end

Zone10B_EventScript_GiveCranidos:
	bufferitemname 0, ITEM_SKULL_FOSSIL
	bufferspeciesname 1, SPECIES_CRANIDOS
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_SKULL_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	call_if_eq Zone10B_EventScript_SetupPC
	compare VAR_TEMP_2, 0
	call_if_eq Zone10B_EventScript_SetupParty
	givemon SPECIES_CRANIDOS, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_CRANIDOS
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_SendFossilMonParty
	end

Zone10B_EventScript_GiveShieldon:
	bufferitemname 0, ITEM_ARMOR_FOSSIL
	bufferspeciesname 1, SPECIES_SHIELDON
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_ARMOR_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	call_if_eq Zone10B_EventScript_SetupPC
	compare VAR_TEMP_2, 0
	call_if_eq Zone10B_EventScript_SetupParty
	givemon SPECIES_SHIELDON, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_SHIELDON
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_SendFossilMonParty
	end

Zone10B_EventScript_GiveTirtouga:
	bufferitemname 0, ITEM_COVER_FOSSIL
	bufferspeciesname 1, SPECIES_TIRTOUGA
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_COVER_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	call_if_eq Zone10B_EventScript_SetupPC
	compare VAR_TEMP_2, 0
	call_if_eq Zone10B_EventScript_SetupParty
	givemon SPECIES_TIRTOUGA, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_TIRTOUGA
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_SendFossilMonParty
	end

Zone10B_EventScript_GiveArchen:
	bufferitemname 0, ITEM_PLUME_FOSSIL
	bufferspeciesname 1, SPECIES_ARCHEN
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_PLUME_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	call_if_eq Zone10B_EventScript_SetupPC
	compare VAR_TEMP_2, 0
	call_if_eq Zone10B_EventScript_SetupParty
	givemon SPECIES_ARCHEN, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_ARCHEN
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_SendFossilMonParty
	end

Zone10B_EventScript_GiveTyrunt:
	bufferitemname 0, ITEM_JAW_FOSSIL
	bufferspeciesname 1, SPECIES_TYRUNT
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_JAW_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	call_if_eq Zone10B_EventScript_SetupPC
	compare VAR_TEMP_2, 0
	call_if_eq Zone10B_EventScript_SetupParty
	givemon SPECIES_TYRUNT, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_TYRUNT
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_SendFossilMonParty
	end

Zone10B_EventScript_GiveAmaura:
	bufferitemname 0, ITEM_SAIL_FOSSIL
	bufferspeciesname 1, SPECIES_AMAURA
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_SAIL_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	call_if_eq Zone10B_EventScript_SetupPC
	compare VAR_TEMP_2, 0
	call_if_eq Zone10B_EventScript_SetupParty
	givemon SPECIES_AMAURA, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_AMAURA
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_SendFossilMonParty
	end

Zone10B_EventScript_SetupPC:
	setvar VAR_TEMP_2, 1
	return

Zone10B_EventScript_SetupParty:
	setvar VAR_TEMP_2, 2
	return

Zone10B_EventScript_SendFossilMonParty:
	msgbox Zone10B_Text_GiveNickname, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone10B_EventScript_FossilDone
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Zone10B_EventScript_FossilDone
	end

Zone10B_EventScript_SendFossilMonPC:
	msgbox Zone10B_Text_GiveNickname, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone10B_EventScript_FossilMonTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto Zone10B_EventScript_FossilMonTransferredToPC
	end

Zone10B_EventScript_FossilMonTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto Zone10B_EventScript_FossilDone
	end

Zone10B_EventScript_ReceivedFossilMonFanfare:
	playfanfare MUS_OBTAIN_ITEM
	message Zone10B_Text_ReceivedFossilMon
	waitmessage
	waitfanfare
	return

Zone10B_Text_ReceivedFossilMon:
	.string "Received the Fossil Pokémon {STR_VAR_2}!$"

Zone10B_Text_GiveNickname:
	.string "You want to give it a nickname?$"

Zone10B_EventScript_CommonFossilIntro:
	applymovement 6, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement 6, Common_Movement_Delay48
	waitmovement 0
	msgbox Zone10B_Text_WantReviveFossil, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone10B_EventScript_FossilDone
	msgbox Zone10B_Text_GimmeMoment, MSGBOX_AUTOCLOSE
	applymovement 6, Common_Movement_FaceLeft
	waitmovement 0
	delay 192
	faceplayer
	msgbox Zone10B_Text_HerePokemon, MSGBOX_AUTOCLOSE
	return

Zone10B_Text_GimmeMoment:
	.string "Alright. Gimme a moment...$"

Zone10B_Text_HerePokemon:
	.string "There. Here's your Pokémon.$"

Zone10B_Text_WantReviveFossil:
	.string "Hmm? What do you want?\p"
	.string "Oh, gotcha.\p"
	.string "You want me to turn that\n"
	.string "{STR_VAR_1} back into a Pokémon?$"

Zone10B_Text_NoFossils:
	.string "You got fossils? No?$"
	
Zone10B_Text_BackToDrink:
	.string "Ok, back to my drink.$"

Zone10B_EventScript_FossilDone:
	msgbox Zone10B_Text_BackToDrink, MSGBOX_AUTOCLOSE
	applymovement 6, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

Zone10B_EventScript_WaterMerchant::
	lock
	faceplayer
	showmoneybox 0, 0, 0
	msgbox Zone10B_Text_WaterOffer, MSGBOX_AUTOCLOSE
	closemessage
	multichoice 0, 12, MULTI_FRESH_WATER, 0
	switch VAR_RESULT
	case 0, Zone10B_EventScript_WaterCheckMoneyOne
	case 1, Zone10B_EventScript_WaterCheckMoneyTen
	closemessage
	hidemoneybox
	msgbox Zone10B_Text_NoWater, MSGBOX_AUTOCLOSE
	releaseall
	end

Zone10B_Text_WaterOffer:
	.string "In the desert, it's supply and\n"
	.string "demand. And the demand is water.\p"
	.string "¥200 for Fresh Water.\n"
	.string "Restores 30 HP each.$"

Zone10B_Text_NoWater:
	.string "Ah, fine.$"

Zone10B_EventScript_WaterCheckMoneyOne:
	checkmoney 200, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_WaterNotEnough
	goto Zone10B_EventScript_BuyOneWater
	end

Zone10B_EventScript_WaterCheckMoneyTen:
	checkmoney 2000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_WaterNotEnough
	goto Zone10B_EventScript_BuyTenWater
	end

Zone10B_EventScript_WaterNotEnough:
	msgbox Zone10B_Text_NotEnough, MSGBOX_AUTOCLOSE
	hidemoneybox
	releaseall
	end

Zone10B_Text_NotEnough:
	.string "You don't have enough money.$"

Zone10B_EventScript_BuyOneWater:
	removemoney 200, 0
	updatemoneybox 0, 0
	msgbox Zone10B_Text_GiveWater, MSGBOX_AUTOCLOSE
	giveitem ITEM_FRESH_WATER, 1
	hidemoneybox
	release
	end

Zone10B_EventScript_BuyTenWater:
	removemoney 2000, 0
	updatemoneybox 0, 0
	msgbox Zone10B_Text_GiveWater, MSGBOX_AUTOCLOSE
	giveitem ITEM_FRESH_WATER, 10
	hidemoneybox
	release
	end

Zone10B_Text_GiveWater:
	.string "Here you go.$"
