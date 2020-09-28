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
	msgbox Entrance_Text_Quentin_Hello, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Quentin_WalkDown
	call EventScript_MoveCameraDown
	waitmovement 0
	msgbox Entrance_Text_Quentin_LookLikeBirch, MSGBOX_AUTOCLOSE
	delay 96
	msgbox gText_Quentin_Rules, MSGBOX_AUTOCLOSE
	delay 48
	msgbox gText_Quentin_DontLose, MSGBOX_AUTOCLOSE
	delay 96
	goto Entrance_EventScript_PickMode
	end

Entrance_EventScript_PickMode:
	msgbox Entrance_Text_Quentin_VanillaNuzlocke, MSGBOX_AUTOCLOSE
	delay 16
	msgbox Entrance_Text_Quentin_VanillaExplained, MSGBOX_AUTOCLOSE
	delay 16
	msgbox Entrance_Text_Quentin_NuzlockeExplained, MSGBOX_AUTOCLOSE
	delay 96
	msgbox Entrance_Text_Quentin_PickMode, MSGBOX_DEFAULT
	multichoice 2, 5, MULTI_VANILLA_NUZLOCKE, 1
	switch VAR_RESULT
	case 0, Entrance_EventScript_Vanilla
	case 1, Entrance_EventScript_Nuzlocke
	end
	
Entrance_EventScript_Vanilla:
	closemessage
	msgbox Entrance_Text_Quentin_VanillaSure, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Entrance_EventScript_SetVanilla
	goto Entrance_EventScript_PickMode
	end

Entrance_EventScript_SetVanilla:
	msgbox Entrance_Text_Quentin_VanillaMode, MSGBOX_AUTOCLOSE
	goto Entrance_EventScript_Tour
	end
	
Entrance_EventScript_Nuzlocke:
	closemessage
	msgbox Entrance_Text_Quentin_NuzlockeSure, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Entrance_EventScript_SetNuzlocke
	goto Entrance_EventScript_PickMode
	end

Entrance_EventScript_SetNuzlocke:
	callnative GlobalNuzlockeSet
	setflag FLAG_NUZLOCKE_ON
	msgbox Entrance_Text_Quentin_NuzlockeMode, MSGBOX_AUTOCLOSE
	goto Entrance_EventScript_Tour
	end
	
Entrance_EventScript_Tour:
	msgbox Entrance_Text_Quentin_StartTour, MSGBOX_AUTOCLOSE
	applymovement 1, Entrance_Movement_Quentin_FirstShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_FirstShop
	waitmovement 0
	call EventScript_MoveCameraUp
	msgbox Entrance_Text_Quentin_General, MSGBOX_AUTOCLOSE
	call EventScript_MoveCameraDown
	applymovement 1, Entrance_Movement_Quentin_SecondShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_SecondShop
	waitmovement 0
	call EventScript_MoveCameraUp
	msgbox Entrance_Text_Quentin_Item, MSGBOX_AUTOCLOSE
	call EventScript_MoveCameraDown
	applymovement 1, Entrance_Movement_Quentin_ThirdShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_ThirdShop
	waitmovement 0
	call EventScript_MoveCameraUp
	msgbox Entrance_Text_Quentin_Services, MSGBOX_AUTOCLOSE
	call EventScript_MoveCameraDown
	applymovement 1, Entrance_Movement_Quentin_FourthShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_FourthShop
	waitmovement 0
	call EventScript_MoveCameraUp
	msgbox Entrance_Text_Quentin_Healing, MSGBOX_AUTOCLOSE
	call_if_set FLAG_NUZLOCKE_ON, Entrance_EventScript_NuzlockeDialog
	msgbox Entrance_Text_Quentin_PC, MSGBOX_AUTOCLOSE
	call EventScript_MoveCameraDown
	applymovement 1, Entrance_Movement_Quentin_BackMid
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_BackMid
	waitmovement 0
	msgbox Entrance_Text_Quentin_TourDone, MSGBOX_AUTOCLOSE
	delay 96
	goto Entrance_EventScript_PickStarter

