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

EventScript_Shop_ZhuLiIntro::
	lockall
	applymovement 2, Common_Movement_ExclamationMark
	applymovement 5, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 18
	call_if_eq EventScript_Shop_ZhuLiIntroMoveUp
	compare VAR_TEMP_0, 19
	call_if_eq EventScript_Shop_ZhuLiIntroMoveUp
	compare VAR_TEMP_0, 20
	call_if_eq EventScript_Shop_ZhuLiIntroMoveUpLeft
	msgbox gText_Varrick_ZhuLiIntro1, MSGBOX_AUTOCLOSE
	msgbox gText_ZhuLi_ZhuLiIntro1, MSGBOX_AUTOCLOSE
	playse SE_APPLAUSE
	waitse
	msgbox gText_Varrick_ZhuLiIntro2, MSGBOX_AUTOCLOSE
	msgbox gText_ZhuLi_ZhuLiIntro2, MSGBOX_AUTOCLOSE
	msgbox gText_Varrick_ZhuLiIntro3, MSGBOX_AUTOCLOSE
	setvar VAR_ZHULI_INTRO, 1
	releaseall
	end

EventScript_Shop_ZhuLiIntroMoveUp:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	return

EventScript_Shop_ZhuLiIntroMoveUpLeft:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	call EventScript_Shop_ZhuLiIntroMoveUp
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

EventScript_Shop_LelouchTraining2:
	checkitem ITEM_RED_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_LelouchNotEnoughColor
	msgbox gText_Lelouch_CostsRedShards, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_TRAINING2, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchExp1
	case 1, EventScript_Shop_LelouchExp2
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchTraining3:
	checkitem ITEM_RED_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_LelouchNotEnoughColor
	msgbox gText_Lelouch_CostsRedShards, MSGBOX_DEFAULT
	scrollingmultichoice 5, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchExp1
	case 1, EventScript_Shop_LelouchExp2
	case 2, EventScript_Shop_LelouchExp3
	case 3, EventScript_Shop_LelouchEVHP
	case 4, EventScript_Shop_LelouchEVAtk
	case 5, EventScript_Shop_LelouchEVDef
	case 6, EventScript_Shop_LelouchEVSpA
	case 7, EventScript_Shop_LelouchEVSpD
	case 8, EventScript_Shop_LelouchEVSpe
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchExp1:
	msgbox gText_Lelouch_Exp1Cost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEXP1, gText_LelouchDefeated
	release
	end

EventScript_Shop_LelouchExp2:
	msgbox gText_Lelouch_Exp2Cost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEXP2, gText_LelouchDefeated
	release
	end

EventScript_Shop_LelouchExp3:
	msgbox gText_Lelouch_Exp3Cost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEXP3, gText_LelouchDefeated
	release
	end

EventScript_Shop_LelouchEVHP:
	msgbox gText_Lelouch_EVHPCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEVHP, gText_LelouchDefeated
	release
	end

EventScript_Shop_LelouchEVAtk:
	msgbox gText_Lelouch_EVAtkCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEVATK, gText_LelouchDefeated
	release
	end

EventScript_Shop_LelouchEVDef:
	msgbox gText_Lelouch_EVDefCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEVDEF, gText_LelouchDefeated
	release
	end

EventScript_Shop_LelouchEVSpA:
	msgbox gText_Lelouch_EVSpACost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEVSPA, gText_LelouchDefeated
	release
	end

EventScript_Shop_LelouchEVSpD:
	msgbox gText_Lelouch_EVSpDCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEVSPD, gText_LelouchDefeated
	release
	end

EventScript_Shop_LelouchEVSpe:
	msgbox gText_Lelouch_EVSpeCost, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchLeave
	removeitem ITEM_RED_SHARD, 1
	msgbox gText_Lelouch_PayRed, MSGBOX_AUTOCLOSE
	delay 96
	trainerbattle_no_intro TRAINER_LELOUCHEVSPE, gText_LelouchDefeated
	release
	end

EventScript_Shop_LelouchCheckReminder:
	checkitem ITEM_BLUE_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_LelouchNotEnoughColor
	msgbox gText_Lelouch_CostsBlueShards, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_LelouchReminderChooseMon
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchReminderChooseMon:
	msgbox gText_Lelouch_RemindWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_LelouchLeave
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_LelouchCantRemindEgg
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_LelouchNoMoveToRemindMon
	goto EventScript_Shop_LelouchReminderChooseMove
	end

EventScript_Shop_LelouchReminderChooseMove:
	msgbox gText_Lelouch_RemindWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_LelouchReminderChooseMon
	msgbox gText_Lelouch_PayBlue, MSGBOX_AUTOCLOSE
	removeitem ITEM_BLUE_SHARD
	goto EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchNoMoveToRemindMon:
	msgbox gText_Lelouch_CantRemindMon, MSGBOX_DEFAULT
	goto EventScript_Shop_LelouchReminderChooseMon
	end

