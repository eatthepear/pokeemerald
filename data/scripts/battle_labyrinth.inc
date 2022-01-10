EventScript_MoveCameraUp:
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	special RemoveCameraObject
	return

EventScript_MoveCameraDown:
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	special RemoveCameraObject
	return

EventScript_GeneralSign::
	msgbox gText_GeneralSign, MSGBOX_SIGN
	end

EventScript_UniqueSign::
	msgbox gText_UniqueSign, MSGBOX_SIGN
	end

EventScript_ServicesSign::
	msgbox gText_ServicesSign, MSGBOX_SIGN
	end

EventScript_HealingSign::
	msgbox gText_HealingSign, MSGBOX_SIGN
	end

EventScript_Shop_General::
	lock
	faceplayer
	call_if_unset FLAG_TIM_INTRO, EventScript_Shop_TimIntro
	message gText_Tim_Welcome
	waitmessage
	switch VAR_ZONE
	case 1, EventScript_Shop_General_1to3
	case 2, EventScript_Shop_General_1to3
	case 3, EventScript_Shop_General_1to3
	case 4, EventScript_Shop_General_4to8
	case 5, EventScript_Shop_General_4to8
	case 6, EventScript_Shop_General_4to8
	case 7, EventScript_Shop_General_4to8
	case 9, EventScript_Shop_General_9to12
	case 10, EventScript_Shop_General_9to12
	case 11, EventScript_Shop_General_9to12
	case 12, EventScript_Shop_General_9to12
	case 13, EventScript_Shop_General_13to16
	case 15, EventScript_Shop_General_13to16
	case 16, EventScript_Shop_General_13to16
	case 17, EventScript_Shop_General_17to25
	case 18, EventScript_Shop_General_17to25
	case 20, EventScript_Shop_General_17to25
	case 21, EventScript_Shop_General_17to25
	case 22, EventScript_Shop_General_17to25
	case 23, EventScript_Shop_General_17to25
	case 24, EventScript_Shop_General_17to25
	case 25, EventScript_Shop_General_17to25
	case 26, EventScript_Shop_General_26to30
	end

EventScript_Shop_General_1to3:
	pokemart Shop_General_1to3
	goto EventScript_Shop_General_End
	end

EventScript_Shop_General_4to8:
	pokemart Shop_General_4to8
	goto EventScript_Shop_General_End
	end

EventScript_Shop_General_9to12:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_General_9to12_Brutal
	pokemart Shop_General_9to12
	goto EventScript_Shop_General_End
	end

EventScript_Shop_General_9to12_Brutal:
	pokemart Shop_General_9to12_Brutal
	goto EventScript_Shop_General_End
	end

EventScript_Shop_General_13to16:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_General_13to16_Brutal
	pokemart Shop_General_13to16
	goto EventScript_Shop_General_End
	end

EventScript_Shop_General_13to16_Brutal:
	pokemart Shop_General_13to16_Brutal
	goto EventScript_Shop_General_End
	end

EventScript_Shop_General_17to25:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_General_17to25_Brutal
	pokemart Shop_General_17to25
	goto EventScript_Shop_General_End
	end

EventScript_Shop_General_17to25_Brutal:
	pokemart Shop_General_17to25_Brutal
	goto EventScript_Shop_General_End
	end

EventScript_Shop_General_26to30:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_General_26to30_Brutal
	pokemart Shop_General_26to30
	goto EventScript_Shop_General_End
	end

EventScript_Shop_General_26to30_Brutal:
	pokemart Shop_General_26to30_Brutal
	goto EventScript_Shop_General_End
	end

	.align 2
Shop_General_1to3:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_4to8:
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

	.align 2
Shop_General_9to12:
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
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SP_DEF
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_9to12_Brutal:
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
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_13to16:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
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

	.align 2
Shop_General_13to16_Brutal:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_ETHER
	.2byte ITEM_NONE
	release
	end
	
	.align 2
Shop_General_17to25:
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

	.align 2
Shop_General_17to25_Brutal:
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
	.2byte ITEM_ETHER
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_26to30:
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
	.2byte ITEM_ELIXIR
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_26to30_Brutal:
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
	.2byte ITEM_ETHER
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE
	release
	end

EventScript_Shop_General_End:
	msgbox gText_Tim_Leave, MSGBOX_DEFAULT
	release
	end

EventScript_Shop_TimIntro:
	msgbox gText_Tim_Intro, MSGBOX_AUTOCLOSE
	setflag FLAG_TIM_INTRO
	return

EventScript_Shop_Unique_Varrick::
	lock
	faceplayer
	call_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_VarrickIntro
	message gText_Varrick_Welcome
	waitmessage
	switch VAR_ZONE
	case 1, EventScript_Shop_Unique_Varrick_1to3
	case 2, EventScript_Shop_Unique_Varrick_1to3
	case 3, EventScript_Shop_Unique_Varrick_1to3
	case 4, EventScript_Shop_Unique_Varrick_4to5
	case 5, EventScript_Shop_Unique_Varrick_4to5
	case 6, EventScript_Shop_Unique_Varrick_6to8
	case 7, EventScript_Shop_Unique_Varrick_6to8
	case 9, EventScript_Shop_Unique_Varrick_9to10
	case 10, EventScript_Shop_Unique_Varrick_9to10
	case 11, EventScript_Shop_Unique_Varrick_11to14
	case 12, EventScript_Shop_Unique_Varrick_11to14
	case 13, EventScript_Shop_Unique_Varrick_11to14
	case 15, EventScript_Shop_Unique_Varrick_15to20
	case 16, EventScript_Shop_Unique_Varrick_15to20
	case 17, EventScript_Shop_Unique_Varrick_15to20
	case 18, EventScript_Shop_Unique_Varrick_15to20
	case 20, EventScript_Shop_Unique_Varrick_15to20
	case 21, EventScript_Shop_Unique_Varrick_21to23
	case 22, EventScript_Shop_Unique_Varrick_21to23
	case 23, EventScript_Shop_Unique_Varrick_21to23
	case 24, EventScript_Shop_Unique_Varrick_24to25
	case 25, EventScript_Shop_Unique_Varrick_24to25
	case 26, EventScript_Shop_Unique_Varrick_26to30
	end

