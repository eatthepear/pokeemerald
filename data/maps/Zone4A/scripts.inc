Zone4A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE4A_BURN_HEAL, Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_1
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone4A_EventScript_Breeder::
	lock
	faceplayer
	goto_if_unset FLAG_ZONE0B_RECEIVED_EEVEE, Zone4A_EventScript_Breeder_2
	msgbox Zone4A_EventScript_Breeder_Text_1, MSGBOX_DEFAULT
Zone4A_EventScript_Breeder_5:
	compare VAR_TEMP_0, 1
	goto_if_ne Zone4A_EventScript_Breeder_6
	msgbox Zone4A_EventScript_Breeder_Text_12, MSGBOX_DEFAULT
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone4A_EventScript_Breeder_10
Zone4A_EventScript_Breeder_8:
	delay 16
	msgbox Zone4A_EventScript_Breeder_Text_14, MSGBOX_DEFAULT
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 3
	setflag FLAG_ZONE4A_RECEIVED_GEM
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	return

Zone4A_EventScript_Breeder_2:
	msgbox Zone4A_EventScript_Breeder_Text_0
	release
	end

Zone4A_EventScript_Breeder_6:
	msgbox Zone4A_EventScript_Breeder_Text_2, MSGBOX_DEFAULT
	scrollingmultichoice 1, 0, 0, 5, 1
	switch VAR_RESULT
	case 0, Zone4A_EventScript_Breeder_14
	case 1, Zone4A_EventScript_Breeder_15
	case 2, Zone4A_EventScript_Breeder_16
	case 3, Zone4A_EventScript_Breeder_17
	case 4, Zone4A_EventScript_Breeder_18
	case 5, Zone4A_EventScript_Breeder_19
	case 6, Zone4A_EventScript_Breeder_20
	case 7, Zone4A_EventScript_Breeder_21
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_9:
	msgbox Zone4A_EventScript_Breeder_Text_13, MSGBOX_DEFAULT
	goto Zone4A_EventScript_Breeder_8

Zone4A_EventScript_Breeder_10:
	goto_if_unset FLAG_SETTINGS_RED_THUMB, Zone4A_EventScript_Breeder_9
	goto Zone4A_EventScript_Breeder_8

Zone4A_EventScript_Breeder_14:
	msgbox Zone4A_EventScript_Breeder_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_22
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_15:
	msgbox Zone4A_EventScript_Breeder_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_24
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_16:
	msgbox Zone4A_EventScript_Breeder_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_26
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_17:
	msgbox Zone4A_EventScript_Breeder_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_28
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_18:
	msgbox Zone4A_EventScript_Breeder_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_30
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_19:
	msgbox Zone4A_EventScript_Breeder_Text_8, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_32
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_20:
	msgbox Zone4A_EventScript_Breeder_Text_9, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_34
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_21:
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone4A_EventScript_Breeder_36
	msgbox Zone4A_EventScript_Breeder_Text_11, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_39
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_22:
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
	giveitem ITEM_WATER_GEM
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_24:
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
	giveitem ITEM_ELECTRIC_GEM
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_26:
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
	giveitem ITEM_FIRE_GEM
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_28:
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
	giveitem ITEM_PSYCHIC_GEM
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_30:
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
	giveitem ITEM_DARK_GEM
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_32:
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
	giveitem ITEM_GRASS_GEM
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_34:
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
	giveitem ITEM_ICE_GEM
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_36:
	msgbox Zone4A_EventScript_Breeder_Text_10, MSGBOX_DEFAULT
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_39:
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
	giveitem ITEM_FAIRY_GEM
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5


Zone4A_EventScript_ItemBurnHeal::
	lock
	goto_if_set FLAG_ITEM_ZONE4A_BURN_HEAL, Zone4A_EventScript_ItemBurnHeal_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE4A_BURN_HEAL
	addobject VAR_LAST_TALKED
	finditem ITEM_BURN_HEAL, 1
	release
	end

Zone4A_EventScript_ItemBurnHeal_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone4A_EventScript_Sign::
	msgbox Zone4A_Text_Sign, MSGBOX_SIGN
	end

Zone4A_Text_Sign:
	.string "These woods are enchanted…\n"
	.string "Don't get lost!$"

Zone4A_EventScript_Herman::
	trainerbattle_single TRAINER_HERMAN, Zone4A_Text_HermanIntro, Zone4A_Text_HermanDefeat
	msgbox Zone4A_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
	end

Zone4A_Text_HermanIntro:
	.string "I keep going through this exit,\n"
	.string "'cause it might lead somewhere!$"

Zone4A_Text_HermanDefeat:
	.string "But I keep getting back here!$"

Zone4A_Text_HermanPostBattle:
	.string "Try something else?\n"
	.string "No, I'm sure this is the right way!$"

Zone4A_EventScript_Breeder_Text_0:
	.string "Hello, {PLAYER}!\n"
	.string "I work at the Pokémon Day-Care.\p"
	.string "There's a special Eevee giveaway at the\n"
	.string "Day-Care, so go check that out!$"

Zone4A_EventScript_Breeder_Text_1:
	.string "Hello, {PLAYER}!\n"
	.string "I work at the Pokémon Day-Care.\p"
	.string "We've been studying how Eevee evolves\n"
	.string "differently based on which elemental\l"
	.string "Gem it holds when it levels up.$"

Zone4A_EventScript_Breeder_Text_2:
	.string "What's your favorite evolution of\n"
	.string "Eevee?$"

Zone4A_EventScript_Breeder_Text_3:
	.string "Oh, so you like Vaporeon?$"

Zone4A_EventScript_Breeder_Text_4:
	.string "Oh, so you like Jolteon?$"

Zone4A_EventScript_Breeder_Text_5:
	.string "Oh, so you like Flareon?$"

Zone4A_EventScript_Breeder_Text_6:
	.string "Oh, so you like Espeon?$"

Zone4A_EventScript_Breeder_Text_7:
	.string "Oh, so you like Umbreon?$"

Zone4A_EventScript_Breeder_Text_8:
	.string "Oh, so you like Leafeon?$"

Zone4A_EventScript_Breeder_Text_9:
	.string "Oh, so you like Glaceon?$"

Zone4A_EventScript_Breeder_Text_10:
	.string "Unfortunately, I ran out of Fairy Gems\n"
	.string "to give out.\p"
	.string "You'll have to find a way to evolve your\n"
	.string "Eevee into Sylveon elsewhere.$"

Zone4A_EventScript_Breeder_Text_11:
	.string "Oh, so you like Sylveon?$"

Zone4A_EventScript_Breeder_Text_12:
	.string "I hope you can put that Gem to good\n"
	.string "use.$"

Zone4A_EventScript_Breeder_Text_13:
	.string "If you want to evolve your Eevee into a\n"
	.string "different evolution, you can always\l"
	.string "find Gems by smashing rocks with a\l"
	.string "Sledgehammer!$"

Zone4A_EventScript_Breeder_Text_14:
	.string "Well, I'm off to help other trainers.\p"
	.string "See you!$"

Zone4A_Text_HereGem::
	.string "Then I suppose this would be of good\n"
	.string "use to you!$"
