Zone20B_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone20B_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone20B_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE_20_STATE, 0, Zone20B_EventScript_LeviathanBattle
	.2byte 0


Zone20B_EventScript_LeviathanBattle::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	msgbox Zone20B_EventScript_LeviathanBattle_Text_0
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	fadeoutbgm 1
	msgbox Zone20B_EventScript_LeviathanBattle_Text_1, MSGBOX_DEFAULT
	msgbox Zone20B_EventScript_LeviathanBattle_Text_2
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_NINA, 0, NULL, Zone20B_EventScript_LeviathanBattle_Text_3
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_MARIAM, 0, NULL, Zone20B_EventScript_LeviathanBattle_Text_4
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	setvar VAR_MUGSHOT_ID, MUGSHOT_MIRAGE
	setflag FLAG_SHOULD_1V2
	dotrainerbattle
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone20B_EventScript_LeviathanBattle_Text_5, MSGBOX_DEFAULT
	delay 100
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone20B_EventScript_LeviathanBattle_Text_6
	applymovement 1, Common_Movement_FaceUp
	waitmovement 0
	fadescreenswapbuffers FADE_TO_BLACK
	playmoncry SPECIES_PORYGON, 2
	delay 40
	waitmoncry
	removeobject 1
	removeobject 2
	setflag FLAG_BEAT_LEVIATHAN_17
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox Zone20B_EventScript_LeviathanBattle_Text_7, MSGBOX_DEFAULT
	giveitem ITEM_GREEN_SHARD, 1
	setvar VAR_ZONE_20_STATE, 1
	releaseall
	end


Zone20B_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: We've gone undetected thus far,\n"
	.string "but we need to hurry.\p"
	.string "There's no telling when something…$"

Zone20B_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: How… did you find me?\p"
	.string "How did he know to send you here?$"

Zone20B_EventScript_LeviathanBattle_Text_2:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: No matter. I'll put you down and be\n"
	.string "out of here in a second.$"

Zone20B_EventScript_LeviathanBattle_Text_3:
	.string "ahhh$"

Zone20B_EventScript_LeviathanBattle_Text_4:
	.string "bahhhh$"

Zone20B_EventScript_LeviathanBattle_Text_5:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: That's… not possible.\p"
	.string "An AI, defeating me?$"

Zone20B_EventScript_LeviathanBattle_Text_6:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Command, I'm on my way out.$"

Zone20B_EventScript_LeviathanBattle_Text_7:
	.string "There's something glittering on the\n"
	.string "ground!$"

Zone20B_Text_Leviathan17Defeat::
	.string "…$"