EventScript_Shop_Unique_Varrick_1to3:
	pokemart Shop_Unique_Varrick_1to3
	goto EventScript_Shop_Unique_Varrick_End
	end

EventScript_Shop_Unique_Varrick_4to5:
	pokemart Shop_Unique_Varrick_4to5
	goto EventScript_Shop_Unique_Varrick_End
	end

EventScript_Shop_Unique_Varrick_6to8:
	pokemart Shop_Unique_Varrick_6to8
	goto EventScript_Shop_Unique_Varrick_End
	end

EventScript_Shop_Unique_Varrick_9to10:
	pokemart Shop_Unique_Varrick_9to10
	goto EventScript_Shop_Unique_Varrick_End
	end

EventScript_Shop_Unique_Varrick_11to14:
	pokemart Shop_Unique_Varrick_11to14
	goto EventScript_Shop_Unique_Varrick_End
	end

EventScript_Shop_Unique_Varrick_15to20:
	pokemart Shop_Unique_Varrick_15to20
	goto EventScript_Shop_Unique_Varrick_End
	end

EventScript_Shop_Unique_Varrick_21to23:
	pokemart Shop_Unique_Varrick_21to23
	goto EventScript_Shop_Unique_Varrick_End
	end

EventScript_Shop_Unique_Varrick_24to25:
	pokemart Shop_Unique_Varrick_24to25
	goto EventScript_Shop_Unique_Varrick_End
	end

EventScript_Shop_Unique_Varrick_26to30:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_Unique_Varrick_26to30_Brutal
	pokemart Shop_Unique_Varrick_26to30
	goto EventScript_Shop_Unique_Varrick_End
	end

EventScript_Shop_Unique_Varrick_26to30_Brutal:
	pokemart Shop_Unique_Varrick_26to30_Brutal
	goto EventScript_Shop_Unique_Varrick_End
	end

	.align 2
Shop_Unique_Varrick_1to3:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_4to5:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_NONE
	release
	end
	
	.align 2
Shop_Unique_Varrick_6to8:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_NONE
	release
	end
	
	.align 2
Shop_Unique_Varrick_9to10:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
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
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_11to14:
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
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
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_15to20:
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
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
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_21to23:
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
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
	.2byte ITEM_LIGHT_BALL
	.2byte ITEM_LEEK
	.2byte ITEM_THICK_CLUB
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_24to25:
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
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
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_26to30:
	.2byte ITEM_EXP_SHARE
	.2byte ITEM_MACHO_BRACE
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_EVIOLITE
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
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
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_26to30_Brutal:
	.2byte ITEM_EXP_SHARE
	.2byte ITEM_EVIOLITE
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
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
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE
	release
	end

EventScript_Shop_Unique_Varrick_End:
	msgbox gText_Varrick_Leave, MSGBOX_DEFAULT
	release
	end

EventScript_Shop_Unique_ZhuLi::
	lock
	faceplayer
	message gText_ZhuLi_Welcome
	waitmessage
	switch VAR_ZONE
	case 11, EventScript_Shop_Unique_ZhuLi_11to14
	case 12, EventScript_Shop_Unique_ZhuLi_11to14
	case 13, EventScript_Shop_Unique_ZhuLi_11to14
	case 15, EventScript_Shop_Unique_ZhuLi_15to20
	case 16, EventScript_Shop_Unique_ZhuLi_15to20
	case 17, EventScript_Shop_Unique_ZhuLi_15to20
	case 18, EventScript_Shop_Unique_ZhuLi_15to20
	case 20, EventScript_Shop_Unique_ZhuLi_15to20
	case 21, EventScript_Shop_Unique_ZhuLi_21to23
	case 22, EventScript_Shop_Unique_ZhuLi_21to23
	case 23, EventScript_Shop_Unique_ZhuLi_21to23
	case 24, EventScript_Shop_Unique_ZhuLi_24to30
	case 25, EventScript_Shop_Unique_ZhuLi_24to30
	case 26, EventScript_Shop_Unique_ZhuLi_24to30
	end

EventScript_Shop_Unique_ZhuLi_11to14:
	pokemart Shop_Unique_ZhuLi_11to14
	goto EventScript_Shop_Unique_ZhuLi_End
	end

EventScript_Shop_Unique_ZhuLi_15to20:
	pokemart Shop_Unique_ZhuLi_15to20
	goto EventScript_Shop_Unique_ZhuLi_End
	end

EventScript_Shop_Unique_ZhuLi_21to23:
	pokemart Shop_Unique_ZhuLi_21to23
	goto EventScript_Shop_Unique_ZhuLi_End
	end

EventScript_Shop_Unique_ZhuLi_24to30:
	pokemart Shop_Unique_ZhuLi_24to30
	goto EventScript_Shop_Unique_ZhuLi_End
	end

	.align 2
Shop_Unique_ZhuLi_11to14:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_SACHET
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_TART_APPLE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_ZhuLi_15to20:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_SACHET
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_TART_APPLE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_ZhuLi_21to23:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_METAL_COAT
	.2byte ITEM_PRISM_SCALE
	.2byte ITEM_DEEP_SEA_SCALE
	.2byte ITEM_DEEP_SEA_TOOTH
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_GALARICA_CUFF
	.2byte ITEM_GALARICA_WREATH
	.2byte ITEM_CRACKED_POT
	.2byte ITEM_UPGRADE
	.2byte ITEM_SACHET
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_TART_APPLE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_NONE
	release
	end

