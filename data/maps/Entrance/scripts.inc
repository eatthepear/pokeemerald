Entrance_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Entrance_OnFrame
	.byte 0

Entrance_OnFrame:
	map_script_2 VAR_TUTORIAL, 0, Entrance_EventScript_Intro
	.2byte 0

Entrance_EventScript_Intro:
	lockall
	setflag FLAG_SYS_B_DASH
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	msgbox Entrance_Text_Quentin_Hello, MSGBOX_AUTOCLOSE
	applymovement 1, Entrance_Movement_Quentin_WalkDown
	waitmovement 0
	msgbox Entrance_Text_Quentin_LookLikeBirch, MSGBOX_AUTOCLOSE
	delay 96
	msgbox Entrance_Text_Quentin_Rules, MSGBOX_AUTOCLOSE
	delay 96
	msgbox Entrance_Text_Quentin_DontLose, MSGBOX_AUTOCLOSE
	delay 96
	msgbox Entrance_Text_Quentin_VanillaNuzlocke, MSGBOX_AUTOCLOSE
	delay 48
	msgbox Entrance_Text_Quentin_NuzlockeExplained, MSGBOX_AUTOCLOSE
	delay 48
	msgbox Entrance_Text_Quentin_VanillaExplained, MSGBOX_AUTOCLOSE
	delay 96
	msgbox Entrance_Text_Quentin_PickMode, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Entrance_EventScript_Vanilla
	goto Entrance_EventScript_Nuzlocke
	end
	
Entrance_EventScript_Vanilla:
	msgbox Entrance_Text_Quentin_VanillaMode, MSGBOX_AUTOCLOSE
	goto Entrance_EventScript_Tour
	end
	
Entrance_EventScript_Nuzlocke:
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
	msgbox Entrance_Text_Quentin_General, MSGBOX_AUTOCLOSE
	applymovement 1, Entrance_Movement_Quentin_SecondShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_SecondShop
	waitmovement 0
	msgbox Entrance_Text_Quentin_Item, MSGBOX_AUTOCLOSE
	applymovement 1, Entrance_Movement_Quentin_ThirdShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_ThirdShop
	waitmovement 0
	msgbox Entrance_Text_Quentin_Services, MSGBOX_AUTOCLOSE
	applymovement 1, Entrance_Movement_Quentin_FourthShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_FourthShop
	waitmovement 0
	msgbox Entrance_Text_Quentin_Healing, MSGBOX_AUTOCLOSE
	call_if_set FLAG_NUZLOCKE_ON, Entrance_EventScript_NuzlockeDialog
	msgbox Entrance_Text_Quentin_PC, MSGBOX_AUTOCLOSE
	applymovement 1, Entrance_Movement_Quentin_BackMid
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_BackMid
	waitmovement 0
	msgbox Entrance_Text_Quentin_TourDone, MSGBOX_AUTOCLOSE
	delay 96
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
	playfanfare MUS_FANFA4
	message Entrance_Text_ReceivedStarter
	waitmessage
	waitfanfare
	goto Entrance_EventScript_Quentin_EndIntro
	end

Entrance_EventScript_BULBASAUR:
	bufferspeciesname 0, SPECIES_BULBASAUR
	givemon SPECIES_BULBASAUR, 5, ITEM_NONE
	return

Entrance_EventScript_CHARMANDER:
	bufferspeciesname 0, SPECIES_CHARMANDER
	givemon SPECIES_CHARMANDER, 5, ITEM_NONE
	return

Entrance_EventScript_SQUIRTLE:
	bufferspeciesname 0, SPECIES_SQUIRTLE
	givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
	return

Entrance_EventScript_PIKACHU:
	bufferspeciesname 0, SPECIES_PIKACHU
	givemon SPECIES_PIKACHU, 5, ITEM_NONE
	return

Entrance_EventScript_EEVEE:
	bufferspeciesname 0, SPECIES_EEVEE
	givemon SPECIES_EEVEE, 5, ITEM_NONE
	return

Entrance_EventScript_CHIKORITA:
	bufferspeciesname 0, SPECIES_CHIKORITA
	givemon SPECIES_CHIKORITA, 5, ITEM_NONE
	return

