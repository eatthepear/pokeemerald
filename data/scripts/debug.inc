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
	random 24
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
	case 20, Debug_CheatStart_23
	case 21, Debug_CheatStart_24
	case 22, Debug_CheatStart_25
	case 23, Debug_CheatStart_26
Debug_CheatStart_1:
	setflag FLAG_BOOSTED_IVS
	givemon VAR_TEMP_0, 15, ITEM_NONE
	givemon SPECIES_EEVEE, 15, ITEM_NONE
	clearflag FLAG_BOOSTED_IVS
	random 20
	switch VAR_RESULT
	case 0, Debug_CheatStart_29
	case 1, Debug_CheatStart_30
	case 2, Debug_CheatStart_31
	case 3, Debug_CheatStart_32
	case 4, Debug_CheatStart_33
	case 5, Debug_CheatStart_34
	case 6, Debug_CheatStart_35
	case 7, Debug_CheatStart_36
	case 8, Debug_CheatStart_37
	case 9, Debug_CheatStart_38
	case 10, Debug_CheatStart_39
	case 11, Debug_CheatStart_40
	case 12, Debug_CheatStart_41
	case 13, Debug_CheatStart_42
	case 14, Debug_CheatStart_43
	case 15, Debug_CheatStart_44
Debug_CheatStart_27:
	givemon VAR_TEMP_0, 15, ITEM_NONE
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
	givemon VAR_TEMP_0, 15, ITEM_NONE
	random 20
	switch VAR_RESULT
	case 0, Debug_CheatStart_69
	case 1, Debug_CheatStart_70
	case 2, Debug_CheatStart_71
	case 3, Debug_CheatStart_72
	case 4, Debug_CheatStart_73
	case 5, Debug_CheatStart_74
	case 6, Debug_CheatStart_75
	case 7, Debug_CheatStart_76
	case 8, Debug_CheatStart_77
	case 9, Debug_CheatStart_78
	case 10, Debug_CheatStart_79
	case 11, Debug_CheatStart_80
	case 12, Debug_CheatStart_81
	case 13, Debug_CheatStart_82
	case 14, Debug_CheatStart_83
	case 15, Debug_CheatStart_84
	case 16, Debug_CheatStart_85
	case 17, Debug_CheatStart_86
	case 18, Debug_CheatStart_87
	case 19, Debug_CheatStart_88
Debug_CheatStart_67:
	givemon VAR_TEMP_0, 15, ITEM_NONE
	release
	end

Debug_CheatStart_3:
	setvar VAR_TEMP_0, SPECIES_BULBASAUR
	goto Debug_CheatStart_1

Debug_CheatStart_4:
	setvar VAR_TEMP_0, SPECIES_CHARMANDER
	goto Debug_CheatStart_1

Debug_CheatStart_5:
	setvar VAR_TEMP_0, SPECIES_SQUIRTLE
	goto Debug_CheatStart_1

Debug_CheatStart_6:
	setvar VAR_TEMP_0, SPECIES_CHIKORITA
	goto Debug_CheatStart_1

Debug_CheatStart_7:
	setvar VAR_TEMP_0, SPECIES_QUILAVA
	goto Debug_CheatStart_1

Debug_CheatStart_8:
	setvar VAR_TEMP_0, SPECIES_TOTODILE
	goto Debug_CheatStart_1

Debug_CheatStart_9:
	setvar VAR_TEMP_0, SPECIES_TREECKO
	goto Debug_CheatStart_1

Debug_CheatStart_10:
	setvar VAR_TEMP_0, SPECIES_TORCHIC
	goto Debug_CheatStart_1

Debug_CheatStart_11:
	setvar VAR_TEMP_0, SPECIES_MUDKIP
	goto Debug_CheatStart_1

Debug_CheatStart_12:
	setvar VAR_TEMP_0, SPECIES_TURTWIG
	goto Debug_CheatStart_1

Debug_CheatStart_13:
	setvar VAR_TEMP_0, SPECIES_CHIMCHAR
	goto Debug_CheatStart_1

Debug_CheatStart_14:
	setvar VAR_TEMP_0, SPECIES_PIPLUP
	goto Debug_CheatStart_1

Debug_CheatStart_15:
	setvar VAR_TEMP_0, SPECIES_SNIVY
	goto Debug_CheatStart_1

Debug_CheatStart_16:
	setvar VAR_TEMP_0, SPECIES_TEPIG
	goto Debug_CheatStart_1

Debug_CheatStart_17:
	setvar VAR_TEMP_0, SPECIES_OSHAWOTT
	goto Debug_CheatStart_1

