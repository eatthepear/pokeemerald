EventScript_EnterSanctuary::
	clearflag FLAG_IN_ZONE_NOT_SANCTUARY
	call EventScript_MoveCameraUp
	applymovement 1, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	playse SE_PIN
	waitmovement 0
	waitse
	call EventScript_MoveCameraDown
	applymovement 1, Common_Movement_Colress_WalkDown
	waitmovement 0
	playfanfare MUS_OBTAIN_BADGE
	return


EventScript_MoveCameraUp::
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	special RemoveCameraObject
	return


EventScript_MoveCameraDown::
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	special RemoveCameraObject
	return


EventScript_Shop_General::
	lock
	faceplayer
	goto_if_unset FLAG_TIM_INTRO, EventScript_Shop_General_2
EventScript_Shop_General_1:
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_General_6
EventScript_Shop_General_4:
	message gText_Tim_Welcome
	waitmessage
	switch VAR_ZONE
	case 1, EventScript_Shop_General_11
	case 2, EventScript_Shop_General_11
	case 3, EventScript_Shop_General_11
	case 4, EventScript_Shop_General_12
	case 5, EventScript_Shop_General_12
	case 6, EventScript_Shop_General_12
	case 7, EventScript_Shop_General_12
	case 9, EventScript_Shop_General_13
	case 10, EventScript_Shop_General_13
	case 11, EventScript_Shop_General_13
	case 12, EventScript_Shop_General_13
	case 13, EventScript_Shop_General_14
	case 15, EventScript_Shop_General_14
	case 16, EventScript_Shop_General_14
	case 17, EventScript_Shop_General_15
	case 18, EventScript_Shop_General_15
	case 20, EventScript_Shop_General_15
	case 21, EventScript_Shop_General_15
	case 22, EventScript_Shop_General_15
	case 23, EventScript_Shop_General_15
	case 24, EventScript_Shop_General_15
	case 25, EventScript_Shop_General_15
	case 26, EventScript_Shop_General_16
EventScript_Shop_General_9:
	msgbox gText_Tim_Leave, MSGBOX_DEFAULT
	release
	return

EventScript_Shop_General_2:
	msgbox gText_Tim_Intro
	setflag FLAG_TIM_INTRO
	goto EventScript_Shop_General_1

EventScript_Shop_General_5:
	msgbox gText_Tim_ExplainSuperPotionDiscount
	setflag FLAG_TIM_SUPER_POTION_INTRO
	goto EventScript_Shop_General_4

EventScript_Shop_General_6:
	goto_if_unset FLAG_TIM_SUPER_POTION_INTRO, EventScript_Shop_General_5
	goto EventScript_Shop_General_4

EventScript_Shop_General_11:
	pokemart Shop_General_1to3
	goto EventScript_Shop_General_9

EventScript_Shop_General_12:
	pokemart Shop_General_4to8
	goto EventScript_Shop_General_9

EventScript_Shop_General_13:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_General_17
	pokemart Shop_General_9to12
	goto EventScript_Shop_General_9

EventScript_Shop_General_14:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_General_20
	pokemart Shop_General_13to16
	goto EventScript_Shop_General_9

EventScript_Shop_General_15:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_General_23
	pokemart Shop_General_17to25
	goto EventScript_Shop_General_9

EventScript_Shop_General_16:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_General_36
EventScript_Shop_General_34:
	goto_if_unset FLAG_BRUTAL_MODE_ON, EventScript_Shop_General_33
EventScript_Shop_General_31:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_General_30
EventScript_Shop_General_29:
	pokemart Shop_General_26to30
	goto EventScript_Shop_General_9

EventScript_Shop_General_17:
	pokemart Shop_General_9to12_Brutal
	goto EventScript_Shop_General_9

EventScript_Shop_General_20:
	pokemart Shop_General_13to16_Brutal
	goto EventScript_Shop_General_9

EventScript_Shop_General_23:
	pokemart Shop_General_17to25_Brutal
	goto EventScript_Shop_General_9

EventScript_Shop_General_26:
	pokemart Shop_General_26to30_BrutalNuzlocke
	goto EventScript_Shop_General_9

EventScript_Shop_General_27:
	pokemart Shop_General_26to30Nuzlocke
	goto EventScript_Shop_General_9

EventScript_Shop_General_28:
	pokemart Shop_General_26to30_Brutal
	goto EventScript_Shop_General_9

EventScript_Shop_General_30:
	goto_if_unset FLAG_NUZLOCKE_ON, EventScript_Shop_General_28
	goto EventScript_Shop_General_29

EventScript_Shop_General_33:
	goto_if_set FLAG_NUZLOCKE_ON, EventScript_Shop_General_27
	goto EventScript_Shop_General_31

EventScript_Shop_General_36:
	goto_if_set FLAG_NUZLOCKE_ON, EventScript_Shop_General_26
	goto EventScript_Shop_General_34


EventScript_Shop_Unique_Varrick::
	lock
	faceplayer
	goto_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_Unique_Varrick_2
EventScript_Shop_Unique_Varrick_1:
	message gText_Varrick_Welcome
	waitmessage
	switch VAR_ZONE
	case 1, EventScript_Shop_Unique_Varrick_6
	case 2, EventScript_Shop_Unique_Varrick_6
	case 3, EventScript_Shop_Unique_Varrick_6
	case 4, EventScript_Shop_Unique_Varrick_7
	case 5, EventScript_Shop_Unique_Varrick_7
	case 6, EventScript_Shop_Unique_Varrick_8
	case 7, EventScript_Shop_Unique_Varrick_8
	case 9, EventScript_Shop_Unique_Varrick_9
	case 10, EventScript_Shop_Unique_Varrick_9
	case 11, EventScript_Shop_Unique_Varrick_10
	case 12, EventScript_Shop_Unique_Varrick_10
	case 13, EventScript_Shop_Unique_Varrick_10
	case 15, EventScript_Shop_Unique_Varrick_11
	case 16, EventScript_Shop_Unique_Varrick_11
	case 17, EventScript_Shop_Unique_Varrick_11
	case 18, EventScript_Shop_Unique_Varrick_11
	case 20, EventScript_Shop_Unique_Varrick_11
	case 21, EventScript_Shop_Unique_Varrick_12
	case 22, EventScript_Shop_Unique_Varrick_12
	case 23, EventScript_Shop_Unique_Varrick_12
	case 24, EventScript_Shop_Unique_Varrick_13
	case 25, EventScript_Shop_Unique_Varrick_13
	case 26, EventScript_Shop_Unique_Varrick_14
EventScript_Shop_Unique_Varrick_4:
	msgbox gText_Varrick_Leave, MSGBOX_DEFAULT
	release
	return

EventScript_Shop_Unique_Varrick_2:
	msgbox gText_Varrick_Intro
	setflag FLAG_VARRICK_INTRO
	goto EventScript_Shop_Unique_Varrick_1

EventScript_Shop_Unique_Varrick_6:
	pokemart Shop_Unique_Varrick_1to3
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_7:
	pokemart Shop_Unique_Varrick_4to5
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_8:
	pokemart Shop_Unique_Varrick_6to8
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_9:
	pokemart Shop_Unique_Varrick_9to10
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_10:
	pokemart Shop_Unique_Varrick_11to14
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_11:
	pokemart Shop_Unique_Varrick_15to20
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_12:
	pokemart Shop_Unique_Varrick_21to23
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_13:
	pokemart Shop_Unique_Varrick_24to25
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_14:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Shop_Unique_Varrick_15
	pokemart Shop_Unique_Varrick_26to30
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_15:
	pokemart Shop_Unique_Varrick_26to30_Brutal
	goto EventScript_Shop_Unique_Varrick_4


EventScript_Shop_Unique_ZhuLi::
	lock
	faceplayer
	message gText_ZhuLi_Welcome
	waitmessage
	switch VAR_ZONE
	case 11, EventScript_Shop_Unique_ZhuLi_3
	case 12, EventScript_Shop_Unique_ZhuLi_3
	case 13, EventScript_Shop_Unique_ZhuLi_3
	case 15, EventScript_Shop_Unique_ZhuLi_4
	case 16, EventScript_Shop_Unique_ZhuLi_4
	case 17, EventScript_Shop_Unique_ZhuLi_4
	case 18, EventScript_Shop_Unique_ZhuLi_4
	case 20, EventScript_Shop_Unique_ZhuLi_4
	case 21, EventScript_Shop_Unique_ZhuLi_5
	case 22, EventScript_Shop_Unique_ZhuLi_5
	case 23, EventScript_Shop_Unique_ZhuLi_5
	case 24, EventScript_Shop_Unique_ZhuLi_6
	case 25, EventScript_Shop_Unique_ZhuLi_6
	case 26, EventScript_Shop_Unique_ZhuLi_6
