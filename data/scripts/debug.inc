Debug_ShowFieldMessageStringVar4::
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	releaseall
	end
	
Debug_Script_1::
	end

Debug_Script_2::
	end

Debug_Script_3::
	end

Debug_Script_4::
	end

Debug_Script_5::
	end

Debug_Script_6::
	end

Debug_Script_7::
	end

Debug_Script_8::
	end

Debug_CheatStart::
	lockall
	additem ITEM_RARE_CANDY, 999
	additem ITEM_FIRE_GEM
	additem ITEM_WATER_GEM
	additem ITEM_ELECTRIC_GEM
	additem ITEM_PSYCHIC_GEM
	additem ITEM_DARK_GEM
	additem ITEM_GRASS_GEM
	additem ITEM_ICE_GEM
	additem ITEM_FAIRY_GEM
	setflag FLAG_RECEIVED_ZONE5A_GEM
	setflag FLAG_BOOSTED_IVS
	givemon SPECIES_EEVEE, 5, ITEM_NONE
	clearflag FLAG_BOOSTED_IVS
	setflag FLAG_RECEIVED_ZONE0C_EEVEE
	random 20
	switch VAR_RESULT
	case 0, Debug_CheatStart_3
	case 1, Debug_CheatStart_4
	case 2, Debug_CheatStart_5
	case 3, Debug_CheatStart_6
	case 4, Debug_CheatStart_7
	case 5, Debug_CheatStart_8
	case 6, Debug_CheatStart_9
	case 7, Debug_CheatStart_10
	case 8, Debug_CheatStart_11
	case 9, Debug_CheatStart_12
	case 10, Debug_CheatStart_13
	case 11, Debug_CheatStart_14
	case 12, Debug_CheatStart_15
	case 13, Debug_CheatStart_16
	case 14, Debug_CheatStart_17
	case 15, Debug_CheatStart_18
Debug_CheatStart_1:
	givemon VAR_TEMP_0, 5, ITEM_NONE
	random 20
	switch VAR_RESULT
	case 0, Debug_CheatStart_21
	case 1, Debug_CheatStart_22
	case 2, Debug_CheatStart_23
	case 3, Debug_CheatStart_24
	case 4, Debug_CheatStart_25
	case 5, Debug_CheatStart_26
	case 6, Debug_CheatStart_27
	case 7, Debug_CheatStart_28
	case 8, Debug_CheatStart_29
	case 9, Debug_CheatStart_30
	case 10, Debug_CheatStart_31
	case 11, Debug_CheatStart_32
	case 12, Debug_CheatStart_33
	case 13, Debug_CheatStart_34
	case 14, Debug_CheatStart_35
	case 15, Debug_CheatStart_36
	case 16, Debug_CheatStart_37
	case 17, Debug_CheatStart_38
	case 18, Debug_CheatStart_39
	case 19, Debug_CheatStart_40
Debug_CheatStart_19:
	givemon VAR_TEMP_0, 4, ITEM_NONE
	random 20
	switch VAR_RESULT
	case 0, Debug_CheatStart_43
	case 1, Debug_CheatStart_44
	case 2, Debug_CheatStart_45
	case 3, Debug_CheatStart_46
	case 4, Debug_CheatStart_47
	case 5, Debug_CheatStart_48
	case 6, Debug_CheatStart_49
	case 7, Debug_CheatStart_50
	case 8, Debug_CheatStart_51
	case 9, Debug_CheatStart_52
	case 10, Debug_CheatStart_53
	case 11, Debug_CheatStart_54
	case 12, Debug_CheatStart_55
	case 13, Debug_CheatStart_56
	case 14, Debug_CheatStart_57
	case 15, Debug_CheatStart_58
	case 16, Debug_CheatStart_59
	case 17, Debug_CheatStart_60
	case 18, Debug_CheatStart_61
	case 19, Debug_CheatStart_62
