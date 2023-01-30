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
	additem ITEM_RARE_CANDY, 100
	additem ITEM_RARE_CANDY, 100
	additem ITEM_RARE_CANDY, 100
	additem ITEM_RARE_CANDY, 100
	additem ITEM_RARE_CANDY, 100
	additem ITEM_RARE_CANDY, 100
	givemon SPECIES_EEVEE, 5, ITEM_NONE
	setflag FLAG_ZONE0B_RECEIVED_EEVEE
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
	case 16, Debug_CheatStart_19
	case 17, Debug_CheatStart_20
	case 18, Debug_CheatStart_21
	case 19, Debug_CheatStart_22
Debug_CheatStart_1:
	givemon VAR_TEMP_0, 4, ITEM_NONE
	bufferspeciesname 0, VAR_TEMP_0
	msgbox gText_ObtainedDebugMon
	random 20
	switch VAR_RESULT
	case 0, Debug_CheatStart_25
	case 1, Debug_CheatStart_26
	case 2, Debug_CheatStart_27
	case 3, Debug_CheatStart_28
	case 4, Debug_CheatStart_29
	case 5, Debug_CheatStart_30
	case 6, Debug_CheatStart_31
	case 7, Debug_CheatStart_32
	case 8, Debug_CheatStart_33
	case 9, Debug_CheatStart_34
	case 10, Debug_CheatStart_35
	case 11, Debug_CheatStart_36
	case 12, Debug_CheatStart_37
	case 13, Debug_CheatStart_38
	case 14, Debug_CheatStart_39
	case 15, Debug_CheatStart_40
	case 16, Debug_CheatStart_41
	case 17, Debug_CheatStart_42
	case 18, Debug_CheatStart_43
	case 19, Debug_CheatStart_44
Debug_CheatStart_23:
	givemon VAR_TEMP_0, 4, ITEM_NONE
	bufferspeciesname 0, VAR_TEMP_0
	msgbox gText_ObtainedDebugMon
	random 20
	switch VAR_RESULT
	case 0, Debug_CheatStart_47
	case 1, Debug_CheatStart_48
	case 2, Debug_CheatStart_49
	case 3, Debug_CheatStart_50
	case 4, Debug_CheatStart_51
	case 5, Debug_CheatStart_52
	case 6, Debug_CheatStart_53
	case 7, Debug_CheatStart_54
	case 8, Debug_CheatStart_55
	case 9, Debug_CheatStart_56
	case 10, Debug_CheatStart_57
	case 11, Debug_CheatStart_58
	case 12, Debug_CheatStart_59
	case 13, Debug_CheatStart_60
	case 14, Debug_CheatStart_61
	case 15, Debug_CheatStart_62
	case 16, Debug_CheatStart_63
	case 17, Debug_CheatStart_64
	case 18, Debug_CheatStart_65
	case 19, Debug_CheatStart_66
Debug_CheatStart_45:
	givemon VAR_TEMP_0, 6, ITEM_NONE
	bufferspeciesname 0, VAR_TEMP_0
	msgbox gText_ObtainedDebugMon
	msgbox Debug_CheatStart_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Debug_CheatStart_68
	random 20
	switch VAR_RESULT
	case 0, Debug_CheatStart_81
	case 1, Debug_CheatStart_82
	case 2, Debug_CheatStart_83
	case 3, Debug_CheatStart_84
	case 4, Debug_CheatStart_85
	case 5, Debug_CheatStart_86
	case 6, Debug_CheatStart_87
	case 7, Debug_CheatStart_88
	case 8, Debug_CheatStart_89
	case 9, Debug_CheatStart_90
	case 10, Debug_CheatStart_91
	case 11, Debug_CheatStart_92
	case 12, Debug_CheatStart_93
	case 13, Debug_CheatStart_94
	case 14, Debug_CheatStart_95
	case 15, Debug_CheatStart_96
	case 16, Debug_CheatStart_97
	case 17, Debug_CheatStart_98
	case 18, Debug_CheatStart_99
	case 19, Debug_CheatStart_100