Entrance_EventScript_PickStarter:
	hidemonpic
	msgbox Entrance_Text_Quentin_Starters, MSGBOX_AUTOCLOSE
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
	call_if_eq Entrance_EventScript_PIPLUP
	compare VAR_RESULT, 14
	call_if_eq Entrance_EventScript_SNIVY
	compare VAR_RESULT, 15
	call_if_eq Entrance_EventScript_TEPIG
	compare VAR_RESULT, 16
	call_if_eq Entrance_EventScript_OSHAWOTT
	compare VAR_RESULT, 17
	call_if_eq Entrance_EventScript_CHESPIN
	compare VAR_RESULT, 18
	call_if_eq Entrance_EventScript_FENNEKIN
	compare VAR_RESULT, 19
	call_if_eq Entrance_EventScript_FROAKIE
	compare VAR_RESULT, 20
	call_if_eq Entrance_EventScript_ROWLET
	compare VAR_RESULT, 21
	call_if_eq Entrance_EventScript_LITTEN
	compare VAR_RESULT, 22
	call_if_eq Entrance_EventScript_POPPLIO
	hidemonpic
	playfanfare MUS_FANFA4
	message Entrance_Text_ReceivedStarter
	waitmessage
	waitfanfare
	msgbox Entrance_Text_Quentin_HowBoutNickname, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Entrance_EventScript_NicknameStarter
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_Quentin_EndIntro
	end

Entrance_EventScript_NicknameStarter:
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto Entrance_EventScript_Quentin_EndIntro
	end

Entrance_EventScript_BULBASAUR:
	bufferspeciesname 0, SPECIES_BULBASAUR
	showmonpic SPECIES_BULBASAUR, 10, 3
	playmoncry SPECIES_BULBASAUR, 0
	msgbox Entrance_Text_Quentin_YouSureStarterBULBASAUR, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_BULBASAUR, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterBULBASAUR:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "BULBASAUR?$"

Entrance_EventScript_CHARMANDER:
	bufferspeciesname 0, SPECIES_CHARMANDER
	showmonpic SPECIES_CHARMANDER, 10, 3
	playmoncry SPECIES_CHARMANDER, 0
	msgbox Entrance_Text_Quentin_YouSureStarterCHARMANDER, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_CHARMANDER, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterCHARMANDER:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "CHARMANDER?$"

Entrance_EventScript_SQUIRTLE:
	bufferspeciesname 0, SPECIES_SQUIRTLE
	showmonpic SPECIES_SQUIRTLE, 10, 3
	playmoncry SPECIES_SQUIRTLE, 0
	msgbox Entrance_Text_Quentin_YouSureStarterSQUIRTLE, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterSQUIRTLE:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "SQUIRTLE?$"

Entrance_EventScript_PIKACHU:
	bufferspeciesname 0, SPECIES_PIKACHU
	showmonpic SPECIES_PIKACHU, 10, 3
	playmoncry SPECIES_PIKACHU, 0
	msgbox Entrance_Text_Quentin_YouSureStarterPIKACHU, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_PIKACHU, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterPIKACHU:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "PIKACHU?$"

Entrance_EventScript_EEVEE:
	bufferspeciesname 0, SPECIES_EEVEE
	showmonpic SPECIES_EEVEE, 10, 3
	playmoncry SPECIES_EEVEE, 0
	msgbox Entrance_Text_Quentin_YouSureStarterEEVEE, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_EEVEE, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterEEVEE:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "EEVEE?$"

Entrance_EventScript_CHIKORITA:
	bufferspeciesname 0, SPECIES_CHIKORITA
	showmonpic SPECIES_CHIKORITA, 10, 3
	playmoncry SPECIES_CHIKORITA, 0
	msgbox Entrance_Text_Quentin_YouSureStarterCHIKORITA, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_CHIKORITA, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterCHIKORITA:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "CHIKORITA?$"