Debug_CheatStart_41:
	givemon VAR_TEMP_0, 6, ITEM_NONE
	random 20
	switch VAR_RESULT
	case 0, Debug_CheatStart_65
	case 1, Debug_CheatStart_66
	case 2, Debug_CheatStart_67
	case 3, Debug_CheatStart_68
	case 4, Debug_CheatStart_69
	case 5, Debug_CheatStart_70
	case 6, Debug_CheatStart_71
	case 7, Debug_CheatStart_72
	case 8, Debug_CheatStart_73
	case 9, Debug_CheatStart_74
	case 10, Debug_CheatStart_75
	case 11, Debug_CheatStart_76
	case 12, Debug_CheatStart_77
	case 13, Debug_CheatStart_78
	case 14, Debug_CheatStart_79
	case 15, Debug_CheatStart_80
	case 16, Debug_CheatStart_81
	case 17, Debug_CheatStart_82
	case 18, Debug_CheatStart_83
	case 19, Debug_CheatStart_84
Debug_CheatStart_63:
	givemon VAR_TEMP_0, 8, ITEM_NONE
	random 20
	switch VAR_RESULT
	case 0, Debug_CheatStart_87
	case 1, Debug_CheatStart_88
	case 2, Debug_CheatStart_89
	case 3, Debug_CheatStart_90
	case 4, Debug_CheatStart_91
	case 5, Debug_CheatStart_92
	case 6, Debug_CheatStart_93
	case 7, Debug_CheatStart_94
	case 8, Debug_CheatStart_95
	case 9, Debug_CheatStart_96
	case 10, Debug_CheatStart_97
	case 11, Debug_CheatStart_98
	case 12, Debug_CheatStart_99
	case 13, Debug_CheatStart_100
	case 14, Debug_CheatStart_101
	case 15, Debug_CheatStart_102
	case 16, Debug_CheatStart_103
	case 17, Debug_CheatStart_104
	case 18, Debug_CheatStart_105
	case 19, Debug_CheatStart_106
Debug_CheatStart_85:
	givemon VAR_TEMP_0, 10, ITEM_NONE
	random 20
	switch VAR_RESULT
	case 0, Debug_CheatStart_109
	case 1, Debug_CheatStart_110
	case 2, Debug_CheatStart_111
	case 3, Debug_CheatStart_112
	case 4, Debug_CheatStart_113
	case 5, Debug_CheatStart_114
	case 6, Debug_CheatStart_115
	case 7, Debug_CheatStart_116
	case 8, Debug_CheatStart_117
	case 9, Debug_CheatStart_118
	case 10, Debug_CheatStart_119
	case 11, Debug_CheatStart_120
	case 12, Debug_CheatStart_121
	case 13, Debug_CheatStart_122
	case 14, Debug_CheatStart_123
	case 15, Debug_CheatStart_124
	case 16, Debug_CheatStart_125
	case 17, Debug_CheatStart_126
	case 18, Debug_CheatStart_127
	case 19, Debug_CheatStart_128
Debug_CheatStart_107:
	givemon VAR_TEMP_0, 12, ITEM_NONE
	setvar VAR_ZONE, 5
	additem ITEM_REPEL
	setflag FLAG_TIM_INTRO
	additem ITEM_ORAN_BERRY, 3
	additem ITEM_EXP_SHARE
	additem ITEM_ROCKY_HELMET
	additem ITEM_SILK_SCARF
	additem ITEM_PARALYZE_HEAL
	additem ITEM_ANTIDOTE
	additem ITEM_GOOD_ROD
	additem ITEM_HEAL_BALL, 7
	removeitem ITEM_POKE_BALL, 10
	removemoney 2000
	additem ITEM_TM02_HIDDEN_POWER
	additem ITEM_BURN_HEAL
	additem ITEM_AWAKENING
	additem ITEM_MUSCLE_BAND
	additem ITEM_WISE_GLASSES
	additem ITEM_SUPER_POTION, 2
	additem ITEM_TM03
	additem ITEM_TM04
	additem ITEM_QUICK_BALL
	setflag FLAG_FULL_PREVIEW_ON
	warp MAP_ZONE5SANCTUARY, 255, 22, 7
	release
	end

Debug_CheatStart_3:
	setvar VAR_TEMP_0, SPECIES_ABRA
	goto Debug_CheatStart_1

