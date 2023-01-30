Zone9E_MapScripts::
	.byte 0


Zone9E_EventScript_BuyFarmAnimal::
	lock
	faceplayer
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone9E_EventScript_BuyFarmAnimal_4
Zone9E_EventScript_BuyFarmAnimal_3:
	showmoneybox 0, 0, 0
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_7
	checkmoney 5000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_10
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_14
	call EventScript_NuzlockeVerifyGift
	removemoney 5000
	updatemoneybox
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_5, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone9E_EventScript_BuyFarmAnimal_17
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_7, MSGBOX_DEFAULT
	multichoice2 21, 0, Zone9E_Text_FarmAnimalMultichoice, TRUE
	switch VAR_RESULT
	case 0, Zone9E_EventScript_BuyFarmAnimal_28
	case 1, Zone9E_EventScript_BuyFarmAnimal_29
	case 2, Zone9E_EventScript_BuyFarmAnimal_30
	case 3, Zone9E_EventScript_BuyFarmAnimal_31
Zone9E_EventScript_BuyFarmAnimal_16:
	givemon VAR_TEMP_1, 20, ITEM_NONE
	setmonmetlocation VAR_TEMP_2, 249
	bufferspeciesname 0, VAR_TEMP_1
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_8, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message Zone9E_EventScript_BuyFarmAnimal_Text_9
	waitmessage
	waitfanfare
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_10, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_21
Zone9E_EventScript_BuyFarmAnimal_20:
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_11, MSGBOX_DEFAULT
Zone9E_EventScript_BuyFarmAnimal_1:
	release
	end

Zone9E_EventScript_BuyFarmAnimal_2:
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_0
	release
	end

Zone9E_EventScript_BuyFarmAnimal_4:
	goto_if_set FLAG_ZONE9E_NUZLOCKE_BOUGHT_FARM_ANIMAL, Zone9E_EventScript_BuyFarmAnimal_2
	goto Zone9E_EventScript_BuyFarmAnimal_3

Zone9E_EventScript_BuyFarmAnimal_7:
	closemessage
	hidemoneybox
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_2
	goto Zone9E_EventScript_BuyFarmAnimal_1

Zone9E_EventScript_BuyFarmAnimal_10:
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_3
	hidemoneybox
	goto Zone9E_EventScript_BuyFarmAnimal_1

Zone9E_EventScript_BuyFarmAnimal_14:
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_4
	hidemoneybox
	release
	end

Zone9E_EventScript_BuyFarmAnimal_17:
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone9E_EventScript_BuyFarmAnimal_24
	setvar VAR_TEMP_3, 0
	checkspeciesclause SPECIES_MILTANK
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_33
Zone9E_EventScript_BuyFarmAnimal_32:
	checkspeciesclause SPECIES_TAUROS
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_36
Zone9E_EventScript_BuyFarmAnimal_35:
	checkspeciesclause SPECIES_INDEEDEE_FEMALE
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_39
Zone9E_EventScript_BuyFarmAnimal_38:
	checkspeciesclause SPECIES_INDEEDEE
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_42
Zone9E_EventScript_BuyFarmAnimal_41:
	compare VAR_TEMP_3, 4
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_45
Zone9E_EventScript_BuyFarmAnimal_47:
	compare VAR_TEMP_1, 0
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_48
Zone9E_EventScript_BuyFarmAnimal_23:
	setflag FLAG_ZONE9E_NUZLOCKE_BOUGHT_FARM_ANIMAL
	goto Zone9E_EventScript_BuyFarmAnimal_16

Zone9E_EventScript_BuyFarmAnimal_21:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Zone9E_EventScript_BuyFarmAnimal_20

Zone9E_EventScript_BuyFarmAnimal_24:
	setvar VAR_TEMP_1, SPECIES_MILTANK
	goto Zone9E_EventScript_BuyFarmAnimal_23

Zone9E_EventScript_BuyFarmAnimal_28:
	setvar VAR_TEMP_1, SPECIES_MILTANK
	goto Zone9E_EventScript_BuyFarmAnimal_16

Zone9E_EventScript_BuyFarmAnimal_29:
	setvar VAR_TEMP_1, SPECIES_TAUROS
	goto Zone9E_EventScript_BuyFarmAnimal_16

