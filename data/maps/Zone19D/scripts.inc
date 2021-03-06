Zone19D_MapScripts::
	.byte 0

Zone19D_EventScript_Exit::
	lockall
	warp MAP_ZONE19SANCTUARY, 255, 7, 7
	releaseall
	end

Zone19D_EventScript_InitiatePirateBattles::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	playbgm MUS_ENCOUNTER_AQUA, 0
	addobject 1
	addobject 2
	addobject 3
	addobject 4
	clearflag FLAG_HIDE_ZONE19D_PIRATES
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	applymovement 2, Zone19D_Movement_LeftPirateWalkUp
	applymovement 3, Zone19D_Movement_BottomPirateWalkUp
	applymovement 4, Zone19D_Movement_RightPirateWalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	delay 40
	applymovement 1, Common_Movement_WalkInPlaceFastestDown
	msgbox Zone19D_Text_Pirate1, MSGBOX_AUTOCLOSE
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	applymovement 2, Common_Movement_WalkInPlaceFastestRight
	msgbox Zone19D_Text_Pirate2, MSGBOX_AUTOCLOSE
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	applymovement 3, Common_Movement_WalkInPlaceFastestUp
	msgbox Zone19D_Text_Pirate3, MSGBOX_AUTOCLOSE
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement 4, Common_Movement_WalkInPlaceFastestLeft
	msgbox Zone19D_Text_Pirate4, MSGBOX_AUTOCLOSE
	waitmovement 0
	trainerbattle_no_intro TRAINER_PIRATE_4, Zone19D_Text_Pirate4Defeat
	applymovement 3, Common_Movement_WalkInPlaceFastestUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone19D_Text_Pirate3Intro, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_PIRATE_3, Zone19D_Text_Pirate3Defeat
	applymovement 2, Common_Movement_WalkInPlaceFastestRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone19D_Text_Pirate2Intro, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_PIRATE_2, Zone19D_Text_Pirate2Defeat
	applymovement 1, Common_Movement_WalkInPlaceFastestDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone19D_Text_Pirate1Intro, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_PIRATE_1, Zone19D_Text_Pirate1Defeat
	msgbox Zone19D_Text_Pirate1Here, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM17
	msgbox Zone19D_Text_Pirate1Run, MSGBOX_AUTOCLOSE
	applymovement 1, Zone19D_Movement_Pirate1Run
	applymovement 2, Zone19D_Movement_Pirate2Run
	applymovement 3, Zone19D_Movement_Pirate3Run
	applymovement 4, Zone19D_Movement_Pirate4Run
	msgbox Zone19D_Text_PirateArr, MSGBOX_AUTOCLOSE
	waitmovement 0
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	setflag FLAG_HIDE_ZONE19D_PIRATES
	fadedefaultbgm
	setvar VAR_ZONE18B_STATE, 3
	msgbox Zone19D_Text_ReturnToDojo, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone19D_EventScript_ReturnToDojo
	releaseall
	end

Zone19D_EventScript_ReturnToDojo:
	warp MAP_ZONE18B, 255, 4, 4
	releaseall
	end

Zone19D_Text_Pirate1:
	.string "Shiver me timbers!\n"
	.string "Ahoy, maties! This here trainer\l"
	.string "found us!$"

Zone19D_Text_Pirate2:
	.string "We'll be feedin' the fish if the\n"
	.string "Cap'n ever finds out someone found\l"
	.string "our hideout.$"

Zone19D_Text_Pirate3:
	.string "Well, dead men tell no tales.\p"
	.string "The Cap'n will ne'er ‘ave to know,\n"
	.string "savvy?$"

Zone19D_Text_Pirate4:
	.string "Ye lily-livered scallywags,\n"
	.string "let's just get to the battle!$"

Zone19D_Text_Pirate4Defeat:
	.string "Arrr!$"

Zone19D_Text_Pirate3Defeat:
	.string "Arrr!$"

Zone19D_Text_Pirate2Defeat:
	.string "Arrr!$"

Zone19D_Text_Pirate1Defeat:
	.string "Arrr!$"

Zone19D_Text_Pirate3Intro:
	.string "I be next. Fire in the hole!$"

Zone19D_Text_Pirate2Intro:
	.string "We give no quarter!$"

Zone19D_Text_Pirate1Intro:
	.string "Son o' a biscuit eater!\n"
	.string "Face the might o' us seadogs!$"

Zone19D_Text_Pirate1Here:
	.string "Sink me!\n"
	.string "This trainer beat all four o' us!\l"
	.string "‘ere be your booty, take it!$"

Zone19D_Text_Pirate1Run:
	.string "Me hearties, run!$"

Zone19D_Text_PirateArr:
	.string "Arrr!$"

Zone19D_Movement_TopPirateWalkDown:
	walk_down
	walk_down
	step_end

Zone19D_Movement_LeftPirateWalkUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	step_end

Zone19D_Movement_BottomPirateWalkUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Zone19D_Movement_RightPirateWalkUp:
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_Left
	step_end

Zone19D_Movement_Pirate1Run:
	walk_fastest_left
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	step_end

Zone19D_Movement_Pirate2Run:
	walk_fastest_down
	walk_fastest_left
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	step_end


Zone19D_Movement_Pirate3Run:
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	step_end

Zone19D_Movement_Pirate4Run:
	walk_fastest_down
	walk_fastest_down
	walk_fastest_right
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	step_end

Zone19D_Text_ReturnToDojo:
	.string "Would you like to return to the Dojo?$"

