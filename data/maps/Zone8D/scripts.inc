Zone8D_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone8D_OnFrame
	.byte 0

Zone8D_OnFrame:
	map_script_2 VAR_ZONE8D_STATE, 0, Zone8D_EventScript_WallyIntro
	.2byte 0

Zone8D_EventScript_WallyIntro:
	lockall
	applymovement 4, Common_Movement_FaceDown
	waitmovement 0
	playse SE_PIN
	applymovement 4, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	msgbox Zone8D_Text_Wally_Intro1, MSGBOX_AUTOCLOSE
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Zone8D_Movement_Camera_GoUp
	waitmovement 0
	special RemoveCameraObject
	msgbox Zone8D_Text_Wally_Intro2, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE8D_STATE, 1
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Zone8D_Movement_Camera_GoDown
	waitmovement 0
	special RemoveCameraObject
	applymovement 4, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone8D_Text_Wally_YesNo, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone8D_EventScript_InitiateLeviathan4
	msgbox Zone8D_Text_Wally_Preparations, MSGBOX_AUTOCLOSE
	releaseall
	end

Zone8D_Text_Wally_Intro1:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: Um… E-excuse me…\p"
	.string "I'm Wally and…\n"
	.string "I need your help to save Regirock!$"

Zone8D_Text_Wally_Intro2:
	.string "{COLOR BLUE}Wally{COLOR DARK_GREY}: Those two have been talking\n"
	.string "about harvesting something from it.\p"
	.string "They look really strong though…$"

Zone8D_EventScript_WallyYesNo::
	lock
	faceplayer
	msgbox Zone8D_Text_Wally_YesNo, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone8D_EventScript_InitiateLeviathan4
	msgbox Zone8D_Text_Wally_Preparations, MSGBOX_AUTOCLOSE
	release
	end

Zone8D_Text_Wally_YesNo:
	.string "{COLOR BLUE}Wally{COLOR DARK_GREY}: Will you join forces with me\n"
	.string "to stop them from hurting Regirock?$"

Zone8D_Text_Wally_Preparations:
	.string "You… must have preparations to do.\n"
	.string "Please hurry, I don't know if it's\l"
	.string "already too late…$"

Zone8D_EventScript_GoWithWally::
	lockall
	msgbox Zone8D_Text_DontGoAlone, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end
	
Zone8D_Text_DontGoAlone:
	.string "You don't want to battle without\n"
	.string "Wally. His aid will be invaluable.$"

Zone8D_EventScript_InitiateLeviathan4:
	msgbox Zone8D_Text_Wally_WhatYourName, MSGBOX_AUTOCLOSE
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 6
	call_if_eq Zone8D_EventScript_Left
	compare VAR_TEMP_0, 7
	call_if_eq Zone8D_EventScript_Middle
	compare VAR_TEMP_0, 8
	call_if_eq Zone8D_EventScript_Right
	applymovement 4, Zone8D_Movement_Wally_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Zone8D_Movement_Player_WalkUp
	waitmovement 0
	msgbox Zone8D_Text_Wally_WontLet, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	applymovement 3, Common_Movement_FaceDown
	waitmovement 0
	delay 96
	applymovement 2, Common_Movement_FaceRight
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone8D_Text_Shadow2_BackAgain, MSGBOX_AUTOCLOSE
	msgbox Zone8D_Text_Shadow1_Entertaining, MSGBOX_AUTOCLOSE
	applymovement 3, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone8D_Text_Shadow2_AtOnce, MSGBOX_AUTOCLOSE
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	goto Zone8D_EventScript_BattleSetup
	release
	end
	
Zone8D_EventScript_BattleSetup:
	msgbox gText_PleasePick3Mons, MSGBOX_AUTOCLOSE
	special SavePlayerParty
	choose_mons
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_LEVIATHAN4, 0, NULL, Zone8D_Text_ShadowDefeat
	compare VAR_RESULT, 0
	goto_if_ne Zone8D_EventScript_LeviathanBattle
	special LoadPlayerParty
	goto Zone8D_EventScript_BattleSetup
	release
	end

