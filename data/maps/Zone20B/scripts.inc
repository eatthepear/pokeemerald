Zone20B_MapScripts::
	.byte 0


Zone20B_EventScript_InitiateBattle::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_ExclamationMark
	applymovement 2, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement 1, Common_Movement_FaceLeft
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_WalkLeft
	applymovement 2, Common_Movement_WalkLeft
	waitmovement 0
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone20B_EventScript_InitiateBattle_2
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone20B_EventScript_InitiateBattle_2
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_TROY, 0, NULL, Zone20B_EventScript_InitiateBattle_Text_1
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_ABED, 0, NULL, Zone20B_EventScript_InitiateBattle_Text_2
Zone20B_EventScript_InitiateBattle_1:
	setflag FLAG_SHOULD_1V2
	dotrainerbattle
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL, 1
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
	msgbox Zone20B_EventScript_InitiateBattle_Text_0
	applymovement 2, Common_Movement_WalkUp
	applymovement 1, Zone20B_Movement_Leave
	waitmovement 2
	applymovement 2, Zone20B_Movement_Leave
	waitmovement 0
	setflag FLAG_HIDE_ZONE20B_WORKERS
	removeobject 1
	removeobject 2
	setvar VAR_ZONE_20_STATE, 1
	releaseall
	end

Zone20B_EventScript_InitiateBattle_2:
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_TROY_BRUTAL, 0, NULL, Zone20B_EventScript_InitiateBattle_Text_1
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_ABED_BRUTAL, 0, NULL, Zone20B_EventScript_InitiateBattle_Text_2
	goto Zone20B_EventScript_InitiateBattle_1


Zone20B_Movement_Leave:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Zone20B_EventScript_InitiateBattle_Text_0:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}:$"

Zone20B_EventScript_InitiateBattle_Text_1:
	.string "ahhh$"

Zone20B_EventScript_InitiateBattle_Text_2:
	.string "bahhhh$"