EventScript_Shop_Unique_ZhuLi_1:
	msgbox gText_ZhuLi_Leave, MSGBOX_DEFAULT
	release
	return

EventScript_Shop_Unique_ZhuLi_3:
	pokemart Shop_Unique_ZhuLi_11to14
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_4:
	pokemart Shop_Unique_ZhuLi_15to20
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_5:
	pokemart Shop_Unique_ZhuLi_21to23
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_6:
	pokemart Shop_Unique_ZhuLi_24to30
	goto EventScript_Shop_Unique_ZhuLi_1


EventScript_Shop_ZhuLiIntro::
	lockall
	applymovement 2, Common_Movement_ExclamationMark
	applymovement 5, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 20
	goto_if_eq EventScript_Shop_ZhuLiIntro_2
EventScript_Shop_ZhuLiIntro_1:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	msgbox gText_Varrick_ZhuLiIntro1
	msgbox gText_ZhuLi_ZhuLiIntro1
	playse SE_APPLAUSE
	waitse
	msgbox gText_Varrick_ZhuLiIntro2
	msgbox gText_ZhuLi_ZhuLiIntro2
	msgbox gText_Varrick_ZhuLiIntro3
	setvar VAR_ZHULI_INTRO, 1
	setflag FLAG_VARRICK_INTRO
	releaseall
	return

EventScript_Shop_ZhuLiIntro_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	goto EventScript_Shop_ZhuLiIntro_1


EventScript_Shop_Lelouch::
	lock
	faceplayer
	goto_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_Lelouch_2
EventScript_Shop_Lelouch_1:
	compare VAR_ZONE, 6
	goto_if_lt EventScript_Shop_Lelouch_5
	goto_if_unset FLAG_LELOUCH_SHARDS, EventScript_Shop_Lelouch_8
EventScript_Shop_Lelouch_7:
	msgbox gText_Lelouch_Welcome, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_LELOUCH_OPTIONS, 0
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_12
	case 1, EventScript_Shop_Lelouch_13
	case 2, EventScript_Shop_Lelouch_14
	case 3, EventScript_Shop_Lelouch_15
EventScript_Shop_Lelouch_10:
	msgbox gText_Lelouch_Leave
	release
	return

EventScript_Shop_Lelouch_2:
	msgbox gText_Lelouch_Intro1
	delay 96
	msgbox gText_Lelouch_Intro2
	setflag FLAG_LELOUCH_INTRO
	goto EventScript_Shop_Lelouch_1

EventScript_Shop_Lelouch_5:
	msgbox gText_Lelouch_NoShards
	release
	end

EventScript_Shop_Lelouch_8:
	msgbox gText_Lelouch_ExplainShards
	setflag FLAG_LELOUCH_SHARDS
	goto EventScript_Shop_Lelouch_7

EventScript_Shop_Lelouch_12:
	call EventScript_Shop_Lelouch_Training
	clearflag FLAG_DOUBLE_EXP
	clearflag FLAG_FORCE_BATTLE_ANIM_OFF
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_13:
	call EventScript_Shop_Lelouch_MoveReminder
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_14:
	call EventScript_Shop_Lelouch_MoveTutor
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_15:
	call EventScript_Shop_Lelouch_Other
	goto EventScript_Shop_Lelouch_10


EventScript_Shop_Lelouch_Training::
	checkitem ITEM_RED_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Training_2
	special ChoosePartyMonForTraining
	waitstate
	return

EventScript_Shop_Lelouch_Training_2:
	msgbox gText_Lelouch_NotEnoughColor
	return


EventScript_Shop_Lelouch_MoveReminder::
	checkitem ITEM_BLUE_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_2
	msgbox gText_Lelouch_CostsBlueShards, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_5
EventScript_Shop_Lelouch_MoveReminder_8:
	msgbox gText_Lelouch_RemindWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_11
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_14
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_17
	msgbox gText_Lelouch_RemindWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_20
	msgbox gText_Lelouch_PayBlue
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveReminder_2:
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_MoveReminder_5:
	return

EventScript_Shop_Lelouch_MoveReminder_11:
	return

EventScript_Shop_Lelouch_MoveReminder_14:
	msgbox gText_Lelouch_CantRemindEgg, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_8

EventScript_Shop_Lelouch_MoveReminder_17:
	msgbox gText_Lelouch_CantRemindMon, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_8

EventScript_Shop_Lelouch_MoveReminder_20:
	goto EventScript_Shop_Lelouch_MoveReminder_8


EventScript_Shop_Lelouch_MoveTutor::
	checkitem ITEM_YELLOW_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_2
EventScript_Shop_Lelouch_MoveTutor_4:
	msgbox gText_Lelouch_CostsYellowShards, MSGBOX_DEFAULT
	compare VAR_ZONE, 30
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_7
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_8
	compare VAR_ZONE, 15
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_9
	scrollingmultichoice 2, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_MoveTutor_96
	case 1, EventScript_Shop_Lelouch_MoveTutor_97
	case 2, EventScript_Shop_Lelouch_MoveTutor_98
	case 3, EventScript_Shop_Lelouch_MoveTutor_99
	case 4, EventScript_Shop_Lelouch_MoveTutor_100
	case 5, EventScript_Shop_Lelouch_MoveTutor_101
	case 6, EventScript_Shop_Lelouch_MoveTutor_102
	case 7, EventScript_Shop_Lelouch_MoveTutor_103
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_104
EventScript_Shop_Lelouch_MoveTutor_6:
	buffermovename 0, VAR_TEMP_0
	msgbox gText_TutorMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_15
	msgbox gText_TutorWhichMon, MSGBOX_DEFAULT
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_106
	msgbox gText_Lelouch_PayYellow1, MSGBOX_DEFAULT
	removeitem ITEM_YELLOW_SHARD
	return

