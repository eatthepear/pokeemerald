Zone0Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone0Sanctuary_OnFrame
	.byte 0

Zone0Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 0, Zone0Sanctuary_EventScript_Intro
	.2byte 0

Zone0Sanctuary_EventScript_Intro:
	lockall
	clearflag FLAG_NUZLOCKE_ON
	clearflag FLAG_IN_ZONE_NOT_SANCTUARY
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_PC_LANETTE
	call EventScript_MoveCameraUp
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 1
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	msgbox Zone0Sanctuary_Text_Colress_Hello, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Colress_WalkDown
	call EventScript_MoveCameraDown
	waitmovement 0
	msgbox Zone0Sanctuary_Text_Colress_Welcome, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone0Sanctuary_EventScript_DifficultySkipTutorial
	delay 96
	msgbox gText_Colress_Rules, MSGBOX_AUTOCLOSE
	delay 48
	msgbox gText_Colress_DontLose, MSGBOX_AUTOCLOSE
	delay 96
	goto Zone0Sanctuary_EventScript_PickDifficulty
	end

Zone0Sanctuary_EventScript_DifficultySkipTutorial:
	setvar VAR_ZONE, 2 @this is to skip dialogue
	msgbox Zone0Sanctuary_Text_Colress_PickDifficulty, MSGBOX_DEFAULT
	multichoice 2, 5, MULTI_DEFAULT_BRUTAL, 1
	switch VAR_RESULT
	case 0, Zone0Sanctuary_EventScript_DefaultSkip
	case 1, Zone0Sanctuary_EventScript_BrutalSkip
	end

Zone0Sanctuary_EventScript_DefaultSkip:
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_Text_Colress_DefaultDifficulty, MSGBOX_DEFAULT
	waitse
	closemessage
	goto Zone0Sanctuary_EventScript_RandomizerSkipTutorial
	end
	
Zone0Sanctuary_EventScript_BrutalSkip:
	setflag FLAG_BRUTAL_MODE_ON
	setflag FLAG_SMART_WILD_AI_ON
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_Text_Colress_BrutalDifficulty, MSGBOX_DEFAULT
	waitse
	closemessage
	goto Zone0Sanctuary_EventScript_RandomizerSkipTutorial
	end

Zone0Sanctuary_EventScript_RandomizerSkipTutorial:
	msgbox Zone0Sanctuary_Text_Colress_Randomizer, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone0Sanctuary_EventScript_SetRandomizerSkip
	goto Zone0Sanctuary_EventScript_NuzlockeSkipTutorial
	end

Zone0Sanctuary_EventScript_SetRandomizerSkip:
	setflag FLAG_RANDOMIZER_ON
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_Text_RandomizerEnabled, MSGBOX_DEFAULT
	waitse
	closemessage
	goto Zone0Sanctuary_EventScript_NuzlockeSkipTutorial
	end

Zone0Sanctuary_EventScript_NuzlockeSkipTutorial:
	msgbox Zone0Sanctuary_Text_Colress_Nuzlocke, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone0Sanctuary_EventScript_NuzlockeSkip
	call_if_unset FLAG_RANDOMIZER_ON, Zone0Sanctuary_EventScript_Vanilla
	goto Zone0Sanctuary_EventScript_ModesFinishedSkip
	end
	
Zone0Sanctuary_EventScript_NuzlockeSkip:
	callnative GlobalNuzlockeSet
	setflag FLAG_NUZLOCKE_ON
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_Text_Colress_NuzlockeMode, MSGBOX_DEFAULT
	waitse
	closemessage
	goto Zone0Sanctuary_EventScript_ModesFinishedSkip
	end

Zone0Sanctuary_EventScript_ModesFinishedSkip:
	goto_if_set FLAG_RANDOMIZER_ON, Zone0Sanctuary_EventScript_RandomizerStarter
	msgbox Zone0Sanctuary_Text_Colress_Starters, MSGBOX_AUTOCLOSE
	goto Zone0Sanctuary_EventScript_PickStarter
	end

Zone0Sanctuary_EventScript_PickDifficulty:
	msgbox Zone0Sanctuary_Text_Colress_DefaultBrutal, MSGBOX_AUTOCLOSE
	msgbox Zone0Sanctuary_Text_WouldLikeSkipDifficultyExplanation, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone0Sanctuary_EventScript_PickDifficultyMenu
	msgbox Zone0Sanctuary_Text_Colress_DefaultExplained, MSGBOX_AUTOCLOSE
	delay 16
	msgbox Zone0Sanctuary_Text_Colress_BrutalExplained, MSGBOX_AUTOCLOSE
	delay 96
	goto Zone0Sanctuary_EventScript_PickDifficultyMenu
	end