Shop_Unique_ZhuLi_24to30:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_PROTECTOR
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_METAL_COAT
	.2byte ITEM_PRISM_SCALE
	.2byte ITEM_DEEP_SEA_SCALE
	.2byte ITEM_DEEP_SEA_TOOTH
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_GALARICA_CUFF
	.2byte ITEM_GALARICA_WREATH
	.2byte ITEM_CRACKED_POT
	.2byte ITEM_UPGRADE
	.2byte ITEM_SACHET
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_TART_APPLE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_NONE
	release
	end

EventScript_Shop_Unique_ZhuLi_End:
	msgbox gText_ZhuLi_Leave, MSGBOX_DEFAULT
	release
	end

EventScript_Shop_VarrickIntro:
	msgbox gText_Varrick_Intro, MSGBOX_AUTOCLOSE
	setflag FLAG_VARRICK_INTRO
	return

EventScript_Shop_ZhuLiIntro::
	lockall
	applymovement 2, Common_Movement_ExclamationMark
	applymovement 5, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 18
	call_if_eq EventScript_Shop_ZhuLiIntroMoveUp
	compare VAR_TEMP_0, 19
	call_if_eq EventScript_Shop_ZhuLiIntroMoveUp
	compare VAR_TEMP_0, 20
	call_if_eq EventScript_Shop_ZhuLiIntroMoveUpLeft
	msgbox gText_Varrick_ZhuLiIntro1, MSGBOX_AUTOCLOSE
	msgbox gText_ZhuLi_ZhuLiIntro1, MSGBOX_AUTOCLOSE
	playse SE_APPLAUSE
	waitse
	msgbox gText_Varrick_ZhuLiIntro2, MSGBOX_AUTOCLOSE
	msgbox gText_ZhuLi_ZhuLiIntro2, MSGBOX_AUTOCLOSE
	msgbox gText_Varrick_ZhuLiIntro3, MSGBOX_AUTOCLOSE
	setvar VAR_ZHULI_INTRO, 1
	setflag FLAG_VARRICK_INTRO
	releaseall
	end

EventScript_Shop_ZhuLiIntroMoveUp:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	return

EventScript_Shop_ZhuLiIntroMoveUpLeft:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	call EventScript_Shop_ZhuLiIntroMoveUp
	return

EventScript_Shop_Lelouch::
	lock
	faceplayer
	call_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_LelouchIntro
	goto_if_lt VAR_ZONE, 6, EventScript_Shop_Lelouch_Deny
	call_if_unset FLAG_LELOUCH_SHARDS, EventScript_Shop_LelouchExplainShards
	msgbox gText_Lelouch_Welcome, MSGBOX_DEFAULT
	switch VAR_ZONE
	case 6, EventScript_Shop_Lelouch_6to15
	case 7, EventScript_Shop_Lelouch_6to15
	case 9, EventScript_Shop_Lelouch_6to15
	case 10, EventScript_Shop_Lelouch_6to15
	case 11, EventScript_Shop_Lelouch_6to15
	case 12, EventScript_Shop_Lelouch_6to15
	case 13, EventScript_Shop_Lelouch_6to15
	case 15, EventScript_Shop_Lelouch_6to15
	case 16, EventScript_Shop_Lelouch_16to20
	case 17, EventScript_Shop_Lelouch_16to20
	case 18, EventScript_Shop_Lelouch_16to20
	case 20, EventScript_Shop_Lelouch_16to20
	case 21, EventScript_Shop_Lelouch_21to25
	case 22, EventScript_Shop_Lelouch_21to25
	case 23, EventScript_Shop_Lelouch_21to25
	case 24, EventScript_Shop_Lelouch_21to25
	case 25, EventScript_Shop_Lelouch_21to25
	case 26, EventScript_Shop_Lelouch_26to30
	end

EventScript_Shop_Lelouch_6to15:
	multichoice 0, 0, MULTI_LELOUCH_OPTIONS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchTraining1
	case 1, EventScript_Shop_LelouchCheckReminder
	case 2, EventScript_Shop_LelouchCheckTutor
	case 3, EventScript_Shop_LelouchNotEnoughColor
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_Lelouch_16to20:
	multichoice 0, 0, MULTI_LELOUCH_OPTIONS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchTraining2
	case 1, EventScript_Shop_LelouchCheckReminder
	case 2, EventScript_Shop_LelouchCheckTutor
	case 3, EventScript_Shop_LelouchNotEnoughColor
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_Lelouch_21to25:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_Lelouch_21to25_Brutal
	multichoice 0, 0, MULTI_LELOUCH_OPTIONS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchTraining3
	case 1, EventScript_Shop_LelouchCheckReminder
	case 2, EventScript_Shop_LelouchCheckTutor
	case 3, EventScript_Shop_LelouchNotEnoughColor
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_Lelouch_21to25_Brutal:
	multichoice 0, 0, MULTI_LELOUCH_OPTIONS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchTraining3Brutal
	case 1, EventScript_Shop_LelouchCheckReminder
	case 2, EventScript_Shop_LelouchCheckTutor
	case 3, EventScript_Shop_LelouchNotEnoughColor
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_Lelouch_26to30:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_Lelouch_26to30_Brutal
	multichoice 0, 0, MULTI_LELOUCH_OPTIONS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchTraining4
	case 1, EventScript_Shop_LelouchCheckReminder
	case 2, EventScript_Shop_LelouchCheckTutor
	case 3, EventScript_Shop_LelouchCheckOther
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_Lelouch_26to30_Brutal:
	multichoice 0, 0, MULTI_LELOUCH_OPTIONS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchTraining4Brutal
	case 1, EventScript_Shop_LelouchCheckReminder
	case 2, EventScript_Shop_LelouchCheckTutor
	case 3, EventScript_Shop_LelouchCheckOther
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_Lelouch_Deny:
	msgbox gText_Lelouch_NoShards, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Shop_LelouchIntro:
	msgbox gText_Lelouch_Intro1, MSGBOX_AUTOCLOSE
	delay 96
	msgbox gText_Lelouch_Intro2, MSGBOX_AUTOCLOSE
	setflag FLAG_LELOUCH_INTRO
	return