EventScript_Shop_Lelouch_MoveTutor_2:
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_MoveTutor_7:
	scrollingmultichoice 5, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_MoveTutor_18
	case 1, EventScript_Shop_Lelouch_MoveTutor_19
	case 2, EventScript_Shop_Lelouch_MoveTutor_20
	case 3, EventScript_Shop_Lelouch_MoveTutor_21
	case 4, EventScript_Shop_Lelouch_MoveTutor_22
	case 5, EventScript_Shop_Lelouch_MoveTutor_23
	case 6, EventScript_Shop_Lelouch_MoveTutor_24
	case 7, EventScript_Shop_Lelouch_MoveTutor_25
	case 8, EventScript_Shop_Lelouch_MoveTutor_26
	case 9, EventScript_Shop_Lelouch_MoveTutor_27
	case 10, EventScript_Shop_Lelouch_MoveTutor_28
	case 11, EventScript_Shop_Lelouch_MoveTutor_29
	case 12, EventScript_Shop_Lelouch_MoveTutor_30
	case 13, EventScript_Shop_Lelouch_MoveTutor_31
	case 14, EventScript_Shop_Lelouch_MoveTutor_32
	case 15, EventScript_Shop_Lelouch_MoveTutor_33
	case 16, EventScript_Shop_Lelouch_MoveTutor_34
	case 17, EventScript_Shop_Lelouch_MoveTutor_35
	case 18, EventScript_Shop_Lelouch_MoveTutor_36
	case 19, EventScript_Shop_Lelouch_MoveTutor_37
	case 20, EventScript_Shop_Lelouch_MoveTutor_38
	case 21, EventScript_Shop_Lelouch_MoveTutor_39
	case 22, EventScript_Shop_Lelouch_MoveTutor_40
	case 23, EventScript_Shop_Lelouch_MoveTutor_41
	case 24, EventScript_Shop_Lelouch_MoveTutor_42
	case 25, EventScript_Shop_Lelouch_MoveTutor_43
	case 26, EventScript_Shop_Lelouch_MoveTutor_44
	case 27, EventScript_Shop_Lelouch_MoveTutor_45
	case 28, EventScript_Shop_Lelouch_MoveTutor_46
	case 29, EventScript_Shop_Lelouch_MoveTutor_47
	case 30, EventScript_Shop_Lelouch_MoveTutor_48
	case 31, EventScript_Shop_Lelouch_MoveTutor_49
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_50
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_8:
	scrollingmultichoice 4, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_MoveTutor_52
	case 1, EventScript_Shop_Lelouch_MoveTutor_53
	case 2, EventScript_Shop_Lelouch_MoveTutor_54
	case 3, EventScript_Shop_Lelouch_MoveTutor_55
	case 4, EventScript_Shop_Lelouch_MoveTutor_56
	case 5, EventScript_Shop_Lelouch_MoveTutor_57
	case 6, EventScript_Shop_Lelouch_MoveTutor_58
	case 7, EventScript_Shop_Lelouch_MoveTutor_59
	case 8, EventScript_Shop_Lelouch_MoveTutor_60
	case 9, EventScript_Shop_Lelouch_MoveTutor_61
	case 10, EventScript_Shop_Lelouch_MoveTutor_62
	case 11, EventScript_Shop_Lelouch_MoveTutor_63
	case 12, EventScript_Shop_Lelouch_MoveTutor_64
	case 13, EventScript_Shop_Lelouch_MoveTutor_65
	case 14, EventScript_Shop_Lelouch_MoveTutor_66
	case 15, EventScript_Shop_Lelouch_MoveTutor_67
	case 16, EventScript_Shop_Lelouch_MoveTutor_68
	case 17, EventScript_Shop_Lelouch_MoveTutor_69
	case 18, EventScript_Shop_Lelouch_MoveTutor_70
	case 19, EventScript_Shop_Lelouch_MoveTutor_71
	case 20, EventScript_Shop_Lelouch_MoveTutor_72
	case 21, EventScript_Shop_Lelouch_MoveTutor_73
	case 22, EventScript_Shop_Lelouch_MoveTutor_74
	case 23, EventScript_Shop_Lelouch_MoveTutor_75
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_76
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_9:
	scrollingmultichoice 3, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_MoveTutor_78
	case 1, EventScript_Shop_Lelouch_MoveTutor_79
	case 2, EventScript_Shop_Lelouch_MoveTutor_80
	case 3, EventScript_Shop_Lelouch_MoveTutor_81
	case 4, EventScript_Shop_Lelouch_MoveTutor_82
	case 5, EventScript_Shop_Lelouch_MoveTutor_83
	case 6, EventScript_Shop_Lelouch_MoveTutor_84
	case 7, EventScript_Shop_Lelouch_MoveTutor_85
	case 8, EventScript_Shop_Lelouch_MoveTutor_86
	case 9, EventScript_Shop_Lelouch_MoveTutor_87
	case 10, EventScript_Shop_Lelouch_MoveTutor_88
	case 11, EventScript_Shop_Lelouch_MoveTutor_89
	case 12, EventScript_Shop_Lelouch_MoveTutor_90
	case 13, EventScript_Shop_Lelouch_MoveTutor_91
	case 14, EventScript_Shop_Lelouch_MoveTutor_92
	case 15, EventScript_Shop_Lelouch_MoveTutor_93
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_94
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_15:
	goto EventScript_Shop_Lelouch_MoveTutor_4

EventScript_Shop_Lelouch_MoveTutor_18:
	setvar VAR_TEMP_0, MOVE_ICY_WIND
	setvar VAR_0x8005, TUTOR_MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_19:
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
	setvar VAR_0x8005, TUTOR_MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_20:
	setvar VAR_TEMP_0, MOVE_LOW_KICK
	setvar VAR_0x8005, TUTOR_MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_21:
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
	setvar VAR_0x8005, TUTOR_MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_22:
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
	setvar VAR_0x8005, TUTOR_MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_23:
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
	setvar VAR_0x8005, TUTOR_MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_24:
	setvar VAR_TEMP_0, MOVE_STEALTH_ROCK
	setvar VAR_0x8005, TUTOR_MOVE_STEALTH_ROCK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_25:
	setvar VAR_TEMP_0, MOVE_TAUNT
	setvar VAR_0x8005, TUTOR_MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_26:
	setvar VAR_TEMP_0, MOVE_FIRE_PUNCH
	setvar VAR_0x8005, TUTOR_MOVE_FIRE_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_27:
	setvar VAR_TEMP_0, MOVE_ICE_PUNCH
	setvar VAR_0x8005, TUTOR_MOVE_ICE_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_28:
	setvar VAR_TEMP_0, MOVE_THUNDER_PUNCH
	setvar VAR_0x8005, TUTOR_MOVE_THUNDER_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_29:
	setvar VAR_TEMP_0, MOVE_FLIP_TURN
	setvar VAR_0x8005, TUTOR_MOVE_FLIP_TURN
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_30:
	setvar VAR_TEMP_0, MOVE_U_TURN
	setvar VAR_0x8005, TUTOR_MOVE_U_TURN
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_31:
	setvar VAR_TEMP_0, MOVE_DEFOG
	setvar VAR_0x8005, TUTOR_MOVE_DEFOG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_32:
	setvar VAR_TEMP_0, MOVE_PAIN_SPLIT
	setvar VAR_0x8005, TUTOR_MOVE_PAIN_SPLIT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_33:
	setvar VAR_TEMP_0, MOVE_TRICK
	setvar VAR_0x8005, TUTOR_MOVE_TRICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_34:
	setvar VAR_TEMP_0, MOVE_BOUNCE
	setvar VAR_0x8005, TUTOR_MOVE_BOUNCE
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_35:
	setvar VAR_TEMP_0, MOVE_IRON_HEAD
	setvar VAR_0x8005, TUTOR_MOVE_IRON_HEAD
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_36:
	setvar VAR_TEMP_0, MOVE_KNOCK_OFF
	setvar VAR_0x8005, TUTOR_MOVE_KNOCK_OFF
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_37:
	setvar VAR_TEMP_0, MOVE_VOLT_SWITCH
	setvar VAR_0x8005, TUTOR_MOVE_VOLT_SWITCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_38:
	setvar VAR_TEMP_0, MOVE_ZEN_HEADBUTT
	setvar VAR_0x8005, TUTOR_MOVE_ZEN_HEADBUTT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_39:
	setvar VAR_TEMP_0, MOVE_ROOST
	setvar VAR_0x8005, TUTOR_MOVE_ROOST
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_40:
	setvar VAR_TEMP_0, MOVE_SYNTHESIS
	setvar VAR_0x8005, TUTOR_MOVE_SYNTHESIS
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_41:
	setvar VAR_TEMP_0, MOVE_TAILWIND
	setvar VAR_0x8005, TUTOR_MOVE_TAILWIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_42:
	setvar VAR_TEMP_0, MOVE_DRACO_METEOR
	setvar VAR_0x8005, TUTOR_MOVE_DRACO_METEOR
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_43:
	setvar VAR_TEMP_0, MOVE_EXPANDING_FORCE
	setvar VAR_0x8005, TUTOR_MOVE_EXPANDING_FORCE
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_44:
	setvar VAR_TEMP_0, MOVE_HEAT_WAVE
	setvar VAR_0x8005, TUTOR_MOVE_HEAT_WAVE
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_45:
	setvar VAR_TEMP_0, MOVE_POLTERGEIST
	setvar VAR_0x8005, TUTOR_MOVE_POLTERGEIST
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_46:
	setvar VAR_TEMP_0, MOVE_POWER_WHIP
	setvar VAR_0x8005, TUTOR_MOVE_POWER_WHIP
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_47:
	setvar VAR_TEMP_0, MOVE_SUPERPOWER
	setvar VAR_0x8005, TUTOR_MOVE_SUPERPOWER
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_48:
	setvar VAR_TEMP_0, MOVE_SWORDS_DANCE
	setvar VAR_0x8005, TUTOR_MOVE_SWORDS_DANCE
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_49:
	setvar VAR_TEMP_0, MOVE_NASTY_PLOT
	setvar VAR_0x8005, TUTOR_MOVE_NASTY_PLOT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_50:
	return