Debug_CheatStart_67:
	givemon VAR_TEMP_0, 8, ITEM_NONE
	bufferspeciesname 0, VAR_TEMP_0
	msgbox gText_ObtainedDebugMon
	msgbox Debug_CheatStart_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Debug_CheatStart_72
	random 20
	switch VAR_RESULT
	case 0, Debug_CheatStart_118
	case 1, Debug_CheatStart_119
	case 2, Debug_CheatStart_120
	case 3, Debug_CheatStart_121
	case 4, Debug_CheatStart_122
	case 5, Debug_CheatStart_123
	case 6, Debug_CheatStart_124
	case 7, Debug_CheatStart_125
	case 8, Debug_CheatStart_126
	case 9, Debug_CheatStart_127
	case 10, Debug_CheatStart_128
	case 11, Debug_CheatStart_129
	case 12, Debug_CheatStart_130
	case 13, Debug_CheatStart_131
	case 14, Debug_CheatStart_132
	case 15, Debug_CheatStart_133
	case 16, Debug_CheatStart_134
	case 17, Debug_CheatStart_135
	case 18, Debug_CheatStart_136
	case 19, Debug_CheatStart_137
Debug_CheatStart_116:
	givemon VAR_TEMP_0, 10, ITEM_NONE
Debug_CheatStart_71:
	bufferspeciesname 0, VAR_TEMP_0
	msgbox gText_ObtainedDebugMon
	msgbox Debug_CheatStart_Text_2, MSGBOX_DEFAULT
	scrollingmultichoice 1, 0, 0, 5, 1
	switch VAR_RESULT
	case 0, Debug_CheatStart_103
	case 1, Debug_CheatStart_104
	case 2, Debug_CheatStart_105
	case 3, Debug_CheatStart_106
	case 4, Debug_CheatStart_107
	case 5, Debug_CheatStart_108
	case 6, Debug_CheatStart_109
Debug_CheatStart_101:
	setflag FLAG_ZONE4A_RECEIVED_GEM
	random 18
	switch VAR_RESULT
	case 0, Debug_CheatStart_140
	case 1, Debug_CheatStart_141
	case 2, Debug_CheatStart_142
	case 3, Debug_CheatStart_143
	case 4, Debug_CheatStart_144
	case 5, Debug_CheatStart_145
	case 6, Debug_CheatStart_146
	case 7, Debug_CheatStart_147
	case 8, Debug_CheatStart_148
	case 9, Debug_CheatStart_149
	case 10, Debug_CheatStart_150
	case 11, Debug_CheatStart_151
	case 12, Debug_CheatStart_152
	case 13, Debug_CheatStart_153
	case 14, Debug_CheatStart_154
	case 15, Debug_CheatStart_155
	case 16, Debug_CheatStart_156
	case 17, Debug_CheatStart_157
Debug_CheatStart_138:
	givemon VAR_TEMP_0, 12, ITEM_NONE
	bufferspeciesname 0, VAR_TEMP_0
	msgbox gText_ObtainedDebugMon
	setvar VAR_ZONE, 5
	additem ITEM_REPEL
	setflag FLAG_TIM_INTRO
	additem ITEM_EXP_SHARE
	additem ITEM_SILK_SCARF
	additem ITEM_GOOD_ROD
	additem ITEM_HEAL_BALL, 7
	removeitem ITEM_POKE_BALL, 10
	removemoney 1000
	additem ITEM_TM02
	additem ITEM_BURN_HEAL
	additem ITEM_AWAKENING
	additem ITEM_MUSCLE_BAND
	additem ITEM_WISE_GLASSES
	additem ITEM_SUPER_POTION, 2
	additem ITEM_PARALYZE_HEAL, 2
	additem ITEM_ANTIDOTE, 2
	additem ITEM_TM03
	additem ITEM_TM04
	additem ITEM_QUICK_BALL
	setflag FLAG_SETTINGS_FULL_SURVEIL
	setflag FLAG_SYS_DEXNAV_GET
	setflag FLAG_JOY_INTRO
	setflag FLAG_MAX_INTRO
	setflag FLAG_TIM_INTRO
	setflag FLAG_VARRICK_INTRO
	setflag FLAG_LELOUCH_INTRO
	setvar VAR_ZONE_0_STATE, 3
	additem ITEM_TM21
	callnative DisableBattleAnimationSetting
	warp MAP_ZONE5SANCTUARY, 255, 22, 7
	waitstate
	release
	end