EventScript_Shop_LelouchDeny:
	msgbox gText_Lelouch_NoShards, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Shop_LelouchExplainShards:
	msgbox gText_Lelouch_ExplainShards, MSGBOX_AUTOCLOSE
	setflag FLAG_LELOUCH_SHARDS
	return

EventScript_Shop_LelouchNotEnoughColor:
	msgbox gText_Lelouch_NotEnoughColor, MSGBOX_AUTOCLOSE
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchTraining1:
	checkitem ITEM_RED_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_LelouchNotEnoughColor
	msgbox gText_Lelouch_CostsRedShards, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_TRAINING1, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchExp1
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchTraining2:
	checkitem ITEM_RED_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_LelouchNotEnoughColor
	msgbox gText_Lelouch_CostsRedShards, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_TRAINING2, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchExp1
	case 1, EventScript_Shop_LelouchExp2
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchTraining3:
	checkitem ITEM_RED_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_LelouchNotEnoughColor
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_LelouchTraining3Brutal
	msgbox gText_Lelouch_CostsRedShards, MSGBOX_DEFAULT
	scrollingmultichoice 5, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchExp1
	case 1, EventScript_Shop_LelouchExp2
	case 2, EventScript_Shop_LelouchExp3
	case 3, EventScript_Shop_LelouchEVHP
	case 4, EventScript_Shop_LelouchEVAtk
	case 5, EventScript_Shop_LelouchEVDef
	case 6, EventScript_Shop_LelouchEVSpA
	case 7, EventScript_Shop_LelouchEVSpD
	case 8, EventScript_Shop_LelouchEVSpe
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchTraining3Brutal:
	msgbox gText_Lelouch_CostsRedShards, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_TRAINING3, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchExp1
	case 1, EventScript_Shop_LelouchExp2
	case 2, EventScript_Shop_LelouchExp3
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchTraining4:
	checkitem ITEM_RED_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_LelouchNotEnoughColor
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_LelouchTraining4Brutal
	msgbox gText_Lelouch_CostsRedShards, MSGBOX_DEFAULT
	scrollingmultichoice 6, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchExp1
	case 1, EventScript_Shop_LelouchExp2
	case 2, EventScript_Shop_LelouchExp3
	case 3, EventScript_Shop_LelouchExp4
	case 4, EventScript_Shop_LelouchEVHP
	case 5, EventScript_Shop_LelouchEVAtk
	case 6, EventScript_Shop_LelouchEVDef
	case 7, EventScript_Shop_LelouchEVSpA
	case 8, EventScript_Shop_LelouchEVSpD
	case 9, EventScript_Shop_LelouchEVSpe
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchTraining4Brutal:
	msgbox gText_Lelouch_CostsRedShards, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_TRAINING4, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchExp1
	case 1, EventScript_Shop_LelouchExp2
	case 2, EventScript_Shop_LelouchExp3
	case 3, EventScript_Shop_LelouchExp4
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchExp1:
	msgbox gText_Lelouch_Exp1Cost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEXP1, gText_LelouchDefeated
	msgbox gText_LelouchDefeated, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Shop_LelouchExp2:
	msgbox gText_Lelouch_Exp2Cost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEXP2, gText_LelouchDefeated
	msgbox gText_LelouchDefeated, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Shop_LelouchExp3:
	msgbox gText_Lelouch_Exp3Cost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEXP3, gText_LelouchDefeated
	msgbox gText_LelouchDefeated, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Shop_LelouchExp4:
	msgbox gText_Lelouch_Exp4Cost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEXP4, gText_LelouchDefeated
	msgbox gText_LelouchDefeated, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Shop_LelouchEVHP:
	msgbox gText_Lelouch_EVHPCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEVHP, gText_LelouchDefeated
	msgbox gText_LelouchDefeated, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Shop_LelouchEVAtk:
	msgbox gText_Lelouch_EVAtkCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEVATK, gText_LelouchDefeated
	msgbox gText_LelouchDefeated, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Shop_LelouchEVDef:
	msgbox gText_Lelouch_EVDefCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEVDEF, gText_LelouchDefeated
	msgbox gText_LelouchDefeated, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Shop_LelouchEVSpA:
	msgbox gText_Lelouch_EVSpACost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEVSPA, gText_LelouchDefeated
	msgbox gText_LelouchDefeated, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Shop_LelouchEVSpD:
	msgbox gText_Lelouch_EVSpDCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEVSPD, gText_LelouchDefeated
	msgbox gText_LelouchDefeated, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Shop_LelouchEVSpe:
	msgbox gText_Lelouch_EVSpeCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEVSPE, gText_LelouchDefeated
	msgbox gText_LelouchDefeated, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Shop_LelouchCheckReminder:
	checkitem ITEM_BLUE_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_LelouchNotEnoughColor
	msgbox gText_Lelouch_CostsBlueShards, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_LelouchReminderChooseMon
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchReminderChooseMon:
	msgbox gText_Lelouch_RemindWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_LelouchLeave
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_LelouchCantRemindEgg
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_LelouchNoMoveToRemindMon
	goto EventScript_Shop_LelouchReminderChooseMove
	end

EventScript_Shop_LelouchReminderChooseMove:
	msgbox gText_Lelouch_RemindWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_LelouchReminderChooseMon
	msgbox gText_Lelouch_PayBlue, MSGBOX_AUTOCLOSE
	removeitem ITEM_BLUE_SHARD
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchNoMoveToRemindMon:
	msgbox gText_Lelouch_CantRemindMon, MSGBOX_DEFAULT
	goto EventScript_Shop_LelouchReminderChooseMon
	end

