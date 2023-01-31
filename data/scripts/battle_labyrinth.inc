EventScript_EnterSanctuary::
	clearflag FLAG_IN_NEW_ZONE
	setvar VAR_TRAINER_MONEY, 0
	call EventScript_MoveCameraUp
	applymovement 1, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	playse SE_PIN
	waitmovement 0
	waitse
	call EventScript_MoveCameraDown
	applymovement 1, Common_Movement_Colress_WalkDown
	waitmovement 0
	playfanfare MUS_OBTAIN_BADGE
	return


EventScript_MoveCameraUp::
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	special RemoveCameraObject
	return


EventScript_MoveCameraDown::
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	special RemoveCameraObject
	return


EventScript_Shop_General::
	lock
	faceplayer
	goto_if_unset FLAG_TIM_INTRO, EventScript_Shop_General_2
EventScript_Shop_General_1:
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_General_6
EventScript_Shop_General_4:
	message EventScript_Shop_General_Text_2
	waitmessage
	multichoice 1, 0, MULTI_TIM, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_General_11
	case 1, EventScript_Shop_General_12
EventScript_Shop_General_9:
	msgbox EventScript_Shop_General_Text_5, MSGBOX_DEFAULT
	release
	return

EventScript_Shop_General_2:
	msgbox EventScript_Shop_General_Text_0
	setflag FLAG_TIM_INTRO
	goto EventScript_Shop_General_1

EventScript_Shop_General_5:
	msgbox EventScript_Shop_General_Text_1
	setflag FLAG_TIM_SUPER_POTION_INTRO
	goto EventScript_Shop_General_4

EventScript_Shop_General_6:
	goto_if_unset FLAG_TIM_SUPER_POTION_INTRO, EventScript_Shop_General_5
	goto EventScript_Shop_General_4

EventScript_Shop_General_11:
	message EventScript_Shop_General_Text_3
	waitmessage
	switch VAR_ZONE
	case 1, EventScript_Shop_General_14
	case 2, EventScript_Shop_General_14
	case 3, EventScript_Shop_General_14
	case 4, EventScript_Shop_General_15
	case 5, EventScript_Shop_General_15
	case 6, EventScript_Shop_General_15
	case 7, EventScript_Shop_General_15
	case 9, EventScript_Shop_General_15
	case 10, EventScript_Shop_General_15
	case 11, EventScript_Shop_General_15
	case 12, EventScript_Shop_General_15
	case 13, EventScript_Shop_General_16
	case 15, EventScript_Shop_General_16
	case 16, EventScript_Shop_General_17
	case 17, EventScript_Shop_General_17
	case 18, EventScript_Shop_General_17
	case 20, EventScript_Shop_General_17
	case 21, EventScript_Shop_General_17
	case 22, EventScript_Shop_General_17
	case 23, EventScript_Shop_General_17
	case 24, EventScript_Shop_General_17
	case 25, EventScript_Shop_General_17
	case 26, EventScript_Shop_General_18
	goto EventScript_Shop_General_9

EventScript_Shop_General_12:
	message EventScript_Shop_General_Text_4
	waitmessage
	switch VAR_ZONE
	case 1, EventScript_Shop_General_20
	case 2, EventScript_Shop_General_20
	case 3, EventScript_Shop_General_20
	case 4, EventScript_Shop_General_20
	case 5, EventScript_Shop_General_20
	case 6, EventScript_Shop_General_20
	case 7, EventScript_Shop_General_20
	case 9, EventScript_Shop_General_21
	case 10, EventScript_Shop_General_21
	case 11, EventScript_Shop_General_21
	case 12, EventScript_Shop_General_21
	case 13, EventScript_Shop_General_21
	case 15, EventScript_Shop_General_21
	case 16, EventScript_Shop_General_21
	case 17, EventScript_Shop_General_21
	case 18, EventScript_Shop_General_21
	case 20, EventScript_Shop_General_21
	case 21, EventScript_Shop_General_21
	case 22, EventScript_Shop_General_21
	case 23, EventScript_Shop_General_21
	case 24, EventScript_Shop_General_21
	case 25, EventScript_Shop_General_21
	case 26, EventScript_Shop_General_22
	goto EventScript_Shop_General_9

EventScript_Shop_General_14:
	pokemart Shop_General_Common_1to3
	goto EventScript_Shop_General_9

EventScript_Shop_General_15:
	pokemart Shop_General_Common_4to12
	goto EventScript_Shop_General_9

EventScript_Shop_General_16:
	pokemart Shop_General_Common_13to15
	goto EventScript_Shop_General_9

EventScript_Shop_General_17:
	pokemart Shop_General_Common_16to25
	goto EventScript_Shop_General_9

EventScript_Shop_General_18:
	pokemart Shop_General_Common_26to30
	goto EventScript_Shop_General_9

EventScript_Shop_General_20:
	pokemart Shop_General_Utility_1to8
	goto EventScript_Shop_General_9

EventScript_Shop_General_21:
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Shop_General_23
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Shop_General_23
	pokemart Shop_General_Utility_9to25
	goto EventScript_Shop_General_9

EventScript_Shop_General_22:
	pokemart Shop_General_Utility_26to30
	goto EventScript_Shop_General_9

EventScript_Shop_General_23:
	pokemart Shop_General_Utility_9to25_NoXItems
	goto EventScript_Shop_General_9


	.align 2
Shop_General_Utility_1to8:
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
Shop_General_Utility_9to25_NoXItems:
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

	.align 2
Shop_General_Utility_9to25:
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

	.align 2
Shop_General_Utility_26to30:
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
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_NONE

	.align 2
Shop_General_Common_1to3:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
Shop_General_Common_4to12:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

	.align 2
Shop_General_Common_13to15:
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
	.2byte ITEM_ETHER
	.2byte ITEM_NONE

	.align 2
Shop_General_Common_16to25:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ETHER
	.2byte ITEM_NONE

	.align 2
Shop_General_Common_26to30:
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
	.2byte ITEM_REVIVE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_ETHER
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

EventScript_Shop_Unique_Varrick::
	lock
	faceplayer
	goto_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_Unique_Varrick_2
EventScript_Shop_Unique_Varrick_1:
	message EventScript_Shop_Unique_Varrick_Text_1
	waitmessage
	switch VAR_ZONE
	case 1, EventScript_Shop_Unique_Varrick_6
	case 2, EventScript_Shop_Unique_Varrick_6
	case 3, EventScript_Shop_Unique_Varrick_6
	case 4, EventScript_Shop_Unique_Varrick_7
	case 5, EventScript_Shop_Unique_Varrick_7
	case 6, EventScript_Shop_Unique_Varrick_8
	case 7, EventScript_Shop_Unique_Varrick_8
	case 9, EventScript_Shop_Unique_Varrick_9
	case 10, EventScript_Shop_Unique_Varrick_9
	case 11, EventScript_Shop_Unique_Varrick_10
	case 12, EventScript_Shop_Unique_Varrick_10
	case 13, EventScript_Shop_Unique_Varrick_10
	case 15, EventScript_Shop_Unique_Varrick_10
	case 16, EventScript_Shop_Unique_Varrick_11
	case 17, EventScript_Shop_Unique_Varrick_11
	case 18, EventScript_Shop_Unique_Varrick_11
	case 20, EventScript_Shop_Unique_Varrick_11
	case 21, EventScript_Shop_Unique_Varrick_12
	case 22, EventScript_Shop_Unique_Varrick_12
	case 23, EventScript_Shop_Unique_Varrick_12
	case 24, EventScript_Shop_Unique_Varrick_13
	case 25, EventScript_Shop_Unique_Varrick_13
	case 26, EventScript_Shop_Unique_Varrick_14
EventScript_Shop_Unique_Varrick_4:
	msgbox EventScript_Shop_Unique_Varrick_Text_2, MSGBOX_DEFAULT
	release
	return

EventScript_Shop_Unique_Varrick_2:
	msgbox EventScript_Shop_Unique_Varrick_Text_0
	setflag FLAG_VARRICK_INTRO
	goto EventScript_Shop_Unique_Varrick_1

EventScript_Shop_Unique_Varrick_6:
	pokemart Shop_Unique_Varrick_1to3
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_7:
	pokemart Shop_Unique_Varrick_4to5
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_8:
	pokemart Shop_Unique_Varrick_6to8
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_9:
	pokemart Shop_Unique_Varrick_9to10
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_10:
	pokemart Shop_Unique_Varrick_11to15
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_11:
	pokemart Shop_Unique_Varrick_16to20
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_12:
	pokemart Shop_Unique_Varrick_21to23
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_13:
	pokemart Shop_Unique_Varrick_24to25
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_14:
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Shop_Unique_Varrick_15
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Unique_Varrick_15
	pokemart Shop_Unique_Varrick_26to30
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_15:
	pokemart Shop_Unique_Varrick_26to30_Brutal
	goto EventScript_Shop_Unique_Varrick_4


	.align 2
Shop_Unique_Varrick_1to3:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
Shop_Unique_Varrick_4to5:
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
Shop_Unique_Varrick_6to8:
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_NONE

	.align 2
Shop_Unique_Varrick_9to10:
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_ELECTRIC_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_ICE_GEM
	.2byte ITEM_FIGHTING_GEM
	.2byte ITEM_POISON_GEM
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_FLYING_GEM
	.2byte ITEM_PSYCHIC_GEM
	.2byte ITEM_BUG_GEM
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_GHOST_GEM
	.2byte ITEM_DRAGON_GEM
	.2byte ITEM_DARK_GEM
	.2byte ITEM_STEEL_GEM
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
Shop_Unique_Varrick_11to15:
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_MAGNET
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_POISON_BARB
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_HARD_STONE
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
Shop_Unique_Varrick_16to20:
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_MAGNET
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_POISON_BARB
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_HARD_STONE
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_METAL_COAT
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_HEAVY_DUTY_BOOTS
	.2byte ITEM_SAFETY_GOGGLES
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_NONE

	.align 2
Shop_Unique_Varrick_21to23:
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
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
	.2byte ITEM_METAL_COAT
	.2byte ITEM_LIGHT_BALL
	.2byte ITEM_LEEK
	.2byte ITEM_THICK_CLUB
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

	.align 2
Shop_Unique_Varrick_24to25:
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
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
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

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
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_ELECTRIC_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_ICE_GEM
	.2byte ITEM_FIGHTING_GEM
	.2byte ITEM_POISON_GEM
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_FLYING_GEM
	.2byte ITEM_PSYCHIC_GEM
	.2byte ITEM_BUG_GEM
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_GHOST_GEM
	.2byte ITEM_DRAGON_GEM
	.2byte ITEM_DARK_GEM
	.2byte ITEM_STEEL_GEM
	.2byte ITEM_FAIRY_GEM
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
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
Shop_Unique_Varrick_26to30_Brutal:
	.2byte ITEM_EXP_SHARE
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_ELECTRIC_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_ICE_GEM
	.2byte ITEM_FIGHTING_GEM
	.2byte ITEM_POISON_GEM
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_FLYING_GEM
	.2byte ITEM_PSYCHIC_GEM
	.2byte ITEM_BUG_GEM
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_GHOST_GEM
	.2byte ITEM_DRAGON_GEM
	.2byte ITEM_DARK_GEM
	.2byte ITEM_STEEL_GEM
	.2byte ITEM_FAIRY_GEM
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
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

EventScript_Shop_Unique_ZhuLi::
	lock
	faceplayer
	message EventScript_Shop_Unique_ZhuLi_Text_0
	waitmessage
	switch VAR_ZONE
	case 11, EventScript_Shop_Unique_ZhuLi_3
	case 12, EventScript_Shop_Unique_ZhuLi_3
	case 13, EventScript_Shop_Unique_ZhuLi_3
	case 15, EventScript_Shop_Unique_ZhuLi_3
	case 16, EventScript_Shop_Unique_ZhuLi_4
	case 17, EventScript_Shop_Unique_ZhuLi_4
	case 18, EventScript_Shop_Unique_ZhuLi_4
	case 20, EventScript_Shop_Unique_ZhuLi_4
	case 21, EventScript_Shop_Unique_ZhuLi_5
	case 22, EventScript_Shop_Unique_ZhuLi_5
	case 23, EventScript_Shop_Unique_ZhuLi_5
	case 24, EventScript_Shop_Unique_ZhuLi_6
	case 25, EventScript_Shop_Unique_ZhuLi_6
	case 26, EventScript_Shop_Unique_ZhuLi_6
EventScript_Shop_Unique_ZhuLi_1:
	msgbox EventScript_Shop_Unique_ZhuLi_Text_1, MSGBOX_DEFAULT
	release
	return

EventScript_Shop_Unique_ZhuLi_3:
	pokemart Shop_Unique_ZhuLi_11to15
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_4:
	pokemart Shop_Unique_ZhuLi_16to20
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_5:
	pokemart Shop_Unique_ZhuLi_21to23
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_6:
	pokemart Shop_Unique_ZhuLi_24to30
	goto EventScript_Shop_Unique_ZhuLi_1


	.align 2
Shop_Unique_ZhuLi_11to15:
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_ELECTRIC_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_ICE_GEM
	.2byte ITEM_FIGHTING_GEM
	.2byte ITEM_POISON_GEM
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_FLYING_GEM
	.2byte ITEM_PSYCHIC_GEM
	.2byte ITEM_BUG_GEM
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_GHOST_GEM
	.2byte ITEM_DRAGON_GEM
	.2byte ITEM_DARK_GEM
	.2byte ITEM_STEEL_GEM
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
Shop_Unique_ZhuLi_16to20:
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_SACHET
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_TART_APPLE
	.2byte ITEM_STRAWBERRY_SWEET
	.2byte ITEM_LOVE_SWEET
	.2byte ITEM_BERRY_SWEET
	.2byte ITEM_CLOVER_SWEET
	.2byte ITEM_FLOWER_SWEET
	.2byte ITEM_STAR_SWEET
	.2byte ITEM_RIBBON_SWEET
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_ELECTRIC_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_ICE_GEM
	.2byte ITEM_FIGHTING_GEM
	.2byte ITEM_POISON_GEM
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_FLYING_GEM
	.2byte ITEM_PSYCHIC_GEM
	.2byte ITEM_BUG_GEM
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_GHOST_GEM
	.2byte ITEM_DRAGON_GEM
	.2byte ITEM_DARK_GEM
	.2byte ITEM_STEEL_GEM
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
Shop_Unique_ZhuLi_21to23:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_PRISM_SCALE
	.2byte ITEM_DEEP_SEA_SCALE
	.2byte ITEM_DEEP_SEA_TOOTH
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_GALARICA_CUFF
	.2byte ITEM_GALARICA_WREATH
	.2byte ITEM_CRACKED_POT
	.2byte ITEM_UPGRADE
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_TART_APPLE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE

	.align 2
Shop_Unique_ZhuLi_24to30:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_PROTECTOR
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_PRISM_SCALE
	.2byte ITEM_DEEP_SEA_SCALE
	.2byte ITEM_DEEP_SEA_TOOTH
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_GALARICA_CUFF
	.2byte ITEM_GALARICA_WREATH
	.2byte ITEM_CRACKED_POT
	.2byte ITEM_UPGRADE
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_TART_APPLE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE

