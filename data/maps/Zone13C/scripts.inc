Zone13C_MapScripts::
	.byte 0


Zone13C_EventScript_LeviathanBattle::
	lock
	faceplayer
	goto_if_set FLAG_BEAT_LEVIATHAN_11, Zone13C_EventScript_LeviathanBattle_2
	msgbox Zone13C_Text_Leviathan11WantBattle, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone13C_EventScript_LeviathanBattle_5
	fadeoutbgm 1
	msgbox Zone13C_EventScript_LeviathanBattle_Text_1, MSGBOX_DEFAULT
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone13C_EventScript_LeviathanBattle_8
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone13C_EventScript_LeviathanBattle_8
	setvar VAR_MUGSHOT_ID, MUGSHOT_JENNY
	trainerbattle_no_intro TRAINER_JENNY_LEVIATHAN_11, Zone13C_Text_Leviathan11Defeat
Zone13C_EventScript_LeviathanBattle_7:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone13C_EventScript_LeviathanBattle_Text_2, MSGBOX_DEFAULT
	giveitem ITEM_WHITE_HERB
	msgbox Zone13C_Text_Jenny_PostBattle
	closemessage
	setflag FLAG_BEAT_LEVIATHAN_11
	release
	end

Zone13C_EventScript_LeviathanBattle_2:
	msgbox Zone13C_Text_Jenny_PostBattle
	closemessage
	release
	end

Zone13C_EventScript_LeviathanBattle_5:
	msgbox Zone13C_EventScript_LeviathanBattle_Text_0
	release
	end

Zone13C_EventScript_LeviathanBattle_8:
	setvar VAR_MUGSHOT_ID, MUGSHOT_JENNY
	trainerbattle_no_intro TRAINER_JENNY_LEVIATHAN_11_BRUTAL, Zone13C_Text_Leviathan11Defeat
	goto Zone13C_EventScript_LeviathanBattle_7


Zone13C_EventScript_Fossil_Scientist::
	lock
	faceplayer
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone13C_EventScript_Fossil_Scientist_2
	goto_if_set FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_Scientist_5
	goto_if_set FLAG_SETTINGS_RED_THUMB, Zone13C_EventScript_Fossil_Scientist_5
Zone13C_EventScript_Fossil_Scientist_4:
	goto_if_set FLAG_DAILY_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_Scientist_10
Zone13C_EventScript_Fossil_Scientist_9:
	applymovement 3, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox Zone13C_EventScript_Fossil_Scientist_Text_1
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone13C_EventScript_Fossil_Scientist_13
Zone13C_EventScript_Fossil_Scientist_12:
	setflag FLAG_DAILY_FOSSIL_RECEIVED
	random 9
	switch VAR_RESULT
	case 0, Zone13C_EventScript_Fossil_Scientist_17
	case 1, Zone13C_EventScript_Fossil_Scientist_18
	case 2, Zone13C_EventScript_Fossil_Scientist_19
	case 3, Zone13C_EventScript_Fossil_Scientist_20
	case 4, Zone13C_EventScript_Fossil_Scientist_21
	case 5, Zone13C_EventScript_Fossil_Scientist_22
	case 6, Zone13C_EventScript_Fossil_Scientist_23
	case 7, Zone13C_EventScript_Fossil_Scientist_24
	case 8, Zone13C_EventScript_Fossil_Scientist_25
Zone13C_EventScript_Fossil_Scientist_15:
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone13C_EventScript_Fossil_Scientist_27
	goto Zone13C_EventScript_Fossil_VanillaReceived
Zone13C_EventScript_Fossil_Scientist_26:
	end

Zone13C_EventScript_Fossil_Scientist_2:
	msgbox Zone13C_EventScript_Fossil_Scientist_Text_0
	release
	end

Zone13C_EventScript_Fossil_Scientist_5:
	goto Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_Scientist_4

Zone13C_EventScript_Fossil_Scientist_10:
	goto Zone13C_EventScript_Fossil_VanillaReceived
	goto Zone13C_EventScript_Fossil_Scientist_9

Zone13C_EventScript_Fossil_Scientist_13:
	setflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
	goto Zone13C_EventScript_Fossil_Scientist_12

Zone13C_EventScript_Fossil_Scientist_17:
	giveitem ITEM_DOME_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_18:
	giveitem ITEM_HELIX_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_19:
	giveitem ITEM_OLD_AMBER
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_20:
	giveitem ITEM_ROOT_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_21:
	giveitem ITEM_CLAW_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_22:
	giveitem ITEM_COVER_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_23:
	giveitem ITEM_PLUME_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_24:
	giveitem ITEM_JAW_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_25:
	giveitem ITEM_SAIL_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_27:
	goto Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_Scientist_26


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


Zone13C_EventScript_Cook::
	lock
	faceplayer
	goto_if_set FLAG_ZONE13C_RECEIVED_APPLES, Zone13C_EventScript_Cook_3
Zone13C_EventScript_Cook_1:
	msgbox Zone13C_EventScript_Cook_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone13C_EventScript_Cook_7
Zone13C_EventScript_Cook_6:
	release
	end

Zone13C_EventScript_Cook_2:
	msgbox Zone13C_EventScript_Cook_Text_0
	release
	end

Zone13C_EventScript_Cook_3:
	goto_if_set FLAG_ZONE13C_RECEIVED_SWEETS, Zone13C_EventScript_Cook_2
	goto Zone13C_EventScript_Cook_1