EventScript_Shop_LelouchCantRemindEgg:
	msgbox gText_Lelouch_CantRemindEgg, MSGBOX_DEFAULT
	goto EventScript_Shop_LelouchReminderChooseMon
	end

EventScript_Shop_LelouchCheckTutor:
	checkitem ITEM_YELLOW_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_LelouchNotEnoughColor
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_LelouchTutor3
	compare VAR_ZONE, 15
	goto_if_gt EventScript_Shop_LelouchTutor2
	msgbox gText_Lelouch_CostsYellowShards, MSGBOX_DEFAULT
	scrollingmultichoice 2, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchMoveTutorIcyWind
	case 1, EventScript_Shop_LelouchMoveTutorKnockOff
	case 2, EventScript_Shop_LelouchMoveTutorLowKick
	case 3, EventScript_Shop_LelouchMoveTutorHealBell
	case 4, EventScript_Shop_LelouchMoveTutorHelpingHand
	case 5, EventScript_Shop_LelouchMoveTutorSleepTalk
	case 6, EventScript_Shop_LelouchMoveTutorStealthRock
	case 7, EventScript_Shop_LelouchMoveTutorTaunt
	case MULTI_B_PRESSED, EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchTutor2:
	msgbox gText_Lelouch_CostsYellowShards, MSGBOX_DEFAULT
	scrollingmultichoice 3, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchMoveTutorIcyWind
	case 1, EventScript_Shop_LelouchMoveTutorKnockOff
	case 2, EventScript_Shop_LelouchMoveTutorLowKick
	case 3, EventScript_Shop_LelouchMoveTutorHealBell
	case 4, EventScript_Shop_LelouchMoveTutorHelpingHand
	case 5, EventScript_Shop_LelouchMoveTutorSleepTalk
	case 6, EventScript_Shop_LelouchMoveTutorStealthRock
	case 7, EventScript_Shop_LelouchMoveTutorTaunt
	case 8, EventScript_Shop_LelouchMoveTutorFirePunch
	case 9, EventScript_Shop_LelouchMoveTutorIcePunch
	case 10, EventScript_Shop_LelouchMoveTutorThunderPunch
	case 11, EventScript_Shop_LelouchMoveTutorFlipTurn
	case 12, EventScript_Shop_LelouchMoveTutorUTurn
	case 13, EventScript_Shop_LelouchMoveTutorMagicCoat
	case 14, EventScript_Shop_LelouchMoveTutorPainSplit
	case 15, EventScript_Shop_LelouchMoveTutorTrick
	case MULTI_B_PRESSED, EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchTutor3:
	msgbox gText_Lelouch_CostsYellowShards, MSGBOX_DEFAULT
	scrollingmultichoice 4, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchMoveTutorIcyWind
	case 1, EventScript_Shop_LelouchMoveTutorKnockOff
	case 2, EventScript_Shop_LelouchMoveTutorLowKick
	case 3, EventScript_Shop_LelouchMoveTutorHealBell
	case 4, EventScript_Shop_LelouchMoveTutorHelpingHand
	case 5, EventScript_Shop_LelouchMoveTutorSleepTalk
	case 6, EventScript_Shop_LelouchMoveTutorStealthRock
	case 7, EventScript_Shop_LelouchMoveTutorTaunt
	case 8, EventScript_Shop_LelouchMoveTutorFirePunch
	case 9, EventScript_Shop_LelouchMoveTutorIcePunch
	case 10, EventScript_Shop_LelouchMoveTutorThunderPunch
	case 11, EventScript_Shop_LelouchMoveTutorFlipTurn
	case 12, EventScript_Shop_LelouchMoveTutorUTurn
	case 13, EventScript_Shop_LelouchMoveTutorMagicCoat
	case 14, EventScript_Shop_LelouchMoveTutorPainSplit
	case 15, EventScript_Shop_LelouchMoveTutorTrick
	case 16, EventScript_Shop_LelouchMoveTutorBounce
	case 17, EventScript_Shop_LelouchMoveTutorIronHead
	case 18, EventScript_Shop_LelouchMoveTutorGigaDrain
	case 19, EventScript_Shop_LelouchMoveTutorVoltSwitch
	case 20, EventScript_Shop_LelouchMoveTutorZenHeadbutt
	case 21, EventScript_Shop_LelouchMoveTutorRoost
	case 22, EventScript_Shop_LelouchMoveTutorSynthesis
	case 23, EventScript_Shop_LelouchMoveTutorTailwind
	case MULTI_B_PRESSED, EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchMoveTutorIcyWind:
	buffermovename 0, MOVE_ICY_WIND
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_ICY_WIND
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorKnockOff:
	buffermovename 0, MOVE_KNOCK_OFF
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_KNOCK_OFF
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorLowKick:
	buffermovename 0, MOVE_LOW_KICK
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_LOW_KICK
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorHealBell:
	buffermovename 0, MOVE_HEAL_BELL
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_HEAL_BELL
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorHelpingHand:
	buffermovename 0, MOVE_HELPING_HAND
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_HELPING_HAND
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorSleepTalk:
	buffermovename 0, MOVE_SLEEP_TALK
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_SLEEP_TALK
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorStealthRock:
	buffermovename 0, MOVE_STEALTH_ROCK
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_STEALTH_ROCK
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorTaunt:
	buffermovename 0, MOVE_TAUNT
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_TAUNT
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorFirePunch:
	buffermovename 0, MOVE_FIRE_PUNCH
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_FIRE_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorIcePunch:
	buffermovename 0, MOVE_ICE_PUNCH
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_ICE_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorThunderPunch:
	buffermovename 0, MOVE_THUNDER_PUNCH
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_THUNDER_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorFlipTurn:
	buffermovename 0, MOVE_FLIP_TURN
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_FLIP_TURN
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorUTurn:
	buffermovename 0, MOVE_U_TURN
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_U_TURN
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorMagicCoat:
	buffermovename 0, MOVE_MAGIC_COAT
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_MAGIC_COAT
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorPainSplit:
	buffermovename 0, MOVE_PAIN_SPLIT
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_PAIN_SPLIT
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorTrick:
	buffermovename 0, MOVE_TRICK
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_TRICK
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorBounce:
	buffermovename 0, MOVE_BOUNCE
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_BOUNCE
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end
	
