Zone2B_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE2B_POTION_X2, Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME_1
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone2B_EventScript_Exit::
	lockall
	compare VAR_ZONE, 2
	goto_if_gt Zone2B_EventScript_Exit_2
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone2B_EventScript_Exit_7
Zone2B_EventScript_Exit_5:
	warp MAP_ZONE2SANCTUARY, 255, 22, 7
	waitstate
Zone2B_EventScript_Exit_1:
	releaseall
	end

Zone2B_EventScript_Exit_2:
	call EventScript_WarpZone0
	goto Zone2B_EventScript_Exit_1

Zone2B_EventScript_Exit_6:
	goto EventScript_BrutalExitNotSatisfied
	goto Zone2B_EventScript_Exit_5

Zone2B_EventScript_Exit_7:
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_ne Zone2B_EventScript_Exit_6
	goto Zone2B_EventScript_Exit_5


Zone2B_EventScript_LeviathanBattle::
	lock
	faceplayer
	goto_if_set FLAG_BEAT_LEVIATHAN_2, Zone2B_EventScript_LeviathanBattle_2
	msgbox Zone2B_Text_Leviathan2WantBattle, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_LeviathanBattle_5
	fadeoutbgm 1
	msgbox Zone2B_Text_Leviathan2Intro
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone2B_EventScript_LeviathanBattle_8
	setvar VAR_MUGSHOT_ID, MUGSHOT_JOEY
	trainerbattle_no_intro TRAINER_JOEY_LEVIATHAN_2, Zone2B_Text_Leviathan2Defeat
Zone2B_EventScript_LeviathanBattle_7:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone2B_EventScript_LeviathanBattle_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_SILK_SCARF, 1
	msgbox Zone2B_EventScript_LeviathanBattle_Text_0
	closemessage
	setflag FLAG_BEAT_LEVIATHAN_2
	release
	end

Zone2B_EventScript_LeviathanBattle_2:
	msgbox Zone2B_EventScript_LeviathanBattle_Text_0
	release
	end

Zone2B_EventScript_LeviathanBattle_5:
	msgbox Zone2B_Text_Leviathan2DenyBattle
	release
	end

Zone2B_EventScript_LeviathanBattle_8:
	setvar VAR_MUGSHOT_ID, MUGSHOT_JOEY
	trainerbattle_no_intro TRAINER_JOEY_LEVIATHAN_2_BRUTAL, Zone2B_Text_Leviathan2Defeat
	goto Zone2B_EventScript_LeviathanBattle_7


Zone2B_EventScript_BuyBug::
	lock
	faceplayer
	goto_if_set FLAG_NUZLOCKE_ON, Zone2B_EventScript_BuyBug_4
Zone2B_EventScript_BuyBug_3:
	showmoneybox 0, 0, 0
	msgbox Zone2B_EventScript_BuyBug_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_7
	checkmoney 1000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Zone2B_EventScript_BuyBug_10
	specialvar VAR_TEMP_1, CalculatePlayerPartyCount
	compare VAR_TEMP_1, PARTY_SIZE
	goto_if_eq Zone2B_EventScript_BuyBug_14
	removemoney 1000, 0
	updatemoneybox
	msgbox Zone2B_EventScript_BuyBug_Text_5
	closemessage
	hidemoneybox
	goto_if_set FLAG_NUZLOCKE_ON, Zone2B_EventScript_BuyBug_17
	msgbox Zone2B_EventScript_BuyBug_Text_6, MSGBOX_DEFAULT
	multichoice2 21, 0, Zone2B_Text_BugMultichoice, TRUE
	switch VAR_RESULT
	case 0, Zone2B_EventScript_BuyBug_27
	case 1, Zone2B_EventScript_BuyBug_28
	case 2, Zone2B_EventScript_BuyBug_29
	case 3, Zone2B_EventScript_BuyBug_30
Zone2B_EventScript_BuyBug_16:
	givemon VAR_TEMP_0, 5, ITEM_NONE
	setmonmetlocation VAR_TEMP_1, 251
	bufferspeciesname 0, VAR_TEMP_0
	msgbox Zone2B_EventScript_BuyBug_Text_7
	playfanfare MUS_OBTAIN_ITEM
	message Zone2B_EventScript_BuyBug_Text_8
	waitmessage
	waitfanfare
	msgbox Zone2B_EventScript_BuyBug_Text_9
Zone2B_EventScript_BuyBug_1:
	release
	end

Zone2B_EventScript_BuyBug_2:
	msgbox Zone2B_EventScript_BuyBug_Text_0
	release
	end

Zone2B_EventScript_BuyBug_4:
	goto_if_set FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG, Zone2B_EventScript_BuyBug_2
	goto Zone2B_EventScript_BuyBug_3

Zone2B_EventScript_BuyBug_7:
	closemessage
	hidemoneybox
	msgbox Zone2B_EventScript_BuyBug_Text_2
	goto Zone2B_EventScript_BuyBug_1

Zone2B_EventScript_BuyBug_10:
	msgbox Zone2B_EventScript_BuyBug_Text_3
	hidemoneybox
	goto Zone2B_EventScript_BuyBug_1

Zone2B_EventScript_BuyBug_14:
	msgbox Zone2B_EventScript_BuyBug_Text_4
	hidemoneybox
	release
	end

Zone2B_EventScript_BuyBug_17:
	random 4
	switch VAR_RESULT
	case 0, Zone2B_EventScript_BuyBug_22
	case 1, Zone2B_EventScript_BuyBug_23
	case 2, Zone2B_EventScript_BuyBug_24
	case 3, Zone2B_EventScript_BuyBug_25