EventScript_Shop_ZhuLiIntro::
	lockall
	applymovement 2, Common_Movement_ExclamationMark
	applymovement 5, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 20
	goto_if_eq EventScript_Shop_ZhuLiIntro_2
EventScript_Shop_ZhuLiIntro_1:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	msgbox EventScript_Shop_ZhuLiIntro_Text_0
	msgbox EventScript_Shop_ZhuLiIntro_Text_1
	playse SE_APPLAUSE
	waitse
	msgbox EventScript_Shop_ZhuLiIntro_Text_2
	msgbox EventScript_Shop_ZhuLiIntro_Text_3
	msgbox EventScript_Shop_ZhuLiIntro_Text_4
	setvar VAR_ZHULI_INTRO, 1
	setflag FLAG_VARRICK_INTRO
	releaseall
	return

EventScript_Shop_ZhuLiIntro_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	goto EventScript_Shop_ZhuLiIntro_1


EventScript_Shop_Lelouch::
	lock
	faceplayer
	goto_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_Lelouch_2
EventScript_Shop_Lelouch_1:
	compare VAR_ZONE, 6
	goto_if_lt EventScript_Shop_Lelouch_5
	goto_if_unset FLAG_LELOUCH_SHARDS_INTRO, EventScript_Shop_Lelouch_8
EventScript_Shop_Lelouch_7:
	msgbox EventScript_Shop_Lelouch_Text_4, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_OPTIONS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_12
	case 1, EventScript_Shop_Lelouch_13
	case 2, EventScript_Shop_Lelouch_14
	case 3, EventScript_Shop_Lelouch_15
EventScript_Shop_Lelouch_10:
	msgbox EventScript_Shop_Lelouch_Text_5
	release
	return

EventScript_Shop_Lelouch_2:
	msgbox EventScript_Shop_Lelouch_Text_0
	delay 96
	msgbox EventScript_Shop_Lelouch_Text_1
	setflag FLAG_LELOUCH_INTRO
	goto EventScript_Shop_Lelouch_1

EventScript_Shop_Lelouch_5:
	msgbox EventScript_Shop_Lelouch_Text_2
	release
	end

EventScript_Shop_Lelouch_8:
	msgbox EventScript_Shop_Lelouch_Text_3
	setflag FLAG_LELOUCH_SHARDS_INTRO
	goto EventScript_Shop_Lelouch_7

EventScript_Shop_Lelouch_12:
	call EventScript_Shop_Lelouch_Training
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_13:
	call EventScript_Shop_Lelouch_MoveReminder
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_14:
	call EventScript_Shop_Lelouch_MoveTutor
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_15:
	call EventScript_Shop_Lelouch_Other
	goto EventScript_Shop_Lelouch_10


EventScript_Shop_Lelouch_Training::
	checkitem ITEM_RED_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Training_2
	msgbox EventScript_Shop_Lelouch_Training_Text_0, MSGBOX_DEFAULT
	compare VAR_ZONE, 21
	goto_if_lt EventScript_Shop_Lelouch_Training_5
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Shop_Lelouch_Training_5
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Lelouch_Training_5
	multichoice 0, 0, MULTI_LELOUCH_EXP_AND_EV, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_Training_15
	case 1, EventScript_Shop_Lelouch_Training_16
EventScript_Shop_Lelouch_Training_4:
	return

EventScript_Shop_Lelouch_Training_2:
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Training_5:
	multichoice 0, 0, MULTI_LELOUCH_EXP_ONLY, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_Training_13
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_13:
	msgbox gText_Lelouch_Exp, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_17
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_15:
	msgbox gText_Lelouch_Exp, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_19
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_16:
	msgbox gText_Lelouch_EV, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_21
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_17:
	special ChoosePartyMonForTraining
	waitstate
	compare VAR_0x8004, 1
	goto_if_eq EventScript_Shop_Lelouch_Training_24
	msgbox gText_Lelouch_DidNotTrain
EventScript_Shop_Lelouch_Training_23:
	return

EventScript_Shop_Lelouch_Training_19:
	special ChoosePartyMonForTraining
	waitstate
	compare VAR_0x8004, 1
	goto_if_eq EventScript_Shop_Lelouch_Training_28
	msgbox gText_Lelouch_DidNotTrain
EventScript_Shop_Lelouch_Training_27:
	return

EventScript_Shop_Lelouch_Training_21:
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Training_32
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Training_35
	setvar VAR_TEMP_F, 0
	specialvar VAR_TEMP_0, ScriptGetPartyMonSpecies
	bufferspeciesname 0, VAR_TEMP_0
	msgbox gText_Lelouch_ChooseHPEV, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_EV_NUMBERS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_Training_40
	case 1, EventScript_Shop_Lelouch_Training_41
	case 2, EventScript_Shop_Lelouch_Training_42
	case 3, EventScript_Shop_Lelouch_Training_43
	case 4, EventScript_Shop_Lelouch_Training_44
	case 5, EventScript_Shop_Lelouch_Training_45
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_45
EventScript_Shop_Lelouch_Training_38:
	msgbox gText_Lelouch_ChooseAttackEV, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_EV_NUMBERS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_Training_48
	case 1, EventScript_Shop_Lelouch_Training_49
	case 2, EventScript_Shop_Lelouch_Training_50
	case 3, EventScript_Shop_Lelouch_Training_51
	case 4, EventScript_Shop_Lelouch_Training_52
	case 5, EventScript_Shop_Lelouch_Training_53
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_53
EventScript_Shop_Lelouch_Training_46:
	msgbox gText_Lelouch_ChooseDefenseEV, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_EV_NUMBERS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_Training_56
	case 1, EventScript_Shop_Lelouch_Training_57
	case 2, EventScript_Shop_Lelouch_Training_58
	case 3, EventScript_Shop_Lelouch_Training_59
	case 4, EventScript_Shop_Lelouch_Training_60
	case 5, EventScript_Shop_Lelouch_Training_61
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_61
EventScript_Shop_Lelouch_Training_54:
	msgbox gText_Lelouch_ChooseSpecialAttackEV, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_EV_NUMBERS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_Training_64
	case 1, EventScript_Shop_Lelouch_Training_65
	case 2, EventScript_Shop_Lelouch_Training_66
	case 3, EventScript_Shop_Lelouch_Training_67
	case 4, EventScript_Shop_Lelouch_Training_68
	case 5, EventScript_Shop_Lelouch_Training_69
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_69
EventScript_Shop_Lelouch_Training_62:
	msgbox gText_Lelouch_ChooseSpecialDefenseEV, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_EV_NUMBERS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_Training_72
	case 1, EventScript_Shop_Lelouch_Training_73
	case 2, EventScript_Shop_Lelouch_Training_74
	case 3, EventScript_Shop_Lelouch_Training_75
	case 4, EventScript_Shop_Lelouch_Training_76
	case 5, EventScript_Shop_Lelouch_Training_77
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_77
EventScript_Shop_Lelouch_Training_70:
	msgbox gText_Lelouch_ChooseSpeedEV, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_EV_NUMBERS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_Training_80
	case 1, EventScript_Shop_Lelouch_Training_81
	case 2, EventScript_Shop_Lelouch_Training_82
	case 3, EventScript_Shop_Lelouch_Training_83
	case 4, EventScript_Shop_Lelouch_Training_84
	case 5, EventScript_Shop_Lelouch_Training_85
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_85
EventScript_Shop_Lelouch_Training_78:
	compare VAR_TEMP_F, 510
	goto_if_gt EventScript_Shop_Lelouch_Training_87
	msgbox gText_Lelouch_CheckEVs, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Training_90
	special CheckLeadMonCute
	playse SE_EXP_MAX
	waitse
	msgbox gText_Lelouch_ChangedEVs
	msgbox gText_Lelouch_PayRed
	removeitem ITEM_RED_SHARD, 1
EventScript_Shop_Lelouch_Training_31:
	return

EventScript_Shop_Lelouch_Training_24:
	msgbox gText_Lelouch_ExpTrainingFinished
	msgbox gText_Lelouch_PayRed
	removeitem ITEM_RED_SHARD, 1
	goto EventScript_Shop_Lelouch_Training_23

EventScript_Shop_Lelouch_Training_28:
	msgbox gText_Lelouch_ExpTrainingFinished
	msgbox gText_Lelouch_PayRed
	removeitem ITEM_RED_SHARD, 1
	goto EventScript_Shop_Lelouch_Training_27

EventScript_Shop_Lelouch_Training_32:
	msgbox gText_Lelouch_DidNotTrain
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_35:
	msgbox EventScript_Shop_Lelouch_Training_Text_1
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_40:
	setvar VAR_TEMP_9, 252
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_38

EventScript_Shop_Lelouch_Training_41:
	setvar VAR_TEMP_9, 200
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_38

EventScript_Shop_Lelouch_Training_42:
	setvar VAR_TEMP_9, 100
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_38

EventScript_Shop_Lelouch_Training_43:
	setvar VAR_TEMP_9, 4
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_38

EventScript_Shop_Lelouch_Training_44:
	setvar VAR_TEMP_9, 0
	goto EventScript_Shop_Lelouch_Training_38

EventScript_Shop_Lelouch_Training_45:
	return

EventScript_Shop_Lelouch_Training_48:
	setvar VAR_TEMP_A, 252
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_46

EventScript_Shop_Lelouch_Training_49:
	setvar VAR_TEMP_A, 200
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_46

EventScript_Shop_Lelouch_Training_50:
	setvar VAR_TEMP_A, 100
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_46

EventScript_Shop_Lelouch_Training_51:
	setvar VAR_TEMP_A, 4
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_46

EventScript_Shop_Lelouch_Training_52:
	setvar VAR_TEMP_A, 0
	goto EventScript_Shop_Lelouch_Training_46

EventScript_Shop_Lelouch_Training_53:
	return

EventScript_Shop_Lelouch_Training_56:
	setvar VAR_TEMP_B, 252
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_54

EventScript_Shop_Lelouch_Training_57:
	setvar VAR_TEMP_B, 200
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_54

EventScript_Shop_Lelouch_Training_58:
	setvar VAR_TEMP_B, 100
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_54

EventScript_Shop_Lelouch_Training_59:
	setvar VAR_TEMP_B, 4
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_54

EventScript_Shop_Lelouch_Training_60:
	setvar VAR_TEMP_B, 0
	goto EventScript_Shop_Lelouch_Training_54

EventScript_Shop_Lelouch_Training_61:
	return

EventScript_Shop_Lelouch_Training_64:
	setvar VAR_TEMP_C, 252
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_62

EventScript_Shop_Lelouch_Training_65:
	setvar VAR_TEMP_C, 200
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_62

EventScript_Shop_Lelouch_Training_66:
	setvar VAR_TEMP_C, 100
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_62

EventScript_Shop_Lelouch_Training_67:
	setvar VAR_TEMP_C, 4
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_62

EventScript_Shop_Lelouch_Training_68:
	setvar VAR_TEMP_C, 0
	goto EventScript_Shop_Lelouch_Training_62

EventScript_Shop_Lelouch_Training_69:
	return

EventScript_Shop_Lelouch_Training_72:
	setvar VAR_TEMP_D, 252
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_70

EventScript_Shop_Lelouch_Training_73:
	setvar VAR_TEMP_D, 200
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_70

EventScript_Shop_Lelouch_Training_74:
	setvar VAR_TEMP_D, 100
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_70

EventScript_Shop_Lelouch_Training_75:
	setvar VAR_TEMP_D, 4
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_70

EventScript_Shop_Lelouch_Training_76:
	setvar VAR_TEMP_D, 0
	goto EventScript_Shop_Lelouch_Training_70

EventScript_Shop_Lelouch_Training_77:
	return

EventScript_Shop_Lelouch_Training_80:
	setvar VAR_TEMP_E, 252
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_78

EventScript_Shop_Lelouch_Training_81:
	setvar VAR_TEMP_E, 200
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_78

EventScript_Shop_Lelouch_Training_82:
	setvar VAR_TEMP_E, 100
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_78

EventScript_Shop_Lelouch_Training_83:
	setvar VAR_TEMP_E, 4
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_78

EventScript_Shop_Lelouch_Training_84:
	setvar VAR_TEMP_E, 0
	goto EventScript_Shop_Lelouch_Training_78

EventScript_Shop_Lelouch_Training_85:
	return

EventScript_Shop_Lelouch_Training_87:
	msgbox gText_Lelouch_TooManyEVs
	return

EventScript_Shop_Lelouch_Training_90:
	return


EventScript_Shop_Lelouch_MoveReminder::
	checkitem ITEM_BLUE_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_2
	msgbox gText_Lelouch_CostsBlueShards, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_5
EventScript_Shop_Lelouch_MoveReminder_8:
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_0, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_11
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_14
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_17
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_3, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_20
	msgbox gText_Lelouch_PayBlue
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveReminder_2:
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_MoveReminder_5:
	return

EventScript_Shop_Lelouch_MoveReminder_11:
	return

EventScript_Shop_Lelouch_MoveReminder_14:
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_1, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_8

EventScript_Shop_Lelouch_MoveReminder_17:
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_2, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_8

EventScript_Shop_Lelouch_MoveReminder_20:
	goto EventScript_Shop_Lelouch_MoveReminder_8


EventScript_Shop_Lelouch_MoveTutor::
	checkitem ITEM_YELLOW_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_2
EventScript_Shop_Lelouch_MoveTutor_4:
	msgbox gText_Lelouch_CostsYellowShards, MSGBOX_DEFAULT
	compare VAR_ZONE, 30
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_7
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_8
	compare VAR_ZONE, 15
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_9
	scrollingmultichoice 2, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_MoveTutor_96
	case 1, EventScript_Shop_Lelouch_MoveTutor_97
	case 2, EventScript_Shop_Lelouch_MoveTutor_98
	case 3, EventScript_Shop_Lelouch_MoveTutor_99
	case 4, EventScript_Shop_Lelouch_MoveTutor_100
	case 5, EventScript_Shop_Lelouch_MoveTutor_101
	case 6, EventScript_Shop_Lelouch_MoveTutor_102
	case 7, EventScript_Shop_Lelouch_MoveTutor_103
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_104
EventScript_Shop_Lelouch_MoveTutor_6:
	buffermovename 0, VAR_TEMP_0
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_15
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_1, MSGBOX_DEFAULT
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_106
	msgbox gText_Lelouch_PayYellow1, MSGBOX_DEFAULT
	removeitem ITEM_YELLOW_SHARD
	return