Debug_CheatStart_4:
	setvar VAR_TEMP_0, SPECIES_ABRA
	goto Debug_CheatStart_1

Debug_CheatStart_5:
	setvar VAR_TEMP_0, SPECIES_MARILL
	goto Debug_CheatStart_1

Debug_CheatStart_6:
	setvar VAR_TEMP_0, SPECIES_MARILL
	goto Debug_CheatStart_1

Debug_CheatStart_7:
	setvar VAR_TEMP_0, SPECIES_BUDEW
	goto Debug_CheatStart_1

Debug_CheatStart_8:
	setvar VAR_TEMP_0, SPECIES_BUDEW
	goto Debug_CheatStart_1

Debug_CheatStart_9:
	setvar VAR_TEMP_0, SPECIES_CLEFFA
	goto Debug_CheatStart_1

Debug_CheatStart_10:
	setvar VAR_TEMP_0, SPECIES_CLEFFA
	goto Debug_CheatStart_1

Debug_CheatStart_11:
	setvar VAR_TEMP_0, SPECIES_FLETCHLING
	goto Debug_CheatStart_1

Debug_CheatStart_12:
	setvar VAR_TEMP_0, SPECIES_FLETCHLING
	goto Debug_CheatStart_1

Debug_CheatStart_13:
	setvar VAR_TEMP_0, SPECIES_LILLIPUP
	goto Debug_CheatStart_1

Debug_CheatStart_14:
	setvar VAR_TEMP_0, SPECIES_LILLIPUP
	goto Debug_CheatStart_1

Debug_CheatStart_15:
	setvar VAR_TEMP_0, SPECIES_MAREEP
	goto Debug_CheatStart_1

Debug_CheatStart_16:
	setvar VAR_TEMP_0, SPECIES_MAREEP
	goto Debug_CheatStart_1

Debug_CheatStart_17:
	setvar VAR_TEMP_0, SPECIES_STARLY
	goto Debug_CheatStart_1

Debug_CheatStart_18:
	setvar VAR_TEMP_0, SPECIES_STARLY
	goto Debug_CheatStart_1

Debug_CheatStart_21:
	setvar VAR_TEMP_0, SPECIES_PHANPY
	goto Debug_CheatStart_19

Debug_CheatStart_22:
	setvar VAR_TEMP_0, SPECIES_PHANPY
	goto Debug_CheatStart_19

Debug_CheatStart_23:
	setvar VAR_TEMP_0, SPECIES_POOCHYENA
	goto Debug_CheatStart_19

Debug_CheatStart_24:
	setvar VAR_TEMP_0, SPECIES_POOCHYENA
	goto Debug_CheatStart_19

Debug_CheatStart_25:
	setvar VAR_TEMP_0, SPECIES_RATTATA
	goto Debug_CheatStart_19

Debug_CheatStart_26:
	setvar VAR_TEMP_0, SPECIES_RATTATA
	goto Debug_CheatStart_19

Debug_CheatStart_27:
	setvar VAR_TEMP_0, SPECIES_ROCKRUFF
	goto Debug_CheatStart_19

Debug_CheatStart_28:
	setvar VAR_TEMP_0, SPECIES_ROCKRUFF
	goto Debug_CheatStart_19

Debug_CheatStart_29:
	setvar VAR_TEMP_0, SPECIES_SENTRET
	goto Debug_CheatStart_19

Debug_CheatStart_30:
	setvar VAR_TEMP_0, SPECIES_SENTRET
	goto Debug_CheatStart_19

Debug_CheatStart_31:
	setvar VAR_TEMP_0, SPECIES_SHINX
	goto Debug_CheatStart_19

Debug_CheatStart_32:
	setvar VAR_TEMP_0, SPECIES_SHINX
	goto Debug_CheatStart_19

Debug_CheatStart_33:
	setvar VAR_TEMP_0, SPECIES_PIDGEY
	goto Debug_CheatStart_19

Debug_CheatStart_34:
	setvar VAR_TEMP_0, SPECIES_PIDGEY
	goto Debug_CheatStart_19

