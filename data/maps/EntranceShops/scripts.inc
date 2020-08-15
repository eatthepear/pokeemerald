EntranceShops_MapScripts::
	.byte 0

EntranceShops_EventScript_Shop_General::
	lock
	faceplayer
	message gText_Tim_Welcome
	waitmessage
	pokemart EntranceShops_Shop_General
	msgbox gText_Tim_Leave, MSGBOX_DEFAULT
	release
	end

	.align 2
EntranceShops_Shop_General:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE
	release
	end

EntranceShops_EventScript_Shop_Unique::
	lock
	faceplayer
	message gText_Varrick_Welcome
	waitmessage
	pokemart EntranceShops_Shop_Unique
	msgbox gText_Varrick_Leave, MSGBOX_DEFAULT
	release
	end

	.align 2
EntranceShops_Shop_Unique:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE
	release
	end