Debug_CheatStart_3:
	setvar VAR_TEMP_0, SPECIES_AZURILL
	goto Debug_CheatStart_1

Debug_CheatStart_4:
	setvar VAR_TEMP_0, SPECIES_AZURILL
	goto Debug_CheatStart_1

Debug_CheatStart_5:
	setvar VAR_TEMP_0, SPECIES_BIDOOF
	goto Debug_CheatStart_1

Debug_CheatStart_6:
	setvar VAR_TEMP_0, SPECIES_BIDOOF
	goto Debug_CheatStart_1

Debug_CheatStart_7:
	setvar VAR_TEMP_0, SPECIES_BUDEW
	goto Debug_CheatStart_1

Debug_CheatStart_8:
	setvar VAR_TEMP_0, SPECIES_BUDEW
	goto Debug_CheatStart_1

Debug_CheatStart_9:
	setvar VAR_TEMP_0, SPECIES_BUNEARY
	goto Debug_CheatStart_1

Debug_CheatStart_10:
	setvar VAR_TEMP_0, SPECIES_BUNEARY
	goto Debug_CheatStart_1

Debug_CheatStart_11:
	setvar VAR_TEMP_0, SPECIES_FLETCHLING
	goto Debug_CheatStart_1

Debug_CheatStart_12:
	setvar VAR_TEMP_0, SPECIES_FLETCHLING
	goto Debug_CheatStart_1

Debug_CheatStart_13:
	setvar VAR_TEMP_0, SPECIES_MAREEP
	goto Debug_CheatStart_1

Debug_CheatStart_14:
	setvar VAR_TEMP_0, SPECIES_MAREEP
	goto Debug_CheatStart_1

Debug_CheatStart_15:
	setvar VAR_TEMP_0, SPECIES_PIDGEY
	goto Debug_CheatStart_1

Debug_CheatStart_16:
	setvar VAR_TEMP_0, SPECIES_PIDGEY
	goto Debug_CheatStart_1

Debug_CheatStart_17:
	setvar VAR_TEMP_0, SPECIES_PSYDUCK
	goto Debug_CheatStart_1

Debug_CheatStart_18:
	setvar VAR_TEMP_0, SPECIES_PSYDUCK
	goto Debug_CheatStart_1

Debug_CheatStart_19:
	setvar VAR_TEMP_0, SPECIES_SHINX
	goto Debug_CheatStart_1

Debug_CheatStart_20:
	setvar VAR_TEMP_0, SPECIES_SHINX
	goto Debug_CheatStart_1

Debug_CheatStart_21:
	setvar VAR_TEMP_0, SPECIES_ZIGZAGOON_GALARIAN
	goto Debug_CheatStart_1

Debug_CheatStart_22:
	setvar VAR_TEMP_0, SPECIES_ZIGZAGOON_GALARIAN
	goto Debug_CheatStart_1

Debug_CheatStart_25:
	setvar VAR_TEMP_0, SPECIES_LILLIPUP
	goto Debug_CheatStart_23

Debug_CheatStart_26:
	setvar VAR_TEMP_0, SPECIES_LILLIPUP
	goto Debug_CheatStart_23

Debug_CheatStart_27:
	setvar VAR_TEMP_0, SPECIES_PHANPY
	goto Debug_CheatStart_23

Debug_CheatStart_28:
	setvar VAR_TEMP_0, SPECIES_PHANPY
	goto Debug_CheatStart_23

Debug_CheatStart_29:
	setvar VAR_TEMP_0, SPECIES_POOCHYENA
	goto Debug_CheatStart_23

