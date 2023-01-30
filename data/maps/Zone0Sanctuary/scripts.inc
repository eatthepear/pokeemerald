Zone0Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone0Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone0Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE, 0, Zone0Sanctuary_EventScript_Intro
	.2byte 0


Zone0Sanctuary_EventScript_Intro::
	lockall
	clearflag FLAG_SETTINGS_NUZLOCKE
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_PC_LANETTE
	setflag FLAG_BOOSTED_IVS
	call EventScript_MoveCameraUp
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	msgbox Zone0Sanctuary_EventScript_Intro_Text_0
	applymovement 1, Common_Movement_Colress_WalkDown
	call EventScript_MoveCameraDown
	waitmovement 0
	msgbox Zone0Sanctuary_EventScript_Intro_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_2
Zone0Sanctuary_EventScript_Intro_1:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_5
Zone0Sanctuary_EventScript_Intro_4:
Zone0Sanctuary_EventScript_Intro_8:
	compare VAR_TEMP_4, 0
	goto_if_eq Zone0Sanctuary_EventScript_Intro_9
	delay 16
	msgbox Zone0Sanctuary_EventScript_Intro_Text_9, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_12
Zone0Sanctuary_EventScript_Intro_11:
Zone0Sanctuary_EventScript_Intro_18:
	compare VAR_TEMP_2, 1
	goto_if_eq Zone0Sanctuary_EventScript_Intro_28
Zone0Sanctuary_EventScript_Intro_27:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_10, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone0Sanctuary_EventScript_Intro_47
	compare VAR_TEMP_2, 1
	goto_if_eq Zone0Sanctuary_EventScript_Intro_65
	call Zone0Sanctuary_EventScript_DisableRandomizer
Zone0Sanctuary_EventScript_Intro_17:
	delay 16
Zone0Sanctuary_EventScript_Intro_25:
	compare VAR_TEMP_2, 1
	goto_if_eq Zone0Sanctuary_EventScript_Intro_45
Zone0Sanctuary_EventScript_Intro_44:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_13, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone0Sanctuary_EventScript_Intro_59
	compare VAR_TEMP_2, 1
	goto_if_eq Zone0Sanctuary_EventScript_Intro_74
	call Zone0Sanctuary_EventScript_DisableNuzlocke
Zone0Sanctuary_EventScript_Intro_24:
	delay 16
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone0Sanctuary_EventScript_Intro_41
Zone0Sanctuary_EventScript_Intro_39:
	delay 16
	compare VAR_TEMP_0, 1
	goto_if_eq Zone0Sanctuary_EventScript_Intro_57
Zone0Sanctuary_EventScript_Intro_56:
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone0Sanctuary_EventScript_Intro_69
Zone0Sanctuary_EventScript_Intro_68:
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone0Sanctuary_EventScript_Intro_81
	msgbox Zone0Sanctuary_EventScript_Intro_Text_30
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault
	return

Zone0Sanctuary_EventScript_Intro_2:
	setvar VAR_TEMP_0, 1
	msgbox Zone0Sanctuary_EventScript_Intro_Text_2
	delay 96
	goto Zone0Sanctuary_EventScript_Intro_1

Zone0Sanctuary_EventScript_Intro_5:
	setvar VAR_TEMP_1, 1
	goto Zone0Sanctuary_EventScript_Intro_4

Zone0Sanctuary_EventScript_Intro_9:
	compare VAR_TEMP_1, 1
	goto_if_eq Zone0Sanctuary_EventScript_Intro_15
Zone0Sanctuary_EventScript_Intro_14:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_5, MSGBOX_DEFAULT
	multichoice 2, 5, MULTI_DIFFICULTY, 1
	switch VAR_RESULT
	case 0, Zone0Sanctuary_EventScript_Intro_21
	case 1, Zone0Sanctuary_EventScript_Intro_22
	case 2, Zone0Sanctuary_EventScript_Intro_23
	goto Zone0Sanctuary_EventScript_Intro_8

Zone0Sanctuary_EventScript_Intro_12:
	msgbox gText_Colress_GameModes, MSGBOX_DEFAULT
	setvar VAR_TEMP_2, 1
	goto Zone0Sanctuary_EventScript_Intro_11

