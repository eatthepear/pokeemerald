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
	msgbox Zone20B_EventScript_LeviathanBattle_Text_1
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	setvar VAR_MUGSHOT_ID, MUGSHOT_MIRAGE
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone20B_EventScript_LeviathanBattle_2
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone20B_EventScript_LeviathanBattle_2
	trainerbattle_no_intro TRAINER_MIRAGE_LEVIATHAN_17, Zone20B_Text_Leviathan17Defeat
Zone20B_EventScript_LeviathanBattle_1:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone20B_EventScript_LeviathanBattle_Text_2
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone20B_EventScript_LeviathanBattle_Text_3
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
	msgbox Zone20B_EventScript_LeviathanBattle_Text_4
	giveitem ITEM_RED_SHARD, 20
	setvar VAR_ZONE_20_STATE, 1
	releaseall
	end

Zone20B_EventScript_LeviathanBattle_2:
	trainerbattle_no_intro TRAINER_MIRAGE_LEVIATHAN_17_BRUTAL, Zone20B_Text_Leviathan17Defeat
	goto Zone20B_EventScript_LeviathanBattle_1


Zone20B_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: It appears there's nothing in this\n"
	.string "Zone, {COLOR RED}Porygon{COLOR DARK_GRAY}.\p"
	.string "We should head back and report.$"

Zone20B_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Another AI!\p"
	.string "Even in a place as cold and empty as\n"
	.string "this?\p"
	.string "No matter, my blood is boiling for a\n"
	.string "fight!$"

Zone20B_EventScript_LeviathanBattle_Text_2:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: It seems I was mistaken.\nYou're no ordinary AI.$"

Zone20B_EventScript_LeviathanBattle_Text_3:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Command, I've completed the\n"
	.string "assignment. Will relocate immediately.$"

Zone20B_EventScript_LeviathanBattle_Text_4:
	.string "It looks like a bag was left behind!\pInside are… Shards?$"

Zone20B_Text_Leviathan17Defeat::
	.string "…$"