Zone0Sanctuary_EventScript_PickDifficultyMenu:
	msgbox Zone0Sanctuary_Text_Colress_PickDifficulty, MSGBOX_DEFAULT
	multichoice 2, 5, MULTI_DEFAULT_BRUTAL, 1
	switch VAR_RESULT
	case 0, Zone0Sanctuary_EventScript_Default
	case 1, Zone0Sanctuary_EventScript_Brutal
	end
	
Zone0Sanctuary_EventScript_Default:
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_Text_Colress_DefaultDifficulty, MSGBOX_DEFAULT
	waitse
	closemessage
	goto Zone0Sanctuary_EventScript_PickRandomizer
	end

Zone0Sanctuary_EventScript_Brutal:
	closemessage
	msgbox Zone0Sanctuary_Text_Colress_BrutalSure, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone0Sanctuary_EventScript_SetBrutal
	goto Zone0Sanctuary_EventScript_PickDifficulty
	end

Zone0Sanctuary_EventScript_SetBrutal:
	setflag FLAG_BRUTAL_MODE_ON
	setflag FLAG_SMART_WILD_AI_ON
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_Text_Colress_BrutalDifficulty, MSGBOX_DEFAULT
	waitse
	closemessage
	goto Zone0Sanctuary_EventScript_PickRandomizer
	end

Zone0Sanctuary_EventScript_PickRandomizer:
	msgbox Zone0Sanctuary_Text_Colress_RandomizerExplanation, MSGBOX_AUTOCLOSE
	msgbox Zone0Sanctuary_Text_Colress_Randomizer, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone0Sanctuary_EventScript_Randomizer
	goto Zone0Sanctuary_EventScript_PickNuzlocke
	end

Zone0Sanctuary_EventScript_Randomizer:
	msgbox Zone0Sanctuary_Text_Colress_RandomizerSure, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone0Sanctuary_EventScript_SetRandomizer
	goto Zone0Sanctuary_EventScript_PickRandomizer
	end

Zone0Sanctuary_EventScript_SetRandomizer:
	setflag FLAG_RANDOMIZER_ON
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_Text_RandomizerEnabled, MSGBOX_DEFAULT
	waitse
	closemessage
	goto Zone0Sanctuary_EventScript_PickNuzlocke
	end

Zone0Sanctuary_EventScript_PickNuzlocke:
	msgbox Zone0Sanctuary_Text_Colress_NuzlockeExplained, MSGBOX_AUTOCLOSE
	msgbox Zone0Sanctuary_Text_Colress_Nuzlocke, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone0Sanctuary_EventScript_Nuzlocke
	call_if_unset FLAG_RANDOMIZER_ON, Zone0Sanctuary_EventScript_Vanilla
	goto Zone0Sanctuary_EventScript_Tour
	end
	
Zone0Sanctuary_EventScript_Nuzlocke:
	msgbox Zone0Sanctuary_Text_Colress_NuzlockeSure, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone0Sanctuary_EventScript_SetNuzlocke
	goto Zone0Sanctuary_EventScript_PickNuzlocke
	end

Zone0Sanctuary_EventScript_SetNuzlocke:
	callnative GlobalNuzlockeSet
	setflag FLAG_NUZLOCKE_ON
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_Text_Colress_NuzlockeMode, MSGBOX_DEFAULT
	waitse
	closemessage
	goto Zone0Sanctuary_EventScript_Tour
	end

Zone0Sanctuary_EventScript_Vanilla:
	msgbox Zone0Sanctuary_Text_Colress_NoModesChosen, MSGBOX_AUTOCLOSE
	playse SE_PC_LOGIN
	msgbox Zone0Sanctuary_Text_Colress_VanillaMode, MSGBOX_DEFAULT
	waitse
	closemessage
	return