Zone0Sanctuary_EventScript_Intro_15:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_4, MSGBOX_DEFAULT
	msgbox gText_Colress_DefaultExplained, MSGBOX_DEFAULT
	msgbox gText_Colress_BrutalExplained, MSGBOX_DEFAULT
	msgbox gText_Colress_InfiniteExplained
	delay 96
	goto Zone0Sanctuary_EventScript_Intro_14

Zone0Sanctuary_EventScript_Intro_21:
	compare VAR_TEMP_1, 1
	goto_if_eq Zone0Sanctuary_EventScript_Intro_30
	call Zone0Sanctuary_EventScript_SetDefaultDifficulty
	setvar VAR_TEMP_4, 1
	goto Zone0Sanctuary_EventScript_Intro_8

Zone0Sanctuary_EventScript_Intro_22:
	compare VAR_TEMP_1, 1
	goto_if_eq Zone0Sanctuary_EventScript_Intro_33
	call Zone0Sanctuary_EventScript_SetBrutalDifficulty
	setvar VAR_TEMP_4, 1
	goto Zone0Sanctuary_EventScript_Intro_8

Zone0Sanctuary_EventScript_Intro_23:
	compare VAR_TEMP_1, 1
	goto_if_eq Zone0Sanctuary_EventScript_Intro_36
	call Zone0Sanctuary_EventScript_SetInfiniteDifficulty
	setvar VAR_TEMP_4, 1
	goto Zone0Sanctuary_EventScript_Intro_8

Zone0Sanctuary_EventScript_Intro_28:
	msgbox gText_Colress_RandomizerExplanation, MSGBOX_DEFAULT
	goto Zone0Sanctuary_EventScript_Intro_27

Zone0Sanctuary_EventScript_Intro_30:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_50
	goto Zone0Sanctuary_EventScript_Intro_8

Zone0Sanctuary_EventScript_Intro_33:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_52
	goto Zone0Sanctuary_EventScript_Intro_8

Zone0Sanctuary_EventScript_Intro_36:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_8, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_54
	goto Zone0Sanctuary_EventScript_Intro_8

Zone0Sanctuary_EventScript_Intro_40:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_16, MSGBOX_DEFAULT
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_EventScript_Intro_Text_17, MSGBOX_DEFAULT
	waitse
	closemessage
	goto Zone0Sanctuary_EventScript_Intro_39

Zone0Sanctuary_EventScript_Intro_41:
	goto_if_unset FLAG_SETTINGS_NUZLOCKE, Zone0Sanctuary_EventScript_Intro_40
	goto Zone0Sanctuary_EventScript_Intro_39

Zone0Sanctuary_EventScript_Intro_45:
	msgbox gText_Colress_NuzlockeExplained, MSGBOX_DEFAULT
	goto Zone0Sanctuary_EventScript_Intro_44

Zone0Sanctuary_EventScript_Intro_47:
	compare VAR_TEMP_2, 1
	goto_if_eq Zone0Sanctuary_EventScript_Intro_62
	call Zone0Sanctuary_EventScript_EnableRandomizer
	goto Zone0Sanctuary_EventScript_Intro_17

Zone0Sanctuary_EventScript_Intro_50:
	call Zone0Sanctuary_EventScript_SetDefaultDifficulty
	setvar VAR_TEMP_4, 1
	goto Zone0Sanctuary_EventScript_Intro_8

Zone0Sanctuary_EventScript_Intro_52:
	call Zone0Sanctuary_EventScript_SetBrutalDifficulty
	setvar VAR_TEMP_4, 1
	goto Zone0Sanctuary_EventScript_Intro_8

Zone0Sanctuary_EventScript_Intro_54:
	call Zone0Sanctuary_EventScript_SetInfiniteDifficulty
	setvar VAR_TEMP_4, 1
	goto Zone0Sanctuary_EventScript_Intro_8