Debug_CheatStart_30:
	setvar VAR_TEMP_0, SPECIES_POOCHYENA
	goto Debug_CheatStart_23

Debug_CheatStart_31:
	setvar VAR_TEMP_0, SPECIES_RATTATA
	goto Debug_CheatStart_23

Debug_CheatStart_32:
	setvar VAR_TEMP_0, SPECIES_RATTATA
	goto Debug_CheatStart_23

Debug_CheatStart_33:
	setvar VAR_TEMP_0, SPECIES_SENTRET
	goto Debug_CheatStart_23

Debug_CheatStart_34:
	setvar VAR_TEMP_0, SPECIES_SENTRET
	goto Debug_CheatStart_23

Debug_CheatStart_35:
	setvar VAR_TEMP_0, SPECIES_SPEAROW
	goto Debug_CheatStart_23

Debug_CheatStart_36:
	setvar VAR_TEMP_0, SPECIES_SPEAROW
	goto Debug_CheatStart_23

Debug_CheatStart_37:
	setvar VAR_TEMP_0, SPECIES_TEDDIURSA
	goto Debug_CheatStart_23

Debug_CheatStart_38:
	setvar VAR_TEMP_0, SPECIES_TEDDIURSA
	goto Debug_CheatStart_23

Debug_CheatStart_39:
	setvar VAR_TEMP_0, SPECIES_WOOLOO
	goto Debug_CheatStart_23

Debug_CheatStart_40:
	setvar VAR_TEMP_0, SPECIES_WOOLOO
	goto Debug_CheatStart_23

Debug_CheatStart_41:
	setvar VAR_TEMP_0, SPECIES_YAMPER
	goto Debug_CheatStart_23

Debug_CheatStart_42:
	setvar VAR_TEMP_0, SPECIES_YAMPER
	goto Debug_CheatStart_23

Debug_CheatStart_43:
	setvar VAR_TEMP_0, SPECIES_NIDORAN_F
	goto Debug_CheatStart_23

Debug_CheatStart_44:
	setvar VAR_TEMP_0, SPECIES_NIDORAN_M
	goto Debug_CheatStart_23

Debug_CheatStart_47:
	setvar VAR_TEMP_0, SPECIES_BONSLY
	goto Debug_CheatStart_45

Debug_CheatStart_48:
	setvar VAR_TEMP_0, SPECIES_BONSLY
	goto Debug_CheatStart_45

Debug_CheatStart_49:
	setvar VAR_TEMP_0, SPECIES_HOOTHOOT
	goto Debug_CheatStart_45

Debug_CheatStart_50:
	setvar VAR_TEMP_0, SPECIES_HOOTHOOT
	goto Debug_CheatStart_45

Debug_CheatStart_51:
	setvar VAR_TEMP_0, SPECIES_MANKEY
	goto Debug_CheatStart_45

Debug_CheatStart_52:
	setvar VAR_TEMP_0, SPECIES_MANKEY
	goto Debug_CheatStart_45

Debug_CheatStart_53:
	setvar VAR_TEMP_0, SPECIES_PANCHAM
	goto Debug_CheatStart_45

Debug_CheatStart_54:
	setvar VAR_TEMP_0, SPECIES_PANCHAM
	goto Debug_CheatStart_45

Debug_CheatStart_55:
	setvar VAR_TEMP_0, SPECIES_PICHU
	goto Debug_CheatStart_45

Debug_CheatStart_56:
	setvar VAR_TEMP_0, SPECIES_PICHU
	goto Debug_CheatStart_45

Debug_CheatStart_57:
	setvar VAR_TEMP_0, SPECIES_PIKIPEK
	goto Debug_CheatStart_45

Debug_CheatStart_58:
	setvar VAR_TEMP_0, SPECIES_PIKIPEK
	goto Debug_CheatStart_45

Debug_CheatStart_59:
	setvar VAR_TEMP_0, SPECIES_SEEDOT
	goto Debug_CheatStart_45

Debug_CheatStart_60:
	setvar VAR_TEMP_0, SPECIES_SEEDOT
	goto Debug_CheatStart_45