EventScript_Shop_Lelouch_MoveTutor_2:
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_MoveTutor_7:
	scrollingmultichoice 5, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_MoveTutor_18
	case 1, EventScript_Shop_Lelouch_MoveTutor_19
	case 2, EventScript_Shop_Lelouch_MoveTutor_20
	case 3, EventScript_Shop_Lelouch_MoveTutor_21
	case 4, EventScript_Shop_Lelouch_MoveTutor_22
	case 5, EventScript_Shop_Lelouch_MoveTutor_23
	case 6, EventScript_Shop_Lelouch_MoveTutor_24
	case 7, EventScript_Shop_Lelouch_MoveTutor_25
	case 8, EventScript_Shop_Lelouch_MoveTutor_26
	case 9, EventScript_Shop_Lelouch_MoveTutor_27
	case 10, EventScript_Shop_Lelouch_MoveTutor_28
	case 11, EventScript_Shop_Lelouch_MoveTutor_29
	case 12, EventScript_Shop_Lelouch_MoveTutor_30
	case 13, EventScript_Shop_Lelouch_MoveTutor_31
	case 14, EventScript_Shop_Lelouch_MoveTutor_32
	case 15, EventScript_Shop_Lelouch_MoveTutor_33
	case 16, EventScript_Shop_Lelouch_MoveTutor_34
	case 17, EventScript_Shop_Lelouch_MoveTutor_35
	case 18, EventScript_Shop_Lelouch_MoveTutor_36
	case 19, EventScript_Shop_Lelouch_MoveTutor_37
	case 20, EventScript_Shop_Lelouch_MoveTutor_38
	case 21, EventScript_Shop_Lelouch_MoveTutor_39
	case 22, EventScript_Shop_Lelouch_MoveTutor_40
	case 23, EventScript_Shop_Lelouch_MoveTutor_41
	case 24, EventScript_Shop_Lelouch_MoveTutor_42
	case 25, EventScript_Shop_Lelouch_MoveTutor_43
	case 26, EventScript_Shop_Lelouch_MoveTutor_44
	case 27, EventScript_Shop_Lelouch_MoveTutor_45
	case 28, EventScript_Shop_Lelouch_MoveTutor_46
	case 29, EventScript_Shop_Lelouch_MoveTutor_47
	case 30, EventScript_Shop_Lelouch_MoveTutor_48
	case 31, EventScript_Shop_Lelouch_MoveTutor_49
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_50
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_8:
	scrollingmultichoice 4, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_MoveTutor_52
	case 1, EventScript_Shop_Lelouch_MoveTutor_53
	case 2, EventScript_Shop_Lelouch_MoveTutor_54
	case 3, EventScript_Shop_Lelouch_MoveTutor_55
	case 4, EventScript_Shop_Lelouch_MoveTutor_56
	case 5, EventScript_Shop_Lelouch_MoveTutor_57
	case 6, EventScript_Shop_Lelouch_MoveTutor_58
	case 7, EventScript_Shop_Lelouch_MoveTutor_59
	case 8, EventScript_Shop_Lelouch_MoveTutor_60
	case 9, EventScript_Shop_Lelouch_MoveTutor_61
	case 10, EventScript_Shop_Lelouch_MoveTutor_62
	case 11, EventScript_Shop_Lelouch_MoveTutor_63
	case 12, EventScript_Shop_Lelouch_MoveTutor_64
	case 13, EventScript_Shop_Lelouch_MoveTutor_65
	case 14, EventScript_Shop_Lelouch_MoveTutor_66
	case 15, EventScript_Shop_Lelouch_MoveTutor_67
	case 16, EventScript_Shop_Lelouch_MoveTutor_68
	case 17, EventScript_Shop_Lelouch_MoveTutor_69
	case 18, EventScript_Shop_Lelouch_MoveTutor_70
	case 19, EventScript_Shop_Lelouch_MoveTutor_71
	case 20, EventScript_Shop_Lelouch_MoveTutor_72
	case 21, EventScript_Shop_Lelouch_MoveTutor_73
	case 22, EventScript_Shop_Lelouch_MoveTutor_74
	case 23, EventScript_Shop_Lelouch_MoveTutor_75
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_76
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_9:
	scrollingmultichoice 3, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_MoveTutor_78
	case 1, EventScript_Shop_Lelouch_MoveTutor_79
	case 2, EventScript_Shop_Lelouch_MoveTutor_80
	case 3, EventScript_Shop_Lelouch_MoveTutor_81
	case 4, EventScript_Shop_Lelouch_MoveTutor_82
	case 5, EventScript_Shop_Lelouch_MoveTutor_83
	case 6, EventScript_Shop_Lelouch_MoveTutor_84
	case 7, EventScript_Shop_Lelouch_MoveTutor_85
	case 8, EventScript_Shop_Lelouch_MoveTutor_86
	case 9, EventScript_Shop_Lelouch_MoveTutor_87
	case 10, EventScript_Shop_Lelouch_MoveTutor_88
	case 11, EventScript_Shop_Lelouch_MoveTutor_89
	case 12, EventScript_Shop_Lelouch_MoveTutor_90
	case 13, EventScript_Shop_Lelouch_MoveTutor_91
	case 14, EventScript_Shop_Lelouch_MoveTutor_92
	case 15, EventScript_Shop_Lelouch_MoveTutor_93
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_94
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_15:
	goto EventScript_Shop_Lelouch_MoveTutor_4

EventScript_Shop_Lelouch_MoveTutor_18:
	setvar VAR_TEMP_0, MOVE_ICY_WIND
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_19:
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_20:
	setvar VAR_TEMP_0, MOVE_LOW_KICK
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_21:
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_22:
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_23:
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_24:
	setvar VAR_TEMP_0, MOVE_STEALTH_ROCK
	setvar VAR_0x8005, MOVE_STEALTH_ROCK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_25:
	setvar VAR_TEMP_0, MOVE_TAUNT
	setvar VAR_0x8005, MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_26:
	setvar VAR_TEMP_0, MOVE_FIRE_PUNCH
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_27:
	setvar VAR_TEMP_0, MOVE_ICE_PUNCH
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_28:
	setvar VAR_TEMP_0, MOVE_THUNDER_PUNCH
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_29:
	setvar VAR_TEMP_0, MOVE_FLIP_TURN
	setvar VAR_0x8005, MOVE_FLIP_TURN
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_30:
	setvar VAR_TEMP_0, MOVE_U_TURN
	setvar VAR_0x8005, MOVE_U_TURN
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_31:
	setvar VAR_TEMP_0, MOVE_DEFOG
	setvar VAR_0x8005, MOVE_DEFOG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_32:
	setvar VAR_TEMP_0, MOVE_PAIN_SPLIT
	setvar VAR_0x8005, MOVE_PAIN_SPLIT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_33:
	setvar VAR_TEMP_0, MOVE_TRICK
	setvar VAR_0x8005, MOVE_TRICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_34:
	setvar VAR_TEMP_0, MOVE_BOUNCE
	setvar VAR_0x8005, MOVE_BOUNCE
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_35:
	setvar VAR_TEMP_0, MOVE_IRON_HEAD
	setvar VAR_0x8005, MOVE_IRON_HEAD
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_36:
	setvar VAR_TEMP_0, MOVE_KNOCK_OFF
	setvar VAR_0x8005, MOVE_KNOCK_OFF
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_37:
	setvar VAR_TEMP_0, MOVE_VOLT_SWITCH
	setvar VAR_0x8005, MOVE_VOLT_SWITCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_38:
	setvar VAR_TEMP_0, MOVE_ZEN_HEADBUTT
	setvar VAR_0x8005, MOVE_ZEN_HEADBUTT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_39:
	setvar VAR_TEMP_0, MOVE_ROOST
	setvar VAR_0x8005, MOVE_ROOST
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_40:
	setvar VAR_TEMP_0, MOVE_SYNTHESIS
	setvar VAR_0x8005, MOVE_SYNTHESIS
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_41:
	setvar VAR_TEMP_0, MOVE_TAILWIND
	setvar VAR_0x8005, MOVE_TAILWIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_42:
	setvar VAR_TEMP_0, MOVE_DRACO_METEOR
	setvar VAR_0x8005, MOVE_DRACO_METEOR
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_43:
	setvar VAR_TEMP_0, MOVE_EXPANDING_FORCE
	setvar VAR_0x8005, MOVE_EXPANDING_FORCE
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_44:
	setvar VAR_TEMP_0, MOVE_HEAT_WAVE
	setvar VAR_0x8005, MOVE_HEAT_WAVE
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_45:
	setvar VAR_TEMP_0, MOVE_POLTERGEIST
	setvar VAR_0x8005, MOVE_POLTERGEIST
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_46:
	setvar VAR_TEMP_0, MOVE_POWER_WHIP
	setvar VAR_0x8005, MOVE_POWER_WHIP
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_47:
	setvar VAR_TEMP_0, MOVE_SUPERPOWER
	setvar VAR_0x8005, MOVE_SUPERPOWER
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_48:
	setvar VAR_TEMP_0, MOVE_SWORDS_DANCE
	setvar VAR_0x8005, MOVE_SWORDS_DANCE
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_49:
	setvar VAR_TEMP_0, MOVE_NASTY_PLOT
	setvar VAR_0x8005, MOVE_NASTY_PLOT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_50:
	return

EventScript_Shop_Lelouch_MoveTutor_52:
	setvar VAR_TEMP_0, MOVE_ICY_WIND
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_53:
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_54:
	setvar VAR_TEMP_0, MOVE_LOW_KICK
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_55:
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_56:
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_57:
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_58:
	setvar VAR_TEMP_0, MOVE_STEALTH_ROCK
	setvar VAR_0x8005, MOVE_STEALTH_ROCK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_59:
	setvar VAR_TEMP_0, MOVE_TAUNT
	setvar VAR_0x8005, MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_60:
	setvar VAR_TEMP_0, MOVE_FIRE_PUNCH
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_61:
	setvar VAR_TEMP_0, MOVE_ICE_PUNCH
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_62:
	setvar VAR_TEMP_0, MOVE_THUNDER_PUNCH
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_63:
	setvar VAR_TEMP_0, MOVE_FLIP_TURN
	setvar VAR_0x8005, MOVE_FLIP_TURN
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_64:
	setvar VAR_TEMP_0, MOVE_U_TURN
	setvar VAR_0x8005, MOVE_U_TURN
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_65:
	setvar VAR_TEMP_0, MOVE_DEFOG
	setvar VAR_0x8005, MOVE_DEFOG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_66:
	setvar VAR_TEMP_0, MOVE_PAIN_SPLIT
	setvar VAR_0x8005, MOVE_PAIN_SPLIT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_67:
	setvar VAR_TEMP_0, MOVE_TRICK
	setvar VAR_0x8005, MOVE_TRICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_68:
	setvar VAR_TEMP_0, MOVE_BOUNCE
	setvar VAR_0x8005, MOVE_BOUNCE
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_69:
	setvar VAR_TEMP_0, MOVE_IRON_HEAD
	setvar VAR_0x8005, MOVE_IRON_HEAD
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_70:
	setvar VAR_TEMP_0, MOVE_KNOCK_OFF
	setvar VAR_0x8005, MOVE_KNOCK_OFF
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_71:
	setvar VAR_TEMP_0, MOVE_VOLT_SWITCH
	setvar VAR_0x8005, MOVE_VOLT_SWITCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_72:
	setvar VAR_TEMP_0, MOVE_ZEN_HEADBUTT
	setvar VAR_0x8005, MOVE_ZEN_HEADBUTT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_73:
	setvar VAR_TEMP_0, MOVE_ROOST
	setvar VAR_0x8005, MOVE_ROOST
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_74:
	setvar VAR_TEMP_0, MOVE_SYNTHESIS
	setvar VAR_0x8005, MOVE_SYNTHESIS
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_75:
	setvar VAR_TEMP_0, MOVE_TAILWIND
	setvar VAR_0x8005, MOVE_TAILWIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_76:
	return

EventScript_Shop_Lelouch_MoveTutor_78:
	setvar VAR_TEMP_0, MOVE_ICY_WIND
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_79:
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_80:
	setvar VAR_TEMP_0, MOVE_LOW_KICK
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_81:
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_82:
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_83:
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_84:
	setvar VAR_TEMP_0, MOVE_STEALTH_ROCK
	setvar VAR_0x8005, MOVE_STEALTH_ROCK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_85:
	setvar VAR_TEMP_0, MOVE_TAUNT
	setvar VAR_0x8005, MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_86:
	setvar VAR_TEMP_0, MOVE_FIRE_PUNCH
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_87:
	setvar VAR_TEMP_0, MOVE_ICE_PUNCH
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_88:
	setvar VAR_TEMP_0, MOVE_THUNDER_PUNCH
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_89:
	setvar VAR_TEMP_0, MOVE_FLIP_TURN
	setvar VAR_0x8005, MOVE_FLIP_TURN
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_90:
	setvar VAR_TEMP_0, MOVE_U_TURN
	setvar VAR_0x8005, MOVE_U_TURN
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_91:
	setvar VAR_TEMP_0, MOVE_DEFOG
	setvar VAR_0x8005, MOVE_DEFOG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_92:
	setvar VAR_TEMP_0, MOVE_PAIN_SPLIT
	setvar VAR_0x8005, MOVE_PAIN_SPLIT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_93:
	setvar VAR_TEMP_0, MOVE_TRICK
	setvar VAR_0x8005, MOVE_TRICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_94:
	return

EventScript_Shop_Lelouch_MoveTutor_96:
	setvar VAR_TEMP_0, MOVE_ICY_WIND
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_97:
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_98:
	setvar VAR_TEMP_0, MOVE_LOW_KICK
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_99:
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_100:
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_101:
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_102:
	setvar VAR_TEMP_0, MOVE_STEALTH_ROCK
	setvar VAR_0x8005, MOVE_STEALTH_ROCK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_103:
	setvar VAR_TEMP_0, MOVE_TAUNT
	setvar VAR_0x8005, MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_104:
	return

EventScript_Shop_Lelouch_MoveTutor_106:
	return


EventScript_Shop_Lelouch_Other::
	checkitem ITEM_GREEN_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Other_2
	msgbox EventScript_Shop_Lelouch_Other_Text_0
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Other_5
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Other_8
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
	bufferspeciesname 0, VAR_TEMP_1
	copyvar VAR_TEMP_1, VAR_0x8004
	msgbox EventScript_Shop_Lelouch_Other_Text_1, MSGBOX_DEFAULT
	scrollingmultichoice 6, 0, 0, 6, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_Other_13
	case 1, EventScript_Shop_Lelouch_Other_14
	case 2, EventScript_Shop_Lelouch_Other_15
	case 3, EventScript_Shop_Lelouch_Other_16
	case 4, EventScript_Shop_Lelouch_Other_17
	case 5, EventScript_Shop_Lelouch_Other_18
	case 6, EventScript_Shop_Lelouch_Other_19
	case 7, EventScript_Shop_Lelouch_Other_20
	case 8, EventScript_Shop_Lelouch_Other_21
	case 9, EventScript_Shop_Lelouch_Other_22
	case 10, EventScript_Shop_Lelouch_Other_23
	case 11, EventScript_Shop_Lelouch_Other_24
	case 12, EventScript_Shop_Lelouch_Other_25
	case 13, EventScript_Shop_Lelouch_Other_26
	case 14, EventScript_Shop_Lelouch_Other_27
	case 15, EventScript_Shop_Lelouch_Other_28
	case 16, EventScript_Shop_Lelouch_Other_29
	case 17, EventScript_Shop_Lelouch_Other_30
	case 18, EventScript_Shop_Lelouch_Other_31
	case 19, EventScript_Shop_Lelouch_Other_32
	case 20, EventScript_Shop_Lelouch_Other_33
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Other_34
EventScript_Shop_Lelouch_Other_11:
	playse SE_EXP_MAX
	waitse
	msgbox gText_Lelouch_ChangedNature
	special CheckLeadMonSmart
	msgbox gText_Lelouch_PayGreen
	removeitem ITEM_GREEN_SHARD, 1