Zone0Sanctuary_EventScript_Intro_57:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_18
	applymovement 1, Zone0Sanctuary_Movement_Colress_FirstShop
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_FirstShop
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
	waitmovement 0
	msgbox Zone0Sanctuary_EventScript_Intro_Text_19
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	special RemoveCameraObject
	applymovement 1, Zone0Sanctuary_Movement_Colress_SecondShop
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_SecondShop
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
	waitmovement 0
	msgbox Zone0Sanctuary_EventScript_Intro_Text_20
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	special RemoveCameraObject
	applymovement 1, Zone0Sanctuary_Movement_Colress_ThirdShop
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_ThirdShop
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
	waitmovement 0
	msgbox Zone0Sanctuary_EventScript_Intro_Text_21
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	special RemoveCameraObject
	applymovement 1, Zone0Sanctuary_Movement_Colress_FourthShop
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_FourthShop
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
	waitmovement 0
	msgbox Zone0Sanctuary_EventScript_Intro_Text_22
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	special RemoveCameraObject
	applymovement 1, Zone0Sanctuary_Movement_Colress_ToWarp
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_ToWarp
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	msgbox Zone0Sanctuary_EventScript_Intro_Text_23
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	special RemoveCameraObject
	applymovement 1, Zone0Sanctuary_Movement_Colress_BackMid
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_BackMid
	waitmovement 0
	msgbox Zone0Sanctuary_EventScript_Intro_Text_24
	delay 96
	goto Zone0Sanctuary_EventScript_Intro_56

Zone0Sanctuary_EventScript_Intro_59:
	compare VAR_TEMP_2, 1
	goto_if_eq Zone0Sanctuary_EventScript_Intro_71
	call Zone0Sanctuary_EventScript_EnableNuzlocke
	goto Zone0Sanctuary_EventScript_Intro_24

Zone0Sanctuary_EventScript_Intro_62:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_11, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_77
	goto Zone0Sanctuary_EventScript_Intro_18

Zone0Sanctuary_EventScript_Intro_65:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_12, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_79
	goto Zone0Sanctuary_EventScript_Intro_18

Zone0Sanctuary_EventScript_Intro_69:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_25
	callnative GiveRandomStarter
	playfanfare MUS_OBTAIN_ITEM
	bufferleadmonspeciesname 0
	message Zone0Sanctuary_EventScript_Intro_Text_26
	waitmessage
	waitfanfare
	msgbox Zone0Sanctuary_EventScript_Intro_Text_27, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_85
Zone0Sanctuary_EventScript_Intro_84:
	goto Zone0Sanctuary_EventScript_EndIntro
	goto Zone0Sanctuary_EventScript_Intro_68

Zone0Sanctuary_EventScript_Intro_71:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_14, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_87
	goto Zone0Sanctuary_EventScript_Intro_25

Zone0Sanctuary_EventScript_Intro_74:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_15, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_89
	goto Zone0Sanctuary_EventScript_Intro_25

Zone0Sanctuary_EventScript_Intro_77:
	call Zone0Sanctuary_EventScript_EnableRandomizer
	goto Zone0Sanctuary_EventScript_Intro_17

Zone0Sanctuary_EventScript_Intro_79:
	call Zone0Sanctuary_EventScript_DisableRandomizer
	goto Zone0Sanctuary_EventScript_Intro_17

Zone0Sanctuary_EventScript_Intro_81:
	msgbox Zone0Sanctuary_EventScript_Intro_Text_28
	special ChooseStarter
	waitstate
	msgbox Zone0Sanctuary_EventScript_Intro_Text_29, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_92
Zone0Sanctuary_EventScript_Intro_91:
	goto Zone0Sanctuary_EventScript_EndIntro
	return

Zone0Sanctuary_EventScript_Intro_85:
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0Sanctuary_EventScript_Intro_84

Zone0Sanctuary_EventScript_Intro_87:
	call Zone0Sanctuary_EventScript_EnableNuzlocke
	goto Zone0Sanctuary_EventScript_Intro_24

Zone0Sanctuary_EventScript_Intro_89:
	call Zone0Sanctuary_EventScript_DisableNuzlocke
	goto Zone0Sanctuary_EventScript_Intro_24

Zone0Sanctuary_EventScript_Intro_92:
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0Sanctuary_EventScript_Intro_91


Zone0Sanctuary_EventScript_SetDefaultDifficulty::
	setflag FLAG_SETTINGS_FULL_SURVEIL
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_EventScript_SetDefaultDifficulty_Text_0, MSGBOX_DEFAULT
	waitse
	closemessage
	return