EventScript_Shop_Lelouch_MoveTutor_52:
	setvar VAR_TEMP_0, MOVE_ICY_WIND
	setvar VAR_0x8005, TUTOR_MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_53:
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
	setvar VAR_0x8005, TUTOR_MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_54:
	setvar VAR_TEMP_0, MOVE_LOW_KICK
	setvar VAR_0x8005, TUTOR_MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_55:
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
	setvar VAR_0x8005, TUTOR_MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_56:
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
	setvar VAR_0x8005, TUTOR_MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_57:
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
	setvar VAR_0x8005, TUTOR_MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_58:
	setvar VAR_TEMP_0, MOVE_STEALTH_ROCK
	setvar VAR_0x8005, TUTOR_MOVE_STEALTH_ROCK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_59:
	setvar VAR_TEMP_0, MOVE_TAUNT
	setvar VAR_0x8005, TUTOR_MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_60:
	setvar VAR_TEMP_0, MOVE_FIRE_PUNCH
	setvar VAR_0x8005, TUTOR_MOVE_FIRE_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_61:
	setvar VAR_TEMP_0, MOVE_ICE_PUNCH
	setvar VAR_0x8005, TUTOR_MOVE_ICE_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_62:
	setvar VAR_TEMP_0, MOVE_THUNDER_PUNCH
	setvar VAR_0x8005, TUTOR_MOVE_THUNDER_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_63:
	setvar VAR_TEMP_0, MOVE_FLIP_TURN
	setvar VAR_0x8005, TUTOR_MOVE_FLIP_TURN
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_64:
	setvar VAR_TEMP_0, MOVE_U_TURN
	setvar VAR_0x8005, TUTOR_MOVE_U_TURN
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_65:
	setvar VAR_TEMP_0, MOVE_DEFOG
	setvar VAR_0x8005, TUTOR_MOVE_DEFOG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_66:
	setvar VAR_TEMP_0, MOVE_PAIN_SPLIT
	setvar VAR_0x8005, TUTOR_MOVE_PAIN_SPLIT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_67:
	setvar VAR_TEMP_0, MOVE_TRICK
	setvar VAR_0x8005, TUTOR_MOVE_TRICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_68:
	setvar VAR_TEMP_0, MOVE_BOUNCE
	setvar VAR_0x8005, TUTOR_MOVE_BOUNCE
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_69:
	setvar VAR_TEMP_0, MOVE_IRON_HEAD
	setvar VAR_0x8005, TUTOR_MOVE_IRON_HEAD
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_70:
	setvar VAR_TEMP_0, MOVE_KNOCK_OFF
	setvar VAR_0x8005, TUTOR_MOVE_KNOCK_OFF
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_71:
	setvar VAR_TEMP_0, MOVE_VOLT_SWITCH
	setvar VAR_0x8005, TUTOR_MOVE_VOLT_SWITCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_72:
	setvar VAR_TEMP_0, MOVE_ZEN_HEADBUTT
	setvar VAR_0x8005, TUTOR_MOVE_ZEN_HEADBUTT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_73:
	setvar VAR_TEMP_0, MOVE_ROOST
	setvar VAR_0x8005, TUTOR_MOVE_ROOST
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_74:
	setvar VAR_TEMP_0, MOVE_SYNTHESIS
	setvar VAR_0x8005, TUTOR_MOVE_SYNTHESIS
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_75:
	setvar VAR_TEMP_0, MOVE_TAILWIND
	setvar VAR_0x8005, TUTOR_MOVE_TAILWIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_76:
	return

EventScript_Shop_Lelouch_MoveTutor_78:
	setvar VAR_TEMP_0, MOVE_ICY_WIND
	setvar VAR_0x8005, TUTOR_MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_79:
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
	setvar VAR_0x8005, TUTOR_MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_80:
	setvar VAR_TEMP_0, MOVE_LOW_KICK
	setvar VAR_0x8005, TUTOR_MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_81:
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
	setvar VAR_0x8005, TUTOR_MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_82:
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
	setvar VAR_0x8005, TUTOR_MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_83:
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
	setvar VAR_0x8005, TUTOR_MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_84:
	setvar VAR_TEMP_0, MOVE_STEALTH_ROCK
	setvar VAR_0x8005, TUTOR_MOVE_STEALTH_ROCK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_85:
	setvar VAR_TEMP_0, MOVE_TAUNT
	setvar VAR_0x8005, TUTOR_MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_86:
	setvar VAR_TEMP_0, MOVE_FIRE_PUNCH
	setvar VAR_0x8005, TUTOR_MOVE_FIRE_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_87:
	setvar VAR_TEMP_0, MOVE_ICE_PUNCH
	setvar VAR_0x8005, TUTOR_MOVE_ICE_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_88:
	setvar VAR_TEMP_0, MOVE_THUNDER_PUNCH
	setvar VAR_0x8005, TUTOR_MOVE_THUNDER_PUNCH
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_89:
	setvar VAR_TEMP_0, MOVE_FLIP_TURN
	setvar VAR_0x8005, TUTOR_MOVE_FLIP_TURN
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_90:
	setvar VAR_TEMP_0, MOVE_U_TURN
	setvar VAR_0x8005, TUTOR_MOVE_U_TURN
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_91:
	setvar VAR_TEMP_0, MOVE_DEFOG
	setvar VAR_0x8005, TUTOR_MOVE_DEFOG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_92:
	setvar VAR_TEMP_0, MOVE_PAIN_SPLIT
	setvar VAR_0x8005, TUTOR_MOVE_PAIN_SPLIT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_93:
	setvar VAR_TEMP_0, MOVE_TRICK
	setvar VAR_0x8005, TUTOR_MOVE_TRICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_94:
	return

EventScript_Shop_Lelouch_MoveTutor_96:
	setvar VAR_TEMP_0, MOVE_ICY_WIND
	setvar VAR_0x8005, TUTOR_MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_97:
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
	setvar VAR_0x8005, TUTOR_MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_98:
	setvar VAR_TEMP_0, MOVE_LOW_KICK
	setvar VAR_0x8005, TUTOR_MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_99:
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
	setvar VAR_0x8005, TUTOR_MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_100:
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
	setvar VAR_0x8005, TUTOR_MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_101:
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
	setvar VAR_0x8005, TUTOR_MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_102:
	setvar VAR_TEMP_0, MOVE_STEALTH_ROCK
	setvar VAR_0x8005, TUTOR_MOVE_STEALTH_ROCK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_103:
	setvar VAR_TEMP_0, MOVE_TAUNT
	setvar VAR_0x8005, TUTOR_MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_104:
	return

EventScript_Shop_Lelouch_MoveTutor_106:
	return


EventScript_Shop_Lelouch_Other::
	checkitem ITEM_GREEN_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Other_2
	msgbox gText_Lelouch_CostsGreenShards, MSGBOX_DEFAULT
	scrollingmultichoice 8, 0, 0, 5, TRUE
	switch VAR_RESULT
	case 0, EventScript_Shop_Lelouch_Other_6
	case 1, EventScript_Shop_Lelouch_Other_7
	case 2, EventScript_Shop_Lelouch_Other_8
	case 3, EventScript_Shop_Lelouch_Other_9
	case 4, EventScript_Shop_Lelouch_Other_10
	case 5, EventScript_Shop_Lelouch_Other_11
	case 6, EventScript_Shop_Lelouch_Other_12
	case 7, EventScript_Shop_Lelouch_Other_13
	case 8, EventScript_Shop_Lelouch_Other_14
	case 9, EventScript_Shop_Lelouch_Other_15
	case 10, EventScript_Shop_Lelouch_Other_16
	case 11, EventScript_Shop_Lelouch_Other_17
	case 12, EventScript_Shop_Lelouch_Other_18
	case 13, EventScript_Shop_Lelouch_Other_19
	case 14, EventScript_Shop_Lelouch_Other_20
	case 15, EventScript_Shop_Lelouch_Other_21
	case 16, EventScript_Shop_Lelouch_Other_22
	case 17, EventScript_Shop_Lelouch_Other_23
	case 18, EventScript_Shop_Lelouch_Other_24
	case 19, EventScript_Shop_Lelouch_Other_25
	case 20, EventScript_Shop_Lelouch_Other_26
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Other_27
EventScript_Shop_Lelouch_Other_4:
	bufferitemname 0, VAR_TEMP_0
	msgbox gText_Lelouch_MintCosts, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_29
	removeitem ITEM_GREEN_SHARD, 1
	msgbox gText_Lelouch_PayGreen
	msgbox gText_Lelouch_OneMoment
	fadescreenswapbuffers FADE_TO_BLACK
	delay 96
	playfanfare MUS_SLOTS_WIN
	waitfanfare
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox gText_Lelouch_ItsDone
	giveitem VAR_TEMP_0
	return

