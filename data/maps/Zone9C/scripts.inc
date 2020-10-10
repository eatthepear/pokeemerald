Zone9C_MapScripts::
	.byte 0

Zone9C_EventScript_Man::
	lock
	faceplayer
	message Zone9C_Text_Man_Welcome
	waitmessage
	goto_if_set FLAG_NUZLOCKE_ON, Zone9C_EventScript_ManNuzlocke
	pokemart Zone9C_Shop_HerbalVanilla
	msgbox Zone9C_Text_Man_Leave, MSGBOX_DEFAULT
	release
	end

Zone9C_EventScript_ManNuzlocke:
	pokemart Zone9C_Shop_HerbalNuzlocke
	msgbox Zone9C_Text_Man_Leave, MSGBOX_DEFAULT
	release
	end

	.align 2
Zone9C_Shop_HerbalVanilla:
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_NONE
	release
	end
	
	.align 2
Zone9C_Shop_HerbalNuzlocke:
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_NONE
	release
	end

Zone9C_EventScript_Woman::
	lock
	faceplayer
	message Zone9C_Text_Woman_Welcome
	waitmessage
	pokemart Zone9C_Shop_Incense
	msgbox Zone9C_Text_Woman_Leave, MSGBOX_DEFAULT
	release
	end

	.align 2
Zone9C_Shop_Incense:
	.2byte ITEM_SEA_INCENSE
	.2byte ITEM_LAX_INCENSE
	.2byte ITEM_ODD_INCENSE
	.2byte ITEM_ROCK_INCENSE
	.2byte ITEM_FULL_INCENSE
	.2byte ITEM_WAVE_INCENSE
	.2byte ITEM_ROSE_INCENSE
	.2byte ITEM_LUCK_INCENSE
	.2byte ITEM_PURE_INCENSE
	.2byte ITEM_NONE
	release
	end

Zone9C_Text_Man_Welcome:
	.string "Welcome to my Herb shop.\n"
	.string "All natural ingredients only.$"

Zone9C_Text_Man_Leave:
	.string "Take it easy, now.$"

Zone9C_Text_Woman_Welcome:
	.string "The fragrance, the aroma...\n"
	.string "Welcome to my Incense shop.$"

Zone9C_Text_Woman_Leave:
	.string "Rest easy, now.$"
