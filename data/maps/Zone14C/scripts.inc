Zone14C_MapScripts::
	.byte 0

Zone14C_EventScript_Exit::
	lockall
	compare VAR_ZONE, 14
	goto_if_gt EventScript_WarpZone0
	call_if_set FLAG_BRUTAL_MODE_ON, Zone14C_EventScript_CheckBrutal
	warp MAP_ZONE14SANCTUARY, 255, 22, 7
	releaseall
	end

Zone14C_EventScript_CheckBrutal:
	goto_if_not_defeated TRAINER_JAN_AND_ERIN, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_AMBER_AND_KIM, EventScript_BrutalExitNotSatisfied
	goto_if_unset FLAG_BEAT_LEVIATHAN_7, EventScript_BrutalExitNotSatisfied
	goto_if_unset FLAG_BEAT_LEVIATHAN_8, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_LOLA, EventScript_BrutalExitNotSatisfied
	return

Zone14C_EventScript_LeftMost::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	setvar VAR_ZONE_14_STATE, 1
	goto Zone14C_EventScript_InitiateLeviathanBattle
	end

Zone14C_EventScript_Left::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	setvar VAR_ZONE_14_STATE, 1
	goto Zone14C_EventScript_InitiateLeviathanBattle
	end

Zone14C_EventScript_Middle::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	setvar VAR_ZONE_14_STATE, 1
	goto Zone14C_EventScript_InitiateLeviathanBattle
	end

Zone14C_EventScript_Right::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	setvar VAR_ZONE_14_STATE, 1
	goto Zone14C_EventScript_InitiateLeviathanBattle
	end

Zone14C_EventScript_RightMost::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	setvar VAR_ZONE_14_STATE, 1
	goto Zone14C_EventScript_InitiateLeviathanBattle
	end

Zone14C_EventScript_InitiateLeviathanBattle:
	msgbox Zone14C_Text_Mirage_Registeel, MSGBOX_AUTOCLOSE
	applymovement 2, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	getpartysize
	compare VAR_RESULT, 1
	goto_if_eq Zone14C_EventScript_DontHaveEnoughMons
	fadeoutbgm 1
	msgbox Zone14C_Text_Mirage_Begone, MSGBOX_AUTOCLOSE
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	setvar VAR_MUGSHOT_ID, MUGSHOT_MIRAGE
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone14C_EventScript_MirageBrutal
	trainerbattle_no_intro TRAINER_LEVIATHAN9, Zone14C_Text_Leviathan9Defeat
	goto Zone14C_EventScript_Leviathan9Defeated
	end

Zone14C_EventScript_MirageBrutal:
	trainerbattle_no_intro TRAINER_LEVIATHAN9_BRUTAL, Zone14C_Text_Leviathan9Defeat
	goto Zone14C_EventScript_Leviathan9Defeated
	end

Zone14C_Text_Mirage_Registeel:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Registeel... The second of the\n"
	.string "Legendary Titans...$"

Zone14C_Text_Mirage_Begone:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Another AI to crush.\p"
	.string "Begone!$"

Zone14C_Text_Leviathan9Defeat:
	.string "...$"

Zone14C_EventScript_DontHaveEnoughMons:
	msgbox Zone14C_Text_Mirage_NotEnoughMons, MSGBOX_AUTOCLOSE
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	setvar VAR_ZONE_14_STATE, 0
	releaseall
	end

Zone14C_Text_Mirage_NotEnoughMons:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Another AI to crush.\p"
	.string "Oh. You only have a single Pokémon.\n"
	.string "You are no threat to me.$"

Zone14C_EventScript_Leviathan9Defeated:
	msgbox Zone14C_Text_Mirage_Mistaken, MSGBOX_AUTOCLOSE
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone14C_Text_Mirage_Command, MSGBOX_AUTOCLOSE
	fadescreenswapbuffers FADE_TO_BLACK
	playmoncry SPECIES_REGISTEEL, 2
	delay 40
	waitmoncry
	removeobject 1
	removeobject 2
	setflag FLAG_BEAT_LEVIATHAN_9
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox Zone14C_Text_FoundBag, MSGBOX_AUTOCLOSE
	giveitem ITEM_RED_SHARD, 20
	releaseall
	end

Zone14C_Text_Mirage_Mistaken:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: It seems I was mistaken.\n"
	.string "You're no ordinary AI.$"

Zone14C_Text_Mirage_Command:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Command, Registeel is secure.\n"
	.string "Requesting immediate evac.$"

Zone14C_Text_FoundBag:
	.string "It looks like a bag was left behind!\p"
	.string "Inside are... Shards?$"