Entrance_EventScript_CYNDAQUIL:
	bufferspeciesname 0, SPECIES_CYNDAQUIL
	givemon SPECIES_CYNDAQUIL, 5, ITEM_NONE
	return

Entrance_EventScript_TOTODILE:
	bufferspeciesname 0, SPECIES_TOTODILE
	givemon SPECIES_TOTODILE, 5, ITEM_NONE
	return

Entrance_EventScript_TREECKO:
	bufferspeciesname 0, SPECIES_TREECKO
	givemon SPECIES_TREECKO, 5, ITEM_NONE
	return

Entrance_EventScript_TORCHIC:
	bufferspeciesname 0, SPECIES_TORCHIC
	givemon SPECIES_TORCHIC, 5, ITEM_NONE
	return

Entrance_EventScript_MUDKIP:
	bufferspeciesname 0, SPECIES_MUDKIP
	givemon SPECIES_MUDKIP, 5, ITEM_NONE
	return

Entrance_EventScript_TURTWIG:
	bufferspeciesname 0, SPECIES_TURTWIG
	givemon SPECIES_TURTWIG, 5, ITEM_NONE
	return

Entrance_EventScript_CHIMCHAR:
	bufferspeciesname 0, SPECIES_CHIMCHAR
	givemon SPECIES_CHIMCHAR, 5, ITEM_NONE
	return

Entrance_EventScript_PIPLUP:
	bufferspeciesname 0, SPECIES_PIPLUP
	givemon SPECIES_PIPLUP, 5, ITEM_NONE
	return

Entrance_EventScript_SNIVY:
	bufferspeciesname 0, SPECIES_SNIVY
	givemon SPECIES_SNIVY, 5, ITEM_NONE
	return

Entrance_EventScript_TEPIG:
	bufferspeciesname 0, SPECIES_TEPIG
	givemon SPECIES_TEPIG, 5, ITEM_NONE
	return

Entrance_EventScript_OSHAWOTT:
	bufferspeciesname 0, SPECIES_OSHAWOTT
	givemon SPECIES_OSHAWOTT, 5, ITEM_NONE
	return

Entrance_EventScript_CHESPIN:
	bufferspeciesname 0, SPECIES_CHESPIN
	givemon SPECIES_CHESPIN, 5, ITEM_NONE
	return

Entrance_EventScript_FENNEKIN:
	bufferspeciesname 0, SPECIES_FENNEKIN
	givemon SPECIES_FENNEKIN, 5, ITEM_NONE
	return

Entrance_EventScript_FROAKIE:
	bufferspeciesname 0, SPECIES_FROAKIE
	givemon SPECIES_FROAKIE, 5, ITEM_NONE
	return

Entrance_EventScript_ROWLET:
	bufferspeciesname 0, SPECIES_ROWLET
	givemon SPECIES_ROWLET, 5, ITEM_NONE
	return

Entrance_EventScript_LITTEN:
	bufferspeciesname 0, SPECIES_LITTEN
	givemon SPECIES_LITTEN, 5, ITEM_NONE
	return

Entrance_EventScript_POPPLIO:
	bufferspeciesname 0, SPECIES_POPPLIO
	givemon SPECIES_POPPLIO, 5, ITEM_NONE
	return

Entrance_EventScript_Quentin_EndIntro:
	msgbox Entrance_Text_Quentin_NiceChoice, MSGBOX_AUTOCLOSE
	delay 96
	msgbox Entrance_Text_Quentin_Freebies, MSGBOX_AUTOCLOSE
	giveitem ITEM_POTION, 5
	giveitem ITEM_POKE_BALL, 10
	playfanfare MUS_FANFA4
	msgbox Entrance_Text_ReceivedMoney, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 96
	msgbox Entrance_Text_Quentin_WhenUReady, MSGBOX_DEFAULT
	applymovement 1, Entrance_Movement_Quentin_BackTop
	waitmovement 0
	setvar VAR_TUTORIAL, 1
	end

