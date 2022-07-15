Zone13C_MapScripts::
	.byte 0


Zone13C_EventScript_Fossil_Scientist::
	lock
	faceplayer
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone13C_EventScript_Fossil_Scientist_2
	goto_if_set FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_Scientist_5
Zone13C_EventScript_Fossil_Scientist_4:
	goto_if_set FLAG_DAILY_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_Scientist_8
Zone13C_EventScript_Fossil_Scientist_7:
	applymovement 3, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox Zone13C_EventScript_Fossil_Scientist_Text_1
	goto_if_set FLAG_NUZLOCKE_ON, Zone13C_EventScript_Fossil_Scientist_11
Zone13C_EventScript_Fossil_Scientist_10:
	setflag FLAG_DAILY_FOSSIL_RECEIVED
	random 9
	switch VAR_RESULT
	case 0, Zone13C_EventScript_Fossil_Scientist_15
	case 1, Zone13C_EventScript_Fossil_Scientist_16
	case 2, Zone13C_EventScript_Fossil_Scientist_17
	case 3, Zone13C_EventScript_Fossil_Scientist_18
	case 4, Zone13C_EventScript_Fossil_Scientist_19
	case 5, Zone13C_EventScript_Fossil_Scientist_20
	case 6, Zone13C_EventScript_Fossil_Scientist_21
	case 7, Zone13C_EventScript_Fossil_Scientist_22
	case 8, Zone13C_EventScript_Fossil_Scientist_23
Zone13C_EventScript_Fossil_Scientist_13:
	goto_if_set FLAG_NUZLOCKE_ON, Zone13C_EventScript_Fossil_Scientist_25
	goto Zone13C_EventScript_Fossil_VanillaReceived
Zone13C_EventScript_Fossil_Scientist_24:
	end

Zone13C_EventScript_Fossil_Scientist_2:
	msgbox Zone13C_EventScript_Fossil_Scientist_Text_0
	release
	end

Zone13C_EventScript_Fossil_Scientist_5:
	goto Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_Scientist_4

Zone13C_EventScript_Fossil_Scientist_8:
	goto Zone13C_EventScript_Fossil_VanillaReceived
	goto Zone13C_EventScript_Fossil_Scientist_7

Zone13C_EventScript_Fossil_Scientist_11:
	setflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
	goto Zone13C_EventScript_Fossil_Scientist_10

Zone13C_EventScript_Fossil_Scientist_15:
	giveitem ITEM_DOME_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_13

Zone13C_EventScript_Fossil_Scientist_16:
	giveitem ITEM_HELIX_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_13

Zone13C_EventScript_Fossil_Scientist_17:
	giveitem ITEM_OLD_AMBER
	goto Zone13C_EventScript_Fossil_Scientist_13

Zone13C_EventScript_Fossil_Scientist_18:
	giveitem ITEM_ROOT_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_13

Zone13C_EventScript_Fossil_Scientist_19:
	giveitem ITEM_CLAW_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_13

Zone13C_EventScript_Fossil_Scientist_20:
	giveitem ITEM_COVER_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_13

Zone13C_EventScript_Fossil_Scientist_21:
	giveitem ITEM_PLUME_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_13

Zone13C_EventScript_Fossil_Scientist_22:
	giveitem ITEM_JAW_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_13

Zone13C_EventScript_Fossil_Scientist_23:
	giveitem ITEM_SAIL_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_13

Zone13C_EventScript_Fossil_Scientist_25:
	goto Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_Scientist_24


Zone13C_EventScript_Fossil_VanillaReceived::
	msgbox Zone13C_EventScript_Fossil_VanillaReceived_Text_0
	release
	end


Zone13C_EventScript_Fossil_NuzlockeReceived::
	msgbox Zone13C_EventScript_Fossil_NuzlockeReceived_Text_0
	release
	end


Zone13C_EventScript_Scientist4::
	lock
	faceplayer
	goto_if_unset FLAG_ZONE13C_RECEIVED_ZOOM_LENS, Zone13C_EventScript_Scientist4_2
Zone13C_EventScript_Scientist4_1:
	msgbox Zone13C_EventScript_Scientist4_Text_1
	release
	end

Zone13C_EventScript_Scientist4_2:
	msgbox Zone13C_EventScript_Scientist4_Text_0
	giveitem ITEM_ZOOM_LENS
	setflag FLAG_ZONE13C_RECEIVED_ZOOM_LENS
	goto Zone13C_EventScript_Scientist4_1


Zone13C_EventScript_Darwin::
	trainerbattle_single TRAINER_DARWIN, Zone13C_Text_DarwinIntro, Zone13C_Text_DarwinDefeat
	msgbox Zone13C_Text_DarwinPostBattle, MSGBOX_AUTOCLOSE
	end

Zone13C_Text_DarwinIntro:
	.string "This grass is far too tall\n"
	.string "for someone of my stature!$"

Zone13C_Text_DarwinDefeat:
	.string "I meant financial stature!\n"
	.string "I'm not short!$"

Zone13C_Text_DarwinPostBattle:
	.string "Errr… Never mind.$"

Zone13C_EventScript_Scientist1::
	lock
	msgbox Zone13C_Text_Scientist1, MSGBOX_SIGN
	release
	end

Zone13C_Text_Scientist1:
	.string "He's so focused on his work,\n"
	.string "he doesn't even notice you.$"

Zone13C_EventScript_Scientist2::
	lock
	faceplayer
	msgbox Zone13C_Text_Scientist2_WhyMale, MSGBOX_AUTOCLOSE
	delay 48
	msgbox Zone13C_Text_Scientist2_GenderRoles, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_Scientist2_WhyMale:
	.string "Why are all the scientists male,\n"
	.string "you ask?$"

Zone13C_Text_Scientist2_GenderRoles:
	.string "Um... Game Freak existed a while\n"
	.string "ago and helped perpetuate\l"
	.string "traditional gender roles in\l"
	.string "society?\p"
	.string "Never mind. Google it.$"

Zone13C_EventScript_DeveloperEatthepear::
	lock
	faceplayer
	msgbox Zone13C_Text_Eatthepear, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_Eatthepear:
	.string "Hello there. It's {COLOR BLUE}eatthepear{COLOR DARK_GRAY}, the\n"
	.string "developer of this ROM hack!\p"
	.string "Thanks for playing and I hope\n"
	.string "you're enjoying your time.\p"
	.string "When you beat the game, come back\n"
	.string "here and let's have a battle!$"

Zone13C_EventScript_Fossil_Scientist_Text_0:
	.string "Sorry, I just ran out of fossils.$"

Zone13C_EventScript_Fossil_Scientist_Text_1:
	.string "You get a Fossil!\nYou get a Fossil!\lEverybody gets a Fossil!$"

Zone13C_EventScript_Fossil_VanillaReceived_Text_0:
	.string "Hope you enjoy your Fossil!\nCome back tomorrow for another!$"

Zone13C_EventScript_Fossil_NuzlockeReceived_Text_0:
	.string "Hope you enjoy your Fossil!$"

Zone13C_EventScript_Scientist4_Text_0:
	.string "Sometimes you just need a little bit\n"
	.string "more accuracy for your moves. That's\l"
	.string "where the Zoom Lens comes in!$"

Zone13C_EventScript_Scientist4_Text_1:
	.string "The Zoom Lens boosts accuracy by 20%,\n"
	.string "but only against opponents that have\l"
	.string "already moved that turn.$"