Debug_CheatStart_61:
	setvar VAR_TEMP_0, SPECIES_SKWOVET
	goto Debug_CheatStart_45

Debug_CheatStart_62:
	setvar VAR_TEMP_0, SPECIES_SKWOVET
	goto Debug_CheatStart_45

Debug_CheatStart_63:
	setvar VAR_TEMP_0, SPECIES_STUNKY
	goto Debug_CheatStart_45

Debug_CheatStart_64:
	setvar VAR_TEMP_0, SPECIES_STUNKY
	goto Debug_CheatStart_45

Debug_CheatStart_65:
	setvar VAR_TEMP_0, SPECIES_VOLTORB_HISUIAN
	goto Debug_CheatStart_45

Debug_CheatStart_66:
	setvar VAR_TEMP_0, SPECIES_VOLTORB_HISUIAN
	goto Debug_CheatStart_45

Debug_CheatStart_68:
	random 4
	switch VAR_RESULT
	case 0, Debug_CheatStart_76
	case 1, Debug_CheatStart_77
	case 2, Debug_CheatStart_78
	case 3, Debug_CheatStart_79
	goto Debug_CheatStart_67

Debug_CheatStart_72:
	random 4
	switch VAR_RESULT
	case 0, Debug_CheatStart_112
	case 1, Debug_CheatStart_113
	case 2, Debug_CheatStart_114
	case 3, Debug_CheatStart_115
Debug_CheatStart_110:
	givemon VAR_TEMP_0, 8, ITEM_NONE
	goto Debug_CheatStart_71

Debug_CheatStart_76:
	setvar VAR_TEMP_0, SPECIES_CHEWTLE
	goto Debug_CheatStart_67

Debug_CheatStart_77:
	setvar VAR_TEMP_0, SPECIES_DEWPIDER
	goto Debug_CheatStart_67

Debug_CheatStart_78:
	setvar VAR_TEMP_0, SPECIES_SURSKIT
	goto Debug_CheatStart_67

Debug_CheatStart_79:
	setvar VAR_TEMP_0, SPECIES_WISHIWASHI
	goto Debug_CheatStart_67

Debug_CheatStart_81:
	setvar VAR_TEMP_0, SPECIES_BUIZEL
	goto Debug_CheatStart_67

Debug_CheatStart_82:
	setvar VAR_TEMP_0, SPECIES_BUIZEL
	goto Debug_CheatStart_67

Debug_CheatStart_83:
	setvar VAR_TEMP_0, SPECIES_CRABRAWLER
	goto Debug_CheatStart_67

Debug_CheatStart_84:
	setvar VAR_TEMP_0, SPECIES_CRABRAWLER
	goto Debug_CheatStart_67

Debug_CheatStart_85:
	setvar VAR_TEMP_0, SPECIES_EKANS
	goto Debug_CheatStart_67

Debug_CheatStart_86:
	setvar VAR_TEMP_0, SPECIES_EKANS
	goto Debug_CheatStart_67

Debug_CheatStart_87:
	setvar VAR_TEMP_0, SPECIES_GLAMEOW
	goto Debug_CheatStart_67

Debug_CheatStart_88:
	setvar VAR_TEMP_0, SPECIES_GLAMEOW
	goto Debug_CheatStart_67

Debug_CheatStart_89:
	setvar VAR_TEMP_0, SPECIES_LITLEO
	goto Debug_CheatStart_67

Debug_CheatStart_90:
	setvar VAR_TEMP_0, SPECIES_LITLEO
	goto Debug_CheatStart_67

Debug_CheatStart_91:
	setvar VAR_TEMP_0, SPECIES_LOTAD
	goto Debug_CheatStart_67

Debug_CheatStart_92:
	setvar VAR_TEMP_0, SPECIES_LOTAD
	goto Debug_CheatStart_67

Debug_CheatStart_93:
	setvar VAR_TEMP_0, SPECIES_MEDITITE
	goto Debug_CheatStart_67