Zone0Sanctuary_EventScript_SetBrutalDifficulty::
	setflag FLAG_SETTINGS_BRUTAL
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_EventScript_SetBrutalDifficulty_Text_0, MSGBOX_DEFAULT
	waitse
	closemessage
	special ReverseHiddenItemFlags
	return


Zone0Sanctuary_EventScript_SetInfiniteDifficulty::
	setflag FLAG_SETTINGS_INFINITE
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_EventScript_SetInfiniteDifficulty_Text_0, MSGBOX_DEFAULT
	waitse
	closemessage
	return


Zone0Sanctuary_EventScript_DisableRandomizer::
	playse SE_PC_OFF
	msgbox Zone0Sanctuary_EventScript_DisableRandomizer_Text_0, MSGBOX_DEFAULT
	waitse
	closemessage
	return


Zone0Sanctuary_EventScript_EnableRandomizer::
	setflag FLAG_SETTINGS_RANDOMIZER
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_EventScript_EnableRandomizer_Text_0, MSGBOX_DEFAULT
	waitse
	closemessage
	return


Zone0Sanctuary_EventScript_DisableNuzlocke::
	playse SE_PC_OFF
	msgbox Zone0Sanctuary_EventScript_DisableNuzlocke_Text_0, MSGBOX_DEFAULT
	waitse
	closemessage
	return


Zone0Sanctuary_EventScript_EnableNuzlocke::
	callnative GlobalNuzlockeSet
	setflag FLAG_SETTINGS_NUZLOCKE
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_EventScript_EnableNuzlocke_Text_0, MSGBOX_DEFAULT
	waitse
	closemessage
	return


