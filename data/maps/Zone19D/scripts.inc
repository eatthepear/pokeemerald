Zone19D_MapScripts::
	.byte 0

Zone19D_EventScript_Exit::
	lockall
	compare VAR_ZONE, 19
	goto_if_gt EventScript_WarpZone0
	call_if_set FLAG_BRUTAL_MODE_ON, Zone19D_EventScript_CheckBrutal
	warp MAP_ZONE19SANCTUARY, 255, 22, 7
	releaseall
	end

Zone19D_EventScript_CheckBrutal:
	goto_if_not_defeated TRAINER_MARION, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_CLINTON, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_KENNETH, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_JAY, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_BLANCHE, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_TERRENCE, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_MARTY, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_KARI, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_ABRAHAM, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_REX, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_EMILIO, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_MELINDA, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_LOUIS, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_DESIREE, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_PAM, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_WILLIE, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_DORIS, EventScript_BrutalExitNotSatisfied
	goto_if_unset FLAG_BEATLEVIATHAN11, EventScript_BrutalExitNotSatisfied
	return

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
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
	msgbox Zone19D_Text_Pirate1, MSGBOX_AUTOCLOSE
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
	msgbox Zone19D_Text_Pirate2, MSGBOX_AUTOCLOSE
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
	msgbox Zone19D_Text_Pirate3, MSGBOX_AUTOCLOSE
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement 4, Common_Movement_WalkInPlaceFasterLeft
	msgbox Zone19D_Text_Pirate4, MSGBOX_AUTOCLOSE
	waitmovement 0
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	trainerbattle_no_intro TRAINER_PIRATE_4, Zone19D_Text_Pirate4Defeat
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone19D_Text_Pirate3Intro, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_PIRATE_3, Zone19D_Text_Pirate3Defeat
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone19D_Text_Pirate2Intro, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_PIRATE_2, Zone19D_Text_Pirate2Defeat
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone19D_Text_Pirate1Intro, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_PIRATE_1, Zone19D_Text_Pirate1Defeat
	msgbox Zone19D_Text_Pirate1Here, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM24
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
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	fadedefaultbgm
	setvar VAR_ZONE_18_STATE, 3
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
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	step_end

Zone19D_Movement_Pirate2Run:
	walk_faster_down
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	step_end


Zone19D_Movement_Pirate3Run:
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	step_end

Zone19D_Movement_Pirate4Run:
	walk_faster_down
	walk_faster_down
	walk_faster_right
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	step_end

Zone19D_Text_ReturnToDojo:
	.string "Would you like to return to the Dojo?$"