EventScript_Shop_LelouchMoveTutorIronHead:
	buffermovename 0, MOVE_IRON_HEAD
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_IRON_HEAD
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end
	
EventScript_Shop_LelouchMoveTutorGigaDrain:
	buffermovename 0, MOVE_GIGA_DRAIN
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_GIGA_DRAIN
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end
	
EventScript_Shop_LelouchMoveTutorVoltSwitch:
	buffermovename 0, MOVE_VOLT_SWITCH
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_VOLT_SWITCH
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorZenHeadbutt:
	buffermovename 0, MOVE_ZEN_HEADBUTT
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_ZEN_HEADBUTT
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end
	
EventScript_Shop_LelouchMoveTutorRoost:
	buffermovename 0, MOVE_ROOST
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_ROOST
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end
	
EventScript_Shop_LelouchMoveTutorSynthesis:
	buffermovename 0, MOVE_SYNTHESIS
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_SYNTHESIS
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorTailwind:
	buffermovename 0, MOVE_TAILWIND
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_TAILWIND
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end
	
EventScript_Shop_LelouchMoveTaught1:
	msgbox gText_Lelouch_PayYellow1, MSGBOX_DEFAULT
	removeitem ITEM_YELLOW_SHARD
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchCheckOther:
	checkitem ITEM_GREEN_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_LelouchNotEnoughColor
	msgbox gText_Lelouch_CostsGreenShards, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_NATURES1, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchAttackMints
	case 1, EventScript_Shop_LelouchDefenseMints
	case 2, EventScript_Shop_LelouchSpAttackMints
	case 3, EventScript_Shop_LelouchSpDefenseMints
	case 4, EventScript_Shop_LelouchSpeedMints
	case 5, EventScript_Shop_LelouchNeutralMints
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchAttackMints:
	msgbox gText_Lelouch_AttackMintsCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_GREEN_SHARD, 1
	msgbox gText_Lelouch_PayGreen, MSGBOX_AUTOCLOSE
	msgbox gText_Lelouch_OneMoment, MSGBOX_AUTOCLOSE
	fadescreenswapbuffers FADE_TO_BLACK
	delay 96
	playfanfare MUS_SLOTS_WIN
	waitfanfare
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox gText_Lelouch_ItsDone, MSGBOX_AUTOCLOSE
	random 4
	goto_if_eq VAR_RESULT, 0, EventScript_GiveLonelyMint
	goto_if_eq VAR_RESULT, 1, EventScript_GiveAdamantMint
	goto_if_eq VAR_RESULT, 2, EventScript_GiveNaughtyMint
	goto_if_eq VAR_RESULT, 3, EventScript_GiveBraveMint
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveLonelyMint:
	giveitem ITEM_LONELY_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveAdamantMint:
	giveitem ITEM_ADAMANT_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveNaughtyMint:
	giveitem ITEM_NAUGHTY_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveBraveMint:
	giveitem ITEM_BRAVE_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchDefenseMints:
	msgbox gText_Lelouch_DefenseMintsCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_GREEN_SHARD, 1
	msgbox gText_Lelouch_PayGreen, MSGBOX_AUTOCLOSE
	msgbox gText_Lelouch_OneMoment, MSGBOX_AUTOCLOSE
	fadescreenswapbuffers FADE_TO_BLACK
	delay 96
	playfanfare MUS_SLOTS_WIN
	waitfanfare
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox gText_Lelouch_ItsDone, MSGBOX_AUTOCLOSE
	random 4
	goto_if_eq VAR_RESULT, 0, EventScript_GiveBoldMint
	goto_if_eq VAR_RESULT, 1, EventScript_GiveImpishMint
	goto_if_eq VAR_RESULT, 2, EventScript_GiveLaxMint
	goto_if_eq VAR_RESULT, 3, EventScript_GiveRelaxedMint
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveBoldMint:
	giveitem ITEM_BOLD_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveImpishMint:
	giveitem ITEM_IMPISH_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveLaxMint:
	giveitem ITEM_LAX_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveRelaxedMint:
	giveitem ITEM_RELAXED_MINT
	goto EventScript_Shop_LelouchLeave
	end
	
EventScript_Shop_LelouchSpAttackMints:
	msgbox gText_Lelouch_SpAttackMintsCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_GREEN_SHARD, 1
	msgbox gText_Lelouch_PayGreen, MSGBOX_AUTOCLOSE
	msgbox gText_Lelouch_OneMoment, MSGBOX_AUTOCLOSE
	fadescreenswapbuffers FADE_TO_BLACK
	delay 96
	playfanfare MUS_SLOTS_WIN
	waitfanfare
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox gText_Lelouch_ItsDone, MSGBOX_AUTOCLOSE
	random 4
	goto_if_eq VAR_RESULT, 0, EventScript_GiveModestMint
	goto_if_eq VAR_RESULT, 1, EventScript_GiveMildMint
	goto_if_eq VAR_RESULT, 2, EventScript_GiveRashMint
	goto_if_eq VAR_RESULT, 3, EventScript_GiveQuietMint
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveModestMint:
	giveitem ITEM_MODEST_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveMildMint:
	giveitem ITEM_MILD_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveRashMint:
	giveitem ITEM_RASH_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveQuietMint:
	giveitem ITEM_QUIET_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchSpDefenseMints:
	msgbox gText_Lelouch_SpDefenseMintsCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_GREEN_SHARD, 1
	msgbox gText_Lelouch_PayGreen, MSGBOX_AUTOCLOSE
	msgbox gText_Lelouch_OneMoment, MSGBOX_AUTOCLOSE
	fadescreenswapbuffers FADE_TO_BLACK
	delay 96
	playfanfare MUS_SLOTS_WIN
	waitfanfare
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox gText_Lelouch_ItsDone, MSGBOX_AUTOCLOSE
	random 4
	goto_if_eq VAR_RESULT, 0, EventScript_GiveCalmMint
	goto_if_eq VAR_RESULT, 1, EventScript_GiveGentleMint
	goto_if_eq VAR_RESULT, 2, EventScript_GiveCarefulMint
	goto_if_eq VAR_RESULT, 3, EventScript_GiveSassyMint
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveCalmMint:
	giveitem ITEM_CALM_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveGentleMint:
	giveitem ITEM_GENTLE_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveCarefulMint:
	giveitem ITEM_CAREFUL_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveSassyMint:
	giveitem ITEM_SASSY_MINT
	goto EventScript_Shop_LelouchLeave
	end
	