Zone0Sanctuary_EventScript_HandleStarterSelectionDefault::
	hidemonpic
	msgbox Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_0, MSGBOX_DEFAULT
	scrollingmultichoice 0, 0, 0, 5, FALSE
	switch VAR_RESULT
	case 0, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_3
	case 1, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_4
	case 2, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_5
	case 3, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_6
	case 4, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_7
	case 5, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_8
	case 6, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_9
	case 7, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_10
	case 8, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_11
	case 9, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_12
	case 10, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_13
	case 11, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_14
	case 12, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_15
	case 13, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_16
	case 14, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_17
	case 15, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_18
	case 16, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_19
	case 17, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_20
	case 18, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_21
	case 19, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_22
	case 20, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_23
	case 21, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_24
	case 22, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_25
	case 23, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_26
	case 24, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_27
Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1:
	compare VAR_TEMP_3, 0
	goto_if_eq Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_29
Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28:
	bufferspeciesname 0, VAR_TEMP_3
	showmonpic VAR_TEMP_3, 10, 3
	playmoncry VAR_TEMP_3, 0
	msgbox Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_2, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_32
Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31:
	givemon VAR_TEMP_3, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	message Zone0Sanctuary_EventScript_Intro_Text_26
	waitmessage
	waitfanfare
	msgbox Zone0Sanctuary_EventScript_Intro_Text_29, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_60
Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_59:
	goto Zone0Sanctuary_EventScript_EndIntro
	return

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_3:
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_4:
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_5:
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_6:
	setvar VAR_TEMP_3, SPECIES_CHIKORITA
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_7:
	setvar VAR_TEMP_3, SPECIES_CYNDAQUIL
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_8:
	setvar VAR_TEMP_3, SPECIES_TOTODILE
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_9:
	setvar VAR_TEMP_3, SPECIES_TREECKO
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_10:
	setvar VAR_TEMP_3, SPECIES_TORCHIC
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_11:
	setvar VAR_TEMP_3, SPECIES_MUDKIP
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_12:
	setvar VAR_TEMP_3, SPECIES_TURTWIG
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_13:
	setvar VAR_TEMP_3, SPECIES_CHIMCHAR
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_14:
	setvar VAR_TEMP_3, SPECIES_PIPLUP
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_15:
	setvar VAR_TEMP_3, SPECIES_SNIVY
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_16:
	setvar VAR_TEMP_3, SPECIES_TEPIG
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_17:
	setvar VAR_TEMP_3, SPECIES_OSHAWOTT
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_18:
	setvar VAR_TEMP_3, SPECIES_CHESPIN
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_19:
	setvar VAR_TEMP_3, SPECIES_FENNEKIN
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_20:
	setvar VAR_TEMP_3, SPECIES_FROAKIE
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_21:
	setvar VAR_TEMP_3, SPECIES_ROWLET
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_22:
	setvar VAR_TEMP_3, SPECIES_LITTEN
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_23:
	setvar VAR_TEMP_3, SPECIES_POPPLIO
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_24:
	setvar VAR_TEMP_3, SPECIES_GROOKEY
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_25:
	setvar VAR_TEMP_3, SPECIES_SCORBUNNY
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_26:
	setvar VAR_TEMP_3, SPECIES_SOBBLE
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_27:
	setvar VAR_TEMP_3, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_29:
	playse SE_CONTEST_PLACE
	message Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_1
	delay 96
	waitse
	waitmessage
	random 24
	switch VAR_RESULT
	case 0, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_35
	case 1, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_36
	case 2, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_37
	case 3, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_38
	case 4, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_39
	case 5, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_40
	case 6, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_41
	case 7, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_42
	case 8, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_43
	case 9, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_44
	case 10, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_45
	case 11, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_46
	case 12, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_47
	case 13, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_48
	case 14, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_49
	case 15, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_50
	case 16, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_51
	case 17, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_52
	case 18, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_53
	case 19, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_54
	case 20, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_55
	case 21, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_56
	case 22, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_57
	case 23, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_58
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_32:
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_35:
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_36:
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_37:
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_38:
	setvar VAR_TEMP_3, SPECIES_CHIKORITA
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_39:
	setvar VAR_TEMP_3, SPECIES_CYNDAQUIL
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_40:
	setvar VAR_TEMP_3, SPECIES_TOTODILE
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_41:
	setvar VAR_TEMP_3, SPECIES_TREECKO
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_42:
	setvar VAR_TEMP_3, SPECIES_TORCHIC
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_43:
	setvar VAR_TEMP_3, SPECIES_MUDKIP
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_44:
	setvar VAR_TEMP_3, SPECIES_TURTWIG
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_45:
	setvar VAR_TEMP_3, SPECIES_CHIMCHAR
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_46:
	setvar VAR_TEMP_3, SPECIES_PIPLUP
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_47:
	setvar VAR_TEMP_3, SPECIES_SNIVY
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_48:
	setvar VAR_TEMP_3, SPECIES_TEPIG
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_49:
	setvar VAR_TEMP_3, SPECIES_OSHAWOTT
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_50:
	setvar VAR_TEMP_3, SPECIES_CHESPIN
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_51:
	setvar VAR_TEMP_3, SPECIES_FENNEKIN
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_52:
	setvar VAR_TEMP_3, SPECIES_FROAKIE
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_53:
	setvar VAR_TEMP_3, SPECIES_ROWLET
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_54:
	setvar VAR_TEMP_3, SPECIES_LITTEN
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_55:
	setvar VAR_TEMP_3, SPECIES_POPPLIO
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_56:
	setvar VAR_TEMP_3, SPECIES_GROOKEY
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_57:
	setvar VAR_TEMP_3, SPECIES_SCORBUNNY
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_58:
	setvar VAR_TEMP_3, SPECIES_SOBBLE
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_60:
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_59


Zone0Sanctuary_EventScript_EndIntro::
	compare VAR_TEMP_0, 1
	goto_if_eq Zone0Sanctuary_EventScript_EndIntro_2
	goto_if_set FLAG_SETTINGS_INFINITE, Zone0Sanctuary_EventScript_EndIntro_10
	additem ITEM_POTION, 10
Zone0Sanctuary_EventScript_EndIntro_9:
	additem ITEM_POKE_BALL, 15
Zone0Sanctuary_EventScript_EndIntro_1:
	setflag FLAG_SETTINGS_EXP_ALL
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	special NewGameSetup
	initclock 1, 1
	callnative ReturnFromStartWallClock
	setvar VAR_ZONE, 1
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 1
	setflag FLAG_IS_DEBUGGING_SAVEFILE
	releaseall
	end