EventScript_Shop_Lelouch_Other_2:
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Other_6:
	setvar VAR_TEMP_0, ITEM_LONELY_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_7:
	setvar VAR_TEMP_0, ITEM_ADAMANT_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_8:
	setvar VAR_TEMP_0, ITEM_NAUGHTY_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_9:
	setvar VAR_TEMP_0, ITEM_BRAVE_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_10:
	setvar VAR_TEMP_0, ITEM_BOLD_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_11:
	setvar VAR_TEMP_0, ITEM_IMPISH_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_12:
	setvar VAR_TEMP_0, ITEM_LAX_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_13:
	setvar VAR_TEMP_0, ITEM_RELAXED_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_14:
	setvar VAR_TEMP_0, ITEM_MODEST_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_15:
	setvar VAR_TEMP_0, ITEM_MILD_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_16:
	setvar VAR_TEMP_0, ITEM_RASH_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_17:
	setvar VAR_TEMP_0, ITEM_QUIET_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_18:
	setvar VAR_TEMP_0, ITEM_CALM_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_19:
	setvar VAR_TEMP_0, ITEM_GENTLE_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_20:
	setvar VAR_TEMP_0, ITEM_CAREFUL_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_21:
	setvar VAR_TEMP_0, ITEM_SASSY_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_22:
	setvar VAR_TEMP_0, ITEM_TIMID_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_23:
	setvar VAR_TEMP_0, ITEM_HASTY_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_24:
	setvar VAR_TEMP_0, ITEM_JOLLY_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_25:
	setvar VAR_TEMP_0, ITEM_NAIVE_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_26:
	setvar VAR_TEMP_0, ITEM_SERIOUS_MINT
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_27:
	return

EventScript_Shop_Lelouch_Other_29:
	return


EventScript_Shop_Joy::
	lock
	faceplayer
	goto_if_unset FLAG_JOY_INTRO, EventScript_Shop_Joy_2
EventScript_Shop_Joy_1:
	msgbox gText_Joy_Welcome
	showmoneybox 0, 0, 0
	msgbox gText_Joy_WouldYouLikeToHeal, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Joy_5
	checkmoney 1000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_8
	removemoney 1000, 0
	updatemoneybox
	msgbox gText_Joy_ThankYou
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	fadescreen FADE_FROM_BLACK
	msgbox gText_Joy_PartyHealed
	closemessage
	hidemoneybox
	msgbox gText_Joy_WonderfulDay
	releaseall
	return

EventScript_Shop_Joy_2:
	setflag FLAG_JOY_INTRO
	msgbox gText_Joy_Intro
	goto EventScript_Shop_Joy_1

EventScript_Shop_Joy_5:
	closemessage
	hidemoneybox
	msgbox gText_Joy_WonderfulDay
	release
	end

EventScript_Shop_Joy_8:
	msgbox gText_Joy_NotEnough
	hidemoneybox
	msgbox gText_Joy_WonderfulDay
	release
	end


EventScript_BrutalExitNotSatisfied::
	msgbox gText_BrutalExitNotSatisfied
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	return


EventScript_LeavingSetup::
	setflag FLAG_IN_ZONE_NOT_SANCTUARY
	msgbox gText_Colress_Empower
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 21
	goto_if_eq EventScript_LeavingSetup_2
EventScript_LeavingSetup_1:
	compare VAR_TEMP_0, 22
	goto_if_eq EventScript_LeavingSetup_5
EventScript_LeavingSetup_4:
	compare VAR_TEMP_0, 23
	goto_if_eq EventScript_LeavingSetup_8
EventScript_LeavingSetup_7:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	return

EventScript_LeavingSetup_2:
	applymovement 1, Common_Movement_WalkRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	goto EventScript_LeavingSetup_1

EventScript_LeavingSetup_5:
	applymovement 1, Common_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	goto EventScript_LeavingSetup_4

EventScript_LeavingSetup_8:
	applymovement 1, Common_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	goto EventScript_LeavingSetup_7


EventScript_WhenUReady::
	compare VAR_ZONE, 7
	goto_if_eq EventScript_WhenUReady_1
	compare VAR_ZONE, 13
	goto_if_eq EventScript_WhenUReady_2
	compare VAR_ZONE, 18
	goto_if_eq EventScript_WhenUReady_3
	compare VAR_ZONE, 24
	goto_if_eq EventScript_WhenUReady_4
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	release
	return

EventScript_WhenUReady_1:
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady
	release
	return

EventScript_WhenUReady_2:
	goto Zone12Sanctuary_EventScript_WhenUReady
	return

EventScript_WhenUReady_3:
	goto Zone17Sanctuary_EventScript_WhenUReady
	return

EventScript_WhenUReady_4:
	goto Zone23Sanctuary_EventScript_WhenUReady
	return


EventScript_SanctuaryToZone0::
	lockall
	setflag FLAG_IN_ZONE_NOT_SANCTUARY
	warpteleport MAP_ZONE0A, 255, 17, 10
	waitstate
	return


EventScript_Documentation::
	msgbox gText_Version
	goto EventScript_WhenUReady
	return


EventScript_Settings::
EventScript_Settings_1:
	setflag FLAG_IS_DEBUGGING_SAVEFILE
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Settings_41
EventScript_Settings_37:
	goto_if_unset FLAG_BRUTAL_MODE_ON, EventScript_Settings_36
EventScript_Settings_32:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Settings_31
EventScript_Settings_27:
	goto_if_unset FLAG_BRUTAL_MODE_ON, EventScript_Settings_26
EventScript_Settings_22:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Settings_21
EventScript_Settings_17:
	goto_if_unset FLAG_BRUTAL_MODE_ON, EventScript_Settings_16
EventScript_Settings_12:
	goto_if_set FLAG_BRUTAL_MODE_ON, EventScript_Settings_11
EventScript_Settings_10:
	msgbox gText_Colress_DefaultVanillaMsg, MSGBOX_DEFAULT
	multichoice 21, 0, MULTI_COLRESS_SETTINGS, FALSE
	switch VAR_RESULT
	case 0, EventScript_Settings_82
	case 1, EventScript_Settings_83
	case 2, EventScript_Settings_84
	case 3, EventScript_Settings_85
	case MULTI_B_PRESSED, EventScript_Settings_85
	goto EventScript_Settings_1

EventScript_Settings_3:
	msgbox gText_Colress_BrutalNuzlockeRandomizerMsg, MSGBOX_DEFAULT
	multichoice 21, 0, MULTI_COLRESS_SETTINGS, FALSE
	switch VAR_RESULT
	case 0, EventScript_Settings_47
	case 1, EventScript_Settings_48
	case 2, EventScript_Settings_49
	case 3, EventScript_Settings_50
	case MULTI_B_PRESSED, EventScript_Settings_50
	goto EventScript_Settings_1

EventScript_Settings_4:
	msgbox gText_Colress_DefaultNuzlockeRandomizerMsg, MSGBOX_DEFAULT
	multichoice 21, 0, MULTI_COLRESS_SETTINGS, FALSE
	switch VAR_RESULT
	case 0, EventScript_Settings_52
	case 1, EventScript_Settings_53
	case 2, EventScript_Settings_54
	case 3, EventScript_Settings_55
	case MULTI_B_PRESSED, EventScript_Settings_55
	goto EventScript_Settings_1

EventScript_Settings_5:
	msgbox gText_Colress_BrutalRandomizerMsg, MSGBOX_DEFAULT
	multichoice 21, 0, MULTI_COLRESS_SETTINGS, FALSE
	switch VAR_RESULT
	case 0, EventScript_Settings_57
	case 1, EventScript_Settings_58
	case 2, EventScript_Settings_59
	case 3, EventScript_Settings_60
	case MULTI_B_PRESSED, EventScript_Settings_60
	goto EventScript_Settings_1

EventScript_Settings_6:
	msgbox gText_Colress_DefaultRandomizerMsg, MSGBOX_DEFAULT
	multichoice 21, 0, MULTI_COLRESS_SETTINGS, FALSE
	switch VAR_RESULT
	case 0, EventScript_Settings_62
	case 1, EventScript_Settings_63
	case 2, EventScript_Settings_64
	case 3, EventScript_Settings_65
	case MULTI_B_PRESSED, EventScript_Settings_65
	goto EventScript_Settings_1

EventScript_Settings_7:
	msgbox gText_Colress_BrutalNuzlockeMsg, MSGBOX_DEFAULT
	multichoice 21, 0, MULTI_COLRESS_SETTINGS, FALSE
	switch VAR_RESULT
	case 0, EventScript_Settings_67
	case 1, EventScript_Settings_68
	case 2, EventScript_Settings_69
	case 3, EventScript_Settings_70
	case MULTI_B_PRESSED, EventScript_Settings_70
	goto EventScript_Settings_1

EventScript_Settings_8:
	msgbox gText_Colress_DefaultNuzlockeMsg, MSGBOX_DEFAULT
	multichoice 21, 0, MULTI_COLRESS_SETTINGS, FALSE
	switch VAR_RESULT
	case 0, EventScript_Settings_72
	case 1, EventScript_Settings_73
	case 2, EventScript_Settings_74
	case 3, EventScript_Settings_75
	case MULTI_B_PRESSED, EventScript_Settings_75
	goto EventScript_Settings_1

