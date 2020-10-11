Entrance_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Entrance_OnFrame
	.byte 0

Entrance_OnFrame:
	map_script_2 VAR_ZONE, 0, Entrance_EventScript_Intro
	.2byte 0

Entrance_EventScript_Intro:
	lockall
	clearflag FLAG_NUZLOCKE_ON
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_POKEMON_GET
	special SetUnlockedPokedexFlags
	call EventScript_MoveCameraUp
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	msgbox Entrance_Text_Colress_Hello, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Colress_WalkDown
	call EventScript_MoveCameraDown
	waitmovement 0
	msgbox Entrance_Text_Colress_Welcome, MSGBOX_AUTOCLOSE
	delay 96
	msgbox gText_Colress_Rules, MSGBOX_AUTOCLOSE
	delay 48
	msgbox gText_Colress_DontLose, MSGBOX_AUTOCLOSE
	delay 96
	goto Entrance_EventScript_PickMode
	end

Entrance_EventScript_PickMode:
	msgbox Entrance_Text_Colress_VanillaNuzlocke, MSGBOX_AUTOCLOSE
	delay 16
	msgbox Entrance_Text_Colress_VanillaExplained, MSGBOX_AUTOCLOSE
	delay 16
	msgbox Entrance_Text_Colress_NuzlockeExplained, MSGBOX_AUTOCLOSE
	delay 96
	msgbox Entrance_Text_Colress_PickMode, MSGBOX_DEFAULT
	multichoice 2, 5, MULTI_VANILLA_NUZLOCKE, 1
	switch VAR_RESULT
	case 0, Entrance_EventScript_Vanilla
	case 1, Entrance_EventScript_Nuzlocke
	end
	
Entrance_EventScript_Vanilla:
	closemessage
	msgbox Entrance_Text_Colress_VanillaSure, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Entrance_EventScript_SetVanilla
	goto Entrance_EventScript_PickMode
	end

Entrance_EventScript_SetVanilla:
	msgbox Entrance_Text_Colress_VanillaMode, MSGBOX_AUTOCLOSE
	goto Entrance_EventScript_Tour
	end
	
Entrance_EventScript_Nuzlocke:
	closemessage
	msgbox Entrance_Text_Colress_NuzlockeSure, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Entrance_EventScript_SetNuzlocke
	goto Entrance_EventScript_PickMode
	end

Entrance_EventScript_SetNuzlocke:
	callnative GlobalNuzlockeSet
	setflag FLAG_NUZLOCKE_ON
	msgbox Entrance_Text_Colress_NuzlockeMode, MSGBOX_AUTOCLOSE
	goto Entrance_EventScript_Tour
	end
	
Entrance_EventScript_Tour:
	msgbox Entrance_Text_Colress_StartTour, MSGBOX_AUTOCLOSE
	applymovement 1, Entrance_Movement_Colress_FirstShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_FirstShop
	waitmovement 0
	call EventScript_MoveCameraUp
	msgbox Entrance_Text_Colress_General, MSGBOX_AUTOCLOSE
	call EventScript_MoveCameraDown
	applymovement 1, Entrance_Movement_Colress_SecondShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_SecondShop
	waitmovement 0
	call EventScript_MoveCameraUp
	msgbox Entrance_Text_Colress_Item, MSGBOX_AUTOCLOSE
	call EventScript_MoveCameraDown
	applymovement 1, Entrance_Movement_Colress_ThirdShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_ThirdShop
	waitmovement 0
	call EventScript_MoveCameraUp
	msgbox Entrance_Text_Colress_Services, MSGBOX_AUTOCLOSE
	call EventScript_MoveCameraDown
	applymovement 1, Entrance_Movement_Colress_FourthShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_FourthShop
	waitmovement 0
	call EventScript_MoveCameraUp
	msgbox Entrance_Text_Colress_Healing, MSGBOX_AUTOCLOSE
	call_if_set FLAG_NUZLOCKE_ON, Entrance_EventScript_NuzlockeDialog
	call EventScript_MoveCameraDown
	applymovement 1, Entrance_Movement_Colress_BackMid
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_BackMid
	waitmovement 0
	msgbox Entrance_Text_Colress_TourDone, MSGBOX_AUTOCLOSE
	delay 96
	goto Entrance_EventScript_PickStarter