Debug_CheatStart_94:
	setvar VAR_TEMP_0, SPECIES_MEDITITE
	goto Debug_CheatStart_67

Debug_CheatStart_95:
	setvar VAR_TEMP_0, SPECIES_ROCKRUFF
	goto Debug_CheatStart_67

Debug_CheatStart_96:
	setvar VAR_TEMP_0, SPECIES_ROCKRUFF
	goto Debug_CheatStart_67

Debug_CheatStart_97:
	setvar VAR_TEMP_0, SPECIES_VULPIX
	goto Debug_CheatStart_67

Debug_CheatStart_98:
	setvar VAR_TEMP_0, SPECIES_VULPIX
	goto Debug_CheatStart_67

Debug_CheatStart_99:
	setvar VAR_TEMP_0, SPECIES_WOOPER
	goto Debug_CheatStart_67

Debug_CheatStart_100:
	setvar VAR_TEMP_0, SPECIES_WOOPER
	goto Debug_CheatStart_67

Debug_CheatStart_103:
	additem ITEM_WATER_GEM
	goto Debug_CheatStart_101

Debug_CheatStart_104:
	additem ITEM_ELECTRIC_GEM
	goto Debug_CheatStart_101

Debug_CheatStart_105:
	additem ITEM_FIRE_GEM
	goto Debug_CheatStart_101

Debug_CheatStart_106:
	additem ITEM_PSYCHIC_GEM
	goto Debug_CheatStart_101

Debug_CheatStart_107:
	additem ITEM_DARK_GEM
	goto Debug_CheatStart_101

Debug_CheatStart_108:
	additem ITEM_GRASS_GEM
	goto Debug_CheatStart_101

Debug_CheatStart_109:
	additem ITEM_ICE_GEM
	goto Debug_CheatStart_101

Debug_CheatStart_112:
	setvar VAR_TEMP_0, SPECIES_PETILIL
	goto Debug_CheatStart_110

Debug_CheatStart_113:
	setvar VAR_TEMP_0, SPECIES_COTTONEE
	goto Debug_CheatStart_110

Debug_CheatStart_114:
	setvar VAR_TEMP_0, SPECIES_CATERPIE
	goto Debug_CheatStart_110

Debug_CheatStart_115:
	setvar VAR_TEMP_0, SPECIES_WEEDLE
	goto Debug_CheatStart_110

Debug_CheatStart_118:
	setvar VAR_TEMP_0, SPECIES_HOUNDOUR
	goto Debug_CheatStart_116

Debug_CheatStart_119:
	setvar VAR_TEMP_0, SPECIES_HOUNDOUR
	goto Debug_CheatStart_116

Debug_CheatStart_120:
	setvar VAR_TEMP_0, SPECIES_MORELULL
	goto Debug_CheatStart_116

Debug_CheatStart_121:
	setvar VAR_TEMP_0, SPECIES_MORELULL
	goto Debug_CheatStart_116

Debug_CheatStart_122:
	setvar VAR_TEMP_0, SPECIES_PHANTUMP
	goto Debug_CheatStart_116

Debug_CheatStart_123:
	setvar VAR_TEMP_0, SPECIES_PHANTUMP
	goto Debug_CheatStart_116

Debug_CheatStart_124:
	setvar VAR_TEMP_0, SPECIES_PONYTA_GALARIAN
	goto Debug_CheatStart_116

Debug_CheatStart_125:
	setvar VAR_TEMP_0, SPECIES_PONYTA_GALARIAN
	goto Debug_CheatStart_116

Debug_CheatStart_126:
	setvar VAR_TEMP_0, SPECIES_HATENNA
	goto Debug_CheatStart_116

Debug_CheatStart_127:
	setvar VAR_TEMP_0, SPECIES_HATENNA
	goto Debug_CheatStart_116

Debug_CheatStart_128:
	setvar VAR_TEMP_0, SPECIES_IMPIDIMP
	goto Debug_CheatStart_116

Debug_CheatStart_129:
	setvar VAR_TEMP_0, SPECIES_IMPIDIMP
	goto Debug_CheatStart_116