EventScript_Shop_Lelouch_Other_4:
	return

EventScript_Shop_Lelouch_Other_2:
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Other_5:
	return

EventScript_Shop_Lelouch_Other_8:
	msgbox EventScript_Shop_Lelouch_Training_Text_1
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_13:
	setvar VAR_TEMP_0, 1
	msgbox EventScript_Shop_Lelouch_Other_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_35
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_14:
	setvar VAR_TEMP_0, 3
	msgbox EventScript_Shop_Lelouch_Other_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_37
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_15:
	setvar VAR_TEMP_0, 4
	msgbox EventScript_Shop_Lelouch_Other_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_39
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_16:
	setvar VAR_TEMP_0, 2
	msgbox EventScript_Shop_Lelouch_Other_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_41
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_17:
	setvar VAR_TEMP_0, 5
	msgbox EventScript_Shop_Lelouch_Other_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_43
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_18:
	setvar VAR_TEMP_0, 8
	msgbox EventScript_Shop_Lelouch_Other_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_45
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_19:
	setvar VAR_TEMP_0, 9
	msgbox EventScript_Shop_Lelouch_Other_Text_8, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_47
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_20:
	setvar VAR_TEMP_0, 7
	msgbox EventScript_Shop_Lelouch_Other_Text_9, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_49
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_21:
	setvar VAR_TEMP_0, 15
	msgbox EventScript_Shop_Lelouch_Other_Text_10, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_51
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_22:
	setvar VAR_TEMP_0, 16
	msgbox EventScript_Shop_Lelouch_Other_Text_11, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_53
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_23:
	setvar VAR_TEMP_0, 19
	msgbox EventScript_Shop_Lelouch_Other_Text_12, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_55
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_24:
	setvar VAR_TEMP_0, 17
	msgbox EventScript_Shop_Lelouch_Other_Text_13, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_57
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_25:
	setvar VAR_TEMP_0, 20
	msgbox EventScript_Shop_Lelouch_Other_Text_14, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_59
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_26:
	setvar VAR_TEMP_0, 21
	msgbox EventScript_Shop_Lelouch_Other_Text_15, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_61
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_27:
	setvar VAR_TEMP_0, 23
	msgbox EventScript_Shop_Lelouch_Other_Text_16, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_63
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_28:
	setvar VAR_TEMP_0, 22
	msgbox EventScript_Shop_Lelouch_Other_Text_17, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_65
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_29:
	setvar VAR_TEMP_0, 10
	msgbox EventScript_Shop_Lelouch_Other_Text_18, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_67
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_30:
	setvar VAR_TEMP_0, 11
	msgbox EventScript_Shop_Lelouch_Other_Text_19, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_69
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_31:
	setvar VAR_TEMP_0, 13
	msgbox EventScript_Shop_Lelouch_Other_Text_20, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_71
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_32:
	setvar VAR_TEMP_0, 14
	msgbox EventScript_Shop_Lelouch_Other_Text_21, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_73
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_33:
	setvar VAR_TEMP_0, 12
	msgbox EventScript_Shop_Lelouch_Other_Text_22, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_75
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_34:
	return

EventScript_Shop_Lelouch_Other_35:
	return

EventScript_Shop_Lelouch_Other_37:
	return

EventScript_Shop_Lelouch_Other_39:
	return

EventScript_Shop_Lelouch_Other_41:
	return

EventScript_Shop_Lelouch_Other_43:
	return

EventScript_Shop_Lelouch_Other_45:
	return

EventScript_Shop_Lelouch_Other_47:
	return

EventScript_Shop_Lelouch_Other_49:
	return

EventScript_Shop_Lelouch_Other_51:
	return

EventScript_Shop_Lelouch_Other_53:
	return

EventScript_Shop_Lelouch_Other_55:
	return

EventScript_Shop_Lelouch_Other_57:
	return

EventScript_Shop_Lelouch_Other_59:
	return

EventScript_Shop_Lelouch_Other_61:
	return

EventScript_Shop_Lelouch_Other_63:
	return

EventScript_Shop_Lelouch_Other_65:
	return

EventScript_Shop_Lelouch_Other_67:
	return

EventScript_Shop_Lelouch_Other_69:
	return

EventScript_Shop_Lelouch_Other_71:
	return

EventScript_Shop_Lelouch_Other_73:
	return

EventScript_Shop_Lelouch_Other_75:
	return


EventScript_Shop_Joy::
	lock
	faceplayer
	goto_if_unset FLAG_JOY_INTRO, EventScript_Shop_Joy_2
EventScript_Shop_Joy_1:
	msgbox EventScript_Shop_Joy_Text_1, MSGBOX_DEFAULT
	showmoneybox 0, 0, 0
	msgbox EventScript_Shop_Joy_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Joy_5
	checkmoney 1000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_8
	removemoney 1000, 0
	updatemoneybox
	msgbox EventScript_Shop_Joy_Text_4
	fadescreenswapbuffers FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox EventScript_Shop_Joy_Text_5, MSGBOX_DEFAULT
	hidemoneybox
EventScript_Shop_Joy_4:
	msgbox EventScript_Shop_Joy_Text_6
	release
	end

EventScript_Shop_Joy_2:
	setflag FLAG_JOY_INTRO
	msgbox EventScript_Shop_Joy_Text_0, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_1

EventScript_Shop_Joy_5:
	closemessage
	hidemoneybox
	goto EventScript_Shop_Joy_4

EventScript_Shop_Joy_8:
	msgbox EventScript_Shop_Joy_Text_3
	hidemoneybox
	goto EventScript_Shop_Joy_4


EventScript_MandatoryCheck::
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_MandatoryCheck_2
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_MandatoryCheck_2
EventScript_MandatoryCheck_1:
	return

EventScript_MandatoryCheck_2:
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_gt EventScript_MandatoryCheck_6
	goto EventScript_MandatoryCheck_1

EventScript_MandatoryCheck_6:
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
	msgbox EventScript_MandatoryCheck_Text_0, MSGBOX_DEFAULT
	switch VAR_NUM_TRAINERS_REMAINING
	case 1, EventScript_MandatoryCheck_10
	msgbox gText_MultipleOpponentsRemaining
EventScript_MandatoryCheck_8:
	release
	end

EventScript_MandatoryCheck_10:
	msgbox gText_OneOpponentRemaining
	goto EventScript_MandatoryCheck_8


EventScript_BrutalExitNotSatisfied::
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
	msgbox EventScript_MandatoryCheck_Text_0
	switch VAR_NUM_TRAINERS_REMAINING
	case 1, EventScript_BrutalExitNotSatisfied_3
	msgbox gText_MultipleOpponentsRemaining
EventScript_BrutalExitNotSatisfied_1:
	releaseall
	return

EventScript_BrutalExitNotSatisfied_3:
	msgbox gText_OneOpponentRemaining
	goto EventScript_BrutalExitNotSatisfied_1


EventScript_Max::
	lock
	faceplayer
	goto_if_unset FLAG_MAX_INTRO, EventScript_Max_2
EventScript_Max_1:
	message EventScript_Max_Text_2
	waitmessage
	switch VAR_ZONE
	case 3, EventScript_Max_6
	case 6, EventScript_Max_7
	case 7, EventScript_Max_8
	case 10, EventScript_Max_9
	case 18, EventScript_Max_10
EventScript_Max_4:
	msgbox EventScript_Max_Text_3
	release
	return

EventScript_Max_2:
	msgbox EventScript_Max_Text_0, MSGBOX_DEFAULT
	msgbox EventScript_Max_Text_1, MSGBOX_DEFAULT
	setflag FLAG_MAX_INTRO
	goto EventScript_Max_1

EventScript_Max_6:
	pokemart Zone3A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_7:
	pokemart Zone6A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_8:
	pokemart Zone7A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_9:
	pokemart Zone10A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_10:
	pokemart Zone18A_Shop_TMShop
	goto EventScript_Max_4


	.align 2
Zone3A_Shop_TMShop:
	.2byte ITEM_TM01
	.2byte ITEM_NONE

	.align 2
Zone6A_Shop_TMShop:
	.2byte ITEM_TM05
	.2byte ITEM_TM06
	.2byte ITEM_NONE

	.align 2
Zone7A_Shop_TMShop:
	.2byte ITEM_TM09
	.2byte ITEM_TM10
	.2byte ITEM_TM11
	.2byte ITEM_NONE

	.align 2
Zone10A_Shop_TMShop:
	.2byte ITEM_TM17
	.2byte ITEM_TM18
	.2byte ITEM_TM19
	.2byte ITEM_NONE

	.align 2
Zone18A_Shop_TMShop:
	.2byte ITEM_TM31
	.2byte ITEM_TM32
	.2byte ITEM_TM33
	.2byte ITEM_NONE

EventScript_LeavingSetup::
	setflag FLAG_IN_NEW_ZONE
	msgbox EventScript_LeavingSetup_Text_0
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 21
	goto_if_eq EventScript_LeavingSetup_2
EventScript_LeavingSetup_1:
	compare VAR_TEMP_0, 22
	goto_if_eq EventScript_LeavingSetup_5
EventScript_LeavingSetup_4:
	compare VAR_TEMP_0, 23
	goto_if_eq EventScript_LeavingSetup_8
EventScript_LeavingSetup_7:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	return

EventScript_LeavingSetup_2:
	applymovement 1, Common_Movement_WalkRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	goto EventScript_LeavingSetup_1

EventScript_LeavingSetup_5:
	applymovement 1, Common_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	goto EventScript_LeavingSetup_4

EventScript_LeavingSetup_8:
	applymovement 1, Common_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	goto EventScript_LeavingSetup_7


EventScript_WhenUReady::
	compare VAR_ZONE, 7
	goto_if_eq EventScript_WhenUReady_1
	compare VAR_ZONE, 13
	goto_if_eq EventScript_WhenUReady_2
	compare VAR_ZONE, 18
	goto_if_eq EventScript_WhenUReady_3
	compare VAR_ZONE, 24
	goto_if_eq EventScript_WhenUReady_4
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	release
	return

EventScript_WhenUReady_1:
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady
	release
	return

EventScript_WhenUReady_2:
	msgbox Zone12Sanctuary_Text_Colress_WhenUReady
	release
	return

EventScript_WhenUReady_3:
	msgbox Zone17Sanctuary_Text_Colress_WhenUReady
	release
	return

EventScript_WhenUReady_4:
	goto Zone23Sanctuary_EventScript_WhenUReady
	return


EventScript_SanctuaryToZone0::
	lockall
	warpteleport MAP_ZONE0A, 255, 17, 10
	waitstate
	return


EventScript_Documentation::
	msgbox gText_Version
	goto EventScript_WhenUReady
	return


EventScript_Settings::
EventScript_Settings_1:
	message EventScript_Settings_Text_0
	waitmessage
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_4
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_5
EventScript_Settings_3:
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_9
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_10
EventScript_Settings_8:
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_14
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_15
EventScript_Settings_13:
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_19
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_20
EventScript_Settings_18:
	goto_if_set FLAG_SETTINGS_FULL_SURVEIL, EventScript_Settings_24
	dynmultipush EventScript_Settings_Text_10, 4
EventScript_Settings_23:
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_28
	dynmultipush EventScript_Settings_Text_12, 5
EventScript_Settings_27:
	dynmultipush EventScript_Settings_Text_13, 6
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_32
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_32
	dynmultipush EventScript_Settings_Text_15, 7
EventScript_Settings_31:
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_38
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_38
	dynmultipush EventScript_Settings_Text_17, 8
EventScript_Settings_37:
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_44
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_44
	dynmultipush EventScript_Settings_Text_19, 9
EventScript_Settings_43:
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_50
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_50
	dynmultipush EventScript_Settings_Text_21, 10
EventScript_Settings_49:
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_56
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_56
	dynmultipush EventScript_Settings_Text_23, 11
EventScript_Settings_55:
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_62
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_62
	dynmultipush EventScript_Settings_Text_25, 12
EventScript_Settings_61:
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_68
	goto_if_set FLAG_SETTINGS_LAZY, EventScript_Settings_68
	dynmultipush EventScript_Settings_Text_27, 13
EventScript_Settings_67:
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_74
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_74
	dynmultipush EventScript_Settings_Text_29, 14
EventScript_Settings_73:
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_80
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_80
	dynmultipush EventScript_Settings_Text_31, 15
EventScript_Settings_79:
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_86
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_86
	dynmultipush EventScript_Settings_Text_33, 16
EventScript_Settings_85:
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_92
	goto_if_set FLAG_SETTINGS_WORKAHOLIC, EventScript_Settings_92
	dynmultipush EventScript_Settings_Text_35, 17
EventScript_Settings_91:
	dynmultipush EventScript_Settings_Text_36, 18
	dynmultistack 21, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 0, EventScript_Settings_98
	case 1, EventScript_Settings_99
	case 2, EventScript_Settings_100
	case 3, EventScript_Settings_101
	case 4, EventScript_Settings_102
	case 5, EventScript_Settings_103
	case 6, EventScript_Settings_104
	case 7, EventScript_Settings_105
	case 8, EventScript_Settings_106
	case 9, EventScript_Settings_107
	case 10, EventScript_Settings_108
	case 11, EventScript_Settings_109
	case 12, EventScript_Settings_110
	case 13, EventScript_Settings_111
	case 14, EventScript_Settings_112
	case 15, EventScript_Settings_113
	case 16, EventScript_Settings_114
	case 17, EventScript_Settings_115
	case 18, EventScript_Settings_116
	case MULTI_B_PRESSED, EventScript_Settings_116
	goto EventScript_Settings_1

EventScript_Settings_4:
	dynmultipush EventScript_Settings_Text_1, 0
	goto EventScript_Settings_3

EventScript_Settings_5:
	dynmultipush EventScript_Settings_Text_2, 0
	goto EventScript_Settings_3

EventScript_Settings_9:
	dynmultipush EventScript_Settings_Text_3, 1
	goto EventScript_Settings_8

EventScript_Settings_10:
	dynmultipush EventScript_Settings_Text_4, 1
	goto EventScript_Settings_8

EventScript_Settings_14:
	dynmultipush EventScript_Settings_Text_5, 2
	goto EventScript_Settings_13

EventScript_Settings_15:
	dynmultipush EventScript_Settings_Text_6, 2
	goto EventScript_Settings_13

EventScript_Settings_19:
	dynmultipush EventScript_Settings_Text_7, 3
	goto EventScript_Settings_18