Zone8D_EventScript_LeviathanBattle:
	special ReducePlayerPartyToSelectedMons
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
	setvar VAR_0x8005, MULTI_BATTLE_2_VS_1
	setvar VAR_0x8006, TRAINER_ZONE8D_WALLY
	setvar VAR_0x8007, TRAINER_BACK_PIC_WALLY
	special DoSpecialTrainerBattle
	waitstate
	frontier_saveparty
	special LoadPlayerParty
	switch VAR_RESULT
	case 1, Zone8D_EventScript_PlayerWon
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

Zone8D_EventScript_PlayerWon:
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone8D_Text_Shadow2_DefeatedByTwo, MSGBOX_AUTOCLOSE
	applymovement 2, Common_Movement_FaceRight
	waitmovement 0
	msgbox Zone8D_Text_Shadow1_NoMatter, MSGBOX_AUTOCLOSE
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone8D_Text_Shadow1_YoullRegret, MSGBOX_AUTOCLOSE
	release
	end

Zone8D_EventScript_Left:
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	return

Zone8D_EventScript_Right:
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	return

Zone8D_EventScript_Middle:
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_1, 8
	call_if_eq Zone8D_EventScript_MiddleUp
	compare VAR_TEMP_1, 10
	call_if_eq Zone8D_EventScript_MiddleDown
	return

Zone8D_EventScript_MiddleUp:
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	return

Zone8D_EventScript_MiddleDown:
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement 4, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	return

Zone8D_Text_Wally_WhatYourName:
	.string "Thank you. What's your name?\p"
	.string "{PLAYER}. I'll remember that.$"

Zone8D_Text_Wally_WontLet:
	.string "Wally: I won't let you hurt Regirock!$"

Zone8D_Text_Shadow2_BackAgain:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: The child is back again.\n"
	.string "With a friend this time.$"

Zone8D_Text_Shadow1_Entertaining:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: This should be... entertaining.\n"
	.string "Deal with them.$"

Zone8D_Text_Shadow2_AtOnce:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: At once.$"

Zone8D_Text_ShadowDefeat:
	.string "...$"

Zone8D_Text_Shadow2_DefeatedByTwo:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: Defeated by two children...$"

Zone8D_Text_Shadow1_NoMatter:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: No matter. It's done.$"

Zone8D_Text_Shadow1_YoullRegret:
	.string "You'll regret getting in our way.$"

Zone8D_EventScript_Regirock::
	lockall
	waitse
	setflag FLAG_DISABLE_CATCHING
	playmoncry SPECIES_REGIROCK, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIROCK, 15, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Zone8D_EventScript_DefeatedRegirock
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone8D_EventScript_RanFromRegirock
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone8D_EventScript_RanFromRegirock
	releaseall
	end

Zone8D_EventScript_DefeatedRegirock::
	setflag FLAG_BEATLEVIATHAN4
	goto Zone8D_EventScript_DefeatedRegirock2
	end

Zone8D_EventScript_RanFromRegirock::
	goto Zone8D_EventScript_RanFromRegirock2
	end

Zone8D_EventScript_DefeatedRegirock2::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_BEATLEVIATHAN4
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_DISABLE_CATCHING
	msgbox Zone8D_Text_RegirockDisappeared, MSGBOX_AUTOCLOSE
	finditem ITEM_EVIOLITE, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	warp MAP_ZONE8D, 255, 7, 7
	releaseall
	end

Zone8D_EventScript_RanFromRegirock2::
	msgbox Zone8D_Text_StillThere, MSGBOX_DEFAULT
	clearflag FLAG_DISABLE_CATCHING
	releaseall
	end

Zone8D_Text_StillThere:
	.string "It's still there, motionless.$"

Zone8D_Text_RegirockDisappeared:
	.string "Regirock disappeared. There's something\n"
	.string "colorful on the ground, a stone!$"

Zone8D_Movement_Camera_GoUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Zone8D_Movement_Camera_GoDown:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Zone8D_Movement_Wally_WalkUp:
	walk_up
	walk_up
	walk_up
	step_end

Zone8D_Movement_Player_WalkUp:
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	step_end