Debug_CheatStart_18:
	setvar VAR_TEMP_0, SPECIES_CHESPIN
	goto Debug_CheatStart_1

Debug_CheatStart_19:
	setvar VAR_TEMP_0, SPECIES_FENNEKIN
	goto Debug_CheatStart_1

Debug_CheatStart_20:
	setvar VAR_TEMP_0, SPECIES_FROAKIE
	goto Debug_CheatStart_1

Debug_CheatStart_21:
	setvar VAR_TEMP_0, SPECIES_ROWLET
	goto Debug_CheatStart_1

Debug_CheatStart_22:
	setvar VAR_TEMP_0, SPECIES_LITTEN
	goto Debug_CheatStart_1

Debug_CheatStart_23:
	setvar VAR_TEMP_0, SPECIES_POPPLIO
	goto Debug_CheatStart_1

Debug_CheatStart_24:
	setvar VAR_TEMP_0, SPECIES_GROOKEY
	goto Debug_CheatStart_1

Debug_CheatStart_25:
	setvar VAR_TEMP_0, SPECIES_SCORBUNNY
	goto Debug_CheatStart_1

Debug_CheatStart_26:
	setvar VAR_TEMP_0, SPECIES_SOBBLE
	goto Debug_CheatStart_1

Debug_CheatStart_29:
	setvar VAR_TEMP_0, SPECIES_ABRA
	goto Debug_CheatStart_27

Debug_CheatStart_30:
	setvar VAR_TEMP_0, SPECIES_ABRA
	goto Debug_CheatStart_27

Debug_CheatStart_31:
	setvar VAR_TEMP_0, SPECIES_MARILL
	goto Debug_CheatStart_27

Debug_CheatStart_32:
	setvar VAR_TEMP_0, SPECIES_MARILL
	goto Debug_CheatStart_27

Debug_CheatStart_33:
	setvar VAR_TEMP_0, SPECIES_ROSELIA
	goto Debug_CheatStart_27

Debug_CheatStart_34:
	setvar VAR_TEMP_0, SPECIES_ROSELIA
	goto Debug_CheatStart_27

Debug_CheatStart_35:
	setvar VAR_TEMP_0, SPECIES_CLEFFA
	goto Debug_CheatStart_27

Debug_CheatStart_36:
	setvar VAR_TEMP_0, SPECIES_CLEFFA
	goto Debug_CheatStart_27

Debug_CheatStart_37:
	setvar VAR_TEMP_0, SPECIES_FLETCHLING
	goto Debug_CheatStart_27

Debug_CheatStart_38:
	setvar VAR_TEMP_0, SPECIES_FLETCHLING
	goto Debug_CheatStart_27

Debug_CheatStart_39:
	setvar VAR_TEMP_0, SPECIES_LILLIPUP
	goto Debug_CheatStart_27

Debug_CheatStart_40:
	setvar VAR_TEMP_0, SPECIES_LILLIPUP
	goto Debug_CheatStart_27

Debug_CheatStart_41:
	setvar VAR_TEMP_0, SPECIES_FLAAFFY
	goto Debug_CheatStart_27

Debug_CheatStart_42:
	setvar VAR_TEMP_0, SPECIES_FLAAFFY
	goto Debug_CheatStart_27

Debug_CheatStart_43:
	setvar VAR_TEMP_0, SPECIES_STARAVIA
	goto Debug_CheatStart_27

Debug_CheatStart_44:
	setvar VAR_TEMP_0, SPECIES_STARAVIA
	goto Debug_CheatStart_27

Debug_CheatStart_47:
	setvar VAR_TEMP_0, SPECIES_PHANPY
	goto Debug_CheatStart_45

Debug_CheatStart_48:
	setvar VAR_TEMP_0, SPECIES_PHANPY
	goto Debug_CheatStart_45

Debug_CheatStart_49:
	setvar VAR_TEMP_0, SPECIES_POOCHYENA
	goto Debug_CheatStart_45

Debug_CheatStart_50:
	setvar VAR_TEMP_0, SPECIES_POOCHYENA
	goto Debug_CheatStart_45

Debug_CheatStart_51:
	setvar VAR_TEMP_0, SPECIES_RATTATA
	goto Debug_CheatStart_45

Debug_CheatStart_52:
	setvar VAR_TEMP_0, SPECIES_RATTATA
	goto Debug_CheatStart_45

Debug_CheatStart_53:
	setvar VAR_TEMP_0, SPECIES_ROCKRUFF
	goto Debug_CheatStart_45

Debug_CheatStart_54:
	setvar VAR_TEMP_0, SPECIES_ROCKRUFF
	goto Debug_CheatStart_45