Entrance_EventScript_CYNDAQUIL:
	bufferspeciesname 0, SPECIES_CYNDAQUIL
	showmonpic SPECIES_CYNDAQUIL, 10, 3
	playmoncry SPECIES_CYNDAQUIL, 0
	msgbox Entrance_Text_Quentin_YouSureStarterCYNDAQUIL, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_CYNDAQUIL, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterCYNDAQUIL:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "CYNDAQUIL?$"

Entrance_EventScript_TOTODILE:
	bufferspeciesname 0, SPECIES_TOTODILE
	showmonpic SPECIES_TOTODILE, 10, 3
	playmoncry SPECIES_TOTODILE, 0
	msgbox Entrance_Text_Quentin_YouSureStarterTOTODILE, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_TOTODILE, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterTOTODILE:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "TOTODILE?$"

Entrance_EventScript_TREECKO:
	bufferspeciesname 0, SPECIES_TREECKO
	showmonpic SPECIES_TREECKO, 10, 3
	playmoncry SPECIES_TREECKO, 0
	msgbox Entrance_Text_Quentin_YouSureStarterTREECKO, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_TREECKO, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterTREECKO:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "TREECKO?$"

Entrance_EventScript_TORCHIC:
	bufferspeciesname 0, SPECIES_TORCHIC
	showmonpic SPECIES_TORCHIC, 10, 3
	playmoncry SPECIES_TORCHIC, 0
	msgbox Entrance_Text_Quentin_YouSureStarterTORCHIC, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_TORCHIC, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterTORCHIC:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "TORCHIC?$"

Entrance_EventScript_MUDKIP:
	bufferspeciesname 0, SPECIES_MUDKIP
	showmonpic SPECIES_MUDKIP, 10, 3
	playmoncry SPECIES_MUDKIP, 0
	msgbox Entrance_Text_Quentin_YouSureStarterMUDKIP, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_MUDKIP, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterMUDKIP:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "MUDKIP?$"

Entrance_EventScript_TURTWIG:
	bufferspeciesname 0, SPECIES_TURTWIG
	showmonpic SPECIES_TURTWIG, 10, 3
	playmoncry SPECIES_TURTWIG, 0
	msgbox Entrance_Text_Quentin_YouSureStarterTURTWIG, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_TURTWIG, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterTURTWIG:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "TURTWIG?$"

Entrance_EventScript_CHIMCHAR:
	bufferspeciesname 0, SPECIES_CHIMCHAR
	showmonpic SPECIES_CHIMCHAR, 10, 3
	playmoncry SPECIES_CHIMCHAR, 0
	msgbox Entrance_Text_Quentin_YouSureStarterCHIMCHAR, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_CHIMCHAR, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterCHIMCHAR:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "CHIMCHAR?$"

Entrance_EventScript_PIPLUP:
	bufferspeciesname 0, SPECIES_PIPLUP
	showmonpic SPECIES_PIPLUP, 10, 3
	playmoncry SPECIES_PIPLUP, 0
	msgbox Entrance_Text_Quentin_YouSureStarterPIPLUP, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_PIPLUP, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterPIPLUP:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "PIPLUP?$"

Entrance_EventScript_SNIVY:
	bufferspeciesname 0, SPECIES_SNIVY
	showmonpic SPECIES_SNIVY, 10, 3
	playmoncry SPECIES_SNIVY, 0
	msgbox Entrance_Text_Quentin_YouSureStarterSNIVY, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_SNIVY, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterSNIVY:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "SNIVY?$"

Entrance_EventScript_TEPIG:
	bufferspeciesname 0, SPECIES_TEPIG
	showmonpic SPECIES_TEPIG, 10, 3
	playmoncry SPECIES_TEPIG, 0
	msgbox Entrance_Text_Quentin_YouSureStarterTEPIG, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_TEPIG, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterTEPIG:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "TEPIG?$"