Zone0Sanctuary_EventScript_Tour:
	msgbox Zone0Sanctuary_Text_Colress_StartTour, MSGBOX_AUTOCLOSE
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
	msgbox Zone0Sanctuary_Text_Colress_General, MSGBOX_AUTOCLOSE
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
	msgbox Zone0Sanctuary_Text_Colress_Item, MSGBOX_AUTOCLOSE
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
	msgbox Zone0Sanctuary_Text_Colress_Healing, MSGBOX_AUTOCLOSE
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
	msgbox Zone0Sanctuary_Text_Colress_Services, MSGBOX_AUTOCLOSE
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
	msgbox Zone0Sanctuary_Text_Colress_Zone0Warp, MSGBOX_AUTOCLOSE
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
	msgbox Zone0Sanctuary_Text_Colress_TourDone, MSGBOX_AUTOCLOSE
	delay 96
	goto_if_set FLAG_RANDOMIZER_ON, Zone0Sanctuary_EventScript_RandomizerStarter
	msgbox Zone0Sanctuary_Text_Colress_Starters, MSGBOX_AUTOCLOSE
	goto Zone0Sanctuary_EventScript_PickStarter
	end
	
Zone0Sanctuary_Text_Colress_Zone0Warp:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: In addition, you will\n"
	.string "have access to {COLOR RED}Zone 0{COLOR DARK_GRAY}.\p"
	.string "If you would like to enter {COLOR RED}Zone 0{COLOR DARK_GRAY},\n"
	.string "you can access it from any\l"
	.string "Sanctuary using this warp.$"

Zone0Sanctuary_EventScript_PickStarter:
	hidemonpic
	msgbox Zone0Sanctuary_Text_ChooseAStarter, MSGBOX_DEFAULT
	scrollingmultichoice 0, 0, 0, 5, FALSE
	compare VAR_RESULT, 0
	call_if_eq Zone0Sanctuary_EventScript_Bulbasaur
	compare VAR_RESULT, 1
	call_if_eq Zone0Sanctuary_EventScript_Charmander
	compare VAR_RESULT, 2
	call_if_eq Zone0Sanctuary_EventScript_Squirtle
	compare VAR_RESULT, 3
	call_if_eq Zone0Sanctuary_EventScript_Chikorita
	compare VAR_RESULT, 4
	call_if_eq Zone0Sanctuary_EventScript_Cyndaquil
	compare VAR_RESULT, 5
	call_if_eq Zone0Sanctuary_EventScript_Totodile
	compare VAR_RESULT, 6
	call_if_eq Zone0Sanctuary_EventScript_Treecko
	compare VAR_RESULT, 7
	call_if_eq Zone0Sanctuary_EventScript_Torchic
	compare VAR_RESULT, 8
	call_if_eq Zone0Sanctuary_EventScript_Mudkip
	compare VAR_RESULT, 9
	call_if_eq Zone0Sanctuary_EventScript_Turtwig
	compare VAR_RESULT, 10
	call_if_eq Zone0Sanctuary_EventScript_Chimchar
	compare VAR_RESULT, 11
	call_if_eq Zone0Sanctuary_EventScript_Piplup
	compare VAR_RESULT, 12
	call_if_eq Zone0Sanctuary_EventScript_Snivy
	compare VAR_RESULT, 13
	call_if_eq Zone0Sanctuary_EventScript_Tepig
	compare VAR_RESULT, 14
	call_if_eq Zone0Sanctuary_EventScript_Oshawott
	compare VAR_RESULT, 15
	call_if_eq Zone0Sanctuary_EventScript_Chespin
	compare VAR_RESULT, 16
	call_if_eq Zone0Sanctuary_EventScript_Fennekin
	compare VAR_RESULT, 17
	call_if_eq Zone0Sanctuary_EventScript_Froakie
	compare VAR_RESULT, 18
	call_if_eq Zone0Sanctuary_EventScript_Rowlet
	compare VAR_RESULT, 19
	call_if_eq Zone0Sanctuary_EventScript_Litten
	compare VAR_RESULT, 20
	call_if_eq Zone0Sanctuary_EventScript_Popplio
	compare VAR_RESULT, 21
	call_if_eq Zone0Sanctuary_EventScript_Grookey
	compare VAR_RESULT, 22
	call_if_eq Zone0Sanctuary_EventScript_Scorbunny
	compare VAR_RESULT, 23
	call_if_eq Zone0Sanctuary_EventScript_Sobble
	compare VAR_RESULT, 24
	call_if_eq Zone0Sanctuary_EventScript_RandomStarter
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	message Zone0Sanctuary_Text_ReceivedStarter
	waitmessage
	waitfanfare
	msgbox Zone0Sanctuary_Text_Colress_HowBoutNickname, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone0Sanctuary_EventScript_NicknameStarter
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_Colress_EndIntro
	end

Zone0Sanctuary_Text_ChooseAStarter:
	.string "Choose a starter Pokémon.$"

Zone0Sanctuary_EventScript_NicknameStarter:
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0Sanctuary_EventScript_Colress_EndIntro
	end