Entrance_EventScript_PickStarter:
	hidemonpic
	msgbox Entrance_Text_Colress_Starters, MSGBOX_AUTOCLOSE
	scrollingmultichoice 0, 0, 0, 4, FALSE
	compare VAR_RESULT, 0
	call_if_eq Entrance_EventScript_BULBASAUR
	compare VAR_RESULT, 1
	call_if_eq Entrance_EventScript_CHARMANDER
	compare VAR_RESULT, 2
	call_if_eq Entrance_EventScript_SQUIRTLE
	compare VAR_RESULT, 3
	call_if_eq Entrance_EventScript_PIKACHU
	compare VAR_RESULT, 4
	call_if_eq Entrance_EventScript_EEVEE
	compare VAR_RESULT, 5
	call_if_eq Entrance_EventScript_CHIKORITA
	compare VAR_RESULT, 6
	call_if_eq Entrance_EventScript_CYNDAQUIL
	compare VAR_RESULT, 7
	call_if_eq Entrance_EventScript_TOTODILE
	compare VAR_RESULT, 8
	call_if_eq Entrance_EventScript_TREECKO
	compare VAR_RESULT, 9
	call_if_eq Entrance_EventScript_TORCHIC
	compare VAR_RESULT, 10
	call_if_eq Entrance_EventScript_MUDKIP
	compare VAR_RESULT, 11
	call_if_eq Entrance_EventScript_TURTWIG
	compare VAR_RESULT, 12
	call_if_eq Entrance_EventScript_CHIMCHAR
	compare VAR_RESULT, 13
	call_if_eq Entrance_EventScript_MUNCHLAX
	compare VAR_RESULT, 14
	call_if_eq Entrance_EventScript_RIOLU
	compare VAR_RESULT, 15
	call_if_eq Entrance_EventScript_PIPLUP
	compare VAR_RESULT, 16
	call_if_eq Entrance_EventScript_SNIVY
	compare VAR_RESULT, 17
	call_if_eq Entrance_EventScript_TEPIG
	compare VAR_RESULT, 18
	call_if_eq Entrance_EventScript_OSHAWOTT
	compare VAR_RESULT, 19
	call_if_eq Entrance_EventScript_CHESPIN
	compare VAR_RESULT, 20
	call_if_eq Entrance_EventScript_FENNEKIN
	compare VAR_RESULT, 21
	call_if_eq Entrance_EventScript_FROAKIE
	compare VAR_RESULT, 22
	call_if_eq Entrance_EventScript_ROWLET
	compare VAR_RESULT, 23
	call_if_eq Entrance_EventScript_LITTEN
	compare VAR_RESULT, 24
	call_if_eq Entrance_EventScript_POPPLIO
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	message Entrance_Text_ReceivedStarter
	waitmessage
	waitfanfare
	msgbox Entrance_Text_Colress_HowBoutNickname, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Entrance_EventScript_NicknameStarter
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_Colress_EndIntro
	end

Entrance_EventScript_NicknameStarter:
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto Entrance_EventScript_Colress_EndIntro
	end

Entrance_EventScript_BULBASAUR:
	bufferspeciesname 0, SPECIES_BULBASAUR
	showmonpic SPECIES_BULBASAUR, 10, 3
	playmoncry SPECIES_BULBASAUR, 0
	msgbox Entrance_Text_Colress_YouSureStarterBULBASAUR, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_BULBASAUR, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterBULBASAUR:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Bulbasaur?$"

Entrance_EventScript_CHARMANDER:
	bufferspeciesname 0, SPECIES_CHARMANDER
	showmonpic SPECIES_CHARMANDER, 10, 3
	playmoncry SPECIES_CHARMANDER, 0
	msgbox Entrance_Text_Colress_YouSureStarterCHARMANDER, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_CHARMANDER, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterCHARMANDER:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Charmander?$"