Zone0Sanctuary_EventScript_EndIntro_2:
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_0
	delay 96
	goto_if_set FLAG_SETTINGS_INFINITE, Zone0Sanctuary_EventScript_EndIntro_6
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_3, MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL, 15
	giveitem ITEM_POTION, 10
	playfanfare MUS_OBTAIN_ITEM
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_4, MSGBOX_DEFAULT
	waitfanfare
Zone0Sanctuary_EventScript_EndIntro_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_5, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 16
	goto Zone0Sanctuary_EventScript_EndIntro_1

Zone0Sanctuary_EventScript_EndIntro_6:
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_1, MSGBOX_DEFAULT
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
	playfanfare MUS_OBTAIN_ITEM
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_2, MSGBOX_DEFAULT
	waitfanfare
	goto Zone0Sanctuary_EventScript_EndIntro_5

Zone0Sanctuary_EventScript_EndIntro_10:
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
	goto Zone0Sanctuary_EventScript_EndIntro_9


Zone0Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone0Sanctuary_EventScript_NextZone_3
	case 1, Zone0Sanctuary_EventScript_NextZone_4
	case 2, Zone0Sanctuary_EventScript_NextZone_5
Zone0Sanctuary_EventScript_NextZone_1:
	goto EventScript_WhenUReady
	return

Zone0Sanctuary_EventScript_NextZone_3:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_NextZone_6
	goto Zone0Sanctuary_EventScript_NextZone_1

Zone0Sanctuary_EventScript_NextZone_4:
	goto EventScript_Settings
	goto Zone0Sanctuary_EventScript_NextZone_1

Zone0Sanctuary_EventScript_NextZone_5:
	goto EventScript_Documentation
	goto Zone0Sanctuary_EventScript_NextZone_1

Zone0Sanctuary_EventScript_NextZone_6:
	call EventScript_LeavingSetup
	warp MAP_ZONE1A, 255, 16, 28
	waitstate
	goto Zone0Sanctuary_EventScript_NextZone_1


Zone0Sanctuary_Movement_Colress_FirstShop:
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

Zone0Sanctuary_Movement_Player_FirstShop:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_16
	face_up
	step_end

Zone0Sanctuary_Movement_Colress_SecondShop:
	walk_up
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Zone0Sanctuary_Movement_Player_SecondShop:
	face_up
	delay_16
	delay_16
	delay_16
	face_right
	delay_16
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	delay_16
	face_up
	step_end

Zone0Sanctuary_Movement_Colress_ThirdShop:
	walk_up
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Zone0Sanctuary_Movement_Player_ThirdShop:
	face_up
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	delay_16
	face_up
	step_end

Zone0Sanctuary_Movement_Colress_FourthShop:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

Zone0Sanctuary_Movement_Player_FourthShop:
	face_up
	delay_16
	delay_16
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	face_up
	step_end

Zone0Sanctuary_Movement_Colress_ToWarp:
	walk_up
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Zone0Sanctuary_Movement_Player_ToWarp:
	delay_16
	delay_16
	face_up
	delay_16
	face_right
	delay_16
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Zone0Sanctuary_Movement_Colress_BackMid:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

Zone0Sanctuary_Movement_Player_BackMid:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

Zone0Sanctuary_EventScript_Intro_Text_0:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Ah. You've arrived.$"

Zone0Sanctuary_EventScript_Intro_Text_1:
	.string "Welcome to the\n{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GRAY}.\pI am your guide for braving the\nchallenges ahead.\pWould you like to listen to the tutorial?$"

Zone0Sanctuary_EventScript_Intro_Text_2:
	.string "The Pokémon Battle Labyrinth is\n"
	.string "comprised of many {COLOR RED}Zones{COLOR DARK_GRAY} you must\l"
	.string "traverse.\p"
	.string "In these Zones, you might encounter\n"
	.string "wild Pokémon, great treasures, tough\l"
	.string "trainers, and more.\p"
	.string "Each Zone typically contains a\n"
	.string "{COLOR RED}Leviathan{COLOR DARK_GRAY}, a boss that yields great\l"
	.string "rewards if defeated.\p"
	.string "At the end of each Zone and before the\n"
	.string "next Zone begins, you will find a\l"
	.string "{COLOR RED}Sanctuary{COLOR DARK_GRAY}, like this one, with shops to\l"
	.string "purchase supplies, heal your Pokémon,\l"
	.string "and other benefits.\p"
	.string "Once you enter a new Zone, you will not\n"
	.string "be able to access a Sanctuary until\l"
	.string "you exit that Zone.\p"
	.string "In order to win, you must progress\n"
	.string "through all Zones without losing a\l"
	.string "battle.$"