Entrance_EventScript_OSHAWOTT:
	bufferspeciesname 0, SPECIES_OSHAWOTT
	showmonpic SPECIES_OSHAWOTT, 10, 3
	playmoncry SPECIES_OSHAWOTT, 0
	msgbox Entrance_Text_Quentin_YouSureStarterOSHAWOTT, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_OSHAWOTT, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterOSHAWOTT:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "OSHAWOTT?$"

Entrance_EventScript_CHESPIN:
	bufferspeciesname 0, SPECIES_CHESPIN
	showmonpic SPECIES_CHESPIN, 10, 3
	playmoncry SPECIES_CHESPIN, 0
	msgbox Entrance_Text_Quentin_YouSureStarterCHESPIN, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_CHESPIN, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterCHESPIN:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "CHESPIN?$"

Entrance_EventScript_FENNEKIN:
	bufferspeciesname 0, SPECIES_FENNEKIN
	showmonpic SPECIES_FENNEKIN, 10, 3
	playmoncry SPECIES_FENNEKIN, 0
	msgbox Entrance_Text_Quentin_YouSureStarterFENNEKIN, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_FENNEKIN, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterFENNEKIN:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "FENNEKIN?$"

Entrance_EventScript_FROAKIE:
	bufferspeciesname 0, SPECIES_FROAKIE
	showmonpic SPECIES_FROAKIE, 10, 3
	playmoncry SPECIES_FROAKIE, 0
	msgbox Entrance_Text_Quentin_YouSureStarterFROAKIE, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_FROAKIE, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterFROAKIE:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "FROAKIE?$"

Entrance_EventScript_ROWLET:
	bufferspeciesname 0, SPECIES_ROWLET
	showmonpic SPECIES_ROWLET, 10, 3
	playmoncry SPECIES_ROWLET, 0
	msgbox Entrance_Text_Quentin_YouSureStarterROWLET, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_ROWLET, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterROWLET:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "ROWLET?$"

Entrance_EventScript_LITTEN:
	bufferspeciesname 0, SPECIES_LITTEN
	showmonpic SPECIES_LITTEN, 10, 3
	playmoncry SPECIES_LITTEN, 0
	msgbox Entrance_Text_Quentin_YouSureStarterLITTEN, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_LITTEN, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterLITTEN:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "LITTEN?$"

Entrance_EventScript_POPPLIO:
	bufferspeciesname 0, SPECIES_POPPLIO
	showmonpic SPECIES_POPPLIO, 10, 3
	playmoncry SPECIES_POPPLIO, 0
	msgbox Entrance_Text_Quentin_YouSureStarterPOPPLIO, MSGBOX_YESNO
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq Entrance_EventScript_PickStarter
	givemon SPECIES_POPPLIO, 5, ITEM_NONE
	return

Entrance_Text_Quentin_YouSureStarterPOPPLIO:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ARE YOU SURE YOU WANT\n"
	.string "POPPLIO?$"

Entrance_EventScript_NuzlockeDialog:
	delay 24
	msgbox Entrance_Text_Quentin_NuzlockeHealing, MSGBOX_AUTOCLOSE
	delay 24
	return

Entrance_EventScript_Quentin_EndIntro:
	msgbox Entrance_Text_Quentin_NiceChoice, MSGBOX_AUTOCLOSE
	delay 96
	msgbox Entrance_Text_Quentin_Freebies, MSGBOX_AUTOCLOSE
	giveitem ITEM_POTION, 5
	giveitem ITEM_POKE_BALL, 30
	playfanfare MUS_FANFA4
	msgbox Entrance_Text_ReceivedMoney, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 96
	setvar VAR_ZONE, 1
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Entrance_Movement_Quentin_BackTop
	waitmovement 1
	releaseall
	end

Entrance_EventScript_NextZone::
	lock
	faceplayer
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Entrance_EventScript_Leave
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	release
	end

Entrance_EventScript_Leave:
	call EventScript_LeavingSetup
	warp MAP_ZONE1A, 255, 16, 28
	end