Zone0Sanctuary_EventScript_RandomStarter:
	playse SE_CONTEST_PLACE
	message Zone0Sanctuary_Text_Colress_RandomStarter
	delay 96
	waitse
	waitmessage
	random 24
	compare VAR_RESULT, 0
	call_if_eq Zone0Sanctuary_EventScript_Bulbasaur
	compare VAR_RESULT, 1
	call_if_eq Zone0Sanctuary_EventScript_Charmander
	compare VAR_RESULT, 2
	call_if_eq Zone0Sanctuary_EventScript_Squirtle
	compare VAR_RESULT, 3
	call_if_eq Zone0Sanctuary_EventScript_Chikorita
	compare VAR_RESULT, 4
	call_if_eq Zone0Sanctuary_EventScript_Cyndaquil
	compare VAR_RESULT, 5
	call_if_eq Zone0Sanctuary_EventScript_Totodile
	compare VAR_RESULT, 6
	call_if_eq Zone0Sanctuary_EventScript_Treecko
	compare VAR_RESULT, 7
	call_if_eq Zone0Sanctuary_EventScript_Torchic
	compare VAR_RESULT, 8
	call_if_eq Zone0Sanctuary_EventScript_Mudkip
	compare VAR_RESULT, 9
	call_if_eq Zone0Sanctuary_EventScript_Turtwig
	compare VAR_RESULT, 10
	call_if_eq Zone0Sanctuary_EventScript_Chimchar
	compare VAR_RESULT, 11
	call_if_eq Zone0Sanctuary_EventScript_Piplup
	compare VAR_RESULT, 12
	call_if_eq Zone0Sanctuary_EventScript_Snivy
	compare VAR_RESULT, 13
	call_if_eq Zone0Sanctuary_EventScript_Tepig
	compare VAR_RESULT, 14
	call_if_eq Zone0Sanctuary_EventScript_Oshawott
	compare VAR_RESULT, 15
	call_if_eq Zone0Sanctuary_EventScript_Chespin
	compare VAR_RESULT, 16
	call_if_eq Zone0Sanctuary_EventScript_Fennekin
	compare VAR_RESULT, 17
	call_if_eq Zone0Sanctuary_EventScript_Froakie
	compare VAR_RESULT, 18
	call_if_eq Zone0Sanctuary_EventScript_Rowlet
	compare VAR_RESULT, 19
	call_if_eq Zone0Sanctuary_EventScript_Litten
	compare VAR_RESULT, 20
	call_if_eq Zone0Sanctuary_EventScript_Popplio
	compare VAR_RESULT, 21
	call_if_eq Zone0Sanctuary_EventScript_Grookey
	compare VAR_RESULT, 22
	call_if_eq Zone0Sanctuary_EventScript_Scorbunny
	compare VAR_RESULT, 23
	call_if_eq Zone0Sanctuary_EventScript_Sobble
	return

Zone0Sanctuary_Text_Colress_RandomStarter:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Randomizing...$"

Zone0Sanctuary_EventScript_Bulbasaur:
	bufferspeciesname 0, SPECIES_BULBASAUR
	showmonpic SPECIES_BULBASAUR, 10, 3
	playmoncry SPECIES_BULBASAUR, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterBulbasaur, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_BULBASAUR, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterBulbasaur:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Bulbasaur?$"

Zone0Sanctuary_EventScript_Charmander:
	bufferspeciesname 0, SPECIES_CHARMANDER
	showmonpic SPECIES_CHARMANDER, 10, 3
	playmoncry SPECIES_CHARMANDER, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterCharmander, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_CHARMANDER, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterCharmander:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Charmander?$"

Zone0Sanctuary_EventScript_Squirtle:
	bufferspeciesname 0, SPECIES_SQUIRTLE
	showmonpic SPECIES_SQUIRTLE, 10, 3
	playmoncry SPECIES_SQUIRTLE, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterSquirtle, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterSquirtle:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Squirtle?$"

Zone0Sanctuary_EventScript_Chikorita:
	bufferspeciesname 0, SPECIES_CHIKORITA
	showmonpic SPECIES_CHIKORITA, 10, 3
	playmoncry SPECIES_CHIKORITA, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterChikorita, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_CHIKORITA, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterChikorita:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Chikorita?$"

Zone0Sanctuary_EventScript_Cyndaquil:
	bufferspeciesname 0, SPECIES_CYNDAQUIL
	showmonpic SPECIES_CYNDAQUIL, 10, 3
	playmoncry SPECIES_CYNDAQUIL, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterCyndaquil, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_CYNDAQUIL, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterCyndaquil:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Cyndaquil?$"