EventScript_Settings_9:
	msgbox gText_Colress_BrutalVanillaMsg, MSGBOX_DEFAULT
	multichoice 21, 0, MULTI_COLRESS_SETTINGS, FALSE
	switch VAR_RESULT
	case 0, EventScript_Settings_77
	case 1, EventScript_Settings_78
	case 2, EventScript_Settings_79
	case 3, EventScript_Settings_80
	case MULTI_B_PRESSED, EventScript_Settings_80
	goto EventScript_Settings_1

EventScript_Settings_11:
	goto_if_unset FLAG_NUZLOCKE_ON, EventScript_Settings_13
	goto EventScript_Settings_10

EventScript_Settings_13:
	goto_if_unset FLAG_RANDOMIZER_ON, EventScript_Settings_9
	goto EventScript_Settings_10

EventScript_Settings_16:
	goto_if_set FLAG_NUZLOCKE_ON, EventScript_Settings_18
	goto EventScript_Settings_12

EventScript_Settings_18:
	goto_if_unset FLAG_RANDOMIZER_ON, EventScript_Settings_8
	goto EventScript_Settings_12

EventScript_Settings_21:
	goto_if_set FLAG_NUZLOCKE_ON, EventScript_Settings_23
	goto EventScript_Settings_17

EventScript_Settings_23:
	goto_if_unset FLAG_RANDOMIZER_ON, EventScript_Settings_7
	goto EventScript_Settings_17

EventScript_Settings_26:
	goto_if_unset FLAG_NUZLOCKE_ON, EventScript_Settings_28
	goto EventScript_Settings_22

EventScript_Settings_28:
	goto_if_set FLAG_RANDOMIZER_ON, EventScript_Settings_6
	goto EventScript_Settings_22

EventScript_Settings_31:
	goto_if_unset FLAG_NUZLOCKE_ON, EventScript_Settings_33
	goto EventScript_Settings_27

EventScript_Settings_33:
	goto_if_set FLAG_RANDOMIZER_ON, EventScript_Settings_5
	goto EventScript_Settings_27

EventScript_Settings_36:
	goto_if_set FLAG_NUZLOCKE_ON, EventScript_Settings_38
	goto EventScript_Settings_32

EventScript_Settings_38:
	goto_if_set FLAG_RANDOMIZER_ON, EventScript_Settings_4
	goto EventScript_Settings_32

EventScript_Settings_41:
	goto_if_set FLAG_NUZLOCKE_ON, EventScript_Settings_43
	goto EventScript_Settings_37

EventScript_Settings_43:
	goto_if_set FLAG_RANDOMIZER_ON, EventScript_Settings_3
	goto EventScript_Settings_37

EventScript_Settings_47:
	msgbox Zone0Sanctuary_Text_Colress_BrutalExplained
	msgbox gText_Colress_WouldTurnOffBrutal, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_86
	goto EventScript_Settings_1

EventScript_Settings_48:
	msgbox Zone0Sanctuary_Text_Colress_RandomizerExplanation
	msgbox Zone0Sanctuary_Text_Colress_NuzlockeExplained
	msgbox gText_Colress_WouldTurnOffNuzlocke, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_88
	goto EventScript_Settings_1

EventScript_Settings_49:
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_50:
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_52:
	msgbox Zone0Sanctuary_Text_Colress_DefaultExplained
	goto EventScript_Settings_1

EventScript_Settings_53:
	msgbox Zone0Sanctuary_Text_Colress_RandomizerExplanation
	msgbox Zone0Sanctuary_Text_Colress_NuzlockeExplained
	msgbox gText_Colress_WouldTurnOffNuzlocke, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_90
	goto EventScript_Settings_1

EventScript_Settings_54:
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_55:
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_57:
	msgbox Zone0Sanctuary_Text_Colress_BrutalExplained
	msgbox gText_Colress_WouldTurnOffBrutal, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_92
	goto EventScript_Settings_1

EventScript_Settings_58:
	msgbox Zone0Sanctuary_Text_Colress_RandomizerExplanation
	goto EventScript_Settings_1

EventScript_Settings_59:
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_60:
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_62:
	msgbox Zone0Sanctuary_Text_Colress_DefaultExplained
	goto EventScript_Settings_1

EventScript_Settings_63:
	msgbox Zone0Sanctuary_Text_Colress_RandomizerExplanation
	goto EventScript_Settings_1

EventScript_Settings_64:
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_65:
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_67:
	msgbox Zone0Sanctuary_Text_Colress_BrutalExplained
	msgbox gText_Colress_WouldTurnOffBrutal, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_94
	goto EventScript_Settings_1

EventScript_Settings_68:
	msgbox Zone0Sanctuary_Text_Colress_NuzlockeExplained
	msgbox gText_Colress_WouldTurnOffNuzlocke, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_96
	goto EventScript_Settings_1

EventScript_Settings_69:
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_70:
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_72:
	msgbox Zone0Sanctuary_Text_Colress_DefaultExplained
	goto EventScript_Settings_1

EventScript_Settings_73:
	msgbox Zone0Sanctuary_Text_Colress_NuzlockeExplained
	msgbox gText_Colress_WouldTurnOffNuzlocke, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_98
	goto EventScript_Settings_1

EventScript_Settings_74:
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_75:
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_77:
	msgbox Zone0Sanctuary_Text_Colress_BrutalExplained
	msgbox gText_Colress_WouldTurnOffBrutal, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_100
	goto EventScript_Settings_1

EventScript_Settings_78:
	msgbox Zone0Sanctuary_Text_Colress_NuzlockeExplained
	goto EventScript_Settings_1

EventScript_Settings_79:
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_80:
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_82:
	msgbox Zone0Sanctuary_Text_Colress_DefaultExplained
	goto EventScript_Settings_1

EventScript_Settings_83:
	msgbox gText_Colress_VanillaExplanation
	goto EventScript_Settings_1

EventScript_Settings_84:
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_85:
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_86:
	msgbox gText_Colress_SureTurnOffBrutal, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_102
	goto EventScript_Settings_1

EventScript_Settings_88:
	msgbox gText_Colress_SureTurnOffNuzlocke, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_104
	goto EventScript_Settings_1

EventScript_Settings_90:
	msgbox gText_Colress_SureTurnOffNuzlocke, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_106
	goto EventScript_Settings_1

EventScript_Settings_92:
	msgbox gText_Colress_SureTurnOffBrutal, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_108
	goto EventScript_Settings_1

EventScript_Settings_94:
	msgbox gText_Colress_SureTurnOffBrutal, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_110
	goto EventScript_Settings_1

EventScript_Settings_96:
	msgbox gText_Colress_SureTurnOffNuzlocke, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_112
	goto EventScript_Settings_1

EventScript_Settings_98:
	msgbox gText_Colress_SureTurnOffNuzlocke, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_114
	goto EventScript_Settings_1

EventScript_Settings_100:
	msgbox gText_Colress_SureTurnOffBrutal, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_116
	goto EventScript_Settings_1

EventScript_Settings_102:
	msgbox gText_Colress_BrutalOff
	clearflag FLAG_BRUTAL_MODE_ON
	clearflag FLAG_SMART_WILD_AI_ON
	goto EventScript_Settings_1

EventScript_Settings_104:
	msgbox gText_Colress_NuzlockeOffRandomizer
	clearflag FLAG_NUZLOCKE_ON
	clearflag FLAG_NUZLOCKE_FOSSIL_RECEIVED
	callnative GlobalNuzlockeClear
	goto EventScript_Settings_1

EventScript_Settings_106:
	msgbox gText_Colress_NuzlockeOffRandomizer
	clearflag FLAG_NUZLOCKE_ON
	clearflag FLAG_NUZLOCKE_FOSSIL_RECEIVED
	callnative GlobalNuzlockeClear
	goto EventScript_Settings_1

EventScript_Settings_108:
	msgbox gText_Colress_BrutalOff
	clearflag FLAG_BRUTAL_MODE_ON
	clearflag FLAG_SMART_WILD_AI_ON
	goto EventScript_Settings_1

EventScript_Settings_110:
	msgbox gText_Colress_BrutalOff
	clearflag FLAG_BRUTAL_MODE_ON
	clearflag FLAG_SMART_WILD_AI_ON
	goto EventScript_Settings_1

EventScript_Settings_112:
	msgbox gText_Colress_NuzlockeOff
	clearflag FLAG_NUZLOCKE_ON
	clearflag FLAG_NUZLOCKE_FOSSIL_RECEIVED
	callnative GlobalNuzlockeClear
	goto EventScript_Settings_1