Entrance_EventScript_SQUIRTLE:
	bufferspeciesname 0, SPECIES_SQUIRTLE
	showmonpic SPECIES_SQUIRTLE, 10, 3
	playmoncry SPECIES_SQUIRTLE, 0
	msgbox Entrance_Text_Colress_YouSureStarterSQUIRTLE, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterSQUIRTLE:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Squirtle?$"

Entrance_EventScript_PIKACHU:
	bufferspeciesname 0, SPECIES_PIKACHU
	showmonpic SPECIES_PIKACHU, 10, 3
	playmoncry SPECIES_PIKACHU, 0
	msgbox Entrance_Text_Colress_YouSureStarterPIKACHU, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_PIKACHU, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterPIKACHU:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Pikachu?$"

Entrance_EventScript_EEVEE:
	bufferspeciesname 0, SPECIES_EEVEE
	showmonpic SPECIES_EEVEE, 10, 3
	playmoncry SPECIES_EEVEE, 0
	msgbox Entrance_Text_Colress_YouSureStarterEEVEE, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_EEVEE, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterEEVEE:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Eevee?$"

Entrance_EventScript_CHIKORITA:
	bufferspeciesname 0, SPECIES_CHIKORITA
	showmonpic SPECIES_CHIKORITA, 10, 3
	playmoncry SPECIES_CHIKORITA, 0
	msgbox Entrance_Text_Colress_YouSureStarterCHIKORITA, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_CHIKORITA, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterCHIKORITA:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Chikorita?$"

Entrance_EventScript_CYNDAQUIL:
	bufferspeciesname 0, SPECIES_CYNDAQUIL
	showmonpic SPECIES_CYNDAQUIL, 10, 3
	playmoncry SPECIES_CYNDAQUIL, 0
	msgbox Entrance_Text_Colress_YouSureStarterCYNDAQUIL, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_CYNDAQUIL, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterCYNDAQUIL:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Cyndaquil?$"

Entrance_EventScript_TOTODILE:
	bufferspeciesname 0, SPECIES_TOTODILE
	showmonpic SPECIES_TOTODILE, 10, 3
	playmoncry SPECIES_TOTODILE, 0
	msgbox Entrance_Text_Colress_YouSureStarterTOTODILE, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_TOTODILE, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterTOTODILE:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Totodile?$"

Entrance_EventScript_TREECKO:
	bufferspeciesname 0, SPECIES_TREECKO
	showmonpic SPECIES_TREECKO, 10, 3
	playmoncry SPECIES_TREECKO, 0
	msgbox Entrance_Text_Colress_YouSureStarterTREECKO, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_TREECKO, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterTREECKO:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Treecko?$"

Entrance_EventScript_TORCHIC:
	bufferspeciesname 0, SPECIES_TORCHIC
	showmonpic SPECIES_TORCHIC, 10, 3
	playmoncry SPECIES_TORCHIC, 0
	msgbox Entrance_Text_Colress_YouSureStarterTORCHIC, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_TORCHIC, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterTORCHIC:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Torchic?$"

Entrance_EventScript_MUDKIP:
	bufferspeciesname 0, SPECIES_MUDKIP
	showmonpic SPECIES_MUDKIP, 10, 3
	playmoncry SPECIES_MUDKIP, 0
	msgbox Entrance_Text_Colress_YouSureStarterMUDKIP, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_MUDKIP, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterMUDKIP:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Mudkip?$"

Entrance_EventScript_TURTWIG:
	bufferspeciesname 0, SPECIES_TURTWIG
	showmonpic SPECIES_TURTWIG, 10, 3
	playmoncry SPECIES_TURTWIG, 0
	msgbox Entrance_Text_Colress_YouSureStarterTURTWIG, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_TURTWIG, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterTURTWIG:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Turtwig?$"