Zone0Sanctuary_EventScript_Totodile:
	bufferspeciesname 0, SPECIES_TOTODILE
	showmonpic SPECIES_TOTODILE, 10, 3
	playmoncry SPECIES_TOTODILE, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterTotodile, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_TOTODILE, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterTotodile:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Totodile?$"

Zone0Sanctuary_EventScript_Treecko:
	bufferspeciesname 0, SPECIES_TREECKO
	showmonpic SPECIES_TREECKO, 10, 3
	playmoncry SPECIES_TREECKO, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterTreecko, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_TREECKO, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterTreecko:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Treecko?$"

Zone0Sanctuary_EventScript_Torchic:
	bufferspeciesname 0, SPECIES_TORCHIC
	showmonpic SPECIES_TORCHIC, 10, 3
	playmoncry SPECIES_TORCHIC, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterTorchic, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_TORCHIC, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterTorchic:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Torchic?$"

Zone0Sanctuary_EventScript_Mudkip:
	bufferspeciesname 0, SPECIES_MUDKIP
	showmonpic SPECIES_MUDKIP, 10, 3
	playmoncry SPECIES_MUDKIP, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterMudkip, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_MUDKIP, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterMudkip:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Mudkip?$"

Zone0Sanctuary_EventScript_Turtwig:
	bufferspeciesname 0, SPECIES_TURTWIG
	showmonpic SPECIES_TURTWIG, 10, 3
	playmoncry SPECIES_TURTWIG, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterTurtwig, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_TURTWIG, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterTurtwig:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Turtwig?$"

Zone0Sanctuary_EventScript_Chimchar:
	bufferspeciesname 0, SPECIES_CHIMCHAR
	showmonpic SPECIES_CHIMCHAR, 10, 3
	playmoncry SPECIES_CHIMCHAR, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterChimchar, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_CHIMCHAR, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterChimchar:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Chimchar?$"

Zone0Sanctuary_EventScript_Piplup:
	bufferspeciesname 0, SPECIES_PIPLUP
	showmonpic SPECIES_PIPLUP, 10, 3
	playmoncry SPECIES_PIPLUP, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterPiplup, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_PIPLUP, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterPiplup:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Piplup?$"

Zone0Sanctuary_EventScript_Snivy:
	bufferspeciesname 0, SPECIES_SNIVY
	showmonpic SPECIES_SNIVY, 10, 3
	playmoncry SPECIES_SNIVY, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterSnivy, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_SNIVY, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterSnivy:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Snivy?$"

Zone0Sanctuary_EventScript_Tepig:
	bufferspeciesname 0, SPECIES_TEPIG
	showmonpic SPECIES_TEPIG, 10, 3
	playmoncry SPECIES_TEPIG, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterTepig, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_TEPIG, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterTepig:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Tepig?$"

Zone0Sanctuary_EventScript_Oshawott:
	bufferspeciesname 0, SPECIES_OSHAWOTT
	showmonpic SPECIES_OSHAWOTT, 10, 3
	playmoncry SPECIES_OSHAWOTT, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterOshawott, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_OSHAWOTT, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterOshawott:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Oshawott?$"

Zone0Sanctuary_EventScript_Chespin:
	bufferspeciesname 0, SPECIES_CHESPIN
	showmonpic SPECIES_CHESPIN, 10, 3
	playmoncry SPECIES_CHESPIN, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterChespin, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_CHESPIN, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterChespin:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Chespin?$"

Zone0Sanctuary_EventScript_Fennekin:
	bufferspeciesname 0, SPECIES_FENNEKIN
	showmonpic SPECIES_FENNEKIN, 10, 3
	playmoncry SPECIES_FENNEKIN, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterFennekin, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_FENNEKIN, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterFennekin:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Fennekin?$"

Zone0Sanctuary_EventScript_Froakie:
	bufferspeciesname 0, SPECIES_FROAKIE
	showmonpic SPECIES_FROAKIE, 10, 3
	playmoncry SPECIES_FROAKIE, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterFroakie, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_FROAKIE, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterFroakie:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Froakie?$"

Zone0Sanctuary_EventScript_Rowlet:
	bufferspeciesname 0, SPECIES_ROWLET
	showmonpic SPECIES_ROWLET, 10, 3
	playmoncry SPECIES_ROWLET, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterRowlet, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_ROWLET, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterRowlet:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Rowlet?$"

