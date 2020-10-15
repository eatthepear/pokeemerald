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