Debug_CheatStart_35:
	setvar VAR_TEMP_0, SPECIES_WOOLOO
	goto Debug_CheatStart_19

Debug_CheatStart_36:
	setvar VAR_TEMP_0, SPECIES_WOOLOO
	goto Debug_CheatStart_19

Debug_CheatStart_37:
	setvar VAR_TEMP_0, SPECIES_YAMPER
	goto Debug_CheatStart_19

Debug_CheatStart_38:
	setvar VAR_TEMP_0, SPECIES_YAMPER
	goto Debug_CheatStart_19

Debug_CheatStart_39:
	setvar VAR_TEMP_0, SPECIES_NIDORAN_F
	goto Debug_CheatStart_19

Debug_CheatStart_40:
	setvar VAR_TEMP_0, SPECIES_NIDORAN_M
	goto Debug_CheatStart_19

Debug_CheatStart_43:
	setvar VAR_TEMP_0, SPECIES_BONSLY
	goto Debug_CheatStart_41

Debug_CheatStart_44:
	setvar VAR_TEMP_0, SPECIES_BONSLY
	goto Debug_CheatStart_41

Debug_CheatStart_45:
	setvar VAR_TEMP_0, SPECIES_CATERPIE
	goto Debug_CheatStart_41

Debug_CheatStart_46:
	setvar VAR_TEMP_0, SPECIES_CATERPIE
	goto Debug_CheatStart_41

Debug_CheatStart_47:
	setvar VAR_TEMP_0, SPECIES_MANKEY
	goto Debug_CheatStart_41

Debug_CheatStart_48:
	setvar VAR_TEMP_0, SPECIES_MANKEY
	goto Debug_CheatStart_41

Debug_CheatStart_49:
	setvar VAR_TEMP_0, SPECIES_PETILIL
	goto Debug_CheatStart_41

Debug_CheatStart_50:
	setvar VAR_TEMP_0, SPECIES_PETILIL
	goto Debug_CheatStart_41

Debug_CheatStart_51:
	setvar VAR_TEMP_0, SPECIES_COTTONEE
	goto Debug_CheatStart_41

Debug_CheatStart_52:
	setvar VAR_TEMP_0, SPECIES_COTTONEE
	goto Debug_CheatStart_41

Debug_CheatStart_53:
	setvar VAR_TEMP_0, SPECIES_PICHU
	goto Debug_CheatStart_41

Debug_CheatStart_54:
	setvar VAR_TEMP_0, SPECIES_PICHU
	goto Debug_CheatStart_41

Debug_CheatStart_55:
	setvar VAR_TEMP_0, SPECIES_PANCHAM
	goto Debug_CheatStart_41

Debug_CheatStart_56:
	setvar VAR_TEMP_0, SPECIES_PANCHAM
	goto Debug_CheatStart_41

Debug_CheatStart_57:
	setvar VAR_TEMP_0, SPECIES_VOLTORB_HISUIAN
	goto Debug_CheatStart_41

Debug_CheatStart_58:
	setvar VAR_TEMP_0, SPECIES_VOLTORB_HISUIAN
	goto Debug_CheatStart_41

Debug_CheatStart_59:
	setvar VAR_TEMP_0, SPECIES_BUNEARY
	goto Debug_CheatStart_41

Debug_CheatStart_60:
	setvar VAR_TEMP_0, SPECIES_BUNEARY
	goto Debug_CheatStart_41

Debug_CheatStart_61:
	setvar VAR_TEMP_0, SPECIES_WEEDLE
	goto Debug_CheatStart_41

Debug_CheatStart_62:
	setvar VAR_TEMP_0, SPECIES_WEEDLE
	goto Debug_CheatStart_41

Debug_CheatStart_65:
	setvar VAR_TEMP_0, SPECIES_BIDOOF
	goto Debug_CheatStart_63

Debug_CheatStart_66:
	setvar VAR_TEMP_0, SPECIES_BIDOOF
	goto Debug_CheatStart_63

Debug_CheatStart_67:
	setvar VAR_TEMP_0, SPECIES_BUIZEL
	goto Debug_CheatStart_63