Entrance_EventScript_CHIMCHAR:
	bufferspeciesname 0, SPECIES_CHIMCHAR
	showmonpic SPECIES_CHIMCHAR, 10, 3
	playmoncry SPECIES_CHIMCHAR, 0
	msgbox Entrance_Text_Colress_YouSureStarterCHIMCHAR, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_CHIMCHAR, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterCHIMCHAR:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Chimchar?$"

Entrance_EventScript_PIPLUP:
	bufferspeciesname 0, SPECIES_PIPLUP
	showmonpic SPECIES_PIPLUP, 10, 3
	playmoncry SPECIES_PIPLUP, 0
	msgbox Entrance_Text_Colress_YouSureStarterPIPLUP, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_PIPLUP, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterPIPLUP:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Piplup?$"

Entrance_EventScript_MUNCHLAX:
	bufferspeciesname 0, SPECIES_MUNCHLAX
	showmonpic SPECIES_MUNCHLAX, 10, 3
	playmoncry SPECIES_MUNCHLAX, 0
	msgbox Entrance_Text_Colress_YouSureStarterMUNCHLAX, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_MUNCHLAX, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterMUNCHLAX:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Munchlax?$"

Entrance_EventScript_RIOLU:
	bufferspeciesname 0, SPECIES_RIOLU
	showmonpic SPECIES_RIOLU, 10, 3
	playmoncry SPECIES_RIOLU, 0
	msgbox Entrance_Text_Colress_YouSureStarterRIOLU, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_RIOLU, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterRIOLU:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Riolu?$"

Entrance_EventScript_SNIVY:
	bufferspeciesname 0, SPECIES_SNIVY
	showmonpic SPECIES_SNIVY, 10, 3
	playmoncry SPECIES_SNIVY, 0
	msgbox Entrance_Text_Colress_YouSureStarterSNIVY, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_SNIVY, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterSNIVY:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Snivy?$"

Entrance_EventScript_TEPIG:
	bufferspeciesname 0, SPECIES_TEPIG
	showmonpic SPECIES_TEPIG, 10, 3
	playmoncry SPECIES_TEPIG, 0
	msgbox Entrance_Text_Colress_YouSureStarterTEPIG, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_TEPIG, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterTEPIG:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Tepig?$"

Entrance_EventScript_OSHAWOTT:
	bufferspeciesname 0, SPECIES_OSHAWOTT
	showmonpic SPECIES_OSHAWOTT, 10, 3
	playmoncry SPECIES_OSHAWOTT, 0
	msgbox Entrance_Text_Colress_YouSureStarterOSHAWOTT, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_OSHAWOTT, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterOSHAWOTT:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Oshawott?$"

Entrance_EventScript_CHESPIN:
	bufferspeciesname 0, SPECIES_CHESPIN
	showmonpic SPECIES_CHESPIN, 10, 3
	playmoncry SPECIES_CHESPIN, 0
	msgbox Entrance_Text_Colress_YouSureStarterCHESPIN, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_CHESPIN, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterCHESPIN:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Chespin?$"

Entrance_EventScript_FENNEKIN:
	bufferspeciesname 0, SPECIES_FENNEKIN
	showmonpic SPECIES_FENNEKIN, 10, 3
	playmoncry SPECIES_FENNEKIN, 0
	msgbox Entrance_Text_Colress_YouSureStarterFENNEKIN, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_FENNEKIN, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterFENNEKIN:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Fennekin?$"

Entrance_EventScript_FROAKIE:
	bufferspeciesname 0, SPECIES_FROAKIE
	showmonpic SPECIES_FROAKIE, 10, 3
	playmoncry SPECIES_FROAKIE, 0
	msgbox Entrance_Text_Colress_YouSureStarterFROAKIE, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_FROAKIE, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterFROAKIE:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Froakie?$"

Entrance_EventScript_ROWLET:
	bufferspeciesname 0, SPECIES_ROWLET
	showmonpic SPECIES_ROWLET, 10, 3
	playmoncry SPECIES_ROWLET, 0
	msgbox Entrance_Text_Colress_YouSureStarterROWLET, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_ROWLET, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterROWLET:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Rowlet?$"