EventScript_Shop_LelouchCantRemindEgg:
	msgbox gText_Lelouch_CantRemindEgg, MSGBOX_DEFAULT
	goto EventScript_Shop_LelouchReminderChooseMon
	end

EventScript_Shop_LelouchCheckTutor:
	checkitem ITEM_YELLOW_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_LelouchNotEnoughColor
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_LelouchTutor3
	compare VAR_ZONE, 15
	goto_if_gt EventScript_Shop_LelouchTutor2
	msgbox gText_Lelouch_CostsYellowShards, MSGBOX_DEFAULT
	scrollingmultichoice 2, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchMoveTutorIcyWind
	case 1, EventScript_Shop_LelouchMoveTutorKnockOff
	case 2, EventScript_Shop_LelouchMoveTutorLowKick
	case 3, EventScript_Shop_LelouchMoveTutorHealBell
	case 4, EventScript_Shop_LelouchMoveTutorHelpingHand
	case 5, EventScript_Shop_LelouchMoveTutorSleepTalk
	case 6, EventScript_Shop_LelouchMoveTutorStealthRock
	case 7, EventScript_Shop_LelouchMoveTutorTaunt
	case MULTI_B_PRESSED, EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchTutor2:
	msgbox gText_Lelouch_CostsYellowShards, MSGBOX_DEFAULT
	scrollingmultichoice 3, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchMoveTutorIcyWind
	case 1, EventScript_Shop_LelouchMoveTutorKnockOff
	case 2, EventScript_Shop_LelouchMoveTutorLowKick
	case 3, EventScript_Shop_LelouchMoveTutorHealBell
	case 4, EventScript_Shop_LelouchMoveTutorHelpingHand
	case 5, EventScript_Shop_LelouchMoveTutorSleepTalk
	case 6, EventScript_Shop_LelouchMoveTutorStealthRock
	case 7, EventScript_Shop_LelouchMoveTutorTaunt
	case 8, EventScript_Shop_LelouchMoveTutorFirePunch
	case 9, EventScript_Shop_LelouchMoveTutorIcePunch
	case 10, EventScript_Shop_LelouchMoveTutorThunderPunch
	case 11, EventScript_Shop_LelouchMoveTutorFlipTurn
	case 12, EventScript_Shop_LelouchMoveTutorUTurn
	case 13, EventScript_Shop_LelouchMoveTutorMagicCoat
	case 14, EventScript_Shop_LelouchMoveTutorPainSplit
	case 15, EventScript_Shop_LelouchMoveTutorTrick
	case MULTI_B_PRESSED, EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchTutor3:
	msgbox gText_Lelouch_CostsYellowShards, MSGBOX_DEFAULT
	scrollingmultichoice 4, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_LelouchMoveTutorIcyWind
	case 1, EventScript_Shop_LelouchMoveTutorKnockOff
	case 2, EventScript_Shop_LelouchMoveTutorLowKick
	case 3, EventScript_Shop_LelouchMoveTutorHealBell
	case 4, EventScript_Shop_LelouchMoveTutorHelpingHand
	case 5, EventScript_Shop_LelouchMoveTutorSleepTalk
	case 6, EventScript_Shop_LelouchMoveTutorStealthRock
	case 7, EventScript_Shop_LelouchMoveTutorTaunt
	case 8, EventScript_Shop_LelouchMoveTutorFirePunch
	case 9, EventScript_Shop_LelouchMoveTutorIcePunch
	case 10, EventScript_Shop_LelouchMoveTutorThunderPunch
	case 11, EventScript_Shop_LelouchMoveTutorFlipTurn
	case 12, EventScript_Shop_LelouchMoveTutorUTurn
	case 13, EventScript_Shop_LelouchMoveTutorMagicCoat
	case 14, EventScript_Shop_LelouchMoveTutorPainSplit
	case 15, EventScript_Shop_LelouchMoveTutorTrick
	case 16, EventScript_Shop_LelouchMoveTutorBounce
	case 17, EventScript_Shop_LelouchMoveTutorIronHead
	case 18, EventScript_Shop_LelouchMoveTutorGigaDrain
	case 19, EventScript_Shop_LelouchMoveTutorVoltSwitch
	case 20, EventScript_Shop_LelouchMoveTutorZenHeadbutt
	case 21, EventScript_Shop_LelouchMoveTutorRoost
	case 22, EventScript_Shop_LelouchMoveTutorSynthesis
	case 23, EventScript_Shop_LelouchMoveTutorTailwind
	case MULTI_B_PRESSED, EventScript_Shop_LelouchLeave
	end