Debug_CheatStart_130:
	setvar VAR_TEMP_0, SPECIES_GOTHITA
	goto Debug_CheatStart_116

Debug_CheatStart_131:
	setvar VAR_TEMP_0, SPECIES_GOTHITA
	goto Debug_CheatStart_116

Debug_CheatStart_132:
	setvar VAR_TEMP_0, SPECIES_SOLOSIS
	goto Debug_CheatStart_116

Debug_CheatStart_133:
	setvar VAR_TEMP_0, SPECIES_SOLOSIS
	goto Debug_CheatStart_116

Debug_CheatStart_134:
	setvar VAR_TEMP_0, SPECIES_SPRITZEE
	goto Debug_CheatStart_116

Debug_CheatStart_135:
	setvar VAR_TEMP_0, SPECIES_SPRITZEE
	goto Debug_CheatStart_116

Debug_CheatStart_136:
	setvar VAR_TEMP_0, SPECIES_SWIRLIX
	goto Debug_CheatStart_116

Debug_CheatStart_137:
	setvar VAR_TEMP_0, SPECIES_SWIRLIX
	goto Debug_CheatStart_116

Debug_CheatStart_140:
	setvar VAR_TEMP_0, SPECIES_ABRA
	goto Debug_CheatStart_138

Debug_CheatStart_141:
	setvar VAR_TEMP_0, SPECIES_ABRA
	goto Debug_CheatStart_138

Debug_CheatStart_142:
	setvar VAR_TEMP_0, SPECIES_GROWLITHE
	goto Debug_CheatStart_138

Debug_CheatStart_143:
	setvar VAR_TEMP_0, SPECIES_GROWLITHE
	goto Debug_CheatStart_138

Debug_CheatStart_144:
	setvar VAR_TEMP_0, SPECIES_MAGNEMITE
	goto Debug_CheatStart_138

Debug_CheatStart_145:
	setvar VAR_TEMP_0, SPECIES_MAGNEMITE
	goto Debug_CheatStart_138

Debug_CheatStart_146:
	setvar VAR_TEMP_0, SPECIES_RALTS
	goto Debug_CheatStart_138

Debug_CheatStart_147:
	setvar VAR_TEMP_0, SPECIES_RALTS
	goto Debug_CheatStart_138

Debug_CheatStart_148:
	setvar VAR_TEMP_0, SPECIES_ROOKIDEE
	goto Debug_CheatStart_138

Debug_CheatStart_149:
	setvar VAR_TEMP_0, SPECIES_ROOKIDEE
	goto Debug_CheatStart_138

Debug_CheatStart_150:
	setvar VAR_TEMP_0, SPECIES_SNUBBULL
	goto Debug_CheatStart_138

Debug_CheatStart_151:
	setvar VAR_TEMP_0, SPECIES_SNUBBULL
	goto Debug_CheatStart_138

Debug_CheatStart_152:
	setvar VAR_TEMP_0, SPECIES_STARLY
	goto Debug_CheatStart_138

Debug_CheatStart_153:
	setvar VAR_TEMP_0, SPECIES_STARLY
	goto Debug_CheatStart_138

Debug_CheatStart_154:
	setvar VAR_TEMP_0, SPECIES_STUFFUL
	goto Debug_CheatStart_138

Debug_CheatStart_155:
	setvar VAR_TEMP_0, SPECIES_STUFFUL
	goto Debug_CheatStart_138

Debug_CheatStart_156:
	setvar VAR_TEMP_0, SPECIES_TAILLOW
	goto Debug_CheatStart_138

Debug_CheatStart_157:
	setvar VAR_TEMP_0, SPECIES_TAILLOW
	goto Debug_CheatStart_138


Debug_CheatStart_Text_0:
	.string "Would you like a water encounter?$"

Debug_CheatStart_Text_1:
	.string "Would you like a golden tree encounter?$"

Debug_CheatStart_Text_2:
	.string "Choose an Eevee evo item.$"

gText_ObtainedDebugMon::
	.string "Obtained {STR_VAR_1}!$"