Zone0Sanctuary_EventScript_Intro_Text_3:
	.string "Would you like to listen to the\n"
	.string "difficulty options explanation?$"

Zone0Sanctuary_EventScript_Intro_Text_4:
	.string "There are three game difficulty\n"
	.string "options: {COLOR RED}Default{COLOR DARK_GRAY}, {COLOR RED}Brutal{COLOR DARK_GRAY}, and {COLOR RED}Infinite{COLOR DARK_GRAY}.$"

Zone0Sanctuary_EventScript_Intro_Text_5:
	.string "Which difficulty option would you like\n"
	.string "to play on?$"

Zone0Sanctuary_EventScript_Intro_Text_6:
	.string "Are you sure you want to play on\n"
	.string "{COLOR RED}Default{COLOR DARK_GRAY} difficulty?$"

Zone0Sanctuary_EventScript_Intro_Text_7:
	.string "Are you sure you want to play on {COLOR RED}Brutal{COLOR DARK_GRAY}\n"
	.string "difficulty?$"

Zone0Sanctuary_EventScript_Intro_Text_8:
	.string "Are you sure you want to play on\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} difficulty?$"

Zone0Sanctuary_EventScript_Intro_Text_9:
	.string "Would you like to listen to the game\n"
	.string "mode options explanations?$"

Zone0Sanctuary_EventScript_Intro_Text_10:
	.string "Would you like to disable the\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} game mode?$"

Zone0Sanctuary_EventScript_Intro_Text_11:
	.string "Are you sure you want to enable the\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY}?$"

Zone0Sanctuary_EventScript_Intro_Text_12:
	.string "Are you sure you want to disable the\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY}?$"

Zone0Sanctuary_EventScript_Intro_Text_13:
	.string "Would you like to disable the {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "game mode?$"

Zone0Sanctuary_EventScript_Intro_Text_14:
	.string "Are you sure you want to enable\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

Zone0Sanctuary_EventScript_Intro_Text_15:
	.string "Are you sure you want to disable\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

Zone0Sanctuary_EventScript_Intro_Text_16:
	.string "You have chosen to disable all optional\n"
	.string "game modes.$"

Zone0Sanctuary_EventScript_Intro_Text_17:
	.string "{COLOR RED}Vanilla{COLOR DARK_GRAY} mode enabled.$"

Zone0Sanctuary_EventScript_Intro_Text_18:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Allow me to show you each of\n"
	.string "the shops.$"

Zone0Sanctuary_EventScript_Intro_Text_19:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The top left shop is {COLOR RED}Tim's\n"
	.string "General Purpose Shop{COLOR DARK_GRAY}.\p"
	.string "Healing supplies, basic Pokéballs, and\n"
	.string "other common items are sold here.$"

Zone0Sanctuary_EventScript_Intro_Text_20:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The top right shop is {COLOR RED}Silph\n"
	.string "Unique Item Shop{COLOR DARK_GRAY}.\p"
	.string "They sell a variety of held items and\n"
	.string "single use items such as Pokéball\l"
	.string "variations, evolution items, Berries,\l"
	.string "and so on.$"

Zone0Sanctuary_EventScript_Intro_Text_21:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The bottom right shop is {COLOR RED}Joy's\n"
	.string "Healing Shop{COLOR DARK_GRAY}.\p"
	.string "At the low cost of ¥1000, they will heal\n"
	.string "your entire party.$"

Zone0Sanctuary_EventScript_Intro_Text_22:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The bottom left shop is\n"
	.string "{COLOR RED}Lelouch's Special Services Shop{COLOR DARK_GRAY}.\p"
	.string "They offer a range of Pokémon services,\n"
	.string "but only to customers who can pay the\l"
	.string "right price.$"