EventScript_Shop_LelouchSpeedMints:
	msgbox gText_Lelouch_SpeedMintsCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_GREEN_SHARD, 1
	msgbox gText_Lelouch_PayGreen, MSGBOX_AUTOCLOSE
	msgbox gText_Lelouch_OneMoment, MSGBOX_AUTOCLOSE
	fadescreenswapbuffers FADE_TO_BLACK
	delay 96
	playfanfare MUS_SLOTS_WIN
	waitfanfare
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox gText_Lelouch_ItsDone, MSGBOX_AUTOCLOSE
	random 4
	goto_if_eq VAR_RESULT, 0, EventScript_GiveTimidMint
	goto_if_eq VAR_RESULT, 1, EventScript_GiveHastyMint
	goto_if_eq VAR_RESULT, 2, EventScript_GiveJollyMint
	goto_if_eq VAR_RESULT, 3, EventScript_GiveNaiveMint
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveTimidMint:
	giveitem ITEM_TIMID_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveHastyMint:
	giveitem ITEM_HASTY_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveJollyMint:
	giveitem ITEM_JOLLY_MINT
	goto EventScript_Shop_LelouchLeave
	end

EventScript_GiveNaiveMint:
	giveitem ITEM_NAIVE_MINT
	goto EventScript_Shop_LelouchLeave
	end
	
EventScript_Shop_LelouchNeutralMints:
	msgbox gText_Lelouch_NeutralMintsCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_GREEN_SHARD, 1
	msgbox gText_Lelouch_PayGreen, MSGBOX_AUTOCLOSE
	msgbox gText_Lelouch_OneMoment, MSGBOX_AUTOCLOSE
	fadescreenswapbuffers FADE_TO_BLACK
	delay 96
	playfanfare MUS_SLOTS_WIN
	waitfanfare
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox gText_Lelouch_ItsDone, MSGBOX_AUTOCLOSE
	giveitem ITEM_SERIOUS_MINT
	goto EventScript_Shop_LelouchLeave
	release
	end

EventScript_Shop_LelouchLeave:
	msgbox gText_Lelouch_Leave, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Joy_DenyPC::
	lockall
	applymovement 4, Common_Movement_FaceRight
	msgbox gText_Joy_CantUse, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement 4, Common_Movement_FaceDown
	waitmovement 0
	releaseall
	end

EventScript_Shop_JoyIntroCheck::
	lock
	faceplayer
	goto_if_set FLAG_JOY_INTRO, EventScript_Joy_Welcome
	setflag FLAG_JOY_INTRO
	msgbox gText_Joy_Intro, MSGBOX_AUTOCLOSE
	goto EventScript_Joy_Welcome
	release
	end

EventScript_Joy_Welcome:
	lockall
	msgbox gText_Joy_Welcome, MSGBOX_AUTOCLOSE
	call_if_set FLAG_NUZLOCKE_ON, EventScript_Joy_Nuzlocke
	showmoneybox 0, 0, 0
	msgbox gText_Joy_WouldYouLikeToHeal, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EventScript_Joy_CheckMoney
	closemessage
	hidemoneybox
	msgbox gText_Joy_WonderfulDay, MSGBOX_AUTOCLOSE
	releaseall
	end

EventScript_Joy_Nuzlocke:
	msgbox gText_Joy_Nuzlocke, MSGBOX_AUTOCLOSE
	return

EventScript_Joy_CheckMoney:
	checkmoney 1000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Joy_NotEnough
	goto EventScript_Joy_Heal
	end

EventScript_Joy_NotEnough:
	msgbox gText_Joy_NotEnough, MSGBOX_AUTOCLOSE
	hidemoneybox
	msgbox gText_Joy_WonderfulDay, MSGBOX_AUTOCLOSE
	releaseall
	end

EventScript_Joy_Heal:
	removemoney 1000, 0
	updatemoneybox
	msgbox gText_Joy_ThankYou, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	call_if_set FLAG_NUZLOCKE_ON, EventScript_DeleteFaintedPartyPokemon
	special HealPlayerParty
	fadescreen FADE_FROM_BLACK
	setvar VAR_HEAL_SHOP_USED, 1
	msgbox gText_Joy_PartyHealed, MSGBOX_AUTOCLOSE
	closemessage
	hidemoneybox
	msgbox gText_Joy_WonderfulDay, MSGBOX_AUTOCLOSE
	releaseall
	end

EventScript_DeleteFaintedPartyPokemon:
	callnative DeleteFaintedPartyPokemon
	return

EventScript_ExitSign::
	msgbox gText_ExitSign, MSGBOX_SIGN
	end

EventScript_BrutalExitNotSatisfied::
	msgbox gText_BrutalExitNotSatisfied, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

EventScript_LeaveLeft:
	applymovement 1, Common_Movement_WalkRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	return

EventScript_LeaveMiddle:
	applymovement 1, Common_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	return