Entrance_Text_Quentin_Hello:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: HELLO. MY NAME IS QUENTIN.$"

Entrance_Text_Quentin_LookLikeBirch:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: I KNOW YOU MIGHT BE\n"
	.string "CONFUSED. AS I AM A PORYGON,\l"
	.string "YET I APPEAR AS {COLOR BLUE}PROFESSOR BIRCH{COLOR DARK_GREY}.\p"
	.string "I HAVE TAKEN ON A HUMAN FORM\n"
	.string "IN THIS REALM SO I CAN BE MORE\l"
	.string "COMMUNICATIVE WITH CHALLENGERS\l"
	.string "WHO MIGHT ATTEMPT TO BRAVE\l"
	.string "THE {COLOR RED}BATTLE LABYRINTH{COLOR DARK_GREY}.\p"
	.string "ALLOW ME TO GO OVER THE RULES.$"

Entrance_Text_Quentin_VanillaNuzlocke:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: THERE ARE TWO DIFFICULTY\n"
	.string "MODES: {COLOR RED}VANILLA{COLOR DARK_GREY} AND {COLOR RED}NUZLOCKE{COLOR DARK_GREY}.$"

Entrance_Text_Quentin_VanillaExplained:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: VANILLA MODE DOES NOT ADD\n"
	.string "ANY EXTRA MODIFICATIONS.\p"
	.string "IT WILL BE A NORMAL PLAYTHROUGH\n"
	.string "WITH NO ADDED RULES.$"

Entrance_Text_Quentin_NuzlockeExplained:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: NUZLOCKE MODE IS THE \n"
	.string "INTENDED DIFFICULTY.\p"
	.string "ALL STANDARD NUZLOCKE RULES ARE\n"
	.string "COMPLETELY IMPLEMENTED, AS WELL AS\l"
	.string "SPECIES CLAUSE AND SHINY CLAUSE.$"

Entrance_Text_Quentin_PickMode:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: WHICH GAME MODE WOULD\n"
	.string "YOU LIKE TO PLAY ON?$"

Entrance_Text_Quentin_VanillaSure:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: {COLOR RED}VANILLA{COLOR DARK_GREY} MODE?\n"
	.string "ARE YOU CERTAIN?$"

Entrance_Text_Quentin_NuzlockeSure:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: {COLOR RED}NUZLOCKE{COLOR DARK_GREY} MODE?\n"
	.string "ARE YOU CERTAIN?$"

Entrance_Text_Quentin_VanillaMode:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: {COLOR RED}VANILLA{COLOR DARK_GREY} MODE ENABLED.\n"
	.string "GOOD LUCK.$"

Entrance_Text_Quentin_NuzlockeMode:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: {COLOR RED}NUZLOCKE{COLOR DARK_GREY} MODE ENABLED.\n"
	.string "GOOD LUCK.$"

Entrance_Text_Quentin_StartTour:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: ALLOW ME TO SHOW YOU EACH\n"
	.string "OF THE SHOPS.$"

Entrance_Text_Quentin_General:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: THE TOP LEFT SHOP IS\n"
	.string "{COLOR RED}TIM'S GENERAL PURPOSE SHOP{COLOR DARK_GREY}.\p"
	.string "HEALING SUPPLIES, BASIC POKEBALLS,\n"
	.string "REPELS, AND X ITEMS ARE SOLD HERE.\p"
	.string "MORE ITEMS WILL GRADUALLY BE\n"
	.string "UNLOCKED AS YOU PROGRESS THROUGH\l"
	.string "MORE ZONES.$"

Entrance_Text_Quentin_Item:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: THE TOP RIGHT SHOP IS\n"
	.string "{COLOR RED}SILPH UNIQUE ITEM SHOP{COLOR DARK_GREY}.\p"
	.string "THEY SELL POKEBALL VARIATIONS,\n"
	.string "BERRIES, EVOLUTION ITEMS, AND\l"
	.string "HELD ITEMS.\p"
	.string "MORE ITEMS WILL GRADUALLY BE\n"
	.string "UNLOCKED AS YOU PROGRESS THROUGH\l"
	.string "MORE ZONES.$"