EventScript_Shop_LelouchMoveTutorIcyWind:
	buffermovename 0, MOVE_ICY_WIND
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_ICY_WIND
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorKnockOff:
	buffermovename 0, MOVE_KNOCK_OFF
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_KNOCK_OFF
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorLowKick:
	buffermovename 0, MOVE_LOW_KICK
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_LOW_KICK
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorHealBell:
	buffermovename 0, MOVE_HEAL_BELL
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_HEAL_BELL
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorHelpingHand:
	buffermovename 0, MOVE_HELPING_HAND
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_HELPING_HAND
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorSleepTalk:
	buffermovename 0, MOVE_SLEEP_TALK
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_SLEEP_TALK
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorStealthRock:
	buffermovename 0, MOVE_STEALTH_ROCK
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_STEALTH_ROCK
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorTaunt:
	buffermovename 0, MOVE_TAUNT
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_TAUNT
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorFirePunch:
	buffermovename 0, MOVE_FIRE_PUNCH
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_FIRE_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorIcePunch:
	buffermovename 0, MOVE_ICE_PUNCH
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_ICE_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorThunderPunch:
	buffermovename 0, MOVE_THUNDER_PUNCH
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_THUNDER_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorFlipTurn:
	buffermovename 0, MOVE_FLIP_TURN
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_FLIP_TURN
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorUTurn:
	buffermovename 0, MOVE_U_TURN
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_U_TURN
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorMagicCoat:
	buffermovename 0, MOVE_MAGIC_COAT
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_MAGIC_COAT
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorPainSplit:
	buffermovename 0, MOVE_PAIN_SPLIT
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_PAIN_SPLIT
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorTrick:
	buffermovename 0, MOVE_TRICK
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_TRICK
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorBounce:
	buffermovename 0, MOVE_BOUNCE
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_BOUNCE
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end
	
EventScript_Shop_LelouchMoveTutorIronHead:
	buffermovename 0, MOVE_IRON_HEAD
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_IRON_HEAD
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end
	
EventScript_Shop_LelouchMoveTutorGigaDrain:
	buffermovename 0, MOVE_GIGA_DRAIN
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_GIGA_DRAIN
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end
	
EventScript_Shop_LelouchMoveTutorVoltSwitch:
	buffermovename 0, MOVE_VOLT_SWITCH
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_VOLT_SWITCH
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorZenHeadbutt:
	buffermovename 0, MOVE_ZEN_HEADBUTT
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_ZEN_HEADBUTT
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end
	
EventScript_Shop_LelouchMoveTutorRoost:
	buffermovename 0, MOVE_ROOST
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_ROOST
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end
	
EventScript_Shop_LelouchMoveTutorSynthesis:
	buffermovename 0, MOVE_SYNTHESIS
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_SYNTHESIS
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end

EventScript_Shop_LelouchMoveTutorTailwind:
	buffermovename 0, MOVE_TAILWIND
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_LelouchCheckTutor
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_TAILWIND
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_LelouchLeave
	goto EventScript_Shop_LelouchMoveTaught1
	end
	
EventScript_Shop_LelouchMoveTaught1:
	msgbox gText_Lelouch_PayYellow1, MSGBOX_DEFAULT
	removeitem ITEM_YELLOW_SHARD
	goto EventScript_Shop_LelouchLeave
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
	checkmoney 1000, 0
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
	removemoney 1000, 0
	updatemoneybox 0, 0
	msgbox gText_Joy_ThankYou, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	call_if_set FLAG_NUZLOCKE_ON, EventScript_DeleteFaintedPartyPokemon
	special HealPlayerParty
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

EventScript_WhenUReady:
	compare VAR_ZONE, 7
	goto_if_eq Zone6Sanctuary_EventScript_WhenUReady
	compare VAR_ZONE, 13
	goto_if_eq Zone12Sanctuary_EventScript_WhenUReady
	compare VAR_ZONE, 18
	goto_if_eq Zone17Sanctuary_EventScript_WhenUReady
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	release
	end

EventScript_WarpZone0:
	warpteleport MAP_ZONE0D, 255, 2, 32
	end

EventScript_SanctuaryToZone0::
	lockall
	setflag FLAG_IN_ZONE_NOT_SANCTUARY
	warpteleport MAP_ZONE0A, 255, 17, 10
	end

EventScript_Advice:
	msgbox gText_Colress_HeresAPieceofAdvice, MSGBOX_AUTOCLOSE
	switch VAR_ADVICE
	case 0, EventScript_Advice0
	case 1, EventScript_Advice1
	case 2, EventScript_Advice2
	case 3, EventScript_Advice3
	case 4, EventScript_Advice4
	case 5, EventScript_Advice5
	case 6, EventScript_Advice6
	case 7, EventScript_Advice7
	case 8, EventScript_Advice8
	case 9, EventScript_Advice9
	case 10, EventScript_Advice10
	case 11, EventScript_Advice11
	release
	end