Zone0Sanctuary_EventScript_Litten:
	bufferspeciesname 0, SPECIES_LITTEN
	showmonpic SPECIES_LITTEN, 10, 3
	playmoncry SPECIES_LITTEN, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterLitten, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_LITTEN, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterLitten:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Litten?$"

Zone0Sanctuary_EventScript_Popplio:
	bufferspeciesname 0, SPECIES_POPPLIO
	showmonpic SPECIES_POPPLIO, 10, 3
	playmoncry SPECIES_POPPLIO, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterPopplio, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_POPPLIO, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterPopplio:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Popplio?$"

Zone0Sanctuary_EventScript_Grookey:
	bufferspeciesname 0, SPECIES_GROOKEY
	showmonpic SPECIES_GROOKEY, 10, 3
	playmoncry SPECIES_GROOKEY, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterGrookey, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_GROOKEY, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterGrookey:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Grookey?$"

Zone0Sanctuary_EventScript_Scorbunny:
	bufferspeciesname 0, SPECIES_SCORBUNNY
	showmonpic SPECIES_SCORBUNNY, 10, 3
	playmoncry SPECIES_SCORBUNNY, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterScorbunny, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_SCORBUNNY, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterScorbunny:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Scorbunny?$"

Zone0Sanctuary_EventScript_Sobble:
	bufferspeciesname 0, SPECIES_SOBBLE
	showmonpic SPECIES_SOBBLE, 10, 3
	playmoncry SPECIES_SOBBLE, 0
	msgbox Zone0Sanctuary_Text_Colress_YouSureStarterSobble, MSGBOX_YESNO
	waitmoncry
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_PickStarter
	givemon SPECIES_SOBBLE, 5, ITEM_NONE
	return

Zone0Sanctuary_Text_Colress_YouSureStarterSobble:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "Sobble?$"

Zone0Sanctuary_EventScript_RandomizerStarter:
	msgbox Zone0Sanctuary_Text_Colress_RandomizerStarter, MSGBOX_AUTOCLOSE
	callnative GiveRandomStarter
	playfanfare MUS_OBTAIN_ITEM
	bufferleadmonspeciesname 0
	message Zone0Sanctuary_Text_ReceivedStarter
	waitmessage
	waitfanfare
	msgbox Zone0Sanctuary_Text_Colress_HowBoutNickname, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone0Sanctuary_EventScript_NicknameStarter
	goto_if_eq VAR_RESULT, NO, Zone0Sanctuary_EventScript_Colress_EndIntro
	end

Zone0Sanctuary_Text_Colress_RandomizerStarter:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Because the {COLOR RED}Randomizer{COLOR DARK_GRAY} is\n"
	.string "on, you get a random starter.$"

Zone0Sanctuary_EventScript_Colress_EndIntro:
	compare VAR_ZONE, 2
	goto_if_eq Zone0Sanctuary_EventScript_Colress_EndIntroSkip
	msgbox Zone0Sanctuary_Text_Colress_NiceChoice, MSGBOX_AUTOCLOSE
	delay 96
	msgbox Zone0Sanctuary_Text_Colress_Freebies, MSGBOX_AUTOCLOSE
	giveitem ITEM_POKE_BALL, 30
	giveitem ITEM_POTION, 10
	giveitem ITEM_EXP_SHARE, 1
	playfanfare MUS_OBTAIN_ITEM
	msgbox Zone0Sanctuary_Text_ReceivedMoney, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	msgbox Zone0Sanctuary_Text_ReceivedPokedex, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	special SetUnlockedPokedexFlags
	callnative SetStarterFatefulEncounter
	callnative StartSetModeAndPokedex
	initclock 1, 1
	callnative ReturnFromStartWallClock
	delay 96
	setvar VAR_ZONE, 1
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 1
	releaseall
	end

Zone0Sanctuary_EventScript_Colress_EndIntroSkip:
	additem ITEM_POKE_BALL, 30
	additem ITEM_POTION, 10
	additem ITEM_EXP_SHARE, 1
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	special SetUnlockedPokedexFlags
	callnative SetStarterFatefulEncounter
	callnative StartSetModeAndPokedex
	initclock 1, 1
	callnative ReturnFromStartWallClock
	setvar VAR_ZONE, 1
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 1
	releaseall
	end

Zone0Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone0Sanctuary_EventScript_NextZoneCheck
	case 1, EventScript_Advice
	case 2, EventScript_Settings
	case 3, EventScript_WhenUReady
	case MULTI_B_PRESSED, EventScript_WhenUReady
	end