Entrance_Text_Quentin_Services:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: THE BOTTOM LEFT SHOP IS\n"
	.string "{COLOR RED}LELOUCH'S SPECIAL SERVICES SHOP{COLOR DARK_GREY}.\p"
	.string "HERE YOU CAN PAY MONEY FOR\n"
	.string "EXPERIENCE TRAINING, EV TRAINING,\l"
	.string "MOVE TUTORS, AND OTHER SERVICES.\p"
	.string "MORE SERVICES WILL GRADUALLY BE\n"
	.string "UNLOCKED AS YOU PROGRESS THROUGH\l"
	.string "MORE ZONES.$"

Entrance_Text_Quentin_Healing:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: THE BOTTOM RIGHT SHOP IS\n"
	.string "{COLOR RED}JOY'S HEALING SHOP{COLOR DARK_GREY}.\p"
	.string "THEY WILL HEAL YOUR ENTIRE PARTY\n"
	.string "FOR ¥500.$"

Entrance_Text_Quentin_NuzlockeHealing:
	.string "THEY WILL ALSO TAKE AWAY YOUR DEAD\n"
	.string "POKEMON BEFORE HEALING YOUR\l"
	.string "SURVIVING PARTY.$"

Entrance_Text_Quentin_PC:
	.string "YOU CAN ACCESS THE POKEMON STORAGE\n"
	.string "SYSTEM FROM HERE AFTER HEALING YOUR\l"
	.string "POKEMON.$"

Entrance_Text_Quentin_TourDone:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: OUR TOUR HAS FINISHED.\p"
	.string "THESE FOUR SHOPS WILL BE AVAILABLE\n"
	.string "BEFORE EACH NEW ZONE. ONCE YOU\l"
	.string "ENTER THE ZONE, YOU WILL NOT BE\l"
	.string "ABLE TO ACCESS THESE SHOPS UNTIL\l"
	.string "YOU EXIT THAT ZONE.\p"
	.string "IT IS HIGHLY RECOMMENDED YOU STOCK\n"
	.string "UP ON ANY SUPPLIES BEFORE ENTERING\l"
	.string "THE NEXT ZONE.$"

Entrance_Text_Quentin_Starters:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: AS A NEW CHALLENGER,\n"
	.string "YOU WILL RECEIVE A STARTER POKEMON.\p"
	.string "YOU CAN HAVE YOUR CHOICE OF ANY OF\n"
	.string "THE GEN 1-7 STARTER POKEMON, AS\l"
	.string "WELL AS PIKACHU AND EEVEE.\p"
	.string "CHOOSE CAREFULLY AS THESE POKEMON\n"
	.string "ARE VERY RARE.$"

Entrance_Text_ReceivedStarter:
	.string "{PLAYER} received the {STR_VAR_1}!$"

Entrance_Text_Quentin_HowBoutNickname:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: HOW ABOUT A NICKNAME\n"
	.string "FOR THIS WONDERFUL POKEMON?$"

Entrance_Text_Quentin_NiceChoice:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: EXCELLENT CHOICE.\p"
	.string "YOU CAN ALSO RE-NICKNAME YOUR\n"
	.string "POKEMON FROM THE PARTY MENU.$"

Entrance_Text_Quentin_Freebies:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: HERE ARE SOME STARTING\n"
	.string "ITEMS AND CASH.$"

Entrance_Text_ReceivedMoney:
	.string "Received ¥5000!$"

Entrance_Movement_Quentin_FirstShop:
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

Entrance_Movement_Quentin_SecondShop:
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

Entrance_Movement_Quentin_ThirdShop:
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

Entrance_Movement_Quentin_FourthShop:
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

Entrance_Movement_Quentin_BackMid:
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

Entrance_Movement_Quentin_BackTop:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end
