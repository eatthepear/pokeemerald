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
	giveitem TM05
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
