Zone9E_MapScripts::
	.byte 0


Zone9E_EventScript_BuyGrassStarter::
	lock
	faceplayer
	goto_if_set FLAG_NUZLOCKE_ON, Zone9E_EventScript_BuyGrassStarter_4
Zone9E_EventScript_BuyGrassStarter_3:
	showmoneybox 0, 0, 0
	msgbox Zone9E_EventScript_BuyGrassStarter_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_7
	checkmoney 5000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_10
	specialvar VAR_TEMP_0, CalculatePlayerPartyCount
	compare VAR_TEMP_0, PARTY_SIZE
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_14
	removemoney 5000, 0
	updatemoneybox
	msgbox Zone9E_EventScript_BuyGrassStarter_Text_5, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	goto_if_set FLAG_NUZLOCKE_ON, Zone9E_EventScript_BuyGrassStarter_17
	msgbox Zone9E_EventScript_BuyGrassStarter_Text_6, MSGBOX_DEFAULT
	multichoice2 21, 0, Zone9E_Text_StarterMultichoice, TRUE
	switch VAR_RESULT
	case 0, Zone9E_EventScript_BuyGrassStarter_25
	case 1, Zone9E_EventScript_BuyGrassStarter_26
	case 2, Zone9E_EventScript_BuyGrassStarter_27
	case 3, Zone9E_EventScript_BuyGrassStarter_28
Zone9E_EventScript_BuyGrassStarter_16:
	givemon VAR_TEMP_2, 5, ITEM_NONE
	setmonmetlocation VAR_TEMP_0, 249
	bufferspeciesname 0, VAR_TEMP_2
	msgbox Zone9E_EventScript_BuyGrassStarter_Text_7, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message Zone9E_EventScript_BuyGrassStarter_Text_8
	waitmessage
	waitfanfare
	msgbox Zone9E_EventScript_BuyGrassStarter_Text_9
Zone9E_EventScript_BuyGrassStarter_1:
	release
	end

Zone9E_EventScript_BuyGrassStarter_2:
	msgbox Zone9E_EventScript_BuyGrassStarter_Text_0
	release
	end

Zone9E_EventScript_BuyGrassStarter_4:
	goto_if_set FLAG_TEMP_1, Zone9E_EventScript_BuyGrassStarter_2
	goto Zone9E_EventScript_BuyGrassStarter_3

Zone9E_EventScript_BuyGrassStarter_7:
	closemessage
	hidemoneybox
	msgbox Zone9E_EventScript_BuyGrassStarter_Text_2
	goto Zone9E_EventScript_BuyGrassStarter_1

Zone9E_EventScript_BuyGrassStarter_10:
	msgbox Zone9E_EventScript_BuyGrassStarter_Text_3
	hidemoneybox
	goto Zone9E_EventScript_BuyGrassStarter_1

Zone9E_EventScript_BuyGrassStarter_14:
	msgbox Zone9E_EventScript_BuyGrassStarter_Text_4
	hidemoneybox
	release
	end

Zone9E_EventScript_BuyGrassStarter_17:
Zone9E_EventScript_BuyGrassStarter_21:
	compare VAR_TEMP_2, 0
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_22
	setflag FLAG_TEMP_1
	goto Zone9E_EventScript_BuyGrassStarter_16

Zone9E_EventScript_BuyGrassStarter_22:
	random 4
	switch VAR_RESULT
	case 0, Zone9E_EventScript_BuyGrassStarter_30
	case 1, Zone9E_EventScript_BuyGrassStarter_31
	case 2, Zone9E_EventScript_BuyGrassStarter_32
	case 3, Zone9E_EventScript_BuyGrassStarter_33
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_25:
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
	goto Zone9E_EventScript_BuyGrassStarter_16

Zone9E_EventScript_BuyGrassStarter_26:
	setvar VAR_TEMP_2, SPECIES_GROOKEY
	goto Zone9E_EventScript_BuyGrassStarter_16

Zone9E_EventScript_BuyGrassStarter_27:
	setvar VAR_TEMP_2, SPECIES_TREECKO
	goto Zone9E_EventScript_BuyGrassStarter_16

Zone9E_EventScript_BuyGrassStarter_28:
	setvar VAR_TEMP_2, SPECIES_TURTWIG
	goto Zone9E_EventScript_BuyGrassStarter_16

Zone9E_EventScript_BuyGrassStarter_30:
	goto_if_unset FLAG_RANDOMIZER_ON, Zone9E_EventScript_BuyGrassStarter_35