EventScript_Settings_114:
	msgbox gText_Colress_NuzlockeOff
	clearflag FLAG_NUZLOCKE_ON
	clearflag FLAG_NUZLOCKE_FOSSIL_RECEIVED
	callnative GlobalNuzlockeClear
	goto EventScript_Settings_1

EventScript_Settings_116:
	msgbox gText_Colress_BrutalOff
	clearflag FLAG_BRUTAL_MODE_ON
	clearflag FLAG_SMART_WILD_AI_ON
	goto EventScript_Settings_1


EventScript_MusicMenu::
EventScript_MusicMenu_1:
	fadedefaultbgm
	msgbox gText_Colress_MusicType, MSGBOX_DEFAULT
	multichoice 21, 0, MULTI_MUSIC_TYPE, FALSE
	switch VAR_RESULT
	case 0, EventScript_MusicMenu_4
	case 1, EventScript_MusicMenu_5
	case 2, EventScript_MusicMenu_6
	case 3, EventScript_MusicMenu_7
	case MULTI_B_PRESSED, EventScript_MusicMenu_7
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_4:
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_8:
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_9
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_5:
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_11:
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_12
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_6:
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_14:
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_15
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_7:
	goto EventScript_Settings
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_9:
	switch VAR_WILD_MUSIC
	case 0, EventScript_MusicMenu_19
	case 1, EventScript_MusicMenu_20
	case 2, EventScript_MusicMenu_21
	case 3, EventScript_MusicMenu_22
	case 4, EventScript_MusicMenu_23
	case 5, EventScript_MusicMenu_24
EventScript_MusicMenu_17:
	multichoice 21, 0, MULTI_MUSIC_WHICH_GAME, FALSE
	switch VAR_RESULT
	case 0, EventScript_MusicMenu_42
	case 1, EventScript_MusicMenu_43
	case 2, EventScript_MusicMenu_44
	case 3, EventScript_MusicMenu_45
	case 4, EventScript_MusicMenu_46
	case 5, EventScript_MusicMenu_47
	case MULTI_B_PRESSED, EventScript_MusicMenu_48
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_12:
	switch VAR_TRAINER_MUSIC
	case 0, EventScript_MusicMenu_27
	case 1, EventScript_MusicMenu_28
	case 2, EventScript_MusicMenu_29
	case 3, EventScript_MusicMenu_30
	case 4, EventScript_MusicMenu_31
	case 5, EventScript_MusicMenu_32
EventScript_MusicMenu_25:
	multichoice 21, 0, MULTI_MUSIC_WHICH_GAME, FALSE
	switch VAR_RESULT
	case 0, EventScript_MusicMenu_50
	case 1, EventScript_MusicMenu_51
	case 2, EventScript_MusicMenu_52
	case 3, EventScript_MusicMenu_53
	case 4, EventScript_MusicMenu_54
	case 5, EventScript_MusicMenu_55
	case MULTI_B_PRESSED, EventScript_MusicMenu_56
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_15:
	switch VAR_LEVIATHAN_MUSIC
	case 0, EventScript_MusicMenu_35
	case 1, EventScript_MusicMenu_36
	case 2, EventScript_MusicMenu_37
	case 3, EventScript_MusicMenu_38
	case 4, EventScript_MusicMenu_39
	case 5, EventScript_MusicMenu_40
EventScript_MusicMenu_33:
	multichoice 21, 0, MULTI_MUSIC_WHICH_GAME, FALSE
	switch VAR_RESULT
	case 0, EventScript_MusicMenu_58
	case 1, EventScript_MusicMenu_59
	case 2, EventScript_MusicMenu_60
	case 3, EventScript_MusicMenu_61
	case 4, EventScript_MusicMenu_62
	case 5, EventScript_MusicMenu_63
	case MULTI_B_PRESSED, EventScript_MusicMenu_64
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_19:
	playbgm MUS_VS_WILD, FALSE
	msgbox gText_Colress_WildMusic0Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_20:
	playbgm MUS_RG_VS_WILD, FALSE
	msgbox gText_Colress_WildMusic1Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_21:
	playbgm MUS_DP_SEQ_BA_POKE, FALSE
	msgbox gText_Colress_WildMusic2Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_22:
	playbgm MUS_HG_SEQ_GS_VS_NORAPOKE, FALSE
	msgbox gText_Colress_WildMusic3Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_23:
	playbgm MUS_HG_SEQ_GS_VS_NORAPOKE_KANTO, FALSE
	msgbox gText_Colress_WildMusic4Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_24:
	msgbox gText_Colress_WildMusic5Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_27:
	playbgm MUS_VS_TRAINER, FALSE
	msgbox gText_Colress_TrainerMusic0Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_28:
	playbgm MUS_RG_VS_TRAINER, FALSE
	msgbox gText_Colress_TrainerMusic1Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_29:
	playbgm MUS_DP_SEQ_BA_TRAIN, FALSE
	msgbox gText_Colress_TrainerMusic2Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_30:
	playbgm MUS_HG_SEQ_GS_VS_TRAINER, FALSE
	msgbox gText_Colress_TrainerMusic3Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_31:
	playbgm MUS_HG_SEQ_GS_VS_TRAINER_KANTO, FALSE
	msgbox gText_Colress_TrainerMusic4Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_32:
	playbgm MUS_BW_SEQ_BGM_VS_TRAINER, FALSE
	msgbox gText_Colress_TrainerMusic5Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_35:
	playbgm MUS_VS_GYM_LEADER, FALSE
	msgbox gText_Colress_LeviathanMusic0Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_36:
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
	msgbox gText_Colress_LeviathanMusic1Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_37:
	playbgm MUS_DP_SEQ_BA_GYM, FALSE
	msgbox gText_Colress_LeviathanMusic2Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_38:
	playbgm MUS_HG_SEQ_GS_VS_GYMREADER, FALSE
	msgbox gText_Colress_LeviathanMusic3Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_39:
	playbgm MUS_HG_SEQ_GS_VS_GYMREADER_KANTO, FALSE
	msgbox gText_Colress_LeviathanMusic4Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_40:
	msgbox gText_Colress_LeviathanMusic5Msg, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_42:
	setvar VAR_WILD_MUSIC, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_43:
	setvar VAR_WILD_MUSIC, 1
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_44:
	setvar VAR_WILD_MUSIC, 2
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_45:
	setvar VAR_WILD_MUSIC, 3
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_46:
	setvar VAR_WILD_MUSIC, 4
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_47:
	msgbox gText_Colress_WildMusicBWNotFinished
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_48:
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_50:
	setvar VAR_TRAINER_MUSIC, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_51:
	setvar VAR_TRAINER_MUSIC, 1
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_52:
	setvar VAR_TRAINER_MUSIC, 2
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_53:
	setvar VAR_TRAINER_MUSIC, 3
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_54:
	setvar VAR_TRAINER_MUSIC, 4
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_55:
	setvar VAR_TRAINER_MUSIC, 5
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_56:
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_58:
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_59:
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_60:
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_61:
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_62:
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_63:
	msgbox gText_Colress_LeviathanMusicBWNotFinished
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_64:
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_14


EventScript_WarpZone0::
	clearflag FLAG_IS_REVISITING_ZONE
	switch VAR_REVISITING_ZONE
	case 1, EventScript_WarpZone0_2
	case 2, EventScript_WarpZone0_3
	case 3, EventScript_WarpZone0_4
	case 4, EventScript_WarpZone0_5
	case 5, EventScript_WarpZone0_6
	case 6, EventScript_WarpZone0_7
	case 7, EventScript_WarpZone0_8
	case 8, EventScript_WarpZone0_9
	case 9, EventScript_WarpZone0_10
	case 10, EventScript_WarpZone0_11
	case 11, EventScript_WarpZone0_12
	case 12, EventScript_WarpZone0_13
	case 13, EventScript_WarpZone0_14
	case 14, EventScript_WarpZone0_15
	case 15, EventScript_WarpZone0_16
	case 16, EventScript_WarpZone0_17
	case 17, EventScript_WarpZone0_18
	case 18, EventScript_WarpZone0_19
	case 19, EventScript_WarpZone0_20
	case 20, EventScript_WarpZone0_21
	case 21, EventScript_WarpZone0_22
	case 22, EventScript_WarpZone0_23
	case 23, EventScript_WarpZone0_24
	case 24, EventScript_WarpZone0_25
	case 25, EventScript_WarpZone0_26
	case 26, EventScript_WarpZone0_27
	case 27, EventScript_WarpZone0_28
	case 28, EventScript_WarpZone0_29
	case 29, EventScript_WarpZone0_30
	case 30, EventScript_WarpZone0_31
	case 31, EventScript_WarpZone0_32
	case 32, EventScript_WarpZone0_33
	case 33, EventScript_WarpZone0_34
	case 34, EventScript_WarpZone0_35
	case 35, EventScript_WarpZone0_36
	case 36, EventScript_WarpZone0_37
	case 37, EventScript_WarpZone0_38
	case 38, EventScript_WarpZone0_39
	case 39, EventScript_WarpZone0_40
	case 40, EventScript_WarpZone0_41
	case 41, EventScript_WarpZone0_42
	case 42, EventScript_WarpZone0_43
	case 43, EventScript_WarpZone0_44
	case 44, EventScript_WarpZone0_45
	case 45, EventScript_WarpZone0_46
	case 46, EventScript_WarpZone0_47
	case 47, EventScript_WarpZone0_48
	case 48, EventScript_WarpZone0_49
	case 49, EventScript_WarpZone0_50
	case 50, EventScript_WarpZone0_51
	case 51, EventScript_WarpZone0_52
	return