Debug_CheatStart_68:
	setvar VAR_TEMP_0, SPECIES_BUIZEL
	goto Debug_CheatStart_63

Debug_CheatStart_69:
	setvar VAR_TEMP_0, SPECIES_CRABRAWLER
	goto Debug_CheatStart_63

Debug_CheatStart_70:
	setvar VAR_TEMP_0, SPECIES_CRABRAWLER
	goto Debug_CheatStart_63

Debug_CheatStart_71:
	setvar VAR_TEMP_0, SPECIES_EKANS
	goto Debug_CheatStart_63

Debug_CheatStart_72:
	setvar VAR_TEMP_0, SPECIES_EKANS
	goto Debug_CheatStart_63

Debug_CheatStart_73:
	setvar VAR_TEMP_0, SPECIES_ELECTRIKE
	goto Debug_CheatStart_63

Debug_CheatStart_74:
	setvar VAR_TEMP_0, SPECIES_ELECTRIKE
	goto Debug_CheatStart_63

Debug_CheatStart_75:
	setvar VAR_TEMP_0, SPECIES_PSYDUCK
	goto Debug_CheatStart_63

Debug_CheatStart_76:
	setvar VAR_TEMP_0, SPECIES_PSYDUCK
	goto Debug_CheatStart_63

Debug_CheatStart_77:
	setvar VAR_TEMP_0, SPECIES_SNUBBULL
	goto Debug_CheatStart_63

Debug_CheatStart_78:
	setvar VAR_TEMP_0, SPECIES_SNUBBULL
	goto Debug_CheatStart_63

Debug_CheatStart_79:
	setvar VAR_TEMP_0, SPECIES_STUFFUL
	goto Debug_CheatStart_63

Debug_CheatStart_80:
	setvar VAR_TEMP_0, SPECIES_STUFFUL
	goto Debug_CheatStart_63

Debug_CheatStart_81:
	setvar VAR_TEMP_0, SPECIES_VULPIX
	goto Debug_CheatStart_63

Debug_CheatStart_82:
	setvar VAR_TEMP_0, SPECIES_VULPIX
	goto Debug_CheatStart_63

Debug_CheatStart_83:
	setvar VAR_TEMP_0, SPECIES_WINGULL
	goto Debug_CheatStart_63

Debug_CheatStart_84:
	setvar VAR_TEMP_0, SPECIES_WINGULL
	goto Debug_CheatStart_63

Debug_CheatStart_87:
	setvar VAR_TEMP_0, SPECIES_HATENNA
	goto Debug_CheatStart_85

Debug_CheatStart_88:
	setvar VAR_TEMP_0, SPECIES_HATENNA
	goto Debug_CheatStart_85

Debug_CheatStart_89:
	setvar VAR_TEMP_0, SPECIES_PONYTA_GALARIAN
	goto Debug_CheatStart_85

Debug_CheatStart_90:
	setvar VAR_TEMP_0, SPECIES_PONYTA_GALARIAN
	goto Debug_CheatStart_85

Debug_CheatStart_91:
	setvar VAR_TEMP_0, SPECIES_HOOTHOOT
	goto Debug_CheatStart_85

Debug_CheatStart_92:
	setvar VAR_TEMP_0, SPECIES_HOOTHOOT
	goto Debug_CheatStart_85

Debug_CheatStart_93:
	setvar VAR_TEMP_0, SPECIES_HOUNDOUR
	goto Debug_CheatStart_85

Debug_CheatStart_94:
	setvar VAR_TEMP_0, SPECIES_HOUNDOUR
	goto Debug_CheatStart_85

Debug_CheatStart_95:
	setvar VAR_TEMP_0, SPECIES_IMPIDIMP
	goto Debug_CheatStart_85

Debug_CheatStart_96:
	setvar VAR_TEMP_0, SPECIES_IMPIDIMP
	goto Debug_CheatStart_85

Debug_CheatStart_97:
	setvar VAR_TEMP_0, SPECIES_GRUBBIN
	goto Debug_CheatStart_85