Zone13C_EventScript_Cook_7:
	special ChoosePartyMon
	waitstate
	compare VAR_RESULT, 255
	goto_if_ne Zone13C_EventScript_Cook_9
	goto Zone13C_EventScript_Cook_6

Zone13C_EventScript_Cook_9:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	switch VAR_RESULT
	case SPECIES_APPLIN, Zone13C_EventScript_Cook_12
	case SPECIES_MILCERY, Zone13C_EventScript_Cook_13
	msgbox Zone13C_EventScript_Cook_Text_6
	goto Zone13C_EventScript_Cook_6

Zone13C_EventScript_Cook_12:
	goto_if_unset FLAG_ZONE13C_RECEIVED_APPLES, Zone13C_EventScript_Cook_15
	msgbox Zone13C_EventScript_Cook_Text_3
	goto Zone13C_EventScript_Cook_6

Zone13C_EventScript_Cook_13:
	goto_if_unset FLAG_ZONE13C_RECEIVED_SWEETS, Zone13C_EventScript_Cook_18
	msgbox Zone13C_EventScript_Cook_Text_5
	goto Zone13C_EventScript_Cook_6

Zone13C_EventScript_Cook_15:
	msgbox Zone13C_EventScript_Cook_Text_2
	giveitem ITEM_SWEET_APPLE
	giveitem ITEM_TART_APPLE
	setflag FLAG_ZONE13C_RECEIVED_APPLES
	goto Zone13C_EventScript_Cook_6

Zone13C_EventScript_Cook_18:
	msgbox Zone13C_EventScript_Cook_Text_4
	giveitem ITEM_STRAWBERRY_SWEET
	giveitem ITEM_LOVE_SWEET
	giveitem ITEM_BERRY_SWEET
	giveitem ITEM_CLOVER_SWEET
	giveitem ITEM_FLOWER_SWEET
	giveitem ITEM_STAR_SWEET
	giveitem ITEM_RIBBON_SWEET
	setflag FLAG_ZONE13C_RECEIVED_SWEETS
	goto Zone13C_EventScript_Cook_6


Zone13C_EventScript_Darwin::
	trainerbattle_single TRAINER_DARWIN, Zone13C_Text_DarwinIntro, Zone13C_Text_DarwinDefeat
	msgbox Zone13C_Text_DarwinPostBattle, MSGBOX_AUTOCLOSE
	end

Zone13C_Text_DarwinIntro:
	.string "I've been doing research on\n"
	.string "branched evolutions!$"

Zone13C_Text_DarwinDefeat:
	.string "Even some starters have branched\n"
	.string "evolution!$"

Zone13C_Text_DarwinPostBattle:
	.string "According to my research:\p"
	.string "Quilava evolves into Hisuian\n"
	.string "Typhlosion with a Fire Stone,\p"
	.string "Dewott evolves into Hisuian\n"
	.string "Samurott with a Water Stone,\p"
	.string "and Dartrix evolves into Hisuian\n"
	.string "Decidueye when leveled up holding a\l"
	.string "Ring Target.$"

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

Zone13C_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Jenny{COLOR DARK_GRAY}: Nervous about facing me?$"

Zone13C_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Jenny{COLOR DARK_GRAY}: My battle style is quite\n"
	.string "ferocious, despite me having only one\l"
	.string "Pokémon!$"

Zone13C_EventScript_LeviathanBattle_Text_2:
	.string "{COLOR BLUE}Jenny{COLOR DARK_GRAY}: Here, I want you to have this\n"
	.string "item.\p"
	.string "It'll stop your Pokémon's stats from\n"
	.string "being lowered, but it's only single use.$"

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

Zone13C_EventScript_Cook_Text_0:
	.string "I already gave you all the evolution\n"
	.string "items I have!$"

Zone13C_EventScript_Cook_Text_1:
	.string "I just love Pokémon that evolve via\n"
	.string "food items!\p"
	.string "Show me an Applin or a Milcery, and I'll\n"
	.string "give you the corresponding evolution\l"
	.string "items!$"

Zone13C_EventScript_Cook_Text_2:
	.string "That's an Applin all right! Well, here you\n"
	.string "go!$"

Zone13C_EventScript_Cook_Text_3:
	.string "I already gave you all the Applin\n"
	.string "evolution items I have!$"

Zone13C_EventScript_Cook_Text_4:
	.string "That's a Milcery all right! Well, here you\n"
	.string "go!$"

Zone13C_EventScript_Cook_Text_5:
	.string "I already gave you all the Milcery\n"
	.string "evolution items I have!$"

Zone13C_EventScript_Cook_Text_6:
	.string "That's not an Applin nor a Milcery!$"

Zone13C_Text_Leviathan11WantBattle::
	.string "{COLOR BLUE}Jenny{COLOR DARK_GRAY}: Ah, it's so nice to finally have a\n"
	.string "resting spot from all my traveling.\p"
	.string "What do you want?\p"
	.string "A battle?$"

Zone13C_Text_Leviathan11Defeat::
	.string "You did great, Gyarados!$"

Zone13C_Text_Jenny_PostBattle::
	.string "{COLOR BLUE}Jenny{COLOR DARK_GRAY}: I guess traveling lightly comes\n"
	.string "with downsides, too.\p"
	.string "I sometimes wish I could bring more\n"
	.string "Pokémon on my travels with me.$"
