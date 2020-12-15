Zone14C_MapScripts::
	.byte 0

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
	setvar VAR_ZONE14C_STATE, 1
	goto Zone14C_EventScript_InitiateLeviathanBattle
	end

Zone14C_EventScript_Left::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	setvar VAR_ZONE14C_STATE, 1
	goto Zone14C_EventScript_InitiateLeviathanBattle
	end

Zone14C_EventScript_Middle::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	setvar VAR_ZONE14C_STATE, 1
	goto Zone14C_EventScript_InitiateLeviathanBattle
	end

Zone14C_EventScript_Right::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	setvar VAR_ZONE14C_STATE, 1
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
	setvar VAR_ZONE14C_STATE, 1
	goto Zone14C_EventScript_InitiateLeviathanBattle
	end

Zone14C_EventScript_InitiateLeviathanBattle:
	call EventScript_BeforeLeviathanHeal
	msgbox Zone14C_Text_Shadow_Registeel, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone14C_Text_Shadow_Begone, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_LEVIATHAN7, Zone14C_Text_Leviathan7Defeat
	goto Zone14C_EventScript_Leviathan7Defeated
	end

Zone14C_Text_Shadow_Registeel:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: Registeel... The second of the\n"
	.string "Legendary Titans...$"

Zone14C_Text_Shadow_Begone:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: Another child to crush.\p"
	.string "Begone!$"

Zone14C_Text_Leviathan7Defeat:
	.string "...$"

Zone14C_EventScript_Leviathan7Defeated:
	msgbox Zone14C_Text_Shadow_Mistaken, MSGBOX_AUTOCLOSE
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone14C_Text_Shadow_Command, MSGBOX_AUTOCLOSE
	removeobject 1
	removeobject 2
	setflag FLAG_BEATLEVIATHAN7
	releaseall
	end

Zone14C_Text_Shadow_Mistaken:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: It seems I was mistaken.\n"
	.string "You're no ordinary child.$"

Zone14C_Text_Shadow_Command:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: Command, Registeel is secure.\n"
	.string "Requesting immediate evac.$"