EventScript_Settings_20:
	dynmultipush EventScript_Settings_Text_8, 3
	goto EventScript_Settings_18

EventScript_Settings_24:
	dynmultipush EventScript_Settings_Text_9, 4
	goto EventScript_Settings_23

EventScript_Settings_28:
	dynmultipush EventScript_Settings_Text_11, 5
	goto EventScript_Settings_27

EventScript_Settings_32:
	dynmultipush EventScript_Settings_Text_14, 7
	goto EventScript_Settings_31

EventScript_Settings_38:
	dynmultipush EventScript_Settings_Text_16, 8
	goto EventScript_Settings_37

EventScript_Settings_44:
	dynmultipush EventScript_Settings_Text_18, 9
	goto EventScript_Settings_43

EventScript_Settings_50:
	dynmultipush EventScript_Settings_Text_20, 10
	goto EventScript_Settings_49

EventScript_Settings_56:
	dynmultipush EventScript_Settings_Text_22, 11
	goto EventScript_Settings_55

EventScript_Settings_62:
	dynmultipush EventScript_Settings_Text_24, 12
	goto EventScript_Settings_61

EventScript_Settings_68:
	dynmultipush EventScript_Settings_Text_26, 13
	goto EventScript_Settings_67

EventScript_Settings_74:
	dynmultipush EventScript_Settings_Text_28, 14
	goto EventScript_Settings_73

EventScript_Settings_80:
	dynmultipush EventScript_Settings_Text_30, 15
	goto EventScript_Settings_79

EventScript_Settings_86:
	dynmultipush EventScript_Settings_Text_32, 16
	goto EventScript_Settings_85

EventScript_Settings_92:
	dynmultipush EventScript_Settings_Text_34, 17
	goto EventScript_Settings_91

EventScript_Settings_98:
	msgbox gText_Colress_BrutalExplained, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_117
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_195
	msgbox EventScript_Settings_Text_40, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_278
	goto EventScript_Settings_1

EventScript_Settings_99:
	msgbox gText_Colress_NuzlockeExplained, MSGBOX_DEFAULT
	compare VAR_TEMP_9, 0
	goto_if_eq EventScript_Settings_121
EventScript_Settings_120:
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_198
	msgbox EventScript_Settings_Text_46, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_282
	goto EventScript_Settings_1

EventScript_Settings_100:
	msgbox gText_Colress_RandomizerExplanation, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_123
	msgbox EventScript_Settings_Text_53, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_204
	goto EventScript_Settings_1

EventScript_Settings_101:
	msgbox gText_Colress_InfiniteExplained, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_126
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_209
	msgbox EventScript_Settings_Text_62, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_292
	goto EventScript_Settings_1

EventScript_Settings_102:
	msgbox EventScript_Settings_Text_65, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_FULL_SURVEIL, EventScript_Settings_129
	msgbox EventScript_Settings_Text_68, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_214
	goto EventScript_Settings_1

EventScript_Settings_103:
	msgbox EventScript_Settings_Text_70, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_132
	msgbox EventScript_Settings_Text_73, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_218
	goto EventScript_Settings_1

EventScript_Settings_104:
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_105:
	msgbox EventScript_Settings_Text_75, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_135
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_135
	msgbox EventScript_Settings_Text_79, MSGBOX_DEFAULT
	msgbox EventScript_Settings_Text_80, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_223
	goto EventScript_Settings_1

EventScript_Settings_106:
	msgbox EventScript_Settings_Text_82, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_140
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_140
	msgbox EventScript_Settings_Text_86, MSGBOX_DEFAULT
	msgbox EventScript_Settings_Text_87, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_228
	goto EventScript_Settings_1

EventScript_Settings_107:
	msgbox EventScript_Settings_Text_89, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_145
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_145
	msgbox EventScript_Settings_Text_93, MSGBOX_DEFAULT
	msgbox EventScript_Settings_Text_94, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_233
	goto EventScript_Settings_1

EventScript_Settings_108:
	msgbox EventScript_Settings_Text_96, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_150
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_150
	msgbox EventScript_Settings_Text_100, MSGBOX_DEFAULT
	msgbox EventScript_Settings_Text_101, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_238
	goto EventScript_Settings_1

EventScript_Settings_109:
	msgbox EventScript_Settings_Text_103, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_155
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_155
	msgbox EventScript_Settings_Text_107, MSGBOX_DEFAULT
	msgbox EventScript_Settings_Text_108, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_243
	goto EventScript_Settings_1

EventScript_Settings_110:
	msgbox EventScript_Settings_Text_110, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_160
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_160
	msgbox EventScript_Settings_Text_114, MSGBOX_DEFAULT
	goto_if_unset FLAG_SETTINGS_INFINITE, EventScript_Settings_248
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_111:
	msgbox EventScript_Settings_Text_117, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_LAZY, EventScript_Settings_165
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_165
	msgbox EventScript_Settings_Text_121, MSGBOX_DEFAULT
	msgbox EventScript_Settings_Text_122, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_254
	goto EventScript_Settings_1

EventScript_Settings_112:
	msgbox EventScript_Settings_Text_124, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_170
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_170
	msgbox EventScript_Settings_Text_128, MSGBOX_DEFAULT
	msgbox EventScript_Settings_Text_129, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_259
	goto EventScript_Settings_1

EventScript_Settings_113:
	msgbox EventScript_Settings_Text_131, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_175
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_175
	msgbox EventScript_Settings_Text_135, MSGBOX_DEFAULT
	msgbox EventScript_Settings_Text_136, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_264
	goto EventScript_Settings_1

EventScript_Settings_114:
	msgbox EventScript_Settings_Text_138, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_180
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_180
	msgbox EventScript_Settings_Text_142, MSGBOX_DEFAULT
	msgbox EventScript_Settings_Text_143, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_269
	goto EventScript_Settings_1

EventScript_Settings_115:
	msgbox EventScript_Settings_Text_145, MSGBOX_DEFAULT
	goto_if_set FLAG_SETTINGS_WORKAHOLIC, EventScript_Settings_185
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_185
	msgbox EventScript_Settings_Text_149, MSGBOX_DEFAULT
	msgbox EventScript_Settings_Text_150, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_274
	goto EventScript_Settings_1

EventScript_Settings_116:
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_190
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_117:
	msgbox EventScript_Settings_Text_37, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_193
	goto EventScript_Settings_1

EventScript_Settings_121:
	buffernumberstring 0, VAR_NUZLOCKE_DEATHS
	msgbox gText_Colress_NumDeathsNuzlocke, MSGBOX_DEFAULT
	goto EventScript_Settings_120

EventScript_Settings_123:
	compare VAR_TEMP_9, 0
	goto_if_eq EventScript_Settings_201
	msgbox EventScript_Settings_Text_50, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_284
	goto EventScript_Settings_1

EventScript_Settings_126:
	compare VAR_TEMP_9, 0
	goto_if_eq EventScript_Settings_206
	msgbox EventScript_Settings_Text_59, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_290
	goto EventScript_Settings_1

EventScript_Settings_129:
	msgbox EventScript_Settings_Text_66, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_212
	goto EventScript_Settings_1

EventScript_Settings_132:
	msgbox EventScript_Settings_Text_71, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_216
	goto EventScript_Settings_1

EventScript_Settings_135:
	msgbox EventScript_Settings_Text_76, MSGBOX_DEFAULT
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_220
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_140:
	msgbox EventScript_Settings_Text_83, MSGBOX_DEFAULT
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_225
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_145:
	msgbox EventScript_Settings_Text_90, MSGBOX_DEFAULT
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_230
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_150:
	msgbox EventScript_Settings_Text_97, MSGBOX_DEFAULT
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_235
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_155:
	msgbox EventScript_Settings_Text_104, MSGBOX_DEFAULT
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_240
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_160:
	msgbox EventScript_Settings_Text_111, MSGBOX_DEFAULT
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_245
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_165:
	msgbox EventScript_Settings_Text_118, MSGBOX_DEFAULT
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_251
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_170:
	msgbox EventScript_Settings_Text_125, MSGBOX_DEFAULT
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_256
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_175:
	msgbox EventScript_Settings_Text_132, MSGBOX_DEFAULT
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_261
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_180:
	msgbox EventScript_Settings_Text_139, MSGBOX_DEFAULT
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_266
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_185:
	msgbox EventScript_Settings_Text_146, MSGBOX_DEFAULT
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_271
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_190:
	return

EventScript_Settings_193:
	msgbox EventScript_Settings_Text_38, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_276
	goto EventScript_Settings_1

EventScript_Settings_195:
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_198:
	msgbox EventScript_Settings_Text_43, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_280
	goto EventScript_Settings_1

EventScript_Settings_201:
	msgbox EventScript_Settings_Text_49, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_204:
	msgbox EventScript_Settings_Text_54, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_286
	goto EventScript_Settings_1

EventScript_Settings_206:
	msgbox EventScript_Settings_Text_56, MSGBOX_DEFAULT
	msgbox EventScript_Settings_Text_57, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_288
	goto EventScript_Settings_1

EventScript_Settings_209:
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_212:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_67, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_FULL_SURVEIL
	goto EventScript_Settings_1

EventScript_Settings_214:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_69, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_FULL_SURVEIL
	goto EventScript_Settings_1

EventScript_Settings_216:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_72, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_218:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_74, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_220:
	msgbox EventScript_Settings_Text_77, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_294
	goto EventScript_Settings_1

EventScript_Settings_223:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_81, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_225:
	msgbox EventScript_Settings_Text_84, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_296
	goto EventScript_Settings_1

EventScript_Settings_228:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_88, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_230:
	msgbox EventScript_Settings_Text_91, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_298
	goto EventScript_Settings_1

EventScript_Settings_233:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_95, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_235:
	msgbox EventScript_Settings_Text_98, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_300
	goto EventScript_Settings_1

EventScript_Settings_238:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_102, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_240:
	msgbox EventScript_Settings_Text_105, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_302
	goto EventScript_Settings_1

EventScript_Settings_243:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_109, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_245:
	msgbox EventScript_Settings_Text_112, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_304
	goto EventScript_Settings_1

EventScript_Settings_248:
	msgbox EventScript_Settings_Text_115, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_306
	goto EventScript_Settings_1

EventScript_Settings_251:
	msgbox EventScript_Settings_Text_119, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_308
	goto EventScript_Settings_1

EventScript_Settings_254:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_123, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_LAZY
	goto EventScript_Settings_1

EventScript_Settings_256:
	msgbox EventScript_Settings_Text_126, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_310
	goto EventScript_Settings_1

EventScript_Settings_259:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_130, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_261:
	msgbox EventScript_Settings_Text_133, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_312
	goto EventScript_Settings_1

EventScript_Settings_264:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_137, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_266:
	msgbox EventScript_Settings_Text_140, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_314
	goto EventScript_Settings_1

EventScript_Settings_269:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_144, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_271:
	msgbox EventScript_Settings_Text_147, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_316
	goto EventScript_Settings_1

EventScript_Settings_274:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_151, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_WORKAHOLIC
	goto EventScript_Settings_1

EventScript_Settings_276:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_39, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_BRUTAL
	special ReverseHiddenItemFlags
	goto EventScript_Settings_1

EventScript_Settings_278:
	msgbox EventScript_Settings_Text_41, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_318
	goto EventScript_Settings_1

EventScript_Settings_280:
	msgbox EventScript_Settings_Text_44, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_320
	goto EventScript_Settings_1

EventScript_Settings_282:
	msgbox EventScript_Settings_Text_47, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_322
	goto EventScript_Settings_1

EventScript_Settings_284:
	msgbox EventScript_Settings_Text_51, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_324
	goto EventScript_Settings_1

EventScript_Settings_286:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_55, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_288:
	additem ITEM_FULL_RESTORE, 100
	additem ITEM_FULL_RESTORE, 100
	additem ITEM_FULL_RESTORE, 100
	additem ITEM_FULL_RESTORE, 100
	additem ITEM_FULL_RESTORE, 100
	additem ITEM_FULL_RESTORE, 100
	additem ITEM_FULL_RESTORE, 100
	additem ITEM_FULL_RESTORE, 100
	additem ITEM_FULL_RESTORE, 100
	additem ITEM_MAX_ELIXIR, 100
	additem ITEM_MAX_ELIXIR, 100
	additem ITEM_MAX_ELIXIR, 100
	additem ITEM_MAX_ELIXIR, 100
	additem ITEM_MAX_ELIXIR, 100
	additem ITEM_MAX_ELIXIR, 100
	additem ITEM_MAX_ELIXIR, 100
	additem ITEM_MAX_ELIXIR, 100
	additem ITEM_MAX_ELIXIR, 100
	additem ITEM_MAX_REPEL, 100
	additem ITEM_MAX_REPEL, 100
	additem ITEM_MAX_REPEL, 100
	additem ITEM_MAX_REPEL, 100
	additem ITEM_MAX_REPEL, 100
	additem ITEM_MAX_REPEL, 100
	additem ITEM_MAX_REPEL, 100
	additem ITEM_MAX_REPEL, 100
	additem ITEM_MAX_REPEL, 100
	msgbox EventScript_Settings_Text_58, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_290:
	msgbox EventScript_Settings_Text_60, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_326
	goto EventScript_Settings_1

EventScript_Settings_292:
	msgbox EventScript_Settings_Text_63, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_328
	goto EventScript_Settings_1

EventScript_Settings_294:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_78, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_296:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_85, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_298:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_92, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_300:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_99, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_302:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_106, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_304:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_113, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_306:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_116, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_308:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_120, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_LAZY
	goto EventScript_Settings_1

EventScript_Settings_310:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_127, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_312:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_134, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_314:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_141, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_316:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_148, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_WORKAHOLIC
	goto EventScript_Settings_1

EventScript_Settings_318:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_42, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_BRUTAL
	special ReverseHiddenItemFlags
	goto EventScript_Settings_1

EventScript_Settings_320:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_45, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_NUZLOCKE
	clearflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
	callnative GlobalNuzlockeClear
	goto EventScript_Settings_1

EventScript_Settings_322:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_48, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_NUZLOCKE
	callnative GlobalNuzlockeSet
	goto EventScript_Settings_1

EventScript_Settings_324:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_52, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_326:
	playse SE_PC_OFF
	msgbox EventScript_Settings_Text_61, MSGBOX_DEFAULT
	waitse
	clearflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1

EventScript_Settings_328:
	playse SE_PC_ON
	msgbox EventScript_Settings_Text_64, MSGBOX_DEFAULT
	waitse
	setflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1


EventScript_MusicMenu::
EventScript_MusicMenu_1:
	fadedefaultbgm
	msgbox EventScript_MusicMenu_Text_0, MSGBOX_DEFAULT
	multichoice 21, 0, MULTI_MUSIC_TYPE, FALSE
	switch VAR_RESULT
	case 0, EventScript_MusicMenu_4
	case 1, EventScript_MusicMenu_5
	case 2, EventScript_MusicMenu_6
	case 3, EventScript_MusicMenu_7
	case MULTI_B_PRESSED, EventScript_MusicMenu_7
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_4:
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_8:
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_9
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_5:
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_11:
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_12
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_6:
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_14:
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_15
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_7:
	return