EventScript_Advice0:
	msgbox gText_Advice0, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 1
	goto EventScript_AdviceAgain
	end

EventScript_Advice1:
	msgbox gText_Advice1, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 2
	goto EventScript_AdviceAgain
	end

EventScript_Advice2:
	msgbox gText_Advice2, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 3
	goto EventScript_AdviceAgain
	end

EventScript_Advice3:
	msgbox gText_Advice3, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 4
	goto EventScript_AdviceAgain
	end

EventScript_Advice4:
	msgbox gText_Advice4, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 5
	goto EventScript_AdviceAgain
	end

EventScript_Advice5:
	msgbox gText_Advice5, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 6
	goto EventScript_AdviceAgain
	end

EventScript_Advice6:
	msgbox gText_Advice6, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 7
	goto EventScript_AdviceAgain
	end

EventScript_Advice7:
	msgbox gText_Advice7, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 8
	goto EventScript_AdviceAgain
	end

EventScript_Advice8:
	msgbox gText_Advice8, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 9
	goto EventScript_AdviceAgain
	end

EventScript_Advice9:
	msgbox gText_Advice9, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 10
	goto EventScript_AdviceAgain
	end

EventScript_Advice10:
	msgbox gText_Advice10, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 11
	goto EventScript_AdviceAgain
	end

EventScript_Advice11:
	msgbox gText_Advice11, MSGBOX_AUTOCLOSE
	setvar VAR_ADVICE, 0
	goto EventScript_AdviceAgain
	end

EventScript_AdviceAgain:
	msgbox gText_Colress_WantMoreAdvice, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Advice
	goto EventScript_WhenUReady
	end

EventScript_Settings:
	setflag FLAG_BRUTAL_MODE_ON
	goto_if_set FLAG_NUZLOCKE_ON, EventScript_CheckDifficultyNuzlocke
	goto EventScript_CheckDifficultyVanilla
	end

EventScript_CheckDifficultyNuzlocke:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_BrutalNuzlockeMsg
	goto EventScript_DefaultNuzlockeMsg
	end

EventScript_BrutalNuzlockeMsg:
	msgbox gText_Colress_BrutalNuzlockeMsg
	call EventScript_TurnOffBrutal
	call EventScript_TurnOffNuzlocke
	goto EventScript_WhenUReady
	end

EventScript_DefaultNuzlockeMsg:
	msgbox gText_Colress_DefaultNuzlockeMsg
	call EventScript_TurnOffNuzlocke
	goto EventScript_WhenUReady
	end

EventScript_CheckDifficultyVanilla:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_BrutalVanillaMsg
	goto EventScript_DefaultVanillaMsg
	end

EventScript_BrutalVanillaMsg:
	msgbox gText_Colress_BrutalVanillaMsg
	call EventScript_TurnOffBrutal
	goto EventScript_WhenUReady
	end

EventScript_DefaultVanillaMsg:
	msgbox gText_Colress_DefaultVanillaMsg
	goto EventScript_WhenUReady
	end

EventScript_TurnOffBrutal:
	msgbox gText_Colress_WouldTurnOffBrutal, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq EventScript_SureTurnOffBrutal
	return

EventScript_SureTurnOffBrutal:
	msgbox gText_Colress_SureTurnOffBrutal, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq EventScript_TurnedOffBrutal
	return

EventScript_TurnedOffBrutal:
	msgbox gText_Colress_BrutalOff, MSGBOX_AUTOCLOSE
	clearflag FLAG_BRUTAL_MODE_ON
	return

EventScript_TurnOffNuzlocke:
	msgbox gText_Colress_WouldTurnOffNuzlocke, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq EventScript_SureTurnOffNuzlocke
	return

EventScript_SureTurnOffNuzlocke:
	msgbox gText_Colress_SureTurnOffNuzlocke, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq EventScript_TurnedOffNuzlocke
	return

EventScript_TurnedOffNuzlocke:
	msgbox gText_Colress_NuzlockeOff, MSGBOX_AUTOCLOSE
	clearflag FLAG_NUZLOCKE_ON
	callnative GlobalNuzlockeClear
	return

EventScript_LeavingSetup:
	msgbox gText_Colress_Empower, MSGBOX_AUTOCLOSE
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 21
	call_if_eq EventScript_LeaveLeft
	compare VAR_TEMP_0, 22
	call_if_eq EventScript_LeaveMiddle
	compare VAR_TEMP_0, 23
	call_if_eq EventScript_LeaveRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	return