EventScript_LeaveRight:
	applymovement 1, Common_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	return

EventScript_WhenUReady:
	compare VAR_ZONE, 7
	goto_if_eq Zone6Sanctuary_EventScript_WhenUReady
	compare VAR_ZONE, 13
	goto_if_eq Zone12Sanctuary_EventScript_WhenUReady
	compare VAR_ZONE, 18
	goto_if_eq Zone17Sanctuary_EventScript_WhenUReady
	compare VAR_ZONE, 24
	goto_if_eq Zone23Sanctuary_EventScript_WhenUReady
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	release
	end

EventScript_WarpZone0:
	setvar VAR_HEAL_SHOP_USED, 0
	warpteleport MAP_ZONE0D, 255, 2, 32
	end

EventScript_SanctuaryToZone0::
	lockall
	setflag FLAG_IN_ZONE_NOT_SANCTUARY
	warpteleport MAP_ZONE0A, 255, 17, 10
	end

EventScript_Advice:
	msgbox gText_Colress_HeresAPieceofAdvice, MSGBOX_AUTOCLOSE
	switch VAR_ADVICE
	case 0, EventScript_Advice0
	case 1, EventScript_Advice1
	case 2, EventScript_Advice2
	case 3, EventScript_Advice3
	case 4, EventScript_Advice4
	case 5, EventScript_Advice5
	case 6, EventScript_Advice6
	case 7, EventScript_Advice7
	case 8, EventScript_Advice8
	case 9, EventScript_Advice9
	case 10, EventScript_Advice10
	case 11, EventScript_Advice11
	release
	end

EventScript_Advice0:
	msgbox gText_Advice0, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 1
	goto EventScript_AdviceAgain
	end

EventScript_Advice1:
	msgbox gText_Advice1, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 2
	goto EventScript_AdviceAgain
	end

EventScript_Advice2:
	msgbox gText_Advice2, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 3
	goto EventScript_AdviceAgain
	end

EventScript_Advice3:
	msgbox gText_Advice3, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 4
	goto EventScript_AdviceAgain
	end

EventScript_Advice4:
	msgbox gText_Advice4, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 5
	goto EventScript_AdviceAgain
	end

EventScript_Advice5:
	msgbox gText_Advice5, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 6
	goto EventScript_AdviceAgain
	end

EventScript_Advice6:
	msgbox gText_Advice6, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 7
	goto EventScript_AdviceAgain
	end

EventScript_Advice7:
	msgbox gText_Advice7, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 8
	goto EventScript_AdviceAgain
	end

EventScript_Advice8:
	msgbox gText_Advice8, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 9
	goto EventScript_AdviceAgain
	end

EventScript_Advice9:
	msgbox gText_Advice9, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 10
	goto EventScript_AdviceAgain
	end

EventScript_Advice10:
	msgbox gText_Advice10, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 11
	goto EventScript_AdviceAgain
	end

EventScript_Advice11:
	msgbox gText_Advice11, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 0
	goto EventScript_AdviceAgain
	end

EventScript_AdviceAgain:
	msgbox gText_Colress_WantMoreAdvice, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Advice
	goto EventScript_WhenUReady
	end

EventScript_Settings:
	goto_if_set FLAG_NUZLOCKE_ON, EventScript_CheckDifficultyNuzlocke
	goto EventScript_CheckDifficultyVanilla
	end

EventScript_CheckDifficultyNuzlocke:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_BrutalNuzlockeMsg
	goto EventScript_DefaultNuzlockeMsg
	end

EventScript_BrutalNuzlockeMsg:
	msgbox gText_Colress_BrutalNuzlockeMsg
	call EventScript_TurnOffBrutal
	call EventScript_TurnOffNuzlocke
	goto EventScript_WhenUReady
	end

EventScript_DefaultNuzlockeMsg:
	msgbox gText_Colress_DefaultNuzlockeMsg
	call EventScript_TurnOffNuzlocke
	goto EventScript_WhenUReady
	end

EventScript_CheckDifficultyVanilla:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_BrutalVanillaMsg
	goto EventScript_DefaultVanillaMsg
	end

EventScript_BrutalVanillaMsg:
	msgbox gText_Colress_BrutalVanillaMsg
	call EventScript_TurnOffBrutal
	goto EventScript_WhenUReady
	end

EventScript_DefaultVanillaMsg:
	msgbox gText_Colress_DefaultVanillaMsg
	goto EventScript_WhenUReady
	end

EventScript_TurnOffBrutal:
	msgbox gText_Colress_WouldTurnOffBrutal, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq EventScript_SureTurnOffBrutal
	return

EventScript_SureTurnOffBrutal:
	msgbox gText_Colress_SureTurnOffBrutal, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq EventScript_TurnedOffBrutal
	return

EventScript_TurnedOffBrutal:
	msgbox gText_Colress_BrutalOff, MSGBOX_AUTOCLOSE
	clearflag FLAG_BRUTAL_MODE_ON
	return

EventScript_TurnOffNuzlocke:
	msgbox gText_Colress_WouldTurnOffNuzlocke, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq EventScript_SureTurnOffNuzlocke
	return

EventScript_SureTurnOffNuzlocke:
	msgbox gText_Colress_SureTurnOffNuzlocke, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq EventScript_TurnedOffNuzlocke
	return

EventScript_TurnedOffNuzlocke:
	msgbox gText_Colress_NuzlockeOff, MSGBOX_AUTOCLOSE
	clearflag FLAG_NUZLOCKE_ON
	callnative GlobalNuzlockeClear
	return

EventScript_LeavingSetup:
	msgbox gText_Colress_Empower, MSGBOX_AUTOCLOSE
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 21
	call_if_eq EventScript_LeaveLeft
	compare VAR_TEMP_0, 22
	call_if_eq EventScript_LeaveMiddle
	compare VAR_TEMP_0, 23
	call_if_eq EventScript_LeaveRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	return