Entrance_EventScript_NuzlockeDialog:
	delay 24
	msgbox Entrance_Text_Quentin_NuzlockeHealing, MSGBOX_AUTOCLOSE
	delay 24
	return

Entrance_Text_Quentin_Hello:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: HELLO. MY NAME IS QUENTIN.$"

Entrance_Text_Quentin_LookLikeBirch:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: I KNOW YOU MIGHT BE\n"
	.string "CONFUSED. AS I AM A PORYGON,\l"
	.string "YET I APPEAR AS PROFESSOR BIRCH.\p"
	.string "I HAVE TAKEN ON A HUMAN FORM\n"
	.string "IN THIS REALM SO I CAN BE MORE\l"
	.string "COMMUNICATIVE WITH CHALLENGERS\l"
	.string "WHO MIGHT ATTEMPT TO BRAVE\l"
	.string "THE BATTLE LABYRINTH.$"

Entrance_Text_Quentin_Rules:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: ALLOW ME TO GO OVER THE\n"
	.string "RULES. IN THE BATTLE LABYRINTH,\l"
	.string "THERE ARE A NUMBER OF ZONES IN\l"
	.string "WHICH YOU MUST FIND THE EXIT.\p"
	.string "IN THESE ZONES, YOU MIGHT ENCOUNTER\n"
	.string "WILD POKEMON, GREAT TREASURES,\l"
	.string "TOUGH TRAINERS, AND MORE.\p"
	.string "AT THE END OF EACH ZONE AND BEFORE\n"
	.string "THE NEXT BEGINS, YOU WILL FIND\l"
	.string "SHOPS TO PURCHASE SUPPLIES, HEAL\l"
	.string "YOUR POKEMON, AND OTHER BENEFITS.\p"
	.string "ONCE YOU ENTER A NEW ZONE,\n"
	.string "YOU WILL NOT BE ABLE TO RETURN TO\l"
	.string "THE SHOP AREA, NOR ANY PRIOR ZONES.$"

Entrance_Text_Quentin_DontLose:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: YOU MUST PROGRESS THROUGH\n"
	.string "ALL ZONES WITHOUT LOSING A BATTLE,\l"
	.string "WHICH WILL MEAN AN AUTOMATIC\l"
	.string "RESTART OF THE SIMULATION.$"

Entrance_Text_Quentin_VanillaNuzlocke:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: THERE ARE TWO DIFFICULTY\n"
	.string "MODES: {COLOR RED}VANILLA{COLOR DARK_GREY} AND {COLOR RED}NUZLOCKE{COLOR DARK_GREY}.$"

Entrance_Text_Quentin_NuzlockeExplained:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: {COLOR RED}NUZLOCKE{COLOR DARK_GREY} MODE HAS\n"
	.string "IMPLEMENTED PERMADEATH. EACH ZONE\l"
	.string "YOU CAN CAPTURE ONE POKEMON,\l"
	.string "EXCLUDING GIFT POKEMON.\p"
	.string "SPECIES CLAUSE IS ENABLED,\n"
	.string "AS IS SHINY CLAUSE.$"

Entrance_Text_Quentin_VanillaExplained:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: {COLOR RED}VANILLA{COLOR DARK_GREY} MEANS ALL NUZLOCKE\n"
	.string "RULES ARE DISABLED. YOU WILL PLAY\l"
	.string "WITHOUT PERMADEATH OR POKEMON\l"
	.string "CAPTURE LIMITATIONS.\p"
	.string "WHILE YOU WILL NOT BE ABLE TO\n"
	.string "PURCHASE REVIVES, YOU MIGHT BE ABLE\l"
	.string "TO RECEIVE THEM AS REWARDS FOR\l"
	.string "QUESTS OR FIND THEM AS LOOT.$"

Entrance_Text_Quentin_PickMode:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: WOULD YOU LIKE TO PLAY ON\n"
	.string "{COLOR RED}NUZLOCKE{COLOR DARK_GREY} MODE?$"

Entrance_Text_Quentin_VanillaMode:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: {COLOR RED}NUZLOCKE{COLOR DARK_GREY} MODE DISABLED.\p"
	.string "{COLOR RED}VANILLA{COLOR DARK_GREY} MODE ENABLED. GOOD LUCK.$"