Entrance_EventScript_LITTEN:
	bufferspeciesname 0, SPECIES_LITTEN
	showmonpic SPECIES_LITTEN, 10, 3
	playmoncry SPECIES_LITTEN, 0
	msgbox Entrance_Text_Colress_YouSureStarterLITTEN, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_LITTEN, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterLITTEN:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Litten?$"

Entrance_EventScript_POPPLIO:
	bufferspeciesname 0, SPECIES_POPPLIO
	showmonpic SPECIES_POPPLIO, 10, 3
	playmoncry SPECIES_POPPLIO, 0
	msgbox Entrance_Text_Colress_YouSureStarterPOPPLIO, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_POPPLIO, 5, ITEM_NONE
	return

Entrance_Text_Colress_YouSureStarterPOPPLIO:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Are you sure you want\n"
	.string "Popplio?$"

Entrance_EventScript_NuzlockeDialog:
	delay 24
	msgbox Entrance_Text_Colress_NuzlockeHealing, MSGBOX_AUTOCLOSE
	delay 24
	return

Entrance_EventScript_Colress_EndIntro:
	msgbox Entrance_Text_Colress_NiceChoice, MSGBOX_AUTOCLOSE
	delay 96
	msgbox Entrance_Text_Colress_Freebies, MSGBOX_AUTOCLOSE
	giveitem ITEM_POKE_BALL, 20
	giveitem ITEM_POTION, 5
	playfanfare MUS_OBTAIN_ITEM
	msgbox Entrance_Text_ReceivedMoney, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 96
	setvar VAR_ZONE, 1
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Entrance_Movement_Colress_BackTop
	waitmovement 1
	releaseall
	end

Entrance_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Entrance_EventScript_NextZoneCheck
	case 1, EventScript_Advice
	case 2, EventScript_Rules
	case 3, EventScript_WhenUReady
	case MULTI_B_PRESSED, EventScript_WhenUReady
	end

Entrance_EventScript_NextZoneCheck:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Entrance_EventScript_Leave
	goto EventScript_WhenUReady
	end

Entrance_EventScript_Leave:
	call EventScript_LeavingSetup
	warp MAP_ZONE1A, 255, 16, 28
	end

Entrance_Text_Colress_Hello:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Ah. Welcome, trainer.$"

Entrance_Text_Colress_Welcome:
	.string "Welcome to the\n"
	.string "{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GREY}!\p"
	.string "I am here to aid challengers who\n"
	.string "might attempt to brave the\l"
	.string "trials ahead.\p"
	.string "Allow me to go over the rules.$"

Entrance_Text_Colress_VanillaNuzlocke:
	.string "There are two game modes:\n"
	.string "{COLOR RED}Vanilla{COLOR DARK_GREY} and {COLOR RED}Nuzlocke{COLOR DARK_GREY}.$"

Entrance_Text_Colress_VanillaExplained:
	.string "{COLOR RED}Vanilla{COLOR DARK_GREY} mode does not add any extra\n"
	.string "modifications. It will be a normal\l"
	.string "playthrough with no added rules.$"

Entrance_Text_Colress_NuzlockeExplained:
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GREY} mode completely implements\n"
	.string "all standard Nuzlocke rules, such\l"
	.string "as permanent death and capture\l"
	.string "restrictions, and comes with\l"
	.string "Species Clause and Shiny Clause.\p"
	.string "It is not recommended to play\n"
	.string "Nuzlocke mode unless you are\l"
	.string "familiar with Nuzlockes already.$"

Entrance_Text_Colress_PickMode:
	.string "Which game mode would you like to\n"
	.string "play on?$"

Entrance_Text_Colress_VanillaSure:
	.string "{COLOR RED}Vanilla{COLOR DARK_GREY} mode? Are you sure?\n"
	.string "You won't be able to switch later.$"

Entrance_Text_Colress_NuzlockeSure:
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GREY} mode? Are you sure?\n"
	.string "You won't be able to switch later.$"