Zone2B_EventScript_BuyBug_20:
	setflag FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG
	goto Zone2B_EventScript_BuyBug_16

Zone2B_EventScript_BuyBug_22:
	setvar VAR_TEMP_0, SPECIES_BLIPBUG
	goto Zone2B_EventScript_BuyBug_20

Zone2B_EventScript_BuyBug_23:
	setvar VAR_TEMP_0, SPECIES_GRUBBIN
	goto Zone2B_EventScript_BuyBug_20

Zone2B_EventScript_BuyBug_24:
	setvar VAR_TEMP_0, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_20

Zone2B_EventScript_BuyBug_25:
	setvar VAR_TEMP_0, SPECIES_VENIPEDE
	goto Zone2B_EventScript_BuyBug_20

Zone2B_EventScript_BuyBug_27:
	setvar VAR_TEMP_0, SPECIES_BLIPBUG
	goto Zone2B_EventScript_BuyBug_16

Zone2B_EventScript_BuyBug_28:
	setvar VAR_TEMP_0, SPECIES_GRUBBIN
	goto Zone2B_EventScript_BuyBug_16

Zone2B_EventScript_BuyBug_29:
	setvar VAR_TEMP_0, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_16

Zone2B_EventScript_BuyBug_30:
	setvar VAR_TEMP_0, SPECIES_VENIPEDE
	goto Zone2B_EventScript_BuyBug_16


Zone2B_EventScript_ItemPotion::
	lock
	goto_if_set FLAG_ITEM_ZONE2B_POTION_X2, Zone2B_EventScript_ItemPotion_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE2B_POTION_X2
	addobject VAR_LAST_TALKED
	finditem ITEM_POTION, 2
	release
	end

Zone2B_EventScript_ItemPotion_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone2B_Text_BugMultichoice:
    .string "Blipbug$"
    .string "Grubbin$"
    .string "Sewaddle$"
    .string "Venipede$"
    .string "$"

Zone2B_EventScript_Harper::
	trainerbattle_single TRAINER_HARPER, Zone2B_Text_HarperIntro, Zone2B_Text_HarperDefeat
	msgbox Zone2B_Text_HarperPostBattle, MSGBOX_AUTOCLOSE
	end

Zone2B_Text_HarperIntro:
	.string "Surprise! Battle time!$"

Zone2B_Text_HarperDefeat:
	.string "My spirit, crushed!$"

Zone2B_Text_HarperPostBattle:
	.string "I don't know if I can ever\n"
	.string "come back from this loss…$"

Zone2B_EventScript_Arthur::
	trainerbattle_single TRAINER_ARTHUR, Zone2B_Text_ArthurIntro, Zone2B_Text_ArthurDefeat
	msgbox Zone2B_Text_ArthurPostBattle, MSGBOX_AUTOCLOSE
	end

Zone2B_Text_ArthurIntro:
	.string "Hey, you! Get out of my way!$"

Zone2B_Text_ArthurDefeat:
	.string "You're too strong!$"

Zone2B_Text_ArthurPostBattle:
	.string "Sorry about earlier.$"

Zone2B_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: Do I have to have more Pokémon in\n"
	.string "order to battle better?\p"
	.string "No!\n"
	.string "I'm sticking with this one no matter\l"
	.string "what!$"

Zone2B_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: Even after all that training,\n"
	.string "Rattata wasn't enough to get across\l"
	.string "the finish line.\p"
	.string "That's all right though;\p"
	.string "I enjoyed our battle so much, I want to\n"
	.string "give you this!$"

Zone2B_EventScript_BuyBug_Text_0:
	.string "Scram! I'm out of bugs for you to buy\n"
	.string "right now.\p"
	.string "Come back later.$"

Zone2B_EventScript_BuyBug_Text_1:
	.string "Oh! You look like a Bug-type\n"
	.string "enthusiast.\p"
	.string "Would you care to buy a Bug-type\n"
	.string "Pokemon?\p"
	.string "I've got Grubbin, Sewaddle, Venipede, or\n"
	.string "Blipbug for only ¥1000!$"

Zone2B_EventScript_BuyBug_Text_2:
	.string "Ugh. Fine.$"

Zone2B_EventScript_BuyBug_Text_3:
	.string "You don't have enough money.$"

Zone2B_EventScript_BuyBug_Text_4:
	.string "Your party is full. Clear a party slot,\n"
	.string "then come back.$"

Zone2B_EventScript_BuyBug_Text_5:
	.string "Ehehehe, thank you…$"

Zone2B_EventScript_BuyBug_Text_6:
	.string "Choose which Bug you would like.$"

Zone2B_EventScript_BuyBug_Text_7:
	.string "Here's your {STR_VAR_1}.$"

Zone2B_EventScript_BuyBug_Text_8:
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone2B_EventScript_BuyBug_Text_9:
	.string "Pleasure doing business with you.$"

Zone2B_Text_Leviathan2WantBattle::
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: My Rattata is in the top\n"
	.string "percentage of Rattata! Want to see?$"

Zone2B_Text_Leviathan2Intro::
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: All right then, let's battle!$"

Zone2B_Text_Leviathan2DenyBattle::
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: Oh, all right…$"

Zone2B_Text_Leviathan2Defeat::
	.string "Ack! I lost again!\p"
	.string "Doggone it!$"