Zone0Sanctuary_EventScript_NextZoneCheck:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone0Sanctuary_EventScript_Leave
	goto EventScript_WhenUReady
	end

Zone0Sanctuary_EventScript_Leave:
	call EventScript_LeavingSetup
	setflag FLAG_IN_ZONE_NOT_SANCTUARY
	warp MAP_ZONE1A, 255, 16, 28
	end

Zone0Sanctuary_Text_Colress_Hello:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Ah. Welcome, trainer.$"

Zone0Sanctuary_Text_Colress_Welcome:
	.string "Welcome to the\n"
	.string "{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GRAY}!\p"
	.string "I am here to aid challengers who\n"
	.string "might attempt to brave the\l"
	.string "trials ahead.\p"
	.string "Would you like to skip the\n"
	.string "tutorial?$"

Zone0Sanctuary_Text_Colress_DefaultBrutal:
	.string "There are two game difficulty options:\n"
	.string "{COLOR RED}Default{COLOR DARK_GRAY} and {COLOR RED}Brutal{COLOR DARK_GRAY}.$"

Zone0Sanctuary_Text_WouldLikeSkipDifficultyExplanation:
	.string "Would you like to skip the difficulty\n"
	.string "explanation?$"

Zone0Sanctuary_Text_Colress_DefaultExplained:
	.string "{COLOR RED}Default{COLOR DARK_GRAY} is the easier of the two\n"
	.string "difficulty options.\p"
	.string "It is recommended for any first\n"
	.string "playthroughs.$"

Zone0Sanctuary_Text_Colress_BrutalExplained:
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} is the harder of the\n"
	.string "two difficulty options.\p"
	.string "All special opponents are far more\n"
	.string "challenging.\p"
	.string "In addition, there are a number of\n"
	.string "rules implemented to make this mode\l"
	.string "even more difficult.\p"
	.string "Defeating all trainers is required\n"
	.string "to progress to the Sanctuary.\p"
	.string "Items can't be used in battle.\p"
	.string "You cannot turn off Set mode.\p"
	.string "Your Pokémon cannot gain EVs.\p"
	.string "Trainer battles give less money.\p"
	.string "You cannot farm items from wild\n"
	.string "Pokémon or other means.\p"
	.string "The Daycare cannot be used.\p"
	.string "Many helpful NPCs are unavailable.\p"
	.string "Some moves use more PP than normal\n"
	.string "and opponents do not use PP.\n"
	.string "If you play on {COLOR RED}Brutal{COLOR DARK_GRAY}, you can\n"
	.string "change to {COLOR RED}Default{COLOR DARK_GRAY} at any point by\l"
	.string "speaking to me.$"
	.string "It is not recommended to play on\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} unless you are familiar with\l"
	.string "{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GRAY} already.$"

Zone0Sanctuary_Text_Colress_PickDifficulty:
	.string "Which difficulty would you like to\n"
	.string "play on?$"

Zone0Sanctuary_Text_Colress_DefaultSure:
	.string "{COLOR RED}Default{COLOR DARK_GRAY} difficulty? Are you sure?\n"
	.string "You won't be able to switch later.$"

Zone0Sanctuary_Text_Colress_BrutalSure:
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} difficulty? Are you sure?$"

Zone0Sanctuary_Text_Colress_DefaultDifficulty:
	.string "{COLOR RED}Default{COLOR DARK_GRAY} difficulty enabled.\n"
	.string "Good luck.$"

Zone0Sanctuary_Text_Colress_BrutalDifficulty:
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} difficulty enabled.\n"
	.string "Good luck.$"

Zone0Sanctuary_Text_Colress_ModeExplanation:
	.string "{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GRAY} offers\n"
	.string "optional game modes.\p"
	.string "If you do not choose any of them,\n"
	.string "you will play on the\l"
	.string "{COLOR RED}Vanilla{COLOR DARK_GRAY} game mode,\l"
	.string "which adds no extra modifications.$"

Zone0Sanctuary_Text_Colress_RandomizerExplanation:
	.string "The {COLOR RED}Randomizer{COLOR DARK_GRAY} game mode randomizes\n"
	.string "wild encounters and gift Pokémon,\l"
	.string "including your starter.\p"
	.string "Trainer Pokémon are left unchanged.\p"
	.string "Note the {COLOR RED}Randomizer{COLOR DARK_GRAY} game mode\n"
	.string "cannot be turned off.$"