Entrance_Text_Quentin_NuzlockeMode:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: {COLOR RED}NUZLOCKE MODE ENABLED.\n"
	.string "GOOD LUCK.$"

Entrance_Text_Quentin_StartTour:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: ALLOW ME TO SHOW YOU EACH\n"
	.string "OF THE SHOPS.$"

Entrance_Text_Quentin_General:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: THE TOP LEFT SHOP IS\n"
	.string "THE GENERAL PURPOSE SHOP.\p"
	.string "HEALING SUPPLIES, BASIC POKEBALLS,\n"
	.string "REPELS, AND X ITEMS ARE SOLD HERE.\p"
	.string "MORE ITEMS WILL GRADUALLY BE\n"
	.string "UNLOCKED AS YOU PROGRESS THROUGH\l"
	.string "MORE ZONES.$"

Entrance_Text_Quentin_Item:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: THE TOP RIGHT SHOP IS\n"
	.string "THE UNIQUE ITEM SHOP.\p"
	.string "THEY SELL POKEBALL VARIATIONS,\n"
	.string "BERRIES, EVOLUTION ITEMS, AND\l"
	.string "HELD ITEMS.\p"
	.string "MORE ITEMS WILL GRADUALLY BE\n"
	.string "UNLOCKED AS YOU PROGRESS THROUGH\l"
	.string "MORE ZONES.$"

Entrance_Text_Quentin_Services:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: THE BOTTOM LEFT SHOP IS\n"
	.string "THE SPECIAL SERVICES SHOP.\p"
	.string "HERE YOU CAN PAY MONEY FOR\n"
	.string "EXPERIENCE TRAINING, EV TRAINING,\l"
	.string "MOVE TUTORS, AND OTHER SERVICES.\p"
	.string "MORE SERVICES WILL GRADUALLY BE\n"
	.string "UNLOCKED AS YOU PROGRESS THROUGH\l"
	.string "MORE ZONES.$"

Entrance_Text_Quentin_Healing:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: THE BOTTOM RIGHT SHOP IS\n"
	.string "THE HEALING SHOP.\p"
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
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: OUR TOUR HAS FINISHED.\p"
	.string "THESE FOUR SHOPS WILL BE AVAILABLE\n"
	.string "BEFORE EACH NEW ZONE. ONCE YOU\l"
	.string "ENTER THE ZONE, YOU WILL NOT BE\l"
	.string "ABLE TO ACCESS THESE SHOPS UNTIL\l"
	.string "YOU EXIT THAT ZONE.$"

Entrance_Text_Quentin_Starters:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: AS A NEW CHALLENGER,\n"
	.string "YOU WILL RECEIVE A STARTER POKEMON.\p"
	.string "YOU CAN HAVE YOUR CHOICE OF ANY OF\n"
	.string "THE GEN 1-7 STARTER POKEMON, AS\l"
	.string "WELL AS PIKACHU AND EEVEE.\p"
	.string "CHOOSE CAREFULLY AS THESE POKEMON\n"
	.string "ARE VERY RARE.$"

Entrance_Text_ReceivedStarter:
	.string "{PLAYER} received the {STR_VAR_1}!$"

Entrance_Text_Quentin_NiceChoice:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: EXCELLENT CHOICE.\p"
	.string "YOU CAN NICKNAME YOUR POKEMON FROM\n"
	.string "THE PARTY MENU IF YOU WOULD LIKE.$"

Entrance_Text_Quentin_Freebies:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: THIS IS ZONE ZERO.\n"
	.string "YOU WILL BE ENTERING ZONE ONE.\p"
	.string "HERE ARE SOME STARTING ITEMS,\n"
	.string "AS WELL AS STARTING CASH.$"

Entrance_Text_ReceivedMoney:
	.string "Received ¥5000!$"

Entrance_Text_Quentin_WhenUReady:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: WHEN YOU ARE READY TO\n"
	.string "LEAVE, TALK TO ME ONCE MORE AND I\l"
	.string "WILL GUIDE YOU ON YOUR WAY.$"

Entrance_Movement_Quentin_WalkDown:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

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
