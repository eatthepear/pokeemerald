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
	msgbox Entrance_Text_Quentin_NuzlockeExplained, MSGBOX_AUTOCLOSE
	msgbox Entrance_Text_Quentin_VanillaExplained, MSGBOX_AUTOCLOSE
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
	msgbox Entrance_Text_Quentin_NuzlockeMode, MSGBOX_AUTOCLOSE
	goto Entrance_EventScript_Tour
	end
	
Entrance_EventScript_Tour:
	msgbox Entrance_Text_Quentin_StartTour, MSGBOX_DEFAULT
	applymovement 1, Entrance_Movement_Quentin_FirstShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_FirstShop
	waitmovement 0
	msgbox Entrance_Text_Quentin_Welcome, MSGBOX_DEFAULT
	applymovement 1, Entrance_Movement_Quentin_SecondShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_SecondShop
	waitmovement 0
	msgbox Entrance_Text_Quentin_Welcome, MSGBOX_DEFAULT
	applymovement 1, Entrance_Movement_Quentin_ThirdShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_ThirdShop
	waitmovement 0
	msgbox Entrance_Text_Quentin_Welcome, MSGBOX_DEFAULT
	applymovement 1, Entrance_Movement_Quentin_FourthShop
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_FourthShop
	waitmovement 0
	msgbox Entrance_Text_Quentin_Welcome, MSGBOX_DEFAULT
	applymovement 1, Entrance_Movement_Quentin_BackMid
	applymovement OBJ_EVENT_ID_PLAYER, Entrance_Movement_Player_BackMid
	waitmovement 0
	msgbox Entrance_Text_Quentin_Welcome, MSGBOX_DEFAULT
	applymovement 1, Entrance_Movement_Quentin_BackTop
	waitmovement 0
	setvar VAR_TUTORIAL, 1
	end

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
	.string "MODES: VANILLA AND NUZLOCKE.$"

Entrance_Text_Quentin_NuzlockeExplained:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: NUZLOCKE MODE HAS\n"
	.string "IMPLEMENTED PERMADEATH. EACH ZONE\l"
	.string "YOU CAN CAPTURE ONE POKEMON,\l"
	.string "EXCLUDING GIFT POKEMON.\p"
	.string "SPECIES CLAUSE IS ENABLED,\n"
	.string "AS IS SHINY CLAUSE.$"

Entrance_Text_Quentin_VanillaExplained:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: VANILLA MEANS ALL NUZLOCKE\n"
	.string "RULES ARE DISABLED. YOU WILL PLAY\l"
	.string "WITHOUT PERMADEATH OR POKEMON\l"
	.string "CAPTURE LIMITATIONS.\p"
	.string "WHILE YOU WILL NOT BE ABLE TO\n"
	.string "PURCHASE REVIVES, YOU MIGHT BE ABLE\l"
	.string "TO RECEIVE THEM AS REWARDS FOR\l"
	.string "QUESTS OR FIND THEM AS LOOT.$"

Entrance_Text_Quentin_PickMode:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: WOULD YOU LIKE TO PLAY ON\n"
	.string "NUZLOCKE MODE?$"

Entrance_Text_Quentin_VanillaMode:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: NUZLOCKE MODE DISABLED.\p"
	.string "VANILLA MODE ENABLED. GOOD LUCK.$"

Entrance_Text_Quentin_NuzlockeMode:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: NUZLOCKE MODE ENABLED.\n"
	.string "GOOD LUCK.$"

Entrance_Text_Quentin_StartTour:
	.string "{COLOR BLUE}QUENTIN{COLOR DARK_GREY}: ALLOW ME TO SHOW YOU EACH\n"
	.string "OF THE SHOPS.$"

Entrance_Text_Quentin_Welcome:
	.string "Hello there!$"

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
	face_right
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
	face_left
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
	face_right
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
	face_up
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