Zone0Sanctuary_Text_Colress_Randomizer:
	.string "Would you like to enable the\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} game mode?$"

Zone0Sanctuary_Text_Colress_RandomizerSure:
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} on? Are you sure?\n"
	.string "You won't be able to switch later.$"

Zone0Sanctuary_Text_RandomizerEnabled:
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} game mode enabled.$"

Zone0Sanctuary_Text_Colress_NuzlockeExplained:
	.string "The {COLOR RED}Nuzlocke{COLOR DARK_GRAY} game mode completely\n"
	.string "implements all standard Nuzlocke\l"
	.string "rules, such as permanent death and\l"
	.string "capture restrictions.\p"
	.string "It comes with Species Clause and\n"
	.string "Shiny Clause.\p"
	.string "You can turn off {COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode at\n"
	.string "any point by speaking to me.\p"
	.string "It is not recommended to play\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode unless you are\l"
	.string "familiar with Nuzlockes already.$"

Zone0Sanctuary_Text_Colress_Nuzlocke:
	.string "Would you like to enable the\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} game mode?$"

Zone0Sanctuary_Text_Colress_NuzlockeSure:
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode? Are you sure?$"

Zone0Sanctuary_Text_Colress_NuzlockeMode:
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode enabled. Good luck.$"

Zone0Sanctuary_Text_Colress_NoModesChosen:
	.string "You have chosen to disable all\n"
	.string "optional game modes.$"

Zone0Sanctuary_Text_Colress_VanillaMode:
	.string "{COLOR RED}Vanilla{COLOR DARK_GRAY} mode enabled. Good luck.$"

Zone0Sanctuary_Text_Colress_StartTour:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Allow me to show you each\n"
	.string "of the shops.$"

Zone0Sanctuary_Text_Colress_General:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The top left shop is\n"
	.string "{COLOR RED}Tim's General Purpose Shop{COLOR DARK_GRAY}.\p"
	.string "Healing supplies, basic Pokéballs,\n"
	.string "Repels, and X items are sold here.$"

Zone0Sanctuary_Text_Colress_Item:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The top right shop is \n"
	.string "{COLOR RED}Silph Unique Item Shop{COLOR DARK_GRAY}.\p"
	.string "They sell Pokéball variations,\n"
	.string "Evolution items, held items,\l"
	.string "and other various trinkets.$"

Zone0Sanctuary_Text_Colress_Services:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The bottom left shop is\n"
	.string "{COLOR RED}Lelouch's Special Services Shop{COLOR DARK_GRAY}.\p"
	.string "They offer a variety of Pokémon\n"
	.string "services, but only to customers who\l"
	.string "can pay the right price.$"

Zone0Sanctuary_Text_Colress_Healing:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The bottom right shop is\n"
	.string "{COLOR RED}Joy's Healing Shop{COLOR DARK_GRAY}.\p"
	.string "For ¥1000, they will heal your\n"
	.string "entire party.$"

Zone0Sanctuary_Text_Colress_TourDone:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Our tour has finished.\p"
	.string "These four shops will be available\n"
	.string "at every Sanctuary.\p"
	.string "As you progress through more Zones,\n"
	.string "more items and services will unlock.\p"
	.string "Also, it is highly recommended you\n"
	.string "stock up on any supplies before\l"
	.string "entering the next Zone.$"

Zone0Sanctuary_Text_Colress_Starters:
	.string "As a new challenger, you will\n"
	.string "receive a starter Pokémon.\p"
	.string "You may have your choice of any of\n"
	.string "the generation 1-8 starter Pokémon.\p"
	.string "Choose carefully as these Pokémon\n"
	.string "are very rare.$"

Zone0Sanctuary_Text_ReceivedStarter:
	.string "{PLAYER} received the {STR_VAR_1}!$"

Zone0Sanctuary_Text_Colress_HowBoutNickname:
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: How about a nickname\n"
	.string "for this wonderful Pokémon?$"

Zone0Sanctuary_Text_Colress_NiceChoice:
	.string "Excellent choice.\p"
	.string "You can also re-nickname your\n"
	.string "Pokémon from the party menu.$"

Zone0Sanctuary_Text_Colress_Freebies:
	.string "I also have a beginner's kit with\n"
	.string "items and cash to get you started.$"

Zone0Sanctuary_Text_ReceivedMoney:
	.string "Received ¥5000!$"

Zone0Sanctuary_Text_ReceivedPokedex:
	.string "Received the {COLOR RED}Pokédex{COLOR DARK_GRAY}!$"

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