Zone0Sanctuary_EventScript_Intro_Text_23:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: In addition, you have access\n"
	.string "to {COLOR RED}Zone 0{COLOR DARK_GRAY}.\p"
	.string "If you would like to enter {COLOR RED}Zone 0{COLOR DARK_GRAY}, you\n"
	.string "can access it from any Sanctuary using\l"
	.string "this warp.$"

Zone0Sanctuary_EventScript_Intro_Text_24:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Our tour has finished.\p"
	.string "These shops will be available at every\n"
	.string "Sanctuary.\p"
	.string "As you progress through more Zones,\n"
	.string "more items and services will unlock.\p"
	.string "Also, it is highly recommended you stock\n"
	.string "up on any supplies before entering the\l"
	.string "next Zone.$"

Zone0Sanctuary_EventScript_Intro_Text_25:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Because the {COLOR RED}Randomizer{COLOR DARK_GRAY} is on,\n"
	.string "you get a random starter.$"

Zone0Sanctuary_EventScript_Intro_Text_26:
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone0Sanctuary_EventScript_Intro_Text_27:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: How about a nickname for your\n"
	.string "{STR_VAR_1}?$"

Zone0Sanctuary_EventScript_Intro_Text_28:
	.string "As a new challenger, you will receive a\n"
	.string "starter Pokémon.\p"
	.string "On Brutal difficulty, your choice is\n"
	.string "limited from the pool of possible\l"
	.string "starters to only three options.\p"
	.string "Choose carefully as these Pokémon are\n"
	.string "very rare.$"

Zone0Sanctuary_EventScript_Intro_Text_29:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: How about a nickname for this\n"
	.string "wonderful Pokémon?$"

Zone0Sanctuary_EventScript_Intro_Text_30:
	.string "As a new challenger, you will receive a\n"
	.string "starter Pokémon.\p"
	.string "You may have your choice of any of the\n"
	.string "generation 1-8 starter Pokémon.\p"
	.string "Choose carefully as these Pokémon are\n"
	.string "very rare.$"

Zone0Sanctuary_EventScript_SetDefaultDifficulty_Text_0:
	.string "{COLOR RED}Default{COLOR DARK_GRAY} difficulty enabled.$"

Zone0Sanctuary_EventScript_SetBrutalDifficulty_Text_0:
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} difficulty enabled. Good luck.$"

Zone0Sanctuary_EventScript_SetInfiniteDifficulty_Text_0:
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} difficulty enabled.$"

Zone0Sanctuary_EventScript_DisableRandomizer_Text_0:
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} game mode disabled.$"

Zone0Sanctuary_EventScript_EnableRandomizer_Text_0:
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} game mode enabled.$"

Zone0Sanctuary_EventScript_DisableNuzlocke_Text_0:
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode disabled.$"

Zone0Sanctuary_EventScript_EnableNuzlocke_Text_0:
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode enabled.$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_0:
	.string "Choose a starter Pokémon.$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_1:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Randomizing…$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_2:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "{STR_VAR_1}?$"

Zone0Sanctuary_EventScript_EndIntro_Text_0:
	.string "Excellent choice.\p"
	.string "You can also re-nickname your Pokémon\n"
	.string "from the party menu.$"

Zone0Sanctuary_EventScript_EndIntro_Text_1:
	.string "Because you are playing on the infinite\n"
	.string "difficulty, here are the items you'd\l"
	.string "need.\p"
	.string "You can get more by speaking to me\n"
	.string "about your difficulty setting.$"

Zone0Sanctuary_EventScript_EndIntro_Text_2:
	.string "Obtained Full Restores, Max Elixirs, and\n"
	.string "Max Repels!$"

Zone0Sanctuary_EventScript_EndIntro_Text_3:
	.string "I also have a beginner's kit with items\n"
	.string "and cash to get you started.$"

Zone0Sanctuary_EventScript_EndIntro_Text_4:
	.string "Received ¥5000!$"

Zone0Sanctuary_EventScript_EndIntro_Text_5:
	.string "Received the {COLOR RED}Pokédex{COLOR DARK_GRAY}!$"
