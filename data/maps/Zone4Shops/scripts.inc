Zone4Shops_MapScripts::
	.byte 0

Zone4Shops_EventScript_Shop_General::
	lock
	faceplayer
	call_if_unset FLAG_TIM_INTRO, EventScript_Shop_TimIntro
	message gText_Tim_Welcome
	waitmessage
	pokemart Zone4Shops_Shop_General
	msgbox gText_Tim_Leave, MSGBOX_DEFAULT
	release
	end

	.align 2
Zone4Shops_Shop_General:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_NONE
	release
	end

Zone4Shops_EventScript_Shop_Unique::
	lock
	faceplayer
	call_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_VarrickIntro
	message gText_Varrick_Welcome
	waitmessage
	pokemart Zone4Shops_Shop_Unique
	msgbox gText_Varrick_Leave, MSGBOX_DEFAULT
	release
	end

	.align 2
Zone4Shops_Shop_Unique:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_NONE
	release
	end