Debug_CheatStart_98:
	setvar VAR_TEMP_0, SPECIES_GRUBBIN
	goto Debug_CheatStart_85

Debug_CheatStart_99:
	setvar VAR_TEMP_0, SPECIES_PHANTUMP
	goto Debug_CheatStart_85

Debug_CheatStart_100:
	setvar VAR_TEMP_0, SPECIES_PHANTUMP
	goto Debug_CheatStart_85

Debug_CheatStart_101:
	setvar VAR_TEMP_0, SPECIES_STUNKY
	goto Debug_CheatStart_85

Debug_CheatStart_102:
	setvar VAR_TEMP_0, SPECIES_STUNKY
	goto Debug_CheatStart_85

Debug_CheatStart_103:
	setvar VAR_TEMP_0, SPECIES_GOTHITA
	goto Debug_CheatStart_85

Debug_CheatStart_104:
	setvar VAR_TEMP_0, SPECIES_GOTHITA
	goto Debug_CheatStart_85

Debug_CheatStart_105:
	setvar VAR_TEMP_0, SPECIES_SOLOSIS
	goto Debug_CheatStart_85

Debug_CheatStart_106:
	setvar VAR_TEMP_0, SPECIES_SOLOSIS
	goto Debug_CheatStart_85

Debug_CheatStart_109:
	setvar VAR_TEMP_0, SPECIES_AXEW
	goto Debug_CheatStart_107

Debug_CheatStart_110:
	setvar VAR_TEMP_0, SPECIES_AXEW
	goto Debug_CheatStart_107

Debug_CheatStart_111:
	setvar VAR_TEMP_0, SPECIES_ELEKID
	goto Debug_CheatStart_107

Debug_CheatStart_112:
	setvar VAR_TEMP_0, SPECIES_ELEKID
	goto Debug_CheatStart_107

Debug_CheatStart_113:
	setvar VAR_TEMP_0, SPECIES_GROWLITHE
	goto Debug_CheatStart_107

Debug_CheatStart_114:
	setvar VAR_TEMP_0, SPECIES_GROWLITHE
	goto Debug_CheatStart_107

Debug_CheatStart_115:
	setvar VAR_TEMP_0, SPECIES_MAGBY
	goto Debug_CheatStart_107

Debug_CheatStart_116:
	setvar VAR_TEMP_0, SPECIES_MAGBY
	goto Debug_CheatStart_107

Debug_CheatStart_117:
	setvar VAR_TEMP_0, SPECIES_MAGNEMITE
	goto Debug_CheatStart_107

Debug_CheatStart_118:
	setvar VAR_TEMP_0, SPECIES_MAGNEMITE
	goto Debug_CheatStart_107

Debug_CheatStart_119:
	setvar VAR_TEMP_0, SPECIES_PAWNIARD
	goto Debug_CheatStart_107

Debug_CheatStart_120:
	setvar VAR_TEMP_0, SPECIES_PAWNIARD
	goto Debug_CheatStart_107

Debug_CheatStart_121:
	setvar VAR_TEMP_0, SPECIES_ROOKIDEE
	goto Debug_CheatStart_107

Debug_CheatStart_122:
	setvar VAR_TEMP_0, SPECIES_ROOKIDEE
	goto Debug_CheatStart_107

Debug_CheatStart_123:
	setvar VAR_TEMP_0, SPECIES_SLOWPOKE
	goto Debug_CheatStart_107

Debug_CheatStart_124:
	setvar VAR_TEMP_0, SPECIES_SLOWPOKE
	goto Debug_CheatStart_107

Debug_CheatStart_125:
	setvar VAR_TEMP_0, SPECIES_TAILLOW
	goto Debug_CheatStart_107

Debug_CheatStart_126:
	setvar VAR_TEMP_0, SPECIES_TAILLOW
	goto Debug_CheatStart_107

Debug_CheatStart_127:
	setvar VAR_TEMP_0, SPECIES_TIMBURR
	goto Debug_CheatStart_107

Debug_CheatStart_128:
	setvar VAR_TEMP_0, SPECIES_TIMBURR
	goto Debug_CheatStart_107