EventScript_WarpZone0_2:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 15, 32
	waitstate
	return

EventScript_WarpZone0_3:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 19, 32
	waitstate
	return

EventScript_WarpZone0_4:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 23, 32
	waitstate
	return

EventScript_WarpZone0_5:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 27, 32
	waitstate
	return

EventScript_WarpZone0_6:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 31, 32
	waitstate
	return

EventScript_WarpZone0_7:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 35, 32
	waitstate
	return

EventScript_WarpZone0_8:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 39, 32
	waitstate
	return

EventScript_WarpZone0_9:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 43, 32
	waitstate
	return

EventScript_WarpZone0_10:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 47, 32
	waitstate
	return

EventScript_WarpZone0_11:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 51, 32
	waitstate
	return

EventScript_WarpZone0_12:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 15, 25
	waitstate
	return

EventScript_WarpZone0_13:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 19, 25
	waitstate
	return

EventScript_WarpZone0_14:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 23, 25
	waitstate
	return

EventScript_WarpZone0_15:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 27, 25
	waitstate
	return

EventScript_WarpZone0_16:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 31, 25
	waitstate
	return

EventScript_WarpZone0_17:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 35, 25
	waitstate
	return

EventScript_WarpZone0_18:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 39, 25
	waitstate
	return

EventScript_WarpZone0_19:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 43, 25
	waitstate
	return

EventScript_WarpZone0_20:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 47, 25
	waitstate
	return

EventScript_WarpZone0_21:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 51, 25
	waitstate
	return

EventScript_WarpZone0_22:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 15, 18
	waitstate
	return

EventScript_WarpZone0_23:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 19, 18
	waitstate
	return

EventScript_WarpZone0_24:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 23, 18
	waitstate
	return

EventScript_WarpZone0_25:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 27, 18
	waitstate
	return

EventScript_WarpZone0_26:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 31, 18
	waitstate
	return

EventScript_WarpZone0_27:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 35, 18
	waitstate
	return

EventScript_WarpZone0_28:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 39, 18
	waitstate
	return

EventScript_WarpZone0_29:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 43, 18
	waitstate
	return

EventScript_WarpZone0_30:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 47, 18
	waitstate
	return

EventScript_WarpZone0_31:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 51, 18
	waitstate
	return

EventScript_WarpZone0_32:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 15, 11
	waitstate
	return

EventScript_WarpZone0_33:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 19, 11
	waitstate
	return

EventScript_WarpZone0_34:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 23, 11
	waitstate
	return

EventScript_WarpZone0_35:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 27, 11
	waitstate
	return

EventScript_WarpZone0_36:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 31, 11
	waitstate
	return

EventScript_WarpZone0_37:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 35, 11
	waitstate
	return

EventScript_WarpZone0_38:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 39, 11
	waitstate
	return

EventScript_WarpZone0_39:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 43, 11
	waitstate
	return

EventScript_WarpZone0_40:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 47, 11
	waitstate
	return

EventScript_WarpZone0_41:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 51, 11
	waitstate
	return

EventScript_WarpZone0_42:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 15, 4
	waitstate
	return

EventScript_WarpZone0_43:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 19, 4
	waitstate
	return

EventScript_WarpZone0_44:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 23, 4
	waitstate
	return

EventScript_WarpZone0_45:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 27, 4
	waitstate
	return

EventScript_WarpZone0_46:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 31, 4
	waitstate
	return

EventScript_WarpZone0_47:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 35, 4
	waitstate
	return

EventScript_WarpZone0_48:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 39, 4
	waitstate
	return

EventScript_WarpZone0_49:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 43, 4
	waitstate
	return

EventScript_WarpZone0_50:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 47, 4
	waitstate
	return

EventScript_WarpZone0_51:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 51, 4
	waitstate
	return

EventScript_WarpZone0_52:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 2, 25
	waitstate
	return


EventScript_ExitSign::
	msgbox gText_ExitSign, MSGBOX_SIGN
	end

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

	.align 2
Shop_General_1to3:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_4to8:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_9to12:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SP_DEF
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_9to12_Brutal:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_13to16:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SP_DEF
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_ETHER
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_13to16_Brutal:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_ETHER
	.2byte ITEM_NONE
	release
	end
	
	.align 2
Shop_General_17to25:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SP_DEF
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_ETHER
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_17to25_Brutal:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_ETHER
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_26to30:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SP_DEF
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_ETHER
	.2byte ITEM_ELIXIR
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_26to30Nuzlocke:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SP_DEF
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_ETHER
	.2byte ITEM_ELIXIR
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_26to30_Brutal:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_ETHER
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_General_26to30_BrutalNuzlocke:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_ETHER
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_1to3:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_4to5:
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_NONE
	release
	end
	
	.align 2
Shop_Unique_Varrick_6to8:
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_NONE
	release
	end
	
	.align 2
Shop_Unique_Varrick_9to10:
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_MAGNET
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_POISON_BARB
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_HARD_STONE
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_11to14:
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_MAGNET
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_POISON_BARB
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_HARD_STONE
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_15to20:
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_MAGNET
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_POISON_BARB
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_HARD_STONE
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_21to23:
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_MAGNET
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_POISON_BARB
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_HARD_STONE
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_METAL_COAT
	.2byte ITEM_LIGHT_BALL
	.2byte ITEM_LEEK
	.2byte ITEM_THICK_CLUB
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_24to25:
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_MAGNET
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_POISON_BARB
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_HARD_STONE
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_26to30:
	.2byte ITEM_EXP_SHARE
	.2byte ITEM_MACHO_BRACE
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_ELECTRIC_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_ICE_GEM
	.2byte ITEM_FIGHTING_GEM
	.2byte ITEM_POISON_GEM
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_FLYING_GEM
	.2byte ITEM_PSYCHIC_GEM
	.2byte ITEM_BUG_GEM
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_GHOST_GEM
	.2byte ITEM_DRAGON_GEM
	.2byte ITEM_DARK_GEM
	.2byte ITEM_STEEL_GEM
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_EVIOLITE
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_MAGNET
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_POISON_BARB
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_HARD_STONE
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_Varrick_26to30_Brutal:
	.2byte ITEM_EXP_SHARE
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_ELECTRIC_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_ICE_GEM
	.2byte ITEM_FIGHTING_GEM
	.2byte ITEM_POISON_GEM
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_FLYING_GEM
	.2byte ITEM_PSYCHIC_GEM
	.2byte ITEM_BUG_GEM
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_GHOST_GEM
	.2byte ITEM_DRAGON_GEM
	.2byte ITEM_DARK_GEM
	.2byte ITEM_STEEL_GEM
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_EVIOLITE
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_MAGNET
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_POISON_BARB
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_HARD_STONE
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE
	release
	end
	
	.align 2
Shop_Unique_ZhuLi_11to14:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_ZhuLi_15to20:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_TART_APPLE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE
	release
	end

	.align 2
Shop_Unique_ZhuLi_21to23:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_PRISM_SCALE
	.2byte ITEM_DEEP_SEA_SCALE
	.2byte ITEM_DEEP_SEA_TOOTH
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_GALARICA_CUFF
	.2byte ITEM_GALARICA_WREATH
	.2byte ITEM_CRACKED_POT
	.2byte ITEM_UPGRADE
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_TART_APPLE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE
	release
	end

Shop_Unique_ZhuLi_24to30:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_PROTECTOR
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_PRISM_SCALE
	.2byte ITEM_DEEP_SEA_SCALE
	.2byte ITEM_DEEP_SEA_TOOTH
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_GALARICA_CUFF
	.2byte ITEM_GALARICA_WREATH
	.2byte ITEM_CRACKED_POT
	.2byte ITEM_UPGRADE
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_TART_APPLE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE
	release
	end