Zone9E_EventScript_BuyGrassStarter_34:
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_31:
	goto_if_unset FLAG_RANDOMIZER_ON, Zone9E_EventScript_BuyGrassStarter_38
Zone9E_EventScript_BuyGrassStarter_37:
	setvar VAR_TEMP_1, SPECIES_THWACKEY
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_50
	setvar VAR_TEMP_1, SPECIES_RILLABOOM
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_64
	setvar VAR_TEMP_2, SPECIES_GROOKEY
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_32:
	goto_if_unset FLAG_RANDOMIZER_ON, Zone9E_EventScript_BuyGrassStarter_41
Zone9E_EventScript_BuyGrassStarter_40:
	setvar VAR_TEMP_2, SPECIES_TREECKO
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_33:
	goto_if_unset FLAG_RANDOMIZER_ON, Zone9E_EventScript_BuyGrassStarter_44
Zone9E_EventScript_BuyGrassStarter_43:
	setvar VAR_TEMP_2, SPECIES_TURTWIG
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_35:
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_47
	setvar VAR_TEMP_1, SPECIES_IVYSAUR
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_61
	setvar VAR_TEMP_1, SPECIES_VENUSAUR
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_72
	goto Zone9E_EventScript_BuyGrassStarter_34

Zone9E_EventScript_BuyGrassStarter_38:
	setvar VAR_TEMP_1, SPECIES_GROOKEY
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_52
	goto Zone9E_EventScript_BuyGrassStarter_37

Zone9E_EventScript_BuyGrassStarter_41:
	setvar VAR_TEMP_1, SPECIES_TREECKO
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_55
	setvar VAR_TEMP_1, SPECIES_GROVYLE
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_67
	setvar VAR_TEMP_1, SPECIES_SCEPTILE
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_74
	goto Zone9E_EventScript_BuyGrassStarter_40

Zone9E_EventScript_BuyGrassStarter_44:
	setvar VAR_TEMP_1, SPECIES_TURTWIG
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_58
	setvar VAR_TEMP_1, SPECIES_GROTLE
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_70
	setvar VAR_TEMP_1, SPECIES_TORTERRA
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyGrassStarter_76
	goto Zone9E_EventScript_BuyGrassStarter_43

Zone9E_EventScript_BuyGrassStarter_47:
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_50:
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_52:
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_55:
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_58:
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_61:
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_64:
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_67:
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_70:
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_72:
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_74:
	goto Zone9E_EventScript_BuyGrassStarter_21

Zone9E_EventScript_BuyGrassStarter_76:
	goto Zone9E_EventScript_BuyGrassStarter_21


Zone9E_Text_StarterMultichoice:
    .string "Bulbasaur$"
    .string "Grookey$"
    .string "Treecko$"
    .string "Turtwig$"
    .string "$"

Zone9E_EventScript_BuyGrassStarter_Text_0:
	.string "The rest of these Grass starters aren't\n"
	.string "for sale anymore. Sorry about that!$"

Zone9E_EventScript_BuyGrassStarter_Text_1:
	.string "Hello! I work with the Pokémon\n"
	.string "Day-Care.\p"
	.string "We're looking for trainers to adopt\n"
	.string "starter Pokémon.\p"
	.string "I have here Bulbasaur, Grookey,\n"
	.string "Treecko, or Turtwig, and the adoption\l"
	.string "fee is ¥5000!$"

Zone9E_EventScript_BuyGrassStarter_Text_2:
	.string "Well, I'll be here if you do decide to\n"
	.string "adopt a starter.$"

Zone9E_EventScript_BuyGrassStarter_Text_3:
	.string "You don't have enough money.$"

Zone9E_EventScript_BuyGrassStarter_Text_4:
	.string "Your party is full. Clear a party slot,\n"
	.string "then come back.$"

Zone9E_EventScript_BuyGrassStarter_Text_5:
	.string "All right, forms signed, and… voila!$"

Zone9E_EventScript_BuyGrassStarter_Text_6:
	.string "Choose which starter you would like.$"

Zone9E_EventScript_BuyGrassStarter_Text_7:
	.string "Here's your {STR_VAR_1}.$"

Zone9E_EventScript_BuyGrassStarter_Text_8:
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone9E_EventScript_BuyGrassStarter_Text_9:
	.string "Take good care of that starter\n"
	.string "Pokémon!$"