EventScript_MusicMenu_9:
	switch VAR_WILD_MUSIC
	case 0, EventScript_MusicMenu_19
	case 1, EventScript_MusicMenu_20
	case 2, EventScript_MusicMenu_21
	case 3, EventScript_MusicMenu_22
	case 4, EventScript_MusicMenu_23
	case 5, EventScript_MusicMenu_24
EventScript_MusicMenu_17:
	multichoice 21, 0, MULTI_MUSIC_WHICH_GAME, FALSE
	switch VAR_RESULT
	case 0, EventScript_MusicMenu_42
	case 1, EventScript_MusicMenu_43
	case 2, EventScript_MusicMenu_44
	case 3, EventScript_MusicMenu_45
	case 4, EventScript_MusicMenu_46
	case 5, EventScript_MusicMenu_47
	case MULTI_B_PRESSED, EventScript_MusicMenu_48
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_12:
	switch VAR_TRAINER_MUSIC
	case 0, EventScript_MusicMenu_27
	case 1, EventScript_MusicMenu_28
	case 2, EventScript_MusicMenu_29
	case 3, EventScript_MusicMenu_30
	case 4, EventScript_MusicMenu_31
	case 5, EventScript_MusicMenu_32
EventScript_MusicMenu_25:
	multichoice 21, 0, MULTI_MUSIC_WHICH_GAME, FALSE
	switch VAR_RESULT
	case 0, EventScript_MusicMenu_50
	case 1, EventScript_MusicMenu_51
	case 2, EventScript_MusicMenu_52
	case 3, EventScript_MusicMenu_53
	case 4, EventScript_MusicMenu_54
	case 5, EventScript_MusicMenu_55
	case MULTI_B_PRESSED, EventScript_MusicMenu_56
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_15:
	switch VAR_LEVIATHAN_MUSIC
	case 0, EventScript_MusicMenu_35
	case 1, EventScript_MusicMenu_36
	case 2, EventScript_MusicMenu_37
	case 3, EventScript_MusicMenu_38
	case 4, EventScript_MusicMenu_39
	case 5, EventScript_MusicMenu_40
EventScript_MusicMenu_33:
	multichoice 21, 0, MULTI_MUSIC_WHICH_GAME, FALSE
	switch VAR_RESULT
	case 0, EventScript_MusicMenu_58
	case 1, EventScript_MusicMenu_59
	case 2, EventScript_MusicMenu_60
	case 3, EventScript_MusicMenu_61
	case 4, EventScript_MusicMenu_62
	case 5, EventScript_MusicMenu_63
	case MULTI_B_PRESSED, EventScript_MusicMenu_64
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_19:
	playbgm MUS_VS_WILD, FALSE
	msgbox EventScript_MusicMenu_Text_1, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_20:
	playbgm MUS_RG_VS_WILD, FALSE
	msgbox EventScript_MusicMenu_Text_2, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_21:
	playbgm MUS_DP_SEQ_BA_POKE, FALSE
	msgbox EventScript_MusicMenu_Text_3, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_22:
	playbgm MUS_HG_SEQ_GS_VS_NORAPOKE, FALSE
	msgbox EventScript_MusicMenu_Text_4, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_23:
	playbgm MUS_HG_SEQ_GS_VS_NORAPOKE_KANTO, FALSE
	msgbox EventScript_MusicMenu_Text_5, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_24:
	msgbox EventScript_MusicMenu_Text_6, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_27:
	playbgm MUS_VS_TRAINER, FALSE
	msgbox EventScript_MusicMenu_Text_8, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_28:
	playbgm MUS_RG_VS_TRAINER, FALSE
	msgbox EventScript_MusicMenu_Text_9, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_29:
	playbgm MUS_DP_SEQ_BA_TRAIN, FALSE
	msgbox EventScript_MusicMenu_Text_10, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_30:
	playbgm MUS_HG_SEQ_GS_VS_TRAINER, FALSE
	msgbox EventScript_MusicMenu_Text_11, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_31:
	playbgm MUS_HG_SEQ_GS_VS_TRAINER_KANTO, FALSE
	msgbox EventScript_MusicMenu_Text_12, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_32:
	playbgm MUS_BW_SEQ_BGM_VS_TRAINER, FALSE
	msgbox EventScript_MusicMenu_Text_13, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_35:
	playbgm MUS_VS_GYM_LEADER, FALSE
	msgbox EventScript_MusicMenu_Text_14, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_36:
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
	msgbox EventScript_MusicMenu_Text_15, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_37:
	playbgm MUS_DP_SEQ_BA_GYM, FALSE
	msgbox EventScript_MusicMenu_Text_16, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_38:
	playbgm MUS_HG_SEQ_GS_VS_GYMREADER, FALSE
	msgbox EventScript_MusicMenu_Text_17, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_39:
	playbgm MUS_HG_SEQ_GS_VS_GYMREADER_KANTO, FALSE
	msgbox EventScript_MusicMenu_Text_18, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_40:
	msgbox EventScript_MusicMenu_Text_19, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_42:
	setvar VAR_WILD_MUSIC, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_43:
	setvar VAR_WILD_MUSIC, 1
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_44:
	setvar VAR_WILD_MUSIC, 2
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_45:
	setvar VAR_WILD_MUSIC, 3
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_46:
	setvar VAR_WILD_MUSIC, 4
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_47:
	msgbox EventScript_MusicMenu_Text_7
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_48:
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_50:
	setvar VAR_TRAINER_MUSIC, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_51:
	setvar VAR_TRAINER_MUSIC, 1
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_52:
	setvar VAR_TRAINER_MUSIC, 2
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_53:
	setvar VAR_TRAINER_MUSIC, 3
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_54:
	setvar VAR_TRAINER_MUSIC, 4
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_55:
	setvar VAR_TRAINER_MUSIC, 5
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_56:
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_58:
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_59:
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_60:
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_61:
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_62:
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_63:
	msgbox EventScript_MusicMenu_Text_20
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_64:
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_14


EventScript_WarpZone0::
	closemessage
	playmoncry SPECIES_PORYGON, 0
	waitmoncry
	clearflag FLAG_IS_REVISITING_ZONE
	switch VAR_REVISITING_ZONE
	case 1, EventScript_WarpZone0_3
	case 2, EventScript_WarpZone0_4
	case 3, EventScript_WarpZone0_5
	case 4, EventScript_WarpZone0_6
	case 5, EventScript_WarpZone0_7
	case 6, EventScript_WarpZone0_8
	case 7, EventScript_WarpZone0_9
	case 8, EventScript_WarpZone0_10
	case 9, EventScript_WarpZone0_11
	case 10, EventScript_WarpZone0_12
	case 11, EventScript_WarpZone0_13
	case 12, EventScript_WarpZone0_14
	case 13, EventScript_WarpZone0_15
	case 14, EventScript_WarpZone0_16
	case 15, EventScript_WarpZone0_17
	case 16, EventScript_WarpZone0_18
	case 17, EventScript_WarpZone0_19
	case 18, EventScript_WarpZone0_20
	case 19, EventScript_WarpZone0_21
	case 20, EventScript_WarpZone0_22
	case 21, EventScript_WarpZone0_23
	case 22, EventScript_WarpZone0_24
	case 23, EventScript_WarpZone0_25
	case 24, EventScript_WarpZone0_26
	case 25, EventScript_WarpZone0_27
	case 26, EventScript_WarpZone0_28
	case 27, EventScript_WarpZone0_29
	case 28, EventScript_WarpZone0_30
	case 29, EventScript_WarpZone0_31
	case 30, EventScript_WarpZone0_32
	case 31, EventScript_WarpZone0_33
	case 32, EventScript_WarpZone0_34
	case 33, EventScript_WarpZone0_35
	case 34, EventScript_WarpZone0_36
	case 35, EventScript_WarpZone0_37
	case 36, EventScript_WarpZone0_38
	case 37, EventScript_WarpZone0_39
	case 38, EventScript_WarpZone0_40
	case 39, EventScript_WarpZone0_41
	case 40, EventScript_WarpZone0_42
	case 41, EventScript_WarpZone0_43
	case 42, EventScript_WarpZone0_44
	case 43, EventScript_WarpZone0_45
	case 44, EventScript_WarpZone0_46
	case 45, EventScript_WarpZone0_47
	case 46, EventScript_WarpZone0_48
	case 47, EventScript_WarpZone0_49
	case 48, EventScript_WarpZone0_50
	case 49, EventScript_WarpZone0_51
	case 50, EventScript_WarpZone0_52
	case 51, EventScript_WarpZone0_53
EventScript_WarpZone0_1:
	releaseall
	end

EventScript_WarpZone0_3:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 15, 32
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_4:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 19, 32
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_5:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 23, 32
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_6:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 27, 32
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_7:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 31, 32
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_8:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 35, 32
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_9:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 39, 32
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_10:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 43, 32
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_11:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 47, 32
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_12:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 51, 32
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_13:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 15, 25
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_14:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 19, 25
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_15:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 23, 25
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_16:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 27, 25
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_17:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 31, 25
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_18:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 35, 25
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_19:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 39, 25
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_20:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 43, 25
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_21:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 47, 25
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_22:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 51, 25
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_23:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 15, 18
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_24:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 19, 18
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_25:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 23, 18
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_26:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 27, 18
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_27:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 31, 18
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_28:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 35, 18
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_29:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 39, 18
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_30:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 43, 18
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_31:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 47, 18
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_32:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 51, 18
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_33:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 15, 11
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_34:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 19, 11
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_35:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 23, 11
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_36:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 27, 11
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_37:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 31, 11
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_38:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 35, 11
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_39:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 39, 11
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_40:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 43, 11
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_41:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 47, 11
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_42:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 51, 11
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_43:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 15, 4
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_44:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 19, 4
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_45:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 23, 4
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_46:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 27, 4
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_47:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 31, 4
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_48:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 35, 4
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_49:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 39, 4
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_50:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 43, 4
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_51:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 47, 4
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_52:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 51, 4
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_53:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0C, 255, 2, 25
	waitstate
	goto EventScript_WarpZone0_1


Zone_EventScript_RetirePrompt::
	lockall
	showmoneybox 0, 0, 0
	msgbox Zone_EventScript_RetirePrompt_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone_EventScript_RetirePrompt_2
	clearflag FLAG_IN_NEW_ZONE
	removemoney 0
	updatemoneybox
	msgbox Zone_EventScript_RetirePrompt_Text_1
	switch VAR_ZONE
	case 1, Zone_EventScript_RetirePrompt_6
	case 2, Zone_EventScript_RetirePrompt_7
	case 3, Zone_EventScript_RetirePrompt_8
	case 4, Zone_EventScript_RetirePrompt_9
	case 5, Zone_EventScript_RetirePrompt_10
	case 6, Zone_EventScript_RetirePrompt_11
	case 7, Zone_EventScript_RetirePrompt_12
	case 9, Zone_EventScript_RetirePrompt_13
	case 10, Zone_EventScript_RetirePrompt_14
	case 11, Zone_EventScript_RetirePrompt_15
	case 12, Zone_EventScript_RetirePrompt_16
	case 13, Zone_EventScript_RetirePrompt_17
	case 15, Zone_EventScript_RetirePrompt_18
	case 16, Zone_EventScript_RetirePrompt_19
	case 17, Zone_EventScript_RetirePrompt_20
	case 18, Zone_EventScript_RetirePrompt_21
	case 20, Zone_EventScript_RetirePrompt_22
	case 21, Zone_EventScript_RetirePrompt_23
	case 22, Zone_EventScript_RetirePrompt_24
	case 23, Zone_EventScript_RetirePrompt_25
	case 24, Zone_EventScript_RetirePrompt_26
	case 26, Zone_EventScript_RetirePrompt_27
Zone_EventScript_RetirePrompt_4:
	releaseall
	end

Zone_EventScript_RetirePrompt_2:
	closemessage
	hidemoneybox
	releaseall
	end

