EventScript_MoveCameraUp:
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	special RemoveCameraObject
	return

EventScript_MoveCameraDown:
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	special RemoveCameraObject
	return

EventScript_GeneralSign::
	msgbox gText_GeneralSign, MSGBOX_SIGN
	end

EventScript_UniqueSign::
	msgbox gText_UniqueSign, MSGBOX_SIGN
	end

EventScript_ServicesSign::
	msgbox gText_ServicesSign, MSGBOX_SIGN
	end

EventScript_HealingSign::
	msgbox gText_HealingSign, MSGBOX_SIGN
	end

EventScript_Shop_TimIntro:
	msgbox gText_Tim_Intro, MSGBOX_AUTOCLOSE
	setflag FLAG_TIM_INTRO
	return

EventScript_Shop_VarrickIntro:
	msgbox gText_Varrick_Intro, MSGBOX_AUTOCLOSE
	setflag FLAG_VARRICK_INTRO
	return

EventScript_Shop_LelouchIntroCheck::
	lock
	faceplayer
	call_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_LelouchIntro
	msgbox gText_Lelouch_NoShards, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Shop_LelouchIntro:
	msgbox gText_Lelouch_Intro1, MSGBOX_AUTOCLOSE
	delay 96
	msgbox gText_Lelouch_Intro2, MSGBOX_AUTOCLOSE
	setflag FLAG_LELOUCH_INTRO
	return

EventScript_Shop_LelouchDeny:
	msgbox gText_Lelouch_NoShards, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Shop_LelouchExplainShards:
	msgbox gText_Lelouch_ExplainShards, MSGBOX_AUTOCLOSE
	setflag FLAG_LELOUCH_SHARDS
	return

EventScript_Shop_LelouchNotEnoughColor:
	msgbox gText_Lelouch_NotEnoughColor, MSGBOX_AUTOCLOSE
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchTraining1:
	checkitem ITEM_RED_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_LelouchNotEnoughColor
	msgbox gText_Lelouch_CostsRedShards, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_TRAINING1, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchExp1
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchExp1:
	msgbox gText_Lelouch_Exp1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchTraining1
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEXP1, gText_LelouchDefeated
	release
	end

EventScript_Shop_LelouchLeave:
	msgbox gText_Lelouch_Leave, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Joy_DenyPC::
	lockall
	applymovement 4, Common_Movement_FaceRight
	msgbox gText_Joy_CantUse, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement 4, Common_Movement_FaceDown
	waitmovement 0
	releaseall
	end

EventScript_Shop_JoyIntroCheck::
	lock
	faceplayer
	goto_if_set FLAG_JOY_INTRO, EventScript_Joy_Welcome
	setflag FLAG_JOY_INTRO
	msgbox gText_Joy_Intro, MSGBOX_AUTOCLOSE
	goto EventScript_Joy_Welcome
	release
	end

EventScript_Joy_Welcome:
	lockall
	msgbox gText_Joy_Welcome, MSGBOX_AUTOCLOSE
	call_if_set FLAG_NUZLOCKE_ON, EventScript_Joy_Nuzlocke
	showmoneybox 0, 0, 0
	msgbox gText_Joy_WouldYouLikeToHeal, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EventScript_Joy_CheckMoney
	closemessage
	hidemoneybox
	msgbox gText_Joy_WonderfulDay, MSGBOX_AUTOCLOSE
	releaseall
	end

EventScript_Joy_Nuzlocke:
	msgbox gText_Joy_Nuzlocke, MSGBOX_AUTOCLOSE
	return

EventScript_Joy_CheckMoney:
	checkmoney 500, 0
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Joy_NotEnough
	goto EventScript_Joy_Heal
	end

EventScript_Joy_NotEnough:
	msgbox gText_Joy_NotEnough, MSGBOX_AUTOCLOSE
	hidemoneybox
	msgbox gText_Joy_WonderfulDay, MSGBOX_AUTOCLOSE
	releaseall
	end

EventScript_Joy_Heal:
	removemoney 500, 0
	updatemoneybox 0, 0
	msgbox gText_Joy_ThankYou, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	playfanfare MUS_ME_ASA
	waitfanfare
	special HealPlayerParty
	call_if_set FLAG_NUZLOCKE_ON, EventScript_DeleteFaintedPartyPokemon
	fadescreen FADE_FROM_BLACK
	setvar VAR_HEAL_SHOP_USED, 1
	msgbox gText_Joy_PartyHealed, MSGBOX_AUTOCLOSE
	closemessage
	hidemoneybox
	msgbox gText_Joy_WonderfulDay, MSGBOX_AUTOCLOSE
	releaseall
	end

EventScript_DeleteFaintedPartyPokemon:
	callnative DeleteFaintedPartyPokemon
	return

EventScript_ExitSign::
	msgbox gText_ExitSign, MSGBOX_SIGN
	end

EventScript_LeaveLeft:
	applymovement 1, Common_Movement_WalkRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	return

EventScript_LeaveMiddle:
	applymovement 1, Common_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	return

EventScript_LeaveRight:
	applymovement 1, Common_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	return

EventScript_LeavingSetup:
	msgbox gText_Quentin_Onwards, MSGBOX_AUTOCLOSE
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 6
	call_if_eq EventScript_LeaveLeft
	compare VAR_TEMP_0, 7
	call_if_eq EventScript_LeaveMiddle
	compare VAR_TEMP_0, 8
	call_if_eq EventScript_LeaveRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	return

EventScript_StonesMultichoice:
	scrollingmultichoice 1, 0, 0, 4, FALSE
	compare VAR_RESULT, 0
	call_if_eq EventScript_FireStone
	compare VAR_RESULT, 1
	call_if_eq EventScript_WaterStone
	compare VAR_RESULT, 2
	call_if_eq EventScript_ThunderStone
	compare VAR_RESULT, 3
	call_if_eq EventScript_LeafStone
	compare VAR_RESULT, 4
	call_if_eq EventScript_MoonStone
	compare VAR_RESULT, 5
	call_if_eq EventScript_SunStone
	compare VAR_RESULT, 6
	call_if_eq EventScript_ShinyStone
	compare VAR_RESULT, 7
	call_if_eq EventScript_DuskStone
	compare VAR_RESULT, 8
	call_if_eq EventScript_DawnStone
	compare VAR_RESULT, 9
	call_if_eq EventScript_IceStone
	return

EventScript_FireStone:
	finditem ITEM_FIRE_STONE
	return

EventScript_WaterStone:
	finditem ITEM_WATER_STONE
	return

EventScript_ThunderStone:
	finditem ITEM_THUNDER_STONE
	return

EventScript_LeafStone:
	finditem ITEM_LEAF_STONE
	return

EventScript_MoonStone:
	finditem ITEM_MOON_STONE
	return

EventScript_SunStone:
	finditem ITEM_SUN_STONE
	return

EventScript_ShinyStone:
	finditem ITEM_SHINY_STONE
	return

EventScript_DuskStone:
	finditem ITEM_DUSK_STONE
	return

EventScript_DawnStone:
	finditem ITEM_DAWN_STONE
	return

EventScript_IceStone:
	finditem ITEM_ICE_STONE
	return
