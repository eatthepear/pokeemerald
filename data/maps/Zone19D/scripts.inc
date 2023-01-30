Zone19D_MapScripts::
	.byte 0


Zone19D_EventScript_Sign::
	lock
	msgbox Zone19D_EventScript_Sign_Text_0, MSGBOX_SIGN
	compare VAR_ZONE_19_STATE, 0
	goto_if_eq Zone19D_EventScript_Sign_2
Zone19D_EventScript_Sign_1:
	release
	end

Zone19D_EventScript_Sign_2:
	goto Zone19D_EventScript_InitiatePirateBattles
	goto Zone19D_EventScript_Sign_1


Zone19D_EventScript_InitiatePirateBattles::
	fadeoutbgm 1
	delay 40
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 10
	goto_if_eq Zone19D_EventScript_InitiatePirateBattles_2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
Zone19D_EventScript_InitiatePirateBattles_1:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
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
	applymovement 1, Zone19D_Movement_TopPirateWalkUp
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
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement 4, Common_Movement_WalkInPlaceFasterLeft
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_3
	waitmovement 0
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	trainerbattle_no_intro TRAINER_PIRATE_1, Zone19D_Text_PirateDefeat
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone19D_EventScript_InitiatePirateBattles_7
Zone19D_EventScript_InitiatePirateBattles_5:
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_4
	trainerbattle_no_intro TRAINER_PIRATE_2, Zone19D_Text_PirateDefeat
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone19D_EventScript_InitiatePirateBattles_12
Zone19D_EventScript_InitiatePirateBattles_10:
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_5
	trainerbattle_no_intro TRAINER_PIRATE_3, Zone19D_Text_PirateDefeat
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone19D_EventScript_InitiatePirateBattles_17
Zone19D_EventScript_InitiatePirateBattles_15:
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_6
	trainerbattle_no_intro TRAINER_PIRATE_4, Zone19D_Text_PirateDefeat
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone19D_EventScript_InitiatePirateBattles_22
Zone19D_EventScript_InitiatePirateBattles_20:
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_7
	giveitem ITEM_TM36
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_8
	applymovement 1, Zone19D_Movement_Pirate1Run
	applymovement 2, Zone19D_Movement_Pirate2Run
	applymovement 3, Zone19D_Movement_Pirate3Run
	applymovement 4, Zone19D_Movement_Pirate4Run
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_9
	waitmovement 0
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	setflag FLAG_HIDE_ZONE19D_PIRATES
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	fadedefaultbgm
	setvar VAR_ZONE_18_STATE, 5
	setvar VAR_ZONE_19_STATE, 1
	setflag FLAG_HIDE_ZONE18A_ZOE
	setflag FLAG_HIDE_ZONE18A_ELI
	clearflag FLAG_HIDE_ZONE18B_ZOE
	clearflag FLAG_HIDE_ZONE18B_ELI
	clearflag FLAG_HIDE_ZONE18A_PORYGON
	delay 100
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_10
	delay 40
	warp MAP_ZONE18B, 255, 4, 4
	waitstate
	releaseall
	end

Zone19D_EventScript_InitiatePirateBattles_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	goto Zone19D_EventScript_InitiatePirateBattles_1

Zone19D_EventScript_InitiatePirateBattles_6:
	special HealPlayerParty
	goto Zone19D_EventScript_InitiatePirateBattles_5

Zone19D_EventScript_InitiatePirateBattles_7:
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone19D_EventScript_InitiatePirateBattles_6
	goto Zone19D_EventScript_InitiatePirateBattles_5

Zone19D_EventScript_InitiatePirateBattles_11:
	special HealPlayerParty
	goto Zone19D_EventScript_InitiatePirateBattles_10

Zone19D_EventScript_InitiatePirateBattles_12:
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone19D_EventScript_InitiatePirateBattles_11
	goto Zone19D_EventScript_InitiatePirateBattles_10

Zone19D_EventScript_InitiatePirateBattles_16:
	special HealPlayerParty
	goto Zone19D_EventScript_InitiatePirateBattles_15

Zone19D_EventScript_InitiatePirateBattles_17:
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone19D_EventScript_InitiatePirateBattles_16
	goto Zone19D_EventScript_InitiatePirateBattles_15

Zone19D_EventScript_InitiatePirateBattles_21:
	special HealPlayerParty
	goto Zone19D_EventScript_InitiatePirateBattles_20

Zone19D_EventScript_InitiatePirateBattles_22:
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone19D_EventScript_InitiatePirateBattles_21
	goto Zone19D_EventScript_InitiatePirateBattles_20


Zone19D_Movement_TopPirateWalkUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_right
	face_down
	step_end

Zone19D_Movement_LeftPirateWalkUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
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
	walk_left
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

Zone19D_EventScript_Sign_Text_0:
	.string "This is just a normal wall!\p"
	.string "Nothing suspicious at all behind it!$"

Zone19D_EventScript_InitiatePirateBattles_Text_0:
	.string "Shiver me timbers!\nAhoy, maties! This here trainer\lfound us!$"

Zone19D_EventScript_InitiatePirateBattles_Text_1:
	.string "We'll be feedin' the fish if the\nCap'n ever finds out someone found\lour hideout.$"

Zone19D_EventScript_InitiatePirateBattles_Text_2:
	.string "Well, dead men tell no tales.\pThe Cap'n will ne'er ‘ave to know,\nsavvy?$"

Zone19D_EventScript_InitiatePirateBattles_Text_3:
	.string "Ye lily-livered scallywags,\nlet's just get to the battles!$"

Zone19D_EventScript_InitiatePirateBattles_Text_4:
	.string "I be next. Fire in the hole!$"

Zone19D_EventScript_InitiatePirateBattles_Text_5:
	.string "We give no quarter!$"

Zone19D_EventScript_InitiatePirateBattles_Text_6:
	.string "Son o' a biscuit eater!\nFace the might o' us seadogs!$"

Zone19D_EventScript_InitiatePirateBattles_Text_7:
	.string "Sink me!\nThis trainer beat all four o' us!\l‘ere be your booty, take it!$"

Zone19D_EventScript_InitiatePirateBattles_Text_8:
	.string "Me hearties, run!$"

Zone19D_EventScript_InitiatePirateBattles_Text_9:
	.string "Arrr!$"

Zone19D_EventScript_InitiatePirateBattles_Text_10:
	.string "It's time to go back to the Trainer's\n"
	.string "Dojo.$"

Zone19D_Text_PirateDefeat::
	.string "Arrr!$"
