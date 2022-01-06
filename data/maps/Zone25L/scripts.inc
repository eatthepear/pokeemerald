Zone25L_MapScripts::
	.byte 0

Zone25L_EventScript_Exit::
	lockall
	compare VAR_ZONE, 24
	goto_if_gt EventScript_WarpZone0
	call_if_set FLAG_BRUTAL_MODE_ON, Zone25L_EventScript_CheckBrutal
	warp MAP_ZONE25SANCTUARY, 255, 22, 7
	releaseall
	end

Zone25L_EventScript_CheckBrutal:
	goto_if_not_defeated TRAINER_CHRISTI, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_SPENCER, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_HAYWOOD, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_MONROE, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_DAVID, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_DOMINIK, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_DOUGLAS, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_NADINE, EventScript_BrutalExitNotSatisfied
	return

Zone25L_EventScript_LeftMost::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	setvar VAR_ZONE25L_STATE, 1
	goto Zone25L_EventScript_InitiateLeviathanBattle
	end

Zone25L_EventScript_Left::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	setvar VAR_ZONE25L_STATE, 1
	goto Zone25L_EventScript_InitiateLeviathanBattle
	end

Zone25L_EventScript_Middle::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	setvar VAR_ZONE25L_STATE, 1
	goto Zone25L_EventScript_InitiateLeviathanBattle
	end

Zone25L_EventScript_Right::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	setvar VAR_ZONE25L_STATE, 1
	goto Zone25L_EventScript_InitiateLeviathanBattle
	end

Zone25L_EventScript_RightMost::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	setvar VAR_ZONE25L_STATE, 1
	goto Zone25L_EventScript_InitiateLeviathanBattle
	end

Zone25L_EventScript_InitiateLeviathanBattle:
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	msgbox Zone25L_Text_Mirage_1, MSGBOX_AUTOCLOSE
	waitmovement 0
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
	msgbox Zone25L_Text_Mirage_2, MSGBOX_AUTOCLOSE
	waitmovement 0
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	msgbox Zone25L_Text_Mirage_3, MSGBOX_AUTOCLOSE
	waitmovement 0
	delay 96
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	fadeoutbgm 1
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	msgbox Zone25L_Text_Mirage_4, MSGBOX_AUTOCLOSE
	waitmovement 0
	applymovement 1, Common_Movement_WalkRight
	applymovement 2, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement 2, Common_Movement_FaceDown
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
	msgbox Zone25L_Text_Mirage_5, MSGBOX_AUTOCLOSE
	waitmovement 0
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
	msgbox Zone25L_Text_Mirage_6, MSGBOX_AUTOCLOSE
	waitmovement 0
	getpartysize
	compare VAR_RESULT, 1
	goto_if_eq Zone25L_EventScript_DontHaveEnoughMons
	delay 96
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
	applymovement 2, Common_Movement_FaceDown
	msgbox Zone25L_Text_Mirage_7, MSGBOX_AUTOCLOSE
	waitmovement 0
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	setvar VAR_MUGSHOT_ID, MUGSHOT_MIRAGE
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone25L_EventScript_MirageBrutal
	trainerbattle_no_intro TRAINER_LEVIATHAN14, Zone25L_Text_Leviathan14Defeat
	goto Zone25L_EventScript_Leviathan14Defeated
	end

Zone25L_EventScript_MirageBrutal:
	trainerbattle_no_intro TRAINER_LEVIATHAN14_BRUTAL, Zone25L_Text_Leviathan14Defeat
	goto Zone25L_EventScript_Leviathan14Defeated
	end

Zone25L_Text_Mirage_1:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Are you sure?$"

Zone25L_Text_Mirage_2:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Positive. We need the big\n"
	.string "one, and so we need these two.$"

Zone25L_Text_Mirage_3:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: But he's coming for us.\n"
	.string "I'm sure those AI bots of his are\l"
	.string "hunting for us right now.$"

Zone25L_Text_Mirage_4:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hmm. It seems you were right.$"

Zone25L_Text_Mirage_5:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: I knew it!$"

Zone25L_Text_Mirage_6:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: It's just an AI.\n"
	.string "We'll take it out together.\p"
	.string "Then we can get out of this purgatory.$"

Zone25L_Text_Mirage_7:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You won't get the best of us today!$"

Zone25L_Text_Leviathan14Defeat:
	.string "...$"

Zone25L_EventScript_DontHaveEnoughMons:
	msgbox Zone25L_Text_Mirage_NotEnoughMons, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 2, Common_Movement_FaceUp
	applymovement 1, Common_Movement_FaceUp
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
	setvar VAR_ZONE25L_STATE, 0
	releaseall
	end

Zone25L_Text_Mirage_NotEnoughMons:
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You won't get the best of us today!\p"
	.string "Oh. This one only has one Pokémon.\n"
	.string "It's no threat.$"

Zone25L_EventScript_Leviathan14Defeated:
	releaseall
	end