Zone_EventScript_RetirePrompt_6:
	cleartrainerflag TRAINER_NINA
	cleartrainerflag TRAINER_MARIAM
	cleartrainerflag TRAINER_OSCAR
	clearflag FLAG_BEAT_LEVIATHAN_1
	setvar VAR_ZONE_1_STATE, 0
	warpteleport MAP_ZONE0SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_7:
	cleartrainerflag TRAINER_POLLY
	cleartrainerflag TRAINER_JEREMIAH
	cleartrainerflag TRAINER_HARPER
	cleartrainerflag TRAINER_ARTHUR
	clearflag FLAG_BEAT_LEVIATHAN_2
	setvar VAR_ZONE_2_STATE, 0
	warpteleport MAP_ZONE1SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_8:
	cleartrainerflag TRAINER_JEMMA
	cleartrainerflag TRAINER_PATRICK
	cleartrainerflag TRAINER_BORIS
	cleartrainerflag TRAINER_ANNABELLE
	cleartrainerflag TRAINER_RICHARD
	clearflag FLAG_BEAT_LEVIATHAN_3
	setvar VAR_ZONE_3_STATE, 0
	warpteleport MAP_ZONE2SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_9:
	cleartrainerflag TRAINER_HERMAN
	cleartrainerflag TRAINER_RALPH
	cleartrainerflag TRAINER_SANTIAGO
	cleartrainerflag TRAINER_CHLOE_AND_KAYA
	cleartrainerflag TRAINER_FRED
	cleartrainerflag TRAINER_LUCIA
	clearflag FLAG_BEAT_LEVIATHAN_4
	setvar VAR_ZONE_4_STATE, 0
	warpteleport MAP_ZONE3SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_10:
	cleartrainerflag TRAINER_ANNE_AND_JUNE
	cleartrainerflag TRAINER_GILBERT
	cleartrainerflag TRAINER_REBECCA
	cleartrainerflag TRAINER_RYAN
	cleartrainerflag TRAINER_CAITLYN
	cleartrainerflag TRAINER_KENNETH
	cleartrainerflag TRAINER_CLINTON
	clearflag FLAG_BEAT_LEVIATHAN_5
	setvar VAR_ZONE_5_STATE, 0
	warpteleport MAP_ZONE4SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_11:
	cleartrainerflag TRAINER_ZACK
	cleartrainerflag TRAINER_MELANIE
	cleartrainerflag TRAINER_CONSTANCE
	cleartrainerflag TRAINER_FRANK
	cleartrainerflag TRAINER_DUDLEY
	cleartrainerflag TRAINER_DAISY
	clearflag FLAG_BEAT_LEVIATHAN_6
	setvar VAR_ZONE_6_STATE, 0
	warpteleport MAP_ZONE5SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_12:
	cleartrainerflag TRAINER_MILLIE
	cleartrainerflag TRAINER_PAIGE
	cleartrainerflag TRAINER_SETH
	cleartrainerflag TRAINER_JAMAL
	cleartrainerflag TRAINER_CONNIE
	clearflag FLAG_BEAT_LEVIATHAN_7
	cleartrainerflag TRAINER_JIMMY
	cleartrainerflag TRAINER_EMILIANO
	cleartrainerflag TRAINER_KAREN
	cleartrainerflag TRAINER_JAYDEN
	cleartrainerflag TRAINER_NEIL
	cleartrainerflag TRAINER_TAMARA
	clearflag FLAG_BEAT_LEVIATHAN_8
	clearflag FLAG_HIDE_ZONE8D_WALLY
	setvar VAR_ZONE_8_STATE, 0
	warpteleport MAP_ZONE6SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_13:
	cleartrainerflag TRAINER_COOPER
	cleartrainerflag TRAINER_CARMINE
	clearflag FLAG_HIDE_ZONE9A_ARI_WINSTRATE
	setvar VAR_ZONE_9_STATE, 0
	warpteleport MAP_ZONE8SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_14:
	cleartrainerflag TRAINER_KYLE
	cleartrainerflag TRAINER_BELLE
	cleartrainerflag TRAINER_DEWEY
	cleartrainerflag TRAINER_PEARLIE
	cleartrainerflag TRAINER_ERNEST
	cleartrainerflag TRAINER_ALANA
	cleartrainerflag TRAINER_SUSAN
	cleartrainerflag TRAINER_CONRAD
	clearflag FLAG_BEAT_LEVIATHAN_9
	warpteleport MAP_ZONE9SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_15:
	cleartrainerflag TRAINER_JEANETTE
	cleartrainerflag TRAINER_EMMA_AND_LEO
	cleartrainerflag TRAINER_REGINA
	cleartrainerflag TRAINER_JOEL
	clearflag FLAG_BEAT_LEVIATHAN_10
	setvar VAR_ZONE_11_STATE, 0
	warpteleport MAP_ZONE10SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_16:
	cleartrainerflag TRAINER_ESSENCE
	cleartrainerflag TRAINER_DOLORES
	cleartrainerflag TRAINER_TREVOR
	cleartrainerflag TRAINER_RANDOLPH
	cleartrainerflag TRAINER_FEDERICO
	cleartrainerflag TRAINER_GENIE
	cleartrainerflag TRAINER_HILDA
	cleartrainerflag TRAINER_KINLEY
	clearflag FLAG_HIDE_ZONE12A_CAMPER_PICNICKER
	setvar VAR_ZONE_12_STATE, 0
	warpteleport MAP_ZONE11SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_17:
	cleartrainerflag TRAINER_VIOLET
	cleartrainerflag TRAINER_WANDA
	cleartrainerflag TRAINER_AMBER_AND_KIM
	cleartrainerflag TRAINER_JAN_AND_ERIN
	cleartrainerflag TRAINER_STEVE
	cleartrainerflag TRAINER_GOULD
	cleartrainerflag TRAINER_MENDEL
	cleartrainerflag TRAINER_DARWIN
	cleartrainerflag TRAINER_BART
	cleartrainerflag TRAINER_NIGEL
	cleartrainerflag TRAINER_LOLA
	cleartrainerflag TRAINER_CHARLIE
	cleartrainerflag TRAINER_TODD
	cleartrainerflag TRAINER_RUSSELL
	cleartrainerflag TRAINER_OTIS
	clearflag FLAG_BEAT_LEVIATHAN_11
	clearflag FLAG_BEAT_LEVIATHAN_12
	warpteleport MAP_ZONE12SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_18:
	clearflag FLAG_BEAT_LEVIATHAN_13
	setvar VAR_ZONE_15_STATE, 0
	warpteleport MAP_ZONE14SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_19:
	warpteleport MAP_ZONE15SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_20:
	warpteleport MAP_ZONE16SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_21:
	warpteleport MAP_ZONE17SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_22:
	warpteleport MAP_ZONE20SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_23:
	warpteleport MAP_ZONE20SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_24:
	warpteleport MAP_ZONE21SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_25:
	warpteleport MAP_ZONE22SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_26:
	warpteleport MAP_ZONE23SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_27:
	warpteleport MAP_ZONE25SANCTUARY, 255, 22, 7
	waitstate
	goto Zone_EventScript_RetirePrompt_4


EventScript_NuzlockeVerifyGift::
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyGift_2
EventScript_NuzlockeVerifyGift_1:
	return

EventScript_NuzlockeVerifyGift_2:
	msgbox EventScript_NuzlockeVerifyGift_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyGift_4
	goto EventScript_NuzlockeVerifyGift_1

EventScript_NuzlockeVerifyGift_4:
	hidemoneybox
	release
	end


EventScript_PorygonExit::
	lock
	faceplayer
	compare VAR_REVISITING_ZONE, 0
	goto_if_ne EventScript_PorygonExit_2
EventScript_PorygonExit_1:
	call EventScript_MandatoryCheck
	msgbox EventScript_PorygonExit_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_PorygonExit_5
EventScript_PorygonExit_4:
	release
	end

EventScript_PorygonExit_2:
	goto EventScript_WarpZone0
	goto EventScript_PorygonExit_1

EventScript_PorygonExit_5:
	closemessage
	playmoncry SPECIES_PORYGON, 0
	waitmoncry
	switch VAR_ZONE
	case 1, EventScript_PorygonExit_8
	case 2, EventScript_PorygonExit_9
	case 3, EventScript_PorygonExit_10
	case 4, EventScript_PorygonExit_11
	case 5, EventScript_PorygonExit_12
	case 6, EventScript_PorygonExit_13
	case 7, EventScript_PorygonExit_14
	case 9, EventScript_PorygonExit_15
	case 10, EventScript_PorygonExit_16
	case 11, EventScript_PorygonExit_17
	case 12, EventScript_PorygonExit_18
	case 13, EventScript_PorygonExit_19
	case 15, EventScript_PorygonExit_20
	case 16, EventScript_PorygonExit_21
	case 17, EventScript_PorygonExit_22
	case 18, EventScript_PorygonExit_23
	case 20, EventScript_PorygonExit_24
	case 21, EventScript_PorygonExit_24
	case 22, EventScript_PorygonExit_24
	case 23, EventScript_PorygonExit_24
	case 24, EventScript_PorygonExit_24
	case 25, EventScript_PorygonExit_24
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_8:
	warp MAP_ZONE1SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_9:
	warp MAP_ZONE2SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_10:
	setflag FLAG_HIDE_ZONE3A_MAX
	warp MAP_ZONE3SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_11:
	warp MAP_ZONE4SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_12:
	warp MAP_ZONE5SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_13:
	setflag FLAG_HIDE_ZONE6A_MAX
	warp MAP_ZONE6SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_14:
	setflag FLAG_HIDE_ZONE7A_MAX
	setflag FLAG_ZONE7B_HEAL_USED
	warp MAP_ZONE8SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_15:
	warp MAP_ZONE9SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_16:
	setflag FLAG_HIDE_ZONE10A_MAX
	warp MAP_ZONE10SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_17:
	warp MAP_ZONE11SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_18:
	clearflag FLAG_SYS_NO_BAG_START_MENU
	warp MAP_ZONE12SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_19:
	warp MAP_ZONE14SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_20:
	warp MAP_ZONE15SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_21:
	warp MAP_ZONE16SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_22:
	warp MAP_ZONE17SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_23:
	setflag FLAG_HIDE_ZONE18A_MAX
	warp MAP_ZONE19SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_24:
	warp MAP_ZONE1SANCTUARY, 255, 22, 7
	goto EventScript_PorygonExit_4


EventScript_ExitSign::
	msgbox gText_ExitSign, MSGBOX_SIGN
	end

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

EventScript_Shop_General_Text_0:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: New challenger, huh?\nThe name's Tim Johnson.\p{COLOR BLUE}Tim{COLOR DARK_GRAY}: I run this store, sponsored by\nPokémart Incorporated.\lYou can find all sorts of general\lsupplies for your travels.$"

EventScript_Shop_General_Text_1:
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Hey! I just wanted to let you know\n"
	.string "about a new offer we have!\p"
	.string "I'm sure you've heard that if you buy 10\n"
	.string "Poké Balls, you'll get a Premier Ball for\l"
	.string "free?\p"
	.string "Well, I've got a very similar offer for\n"
	.string "you.\p"
	.string "If you buy 10 Potions, you'll get a free\n"
	.string "Super Potion!\p"
	.string "How's that for a deal?\p"
	.string "Anyways…$"

EventScript_Shop_General_Text_2:
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Welcome to Tim's.\nCan I get you anything?$"

EventScript_Shop_General_Text_3:
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Ah, so you're looking for Pokéballs\n"
	.string "and healing items?$"

EventScript_Shop_General_Text_4:
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Ah, so it's field items you're\n"
	.string "looking for?$"

EventScript_Shop_General_Text_5:
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Have a nice day.$"

EventScript_Shop_Unique_Varrick_Text_0:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Wowza! Yeetastic! Blamo!\p"
	.string "My name is Varrick,\n"
	.string "entrepreneur extraordinaire!\p"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: I pitched this idea to\n"
	.string "Silph a couple years back,\l"
	.string "and now it's become a reality!\p"
	.string "All the random items you can't find\n"
	.string "in the world, you'll find here!\p"
	.string "Fantastic evolution stones!\p"
	.string "Countless Pokéball variations!\p"
	.string "Delicious Berries!\p"
	.string "The greatest held item collection\n"
	.string "you've never seen!\p"
	.string "Please, enjoy my shop!$"

EventScript_Shop_Unique_Varrick_Text_1:
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Greetings and salutations!\nWelcome to Silph Unique Item Store!$"

EventScript_Shop_Unique_Varrick_Text_2:
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: A big thank you from Silph!$"

EventScript_Shop_Unique_ZhuLi_Text_0:
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: Welcome to Silph Unique\nItem Store. Care to buy anything?$"

EventScript_Shop_Unique_ZhuLi_Text_1:
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: We thank you for your\nbusiness, loyal customer.$"

EventScript_Shop_ZhuLiIntro_Text_0:
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Fantastic! You've arrived!\nZhu Li, do the thing!$"

EventScript_Shop_ZhuLiIntro_Text_1:
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: Yes, sir.$"

EventScript_Shop_ZhuLiIntro_Text_2:
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Zhu Li is my assistant!\pSilph gave me so many items to sell\nthat I practically begged them for\lsome extra help!\pZhu Li, introduce yourself!$"

EventScript_Shop_ZhuLiIntro_Text_3:
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: Yes, sir.\pPleased to meet you, {PLAYER}. I'm-$"

EventScript_Shop_ZhuLiIntro_Text_4:
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Alright, we don't have all\nday, Zhu Li! Talk to her if you\lwant to buy consumable items, while\lI'll handle all of the held items!$"

EventScript_Shop_Lelouch_Text_0:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You… What is your name?\p{COLOR BLUE}???{COLOR DARK_GRAY}: {PLAYER}? Now that's a name…\nI haven't heard in…$"

