Zone21Shops_MapScripts::
	.byte 0

Zone21Shops_EventScript_Shop_General::
	lock
	faceplayer
	call_if_unset FLAG_TIM_INTRO, EventScript_Shop_TimIntro
	message gText_Tim_Welcome
	waitmessage
	pokemart Zone21Shops_Shop_General
	msgbox gText_Tim_Leave, MSGBOX_DEFAULT
	release
	end

	.align 2
Zone21Shops_Shop_General:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SP_DEF
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_ETHER
	.2byte ITEM_NONE
	release
	end

Zone21Shops_EventScript_Shop_VarrickUnique::
	lock
	faceplayer
	message gText_Varrick_Welcome
	waitmessage
	pokemart Zone21Shops_Shop_VarrickUnique
	msgbox gText_Varrick_Leave, MSGBOX_DEFAULT
	release
	end

	.align 2
Zone21Shops_Shop_VarrickUnique:
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_MAGNET
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_POISON_BARB
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_HARD_STONE
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_SHELL_BELL
	.2byte ITEM_METRONOME
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_NONE
	release
	end

Zone21Shops_EventScript_Shop_ZhuLiUnique::
	lock
	faceplayer
	message gText_ZhuLi_Welcome
	waitmessage
	pokemart Zone21Shops_Shop_ZhuLiUnique
	msgbox gText_ZhuLi_Leave, MSGBOX_DEFAULT
	release
	end

	.align 2
Zone21Shops_Shop_ZhuLiUnique:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_SACHET
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE
	release
	end

Zone21Shops_EventScript_Shop_Services::
	lock
	faceplayer
	call_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_LelouchIntro
	call_if_unset FLAG_LELOUCH_SHARDS, EventScript_Shop_LelouchExplainShards
	msgbox gText_Lelouch_Welcome, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_OPTIONS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchTraining3
	case 1, EventScript_Shop_LelouchCheckReminder
	case 2, EventScript_Shop_LelouchCheckTutor
	case 3, EventScript_Shop_LelouchNotEnoughColor
	goto EventScript_Shop_LelouchLeave
	end