Zone9E_EventScript_BuyFarmAnimal_30:
	setvar VAR_TEMP_1, SPECIES_INDEEDEE_FEMALE
	goto Zone9E_EventScript_BuyFarmAnimal_16

Zone9E_EventScript_BuyFarmAnimal_31:
	setvar VAR_TEMP_1, SPECIES_INDEEDEE
	goto Zone9E_EventScript_BuyFarmAnimal_16

Zone9E_EventScript_BuyFarmAnimal_33:
	addvar VAR_TEMP_3, 1
	goto Zone9E_EventScript_BuyFarmAnimal_32

Zone9E_EventScript_BuyFarmAnimal_36:
	addvar VAR_TEMP_3, 1
	goto Zone9E_EventScript_BuyFarmAnimal_35

Zone9E_EventScript_BuyFarmAnimal_39:
	addvar VAR_TEMP_3, 1
	goto Zone9E_EventScript_BuyFarmAnimal_38

Zone9E_EventScript_BuyFarmAnimal_42:
	addvar VAR_TEMP_3, 1
	goto Zone9E_EventScript_BuyFarmAnimal_41

Zone9E_EventScript_BuyFarmAnimal_45:
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_6
	addmoney 3000
	release
	end

Zone9E_EventScript_BuyFarmAnimal_48:
	random 4
	switch VAR_RESULT
	case 0, Zone9E_EventScript_BuyFarmAnimal_51
	case 1, Zone9E_EventScript_BuyFarmAnimal_52
	case 2, Zone9E_EventScript_BuyFarmAnimal_53
	case 3, Zone9E_EventScript_BuyFarmAnimal_54
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_51:
	checkspeciesclause SPECIES_MILTANK
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_56
	setvar VAR_TEMP_1, SPECIES_MILTANK
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_52:
	checkspeciesclause SPECIES_TAUROS
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_59
	setvar VAR_TEMP_1, SPECIES_TAUROS
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_53:
	checkspeciesclause SPECIES_INDEEDEE_FEMALE
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_62
	setvar VAR_TEMP_1, SPECIES_INDEEDEE_FEMALE
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_54:
	checkspeciesclause SPECIES_INDEEDEE
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_65
	setvar VAR_TEMP_1, SPECIES_INDEEDEE
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_56:
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_59:
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_62:
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_65:
	goto Zone9E_EventScript_BuyFarmAnimal_47


Zone9E_Text_FarmAnimalMultichoice:
    .string "Miltank$"
    .string "Tauros$"
    .string "Indeedee-F$"
    .string "Indeedee-M$"
    .string "$"

Zone9E_EventScript_BuyFarmAnimal_Text_0:
	.string "Sorry, honey. The rest of these Pokémon\n"
	.string "aren't for sale anymore.$"

Zone9E_EventScript_BuyFarmAnimal_Text_1:
	.string "Howdy! There ain't many farms 'round\n"
	.string "these parts, so I have an offer for\l"
	.string "you.\p"
	.string "I'll give you a Miltank, Tauros, or\n"
	.string "Indeedee, for only ¥5000!$"

Zone9E_EventScript_BuyFarmAnimal_Text_2:
	.string "Well, aren't you a downer.$"

Zone9E_EventScript_BuyFarmAnimal_Text_3:
	.string "You don't have enough money.$"

Zone9E_EventScript_BuyFarmAnimal_Text_4:
	.string "Your party is full. Clear a party slot,\n"
	.string "then come back.$"

Zone9E_EventScript_BuyFarmAnimal_Text_5:
	.string "Thanks for supporting us farm folk.$"

Zone9E_EventScript_BuyFarmAnimal_Text_6:
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone9E_EventScript_BuyFarmAnimal_Text_7:
	.string "Choose which of these you would like.$"

Zone9E_EventScript_BuyFarmAnimal_Text_8:
	.string "Here's your {STR_VAR_1}.$"

Zone9E_EventScript_BuyFarmAnimal_Text_9:
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone9E_EventScript_BuyFarmAnimal_Text_10:
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone9E_EventScript_BuyFarmAnimal_Text_11:
	.string "Take care of {STR_VAR_1} as well as\n"
	.string "it takes care of you!$"