EventScript_Shop_Lelouch_Text_1:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You may call me Lelouch.\p{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I provide a variety of\nservices to improve one's Pokémon.$"

EventScript_Shop_Lelouch_Text_2:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I demand a special price\nfor my services, one that I see you\lcannot pay. Leave.$"

EventScript_Shop_Lelouch_Text_3:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I sense…\n"
	.string "The aura of Shards.\p"
	.string "There are four types of Shards:\n"
	.string "Red, Blue, Yellow, and Green,\l"
	.string "ranked by least to most rare.\p"
	.string "Each can be exchanged for a certain\n"
	.string "type of service I provide.\p"
	.string "Pokémon training costs Red Shards.\p"
	.string "Move Relearning costs Blue Shards.\p"
	.string "Move Tutoring costs Yellow Shards.\p"
	.string "Other services cost Green Shards.\p"
	.string "I hope they serve you well…$"

EventScript_Shop_Lelouch_Text_4:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: For the right price…\nWelcome to Lelouch's Special Services.$"

EventScript_Shop_Lelouch_Text_5:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

EventScript_Shop_Lelouch_Training_Text_0:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Choose which training\nregiment you would like.$"

EventScript_Shop_Lelouch_Training_Text_1:
	.string "No eggs!$"

EventScript_Shop_Lelouch_MoveReminder_Text_0:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should\nrelearn a move?$"

EventScript_Shop_Lelouch_MoveReminder_Text_1:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That is an Egg.$"

EventScript_Shop_Lelouch_MoveReminder_Text_2:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That Pokémon cannot\nrelearn any moves.$"

EventScript_Shop_Lelouch_MoveReminder_Text_3:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which move should it\nrelearn?$"

EventScript_Shop_Lelouch_MoveTutor_Text_0:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You want to teach the move\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_MoveTutor_Text_1:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokemon should learn\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_Other_Text_0:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I offer nature changing\n"
	.string "services at the cost of one Green\l"
	.string "Shard.\p"
	.string "First, choose a Pokémon.$"

EventScript_Shop_Lelouch_Other_Text_1:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which nature would you like\n"
	.string "your {STR_VAR_1} to have?$"

EventScript_Shop_Lelouch_Other_Text_2:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lonely, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_3:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Adamant, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_4:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naughty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_5:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Brave, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_6:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Bold, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_7:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Impish, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_8:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lax, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_9:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Relaxed, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_10:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Modest, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_11:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Mild, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_12:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Rash, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_13:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Quiet, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_14:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Calm, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_15:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Gentle, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_16:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Careful, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_17:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Sassy, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_18:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Timid, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_19:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Hasty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_20:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Jolly, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_21:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naive, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_22:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Serious, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Joy_Text_0:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Welcome to the Pokémon…\nUgh. Never mind.\p{COLOR BLUE}???{COLOR DARK_GRAY}: My name is Joy. Just Joy.\p{COLOR BLUE}Joy{COLOR DARK_GRAY}: I used to work at the\nPokémon Center, but they gave\lterrible pay.\pSo I've started my own shop,\nJoy's Healing Shop!$"

EventScript_Shop_Joy_Text_1:
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Healing Shop.\pWe heal your entire party for a\nflat ¥1000 fee.$"

EventScript_Shop_Joy_Text_2:
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Should I heal your Pokémon?$"

EventScript_Shop_Joy_Text_3:
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Joy_Text_4:
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: That will be ¥1000, thank you…$"

EventScript_Shop_Joy_Text_5:
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Your party has been restored.$"

EventScript_Shop_Joy_Text_6:
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: See you next time.$"

EventScript_MandatoryCheck_Text_0:
	.string "{COLOR RED}You haven't defeated all the opponents\n"
	.string "in the area yet.$"

EventScript_Max_Text_0:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: By my calculations, you should be\n"
	.string "{PLAYER}!\p"
	.string "Hi, {PLAYER}! My name is {COLOR BLUE}Max{COLOR DARK_GRAY}.$"

EventScript_Max_Text_1:
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: I am a traveling merchant, selling\n"
	.string "special Technical Machines for you to\l"
	.string "use!\p"
	.string "I travel a lot, never going to the same\n"
	.string "place again.\p"
	.string "I'll have different wares every time you\n"
	.string "see me, so be sure to buy whatever TMs\l"
	.string "you deem important!$"

EventScript_Max_Text_2:
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Hi {PLAYER}! Long time no see!\p"
	.string "Welcome to my TM shop!$"

EventScript_Max_Text_3:
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Goodbye!$"

EventScript_LeavingSetup_Text_0:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Bring out the strength of you\nand your Pokémon!$"

EventScript_Settings_Text_0:
	.string "Choose a setting to adjust.\n{COLOR RED}Red{COLOR DARK_GRAY} means enabled.$"

EventScript_Settings_Text_1:
	.string "{COLOR RED}Brutal$"

EventScript_Settings_Text_2:
	.string "Brutal$"

EventScript_Settings_Text_3:
	.string "{COLOR RED}Nuzlocke$"

EventScript_Settings_Text_4:
	.string "Nuzlocke$"

EventScript_Settings_Text_5:
	.string "{COLOR RED}Randomizer$"

EventScript_Settings_Text_6:
	.string "Randomizer$"

EventScript_Settings_Text_7:
	.string "{COLOR RED}Infinite$"

EventScript_Settings_Text_8:
	.string "Infinite$"

EventScript_Settings_Text_9:
	.string "{COLOR RED}Full Surveil$"

EventScript_Settings_Text_10:
	.string "Full Surveil$"

EventScript_Settings_Text_11:
	.string "{COLOR RED}Exp. All$"

EventScript_Settings_Text_12:
	.string "Exp. All$"

EventScript_Settings_Text_13:
	.string "{COLOR RED}Music$"

EventScript_Settings_Text_14:
	.string "{COLOR RED}Challenge$"

EventScript_Settings_Text_15:
	.string "Challenge$"

EventScript_Settings_Text_16:
	.string "{COLOR RED}Gauntlet$"

EventScript_Settings_Text_17:
	.string "Gauntlet$"

EventScript_Settings_Text_18:
	.string "{COLOR RED}Antidoctor$"

EventScript_Settings_Text_19:
	.string "Antidoctor$"

EventScript_Settings_Text_20:
	.string "{COLOR RED}Clumsy$"

EventScript_Settings_Text_21:
	.string "Clumsy$"

EventScript_Settings_Text_22:
	.string "{COLOR RED}Effortless$"

EventScript_Settings_Text_23:
	.string "Effortless$"

EventScript_Settings_Text_24:
	.string "{COLOR RED}Red Thumb$"

EventScript_Settings_Text_25:
	.string "Red Thumb$"

EventScript_Settings_Text_26:
	.string "{COLOR RED}Lazy$"

EventScript_Settings_Text_27:
	.string "Lazy$"

EventScript_Settings_Text_28:
	.string "{COLOR RED}Single-Use$"

EventScript_Settings_Text_29:
	.string "Single-Use$"

EventScript_Settings_Text_30:
	.string "{COLOR RED}Poor$"

EventScript_Settings_Text_31:
	.string "Poor$"

EventScript_Settings_Text_32:
	.string "{COLOR RED}Independent$"

EventScript_Settings_Text_33:
	.string "Independent$"

EventScript_Settings_Text_34:
	.string "{COLOR RED}Workaholic$"

EventScript_Settings_Text_35:
	.string "Workaholic$"

EventScript_Settings_Text_36:
	.string "Exit$"

EventScript_Settings_Text_37:
	.string "Would you like to turn off {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_38:
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_39:
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_40:
	.string "Would you like to turn on {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_41:
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_42:
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_43:
	.string "Would you like to turn off {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_44:
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_45:
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_46:
	.string "Would you like to turn on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_47:
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_48:
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_49:
	.string "You cannot turn off {COLOR RED}Randomizer{COLOR DARK_GRAY} mode\n"
	.string "once set.$"

EventScript_Settings_Text_50:
	.string "Would you like to turn off {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_51:
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_52:
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_53:
	.string "Would you like to turn on {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_54:
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_55:
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_56:
	.string "You cannot turn off {COLOR RED}Infinite{COLOR DARK_GRAY} mode once\n"
	.string "set.$"

EventScript_Settings_Text_57:
	.string "Would you like to restock your supply\n"
	.string "of Full Restores, Max Elixirs, and Max\l"
	.string "Repels?$"

EventScript_Settings_Text_58:
	.string "Items restocked.$"

EventScript_Settings_Text_59:
	.string "Would you like to turn off {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_60:
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_61:
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_62:
	.string "Would you like to turn on {COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_63:
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_64:
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_65:
	.string "In trainer battles, you can {COLOR RED}Surveil{COLOR DARK_GRAY} the\n"
	.string "opposing party to gain more\l"
	.string "information.$"

EventScript_Settings_Text_66:
	.string "{COLOR RED}Surveil{COLOR DARK_GRAY} currently fully reveals all\n"
	.string "information about the opposing party.\p"
	.string "Would you like to decrease the amount\n"
	.string "of information it reveals?$"

EventScript_Settings_Text_67:
	.string "Lowered the power of {COLOR RED}Surveil{COLOR DARK_GRAY}.\p"
	.string "You will only be able to view the\n"
	.string "opposing team's Pokémon and their\l"
	.string "health.$"

EventScript_Settings_Text_68:
	.string "{COLOR RED}Surveil{COLOR DARK_GRAY} currently reveals only the\n"
	.string "opposing team's Pokémon and their\l"
	.string "health.\p"
	.string "Would you like to increase the amount\n"
	.string "of information it reveals?$"

EventScript_Settings_Text_69:
	.string "Increased the power of {COLOR RED}Surveil{COLOR DARK_GRAY}.\p"
	.string "You will be able to fully view all\n"
	.string "information about the opposing party.$"

EventScript_Settings_Text_70:
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} setting, if turned on, gives\n"
	.string "members of your party that don't\l"
	.string "participate in battle 25% experience.\p"
	.string "The game's experience curve is balanced\n"
	.string "around the Exp. All being turned on,\l"
	.string "though you may turn it off if you\l"
	.string "choose.$"

EventScript_Settings_Text_71:
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently on. Would you\n"
	.string "like to turn it off?$"

EventScript_Settings_Text_72:
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} off.$"

EventScript_Settings_Text_73:
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently off. Would you\n"
	.string "like to turn it on?$"

EventScript_Settings_Text_74:
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} on.$"

EventScript_Settings_Text_75:
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting makes battles\n"
	.string "more difficult.\p"
	.string "Special trainers have harder fights and\n"
	.string "the player is limited in their usage of\l"
	.string "powerful moves.\p"
	.string "The AI cannot be PP stalled.$"

EventScript_Settings_Text_76:
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_77:
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_78:
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_79:
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_80:
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_81:
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_82:
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting makes all trainers\n"
	.string "mandatory before leaving a Zone.$"

EventScript_Settings_Text_83:
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_84:
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_85:
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_86:
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_87:
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_88:
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_89:
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting prevents\n"
	.string "in-battle items from being used during\l"
	.string "trainer battles.\p"
	.string "Pokémon Battle Labyrinth does not have\n"
	.string "opponents use any items.$"

EventScript_Settings_Text_90:
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_91:
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_92:
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_93:
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_94:
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_95:
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_96:
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting enforces Set mode.$"

EventScript_Settings_Text_97:
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_98:
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_99:
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_100:
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_101:
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_102:
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_103:
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting prevents\n"
	.string "Pokémon from gaining EVs.$"

EventScript_Settings_Text_104:
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_105:
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_106:
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_107:
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_108:
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_109:
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_110:
	.string "In most Pokémon games, players can\n"
	.string "farm items and money by growing\l"
	.string "Berries, Thief, and other means.\p"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting disables these\n"
	.string "ways of infinitely obtaining items.$"

EventScript_Settings_Text_111:
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_112:
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_113:
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_114:
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_115:
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_116:
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_117:
	.string "In most Pokémon games, players can\n"
	.string "'grind' experience by defeating wild\l"
	.string "Pokémon.\p"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting prevents players from\n"
	.string "grinding by disabling experience gain\l"
	.string "from wild Pokémon.$"

EventScript_Settings_Text_118:
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_119:
	.string "Would you like to turn the {COLOR RED}Lazy{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_120:
	.string "{COLOR RED}Lazy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_121:
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_122:
	.string "Would you like to turn the {COLOR RED}Lazy{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_123:
	.string "{COLOR RED}Lazy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_124:
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting makes all TMs\n"
	.string "single-use.$"

EventScript_Settings_Text_125:
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_126:
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_127:
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_128:
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_129:
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_130:
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_131:
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting halves the reward\n"
	.string "money from trainers.$"

EventScript_Settings_Text_132:
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_133:
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_134:
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_135:
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_136:
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_137:
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_138:
	.string "In some Zones, there are certain helper\n"
	.string "NPCs that can sell cheap items or heal\l"
	.string "the player's party.\p"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting disables many\n"
	.string "of these NPCs.$"

EventScript_Settings_Text_139:
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "on.$"

EventScript_Settings_Text_140:
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_141:
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_142:
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_143:
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_144:
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_145:
	.string "Retiring from a Zone allows one to\n"
	.string "return to the Sanctuary, at the cost\l"
	.string "of half of their money as well as losing\l"
	.string "all progress made thus far in the Zone.\p"
	.string "The {COLOR RED}Workaholic{COLOR DARK_GRAY} setting prevents\n"
	.string "players from using this option.$"

EventScript_Settings_Text_146:
	.string "The {COLOR RED}Workaholic{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_147:
	.string "Would you like to turn the {COLOR RED}Workaholic{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_148:
	.string "{COLOR RED}Workaholic{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_149:
	.string "The {COLOR RED}Workaholic{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_150:
	.string "Would you like to turn the {COLOR RED}Workaholic{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_151:
	.string "{COLOR RED}Workaholic{COLOR DARK_GRAY} setting turned on.$"

EventScript_MusicMenu_Text_0:
	.string "Please select a music setting.$"

EventScript_MusicMenu_Text_1:
	.string "The Wild Pokémon music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_2:
	.string "The Wild Pokémon music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_3:
	.string "The Wild Pokémon music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_4:
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_5:
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_6:
	.string "The Wild Pokémon music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_7:
	.string "The BW Wild Pokémon music is not\nfinished.$"

EventScript_MusicMenu_Text_8:
	.string "The Trainer music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_9:
	.string "The Trainer music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_10:
	.string "The Trainer music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_11:
	.string "The Trainer music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_12:
	.string "The Trainer music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_13:
	.string "The Trainer music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_14:
	.string "The Leviathan music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_15:
	.string "The Leviathan music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_16:
	.string "The Leviathan music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_17:
	.string "The Leviathan music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_18:
	.string "The Leviathan music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_19:
	.string "The Leviathan music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_20:
	.string "The BW Leviathan music is not\nfinished.$"

Zone_EventScript_RetirePrompt_Text_0:
	.string "Would you like to retire your attempt at\n"
	.string "this Zone?\p"
	.string "You will lose all your progress so far\n"
	.string "and any money you received from\l"
	.string "trainers, as well as half of your\l"
	.string "remaining money.\p"
	.string "Are you sure you want to return to the\n"
	.string "Sanctuary?$"

Zone_EventScript_RetirePrompt_Text_1:
	.string "Warping now…$"

EventScript_NuzlockeVerifyGift_Text_0:
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon.\p"
	.string "Is this ok?$"

EventScript_PorygonExit_Text_0:
	.string "{COLOR GREEN}Proceed to the Sanctuary?$"

gText_Lelouch_NotEnoughColor::
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You don't have any Shards\nof that color.$"

gText_Lelouch_Leave::
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

gText_Lelouch_EV::
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: With EV Training, you can set\n"
	.string "one Pokémon's EVs at the cost of one\l"
	.string "Red Shard.\p"
	.string "Would you like to start an EV Training\n"
	.string "session?$"

gText_Lelouch_ChooseHPEV::
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s HP EV to be?$"

gText_Lelouch_ChooseAttackEV::
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Attack EV to be?$"

gText_Lelouch_ChooseDefenseEV::
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Defense EV to be?$"

gText_Lelouch_ChooseSpecialAttackEV::
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Atk EV to be?$"

gText_Lelouch_ChooseSpecialDefenseEV::
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Def EV to be?$"

gText_Lelouch_ChooseSpeedEV::
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Speed EV to be?$"

gText_Lelouch_TooManyEVs::
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You've selected a total of EVs\n"
	.string "greater than 510. Pokémon can have at\l"
	.string "maximum 510 EVs.$"

gText_Lelouch_CheckEVs::
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Are you sure you wish to set\n"
	.string "{STR_VAR_1}'s EVs to these values?$"

gText_Lelouch_ChangedEVs::
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s EVs to your\l"
	.string "requested values.$"

gText_Lelouch_ChangedNature::
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s nature to the\l"
	.string "requested nature.$"

gText_Colress_BrutalExplained::
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode enables the following\n"
	.string "difficulty changes:\p"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY},\n"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Lazy{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY},\l"
	.string "and {COLOR RED}Workaholic{COLOR DARK_GRAY}.\p"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode can only be enabled at the\n"
	.string "beginning of the game, but can be\l"
	.string "disabled at any point.\p"
	.string "It is not recommended to play on {COLOR RED}Brutal{COLOR DARK_GRAY}\n"
	.string "mode unless you are familiar with\l"
	.string "{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GRAY} already.$"

gText_Colress_RandomizerExplanation::
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode randomizes wild\n"
	.string "encounters and gift Pokémon, including\l"
	.string "your starter.\p"
	.string "Trainer Pokémon are left unchanged.\p"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NuzlockeExplained::
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode completely implements all\n"
	.string "standard Nuzlocke rules, such as\l"
	.string "permanent death and capture\l"
	.string "restrictions.\p"
	.string "It comes with Species Clause, Shiny\n"
	.string "Clause, and Gift Clause.\p"
	.string "It is not recommended to play {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode unless you are familiar with\l"
	.string "Nuzlockes already.\p"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode can only be enabled at\n"
	.string "the beginning of the game, but can be\l"
	.string "disabled at any point.$"

gText_Colress_InfiniteExplained::
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode gives you access to\n"
	.string "unlimited resources that can normally\l"
	.string "be obtained by grinding.\p"
	.string "This is not the intended game mode, as\n"
	.string "resource management was designed to\l"
	.string "be part of the game.\p"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NumDeathsNuzlocke::
	.string "So far there have been {STR_VAR_1} death(s).$"

gText_Colress_CannotChangeSettingBrutal::
	.string "You cannot change this setting\n"
	.string "because you are playing on Brutal mode.$"

gText_Colress_CannotChangeSettingInfinite::
	.string "You cannot change this setting\n"
	.string "because you are playing on Infinite\l"
	.string "mode.$"

gText_ItemChestIsEmpty::
	.string "The item chest is empty.$"

gText_OneOpponentRemaining::
	.string "{COLOR RED}There is 1 opponent remaining in this\n"
	.string "area.$"

gText_MultipleOpponentsRemaining::
	.string "{COLOR RED}There are still {STR_VAR_1} opponents\nremaining in the area.$"