Entrance_Text_Colress_VanillaMode:
	.string "{COLOR RED}Vanilla{COLOR DARK_GREY} mode enabled. Good luck.$"

Entrance_Text_Colress_NuzlockeMode:
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GREY} mode enabled. Good luck.$"

Entrance_Text_Colress_StartTour:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Allow me to show you each\n"
	.string "of the shops.$"

Entrance_Text_Colress_General:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: The top left shop is\n"
	.string "{COLOR RED}Tim's General Purpose Shop{COLOR DARK_GREY}.\p"
	.string "Healing supplies, basic Pokéballs,\n"
	.string "Repels, and X items are sold here.$"

Entrance_Text_Colress_Item:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: The top right shop is \n"
	.string "{COLOR RED}Silph Unique Item Shop{COLOR DARK_GREY}.\p"
	.string "They sell Pokéball variations,\n"
	.string "Evolution items, held items,\l"
	.string "and other various trinkets.$"

Entrance_Text_Colress_Services:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: The bottom left shop is\n"
	.string "{COLOR RED}Lelouch's Special Services Shop{COLOR DARK_GREY}.\p"
	.string "They offer a variety of Pokémon\n"
	.string "services, but only to customers who\l"
	.string "can pay the right price.$"

Entrance_Text_Colress_Healing:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: The bottom right shop is\n"
	.string "{COLOR RED}Joy's Healing Shop{COLOR DARK_GREY}.\p"
	.string "For ¥500, they will heal your\n"
	.string "entire party and also grant\l"
	.string "complimentary access to the\l"
	.string "Pokémon Storage System.$"

Entrance_Text_Colress_NuzlockeHealing:
	.string "They will also take away your\n"
	.string "fallen Pokémon before healing your\l"
	.string "surviving party.$"

Entrance_Text_Colress_TourDone:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Our tour has finished.\p"
	.string "These four shops will be available\n"
	.string "at every Sanctuary.\p"
	.string "As you progress through more Zones,\n"
	.string "more items and services will unlock.\p"
	.string "Also, it is highly recommended you\n"
	.string "stock up on any supplies before\l"
	.string "entering the next Zone.$"

Entrance_Text_Colress_Starters:
	.string "As a new challenger, you will\n"
	.string "receive a starter Pokémon.\p"
	.string "You may have your choice of any of\n"
	.string "the generation 1-7 starter Pokémon,\l"
	.string "as well as Pikachu and Eevee.\p"
	.string "Choose carefully as these Pokémon\n"
	.string "are very rare.$"

Entrance_Text_ReceivedStarter:
	.string "{PLAYER} received the {STR_VAR_1}!$"

Entrance_Text_Colress_HowBoutNickname:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: How about a nickname\n"
	.string "for this wonderful Pokémon?$"

Entrance_Text_Colress_NiceChoice:
	.string "Excellent choice.\p"
	.string "You can also re-nickname your\n"
	.string "Pokémon from the party menu.$"

Entrance_Text_Colress_Freebies:
	.string "I also have a beginner's kit with\n"
	.string "items and cash to get you started.$"

Entrance_Text_ReceivedMoney:
	.string "Received ¥5000!$"

Entrance_Movement_Colress_FirstShop:
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	face_up
	step_end

Entrance_Movement_Player_FirstShop:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	delay_16
	face_up
	step_end

Entrance_Movement_Colress_SecondShop:
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
	face_up
	step_end

Entrance_Movement_Player_SecondShop:
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
	delay_16
	face_up
	step_end

Entrance_Movement_Colress_ThirdShop:
	walk_up
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
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

Entrance_Movement_Player_ThirdShop:
	face_up
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	delay_16
	face_up
	step_end

Entrance_Movement_Colress_FourthShop:
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
	face_up
	step_end

Entrance_Movement_Player_FourthShop:
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
	delay_16
	face_up
	step_end

Entrance_Movement_Colress_BackMid:
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
	face_down
	step_end

Entrance_Movement_Player_BackMid:
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
	step_end

Entrance_Movement_Colress_BackTop:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end