Debug_CheatStart_55:
	setvar VAR_TEMP_0, SPECIES_FURRET
	goto Debug_CheatStart_45

Debug_CheatStart_56:
	setvar VAR_TEMP_0, SPECIES_FURRET
	goto Debug_CheatStart_45

Debug_CheatStart_57:
	setvar VAR_TEMP_0, SPECIES_LUXIO
	goto Debug_CheatStart_45

Debug_CheatStart_58:
	setvar VAR_TEMP_0, SPECIES_LUXIO
	goto Debug_CheatStart_45

Debug_CheatStart_59:
	setvar VAR_TEMP_0, SPECIES_PIDGEY
	goto Debug_CheatStart_45

Debug_CheatStart_60:
	setvar VAR_TEMP_0, SPECIES_PIDGEY
	goto Debug_CheatStart_45

Debug_CheatStart_61:
	setvar VAR_TEMP_0, SPECIES_SNUBBULL
	goto Debug_CheatStart_45

Debug_CheatStart_62:
	setvar VAR_TEMP_0, SPECIES_SNUBBULL
	goto Debug_CheatStart_45

Debug_CheatStart_63:
	setvar VAR_TEMP_0, SPECIES_WOOLOO
	goto Debug_CheatStart_45

Debug_CheatStart_64:
	setvar VAR_TEMP_0, SPECIES_WOOLOO
	goto Debug_CheatStart_45

Debug_CheatStart_65:
	setvar VAR_TEMP_0, SPECIES_NIDORAN_F
	goto Debug_CheatStart_45

Debug_CheatStart_66:
	setvar VAR_TEMP_0, SPECIES_NIDORAN_M
	goto Debug_CheatStart_45

Debug_CheatStart_69:
	setvar VAR_TEMP_0, SPECIES_SUDOWOODO
	goto Debug_CheatStart_67

Debug_CheatStart_70:
	setvar VAR_TEMP_0, SPECIES_SUDOWOODO
	goto Debug_CheatStart_67

Debug_CheatStart_71:
	setvar VAR_TEMP_0, SPECIES_BUTTERFREE
	goto Debug_CheatStart_67

Debug_CheatStart_72:
	setvar VAR_TEMP_0, SPECIES_BUTTERFREE
	goto Debug_CheatStart_67

Debug_CheatStart_73:
	setvar VAR_TEMP_0, SPECIES_MANKEY
	goto Debug_CheatStart_67

Debug_CheatStart_74:
	setvar VAR_TEMP_0, SPECIES_MANKEY
	goto Debug_CheatStart_67

Debug_CheatStart_75:
	setvar VAR_TEMP_0, SPECIES_PETILIL
	goto Debug_CheatStart_67

Debug_CheatStart_76:
	setvar VAR_TEMP_0, SPECIES_PETILIL
	goto Debug_CheatStart_67

Debug_CheatStart_77:
	setvar VAR_TEMP_0, SPECIES_COTTONEE
	goto Debug_CheatStart_67

Debug_CheatStart_78:
	setvar VAR_TEMP_0, SPECIES_COTTONEE
	goto Debug_CheatStart_67

Debug_CheatStart_79:
	setvar VAR_TEMP_0, SPECIES_PIKACHU
	goto Debug_CheatStart_67

Debug_CheatStart_80:
	setvar VAR_TEMP_0, SPECIES_PIKACHU
	goto Debug_CheatStart_67

Debug_CheatStart_81:
	setvar VAR_TEMP_0, SPECIES_PANCHAM
	goto Debug_CheatStart_67

Debug_CheatStart_82:
	setvar VAR_TEMP_0, SPECIES_PANCHAM
	goto Debug_CheatStart_67

Debug_CheatStart_83:
	setvar VAR_TEMP_0, SPECIES_VOLTORB
	goto Debug_CheatStart_67

Debug_CheatStart_84:
	setvar VAR_TEMP_0, SPECIES_VOLTORB
	goto Debug_CheatStart_67

Debug_CheatStart_85:
	setvar VAR_TEMP_0, SPECIES_BUNEARY
	goto Debug_CheatStart_67

Debug_CheatStart_86:
	setvar VAR_TEMP_0, SPECIES_BUNEARY
	goto Debug_CheatStart_67

Debug_CheatStart_87:
	setvar VAR_TEMP_0, SPECIES_BEEDRILL
	goto Debug_CheatStart_67

Debug_CheatStart_88:
	setvar VAR_TEMP_0, SPECIES_BEEDRILL
	goto Debug_CheatStart_67

