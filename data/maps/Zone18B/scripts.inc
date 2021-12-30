Zone18B_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Zone18B_OnLoad
	.byte 0

Zone18B_OnLoad:
	compare VAR_ZONE18B_STATE, 0
	goto_if_eq Zone18B_EventScript_OpenUnlockedDoors
	compare VAR_ZONE18B_STATE, 1
	call_if_ge Zone18B_EventScript_UnlockAllDoors
	end

Zone18B_EventScript_OpenUnlockedDoors:: @ 82048B5
	setvar VAR_0x8005, 1
	call Zone18B_EventScript_OpenEntranceDoors
	call_if_defeated TRAINER_JAY, Zone18B_EventScript_OpenCoolRoomDoors
	call_if_defeated TRAINER_BLANCHE, Zone18B_EventScript_OpenCuteRoomDoors
	call_if_defeated TRAINER_TERRENCE, Zone18B_EventScript_OpenStallRoomDoors
	call_if_defeated TRAINER_MARTY, Zone18B_EventScript_OpenBalanceRoomDoors
	call_if_defeated TRAINER_KARI, Zone18B_EventScript_OpenOffenseRoomDoors
	call_if_defeated TRAINER_ABRAHAM, Zone18B_EventScript_OpenSwitchRoomDoors
	call_if_defeated TRAINER_REX, Zone18B_EventScript_OpenHazardRoomDoors
	call_if_defeated TRAINER_EMILIO, Zone18B_EventScript_OpenSetupRoomDoors
	call_if_defeated TRAINER_MELINDA, Zone18B_EventScript_OpenHailRoomDoors
	call_if_defeated TRAINER_LOUIS, Zone18B_EventScript_OpenBuffRoomDoors
	call_if_defeated TRAINER_DESIREE, Zone18B_EventScript_OpenSpeedRoomDoors
	call_if_defeated TRAINER_PAM, Zone18B_EventScript_OpenSupportRoomDoors
	call_if_defeated TRAINER_WILLIE, Zone18B_EventScript_OpenStatsRoomDoors
	call_if_defeated TRAINER_DORIS, Zone18B_EventScript_OpenAbilityRoomDoors
	end

Zone18B_EventScript_UnlockAllDoors:: @ 82048FF
	setvar VAR_0x8005, 1
	call Zone18B_EventScript_OpenEntranceDoors
	call Zone18B_EventScript_OpenCoolRoomDoors
	call Zone18B_EventScript_OpenCuteRoomDoors
	call Zone18B_EventScript_OpenStallRoomDoors
	call Zone18B_EventScript_OpenBalanceRoomDoors
	call Zone18B_EventScript_OpenOffenseRoomDoors
	call Zone18B_EventScript_OpenSwitchRoomDoors
	call Zone18B_EventScript_OpenHazardRoomDoors
	call Zone18B_EventScript_OpenSetupRoomDoors
	call Zone18B_EventScript_OpenHailRoomDoors
	call Zone18B_EventScript_OpenBuffRoomDoors
	call Zone18B_EventScript_OpenSpeedRoomDoors
	call Zone18B_EventScript_OpenSupportRoomDoors
	call Zone18B_EventScript_OpenStatsRoomDoors
	call Zone18B_EventScript_OpenAbilityRoomDoors
	return

Zone18B_EventScript_Odysseus::
	lock
	switch VAR_FACING
	case DIR_NORTH, Zone18B_EventScript_PlayerBottom
	case DIR_WEST, Zone18B_EventScript_PlayerRight
	case DIR_EAST, Zone18B_EventScript_PlayerLeft
	end

Zone18B_EventScript_PlayerBottom::
	goto Zone18B_EventScript_LeviathanOptions
	end

Zone18B_EventScript_PlayerRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone18B_EventScript_LeviathanOptions
	end

Zone18B_EventScript_PlayerLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone18B_EventScript_LeviathanOptions
	end

Zone18B_EventScript_LeviathanOptions:
	switch VAR_ZONE18B_STATE
	case 0, Zone18B_EventScript_InitiatePirateSequence
	case 2, Zone18B_EventScript_FindPirates
	case 3, Zone18B_EventScript_ThankForPirates
	case 4, Zone18B_EventScript_WantBattleOrLeave
	case 5, Zone18B_EventScript_WantLeave
	end

Zone18B_EventScript_FindPirates:
	msgbox Zone18A_Text_Odysseus_FindPirates, MSGBOX_AUTOCLOSE
	release
	end

Zone18B_EventScript_InitiatePirateSequence:
	call Zone18B_EventScript_UnlockAllDoors
	special DrawWholeMapView
	msgbox Zone18B_Text_LeviathanCutoff, MSGBOX_AUTOCLOSE
	delay 40
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	special RemoveCameraObject
	playse SE_DOOR
	delay 10
	addobject 2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	msgbox Zone18B_Text_Sir, MSGBOX_AUTOCLOSE
	msgbox Zone18B_Text_LeviathanNotAgain, MSGBOX_AUTOCLOSE
	applymovement 2, Common_Movement_FaceDown
	playse SE_DOOR
	delay 10
	waitmovement 0
	removeobject 2
	applymovement 1, Zone18B_Movement_LeviathanLeave
	waitmovement 0
	playse SE_DOOR
	delay 10
	removeobject 1
	setflag FLAG_HIDE_ZONE18B_ODYSSEUS
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	special RemoveCameraObject
	setvar VAR_ZONE18B_STATE, 1
	release
	end

Zone18B_Text_LeviathanCutoff:
	.string "{COLOR BLUE}Odysseus{COLOR DARK_GRAY}: Hello, {PLAYER}.\p"
	.string "You're making quite the impression,\n"
	.string "defeating all of my hand-selected\l"
	.string "trainers.\p"
	.string "Now is the time to battle.\p"
	.string "I, {COLOR BLUE}Leviathan Odysseus{COLOR DARK_GRAY}, challenge-$"

Zone18B_Text_Sir:
	.string "Sir!\n"
	.string "The pirates are raiding the beach!$"

Zone18B_Text_LeviathanNotAgain:
	.string "{COLOR BLUE}Odysseus{COLOR DARK_GRAY}: Not again!$"

Zone18B_Movement_LeviathanLeave:
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_left
	walk_faster_down
	walk_faster_down
	step_end

Zone18B_EventScript_ThankForPirates:
	msgbox Zone18B_Odysseus_ThankYou, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM25
	setvar VAR_ZONE18B_STATE, 4
	goto Zone18B_EventScript_WantBattleOrLeave
	release
	end

Zone18B_Odysseus_ThankYou:
	.string "{COLOR BLUE}Odysseus{COLOR DARK_GRAY}: You defeated the pirates?\p"
	.string "Thank you, {PLAYER}, for finding\n"
	.string "their hideout. I want you to have\l"
	.string "this as a reward.$"

Zone18B_EventScript_WantBattleOrLeave:
	msgbox Zone18B_Odysseus_WantBattle, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_OdysseusBattle
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_WantLeave
	end

Zone18B_Odysseus_WantBattle:
	.string "{COLOR BLUE}Odysseus{COLOR DARK_GRAY}: If you'd like, we can\n"
	.string "have a battle.$"

Zone18B_EventScript_OdysseusBattle:
	msgbox Zone18B_OdysseusBattleIntro, MSGBOX_AUTOCLOSE
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	setvar VAR_MUGSHOT_ID, MUGSHOT_ODYSSEUS
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone18B_EventScript_OdysseusBrutal
	totemboost_atk2 B_POSITION_OPPONENT_LEFT
	trainerbattle_no_intro TRAINER_LEVIATHAN11, Zone18B_Text_LeviathanDefeat
	goto Zone18B_EventScript_Leviathan11Defeated
	end

Zone18B_EventScript_OdysseusBrutal:
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 0, 0, 0, 0, 0, 2
	trainerbattle_no_intro TRAINER_LEVIATHAN11_BRUTAL, Zone18B_Text_LeviathanDefeat
	goto Zone18B_EventScript_Leviathan11Defeated
	end

Zone18B_OdysseusBattleIntro:
	.string "Let this be a match for the ages!$"

Zone18B_Text_LeviathanDefeat:
	.string "Well met. Congratulations.$"

Zone18B_EventScript_Leviathan11Defeated:
	setflag FLAG_BEATLEVIATHAN11
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone18B_Text_Odysseus_PostBattle, MSGBOX_AUTOCLOSE
	giveitem ITEM_SHARPEDONITE, 1
	msgbox Zone18B_Text_Odysseus_ExplainItem, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE18B_STATE, 5
	release
	end

Zone18B_Text_Odysseus_PostBattle:
	.string "What a stunning battle. You must be\n"
	.string "proud of your Pokémon.\p"
	.string "Here, I want you to have this.$"

Zone18B_Text_Odysseus_ExplainItem:
	.string "That is a Sharpedonite, a special\n"
	.string "Mega Stone. You'll need a\l"
	.string "Mega Bracelet to use it.$"

Zone18B_EventScript_WantLeave:
	msgbox Zone18B_Odysseus_WantLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_Leave
	msgbox Zone18B_Odysseus_Stay, MSGBOX_AUTOCLOSE
	release
	end

Zone18B_Odysseus_WantLeave:
	.string "I can arrange travel for you,\n"
	.string "if you want.$"

Zone18B_Odysseus_Stay:
	.string "You're more than welcome to stay as\n"
	.string "long as you wish on this island.\p"
	.string "Come to me if you need anything.$"

Zone18B_EventScript_Leave:
	compare VAR_ZONE, 19
	goto_if_gt EventScript_WarpZone0
	call_if_set FLAG_BRUTAL_MODE_ON, Zone18B_EventScript_CheckBrutal
	msgbox Zone18B_Odysseus_Goodbye, MSGBOX_AUTOCLOSE
	warp MAP_ZONE19SANCTUARY, 255, 22, 7
	release
	end

Zone18B_EventScript_CheckBrutal:
	goto_if_not_defeated TRAINER_MARION, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_CLINTON, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_KENNETH, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_JAY, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_BLANCHE, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_TERRENCE, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_MARTY, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_KARI, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_ABRAHAM, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_REX, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_EMILIO, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_MELINDA, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_LOUIS, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_DESIREE, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_PAM, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_WILLIE, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_DORIS, EventScript_BrutalExitNotSatisfied
	goto_if_unset FLAG_BEATLEVIATHAN11, EventScript_BrutalExitNotSatisfied
	return

Zone18B_Odysseus_Goodbye:
	.string "Of course.\p"
	.string "Thank you for your actions, and\n"
	.string "know you are always welcome here.\p"
	.string "Goodbye.$"

Zone18B_EventScript_DontEnterRoom::
	releaseall
	end

Zone18B_EventScript_DoorLocked::
	msgbox Zone18B_Text_DoorAppearsLocked, MSGBOX_DEFAULT
	releaseall
	end

Zone18B_EventScript_CoolRoomDoor::
	lockall
	msgbox Zone18B_Text_EnterCoolRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterCoolRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterCoolRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 5, 7, 189
	waitstate
	releaseall
	end

Zone18B_EventScript_CuteRoomDoor::
	lockall
	msgbox Zone18B_Text_EnterCuteRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterCuteRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterCuteRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 6, 1, 176
	waitstate
	releaseall
	end

Zone18B_EventScript_StallRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_JAY, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterStallRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterStallRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterStallRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 13, 7, 163
	waitstate
	releaseall
	end

Zone18B_EventScript_LeftBalanceRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_JAY, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterBalanceRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterLeftBalanceRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterLeftBalanceRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 14, 1, 150
	waitstate
	releaseall
	end

Zone18B_EventScript_RightBalanceRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_BLANCHE, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterBalanceRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterRightBalanceRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterRightBalanceRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 17, 7, 150
	waitstate
	releaseall
	end

Zone18B_EventScript_OffenseRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_BLANCHE, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterOffenseRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterOffenseRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterOffenseRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 18, 1, 137
	waitstate
	releaseall
	end

Zone18B_EventScript_SwitchRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_TERRENCE, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterSwitchRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterSwitchRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterSwitchRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 27, 7, 124
	waitstate
	releaseall
	end

Zone18B_EventScript_LeftHazardRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_TERRENCE, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterHazardRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterLeftHazardRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterLeftHazardRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 28, 1, 111
	waitstate
	releaseall
	end

Zone18B_EventScript_RightHazardRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_MARTY, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterHazardRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterRightHazardRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterRightHazardRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 31, 7, 111
	waitstate
	releaseall
	end

Zone18B_EventScript_LeftSetupRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_MARTY, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterSetupRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterLeftSetupRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterLeftSetupRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 32, 1, 98
	waitstate
	releaseall
	end

Zone18B_EventScript_RightSetupRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_KARI, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterSetupRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterRightSetupRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterRightSetupRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 35, 7, 98
	waitstate
	releaseall
	end

Zone18B_EventScript_HailRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_KARI, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterHailRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterHailRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterHailRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 36, 1, 85
	waitstate
	releaseall
	end

Zone18B_EventScript_LeftBuffRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_ABRAHAM, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterBuffRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterLeftBuffRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterLeftBuffRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 44, 1, 72
	waitstate
	releaseall
	end

Zone18B_EventScript_RightBuffRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_REX, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterBuffRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterRightBuffRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterRightBuffRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 47, 7, 72
	waitstate
	releaseall
	end

Zone18B_EventScript_LeftSpeedRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_REX, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterSpeedRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterLeftSpeedRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterLeftSpeedRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 48, 1, 59
	waitstate
	releaseall
	end

Zone18B_EventScript_RightSpeedRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_EMILIO, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterSpeedRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterRightSpeedRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterRightSpeedRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 50, 7, 59
	waitstate
	releaseall
	end

Zone18B_EventScript_LeftSupportRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_EMILIO, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterSupportRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterLeftSupportRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterLeftSupportRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 52, 1, 46
	waitstate
	releaseall
	end

Zone18B_EventScript_RightSupportRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_MELINDA, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterSupportRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterRightSupportRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterRightSupportRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 54, 7, 46
	waitstate
	releaseall
	end

Zone18B_EventScript_LeftStatsRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_LOUIS, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterStatsRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterLeftStatsRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterLeftStatsRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 60, 1, 33
	waitstate
	releaseall
	end

Zone18B_EventScript_RightStatsRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_DESIREE, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterStatsRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterRightStatsRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterRightStatsRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 63, 7, 33
	waitstate
	releaseall
	end

Zone18B_EventScript_LeftAbilityRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_DESIREE, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterAbilityRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterLeftAbilityRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterLeftAbilityRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 64, 1, 20
	waitstate
	releaseall
	end

Zone18B_EventScript_RightAbilityRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_PAM, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterAbilityRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterRightAbilityRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterRightAbilityRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 67, 7, 20
	waitstate
	releaseall
	end

Zone18B_EventScript_LeftLeviathanRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_WILLIE, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterLeviathanRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterLeftLeviathanRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterLeftLeviathanRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 71, 1, 7
	waitstate
	releaseall
	end

Zone18B_EventScript_RightLeviathanRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_DORIS, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_Text_EnterLeviathanRoom, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_EnterRightLeviathanRoom
	compare VAR_RESULT, NO
	goto_if_eq Zone18B_EventScript_DontEnterRoom
	end

Zone18B_EventScript_EnterRightLeviathanRoom:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 72, 7, 7
	waitstate
	releaseall
	end

Zone18B_EventScript_Jay::
	trainerbattle_single TRAINER_JAY, Zone18B_Text_JayIntro, Zone18B_Text_JayDefeat, Zone18B_EventScript_SlideOpenCoolRoomDoors
	msgbox Zone18B_Text_JayPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18B_Text_JayIntro:
	.string "Welcome to the Cool Room.\n"
	.string "Speaking of cool, have you\l"
	.string "ever read the Great Gatsby?$"

Zone18B_Text_JayDefeat:
	.string "I'm not Gatsby!$"

Zone18B_Text_JayPostBattle:
	.string "I just like the book because\n"
	.string "of the social commentary.$"

Zone18B_EventScript_Blanche::
	trainerbattle_single TRAINER_BLANCHE, Zone18B_Text_BlancheIntro, Zone18B_Text_BlancheDefeat, Zone18B_EventScript_SlideOpenCuteRoomDoors
	msgbox Zone18B_Text_BlanchePostBattle, MSGBOX_AUTOCLOSE
	end

Zone18B_Text_BlancheIntro:
	.string "Cutie walks into the Cute\n"
	.string "Room. Prepare to battle!$"

Zone18B_Text_BlancheDefeat:
	.string "Awww.$"

Zone18B_Text_BlanchePostBattle:
	.string "I wish I had a Clefairy.$"

Zone18B_EventScript_Terrence::
	trainerbattle_single TRAINER_TERRENCE, Zone18B_Text_TerrenceIntro, Zone18B_Text_TerrenceDefeat, Zone18B_EventScript_SlideOpenStallRoomDoors
	msgbox Zone18B_Text_TerrencePostBattle, MSGBOX_AUTOCLOSE
	end

Zone18B_Text_TerrenceIntro:
	.string "I like to take things slow,\n"
	.string "in battle and in life!$"

Zone18B_Text_TerrenceDefeat:
	.string "I guess stalling you out did\n"
	.string "no good...$"

Zone18B_Text_TerrencePostBattle:
	.string "Sometimes my wife gets annoyed\n"
	.string "that everything I do is so slow.$"

Zone18B_EventScript_Marty::
	trainerbattle_single TRAINER_MARTY, Zone18B_Text_MartyIntro, Zone18B_Text_MartyDefeat, Zone18B_EventScript_SlideOpenBalanceRoomDoors
	msgbox Zone18B_Text_MartyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18B_Text_MartyIntro:
	.string "I've collected a balanced team\n"
	.string "from across the globe to defeat\l"
	.string "you in battle!$"

Zone18B_Text_MartyDefeat:
	.string "Argh! You tipped the scales on me!$"

Zone18B_Text_MartyPostBattle:
	.string "Maybe I need a more straightforward\n"
	.string "strategy...$"

Zone18B_EventScript_Kari::
	trainerbattle_single TRAINER_KARI, Zone18B_Text_KariIntro, Zone18B_Text_KariDefeat, Zone18B_EventScript_SlideOpenOffenseRoomDoors
	msgbox Zone18B_Text_KariPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18B_Text_KariIntro:
	.string "ALL OUT OFFENSE! ATTACK!$"

Zone18B_Text_KariDefeat:
	.string "DEFEATED! CRY!$"

Zone18B_Text_KariPostBattle:
	.string "HUSBAND WILL BE DISAPPOINTED!$"

Zone18B_EventScript_Abraham::
	trainerbattle_single TRAINER_ABRAHAM, Zone18B_Text_AbrahamIntro, Zone18B_Text_AbrahamDefeat, Zone18B_EventScript_SlideOpenSwitchRoomDoors
	msgbox Zone18B_Text_AbrahamPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18B_Text_AbrahamIntro:
	.string "Battle is all about weaving\n"
	.string "in and out. It's a metaphor\l"
	.string "for life!$"

Zone18B_Text_AbrahamDefeat:
	.string "Nice moves, dude.$"

Zone18B_Text_AbrahamPostBattle:
	.string "Even though I lost, remember\n"
	.string "that moves like U-Turn are\l"
	.string "incredibly powerful.$"

Zone18B_EventScript_Rex::
	trainerbattle_single TRAINER_REX, Zone18B_Text_RexIntro, Zone18B_Text_RexDefeat, Zone18B_EventScript_SlideOpenHazardRoomDoors
	msgbox Zone18B_Text_RexPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18B_Text_RexIntro:
	.string "Sneak attack! Hazardous terrain!$"

Zone18B_Text_RexDefeat:
	.string "I didn't have the element of surprise!$"

Zone18B_Text_RexPostBattle:
	.string "I usually stack Spikes and\n"
	.string "hope for the best.$"

Zone18B_EventScript_Emilio::
	trainerbattle_single TRAINER_EMILIO, Zone18B_Text_EmilioIntro, Zone18B_Text_EmilioDefeat, Zone18B_EventScript_SlideOpenSetupRoomDoors
	msgbox Zone18B_Text_EmilioPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18B_Text_EmilioIntro:
	.string "Setup and sweep. Easy peazy.$"

Zone18B_Text_EmilioDefeat:
	.string "Hmm. I guess that didn't work.$"

Zone18B_Text_EmilioPostBattle:
	.string "My Pokémon just need to train more.$"

Zone18B_EventScript_Melinda::
	trainerbattle_single TRAINER_MELINDA, Zone18B_Text_MelindaIntro, Zone18B_Text_MelindaDefeat, Zone18B_EventScript_SlideOpenHailRoomDoors
	msgbox Zone18B_Text_MelindaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18B_Text_MelindaIntro:
	.string "Hail is the best weather!$"

Zone18B_Text_MelindaDefeat:
	.string "Well, not defensively...$"

Zone18B_Text_MelindaPostBattle:
	.string "My Pokémon just need to learn Blizzard.$"

Zone18B_EventScript_Louis::
	trainerbattle_single TRAINER_LOUIS, Zone18B_Text_LouisIntro, Zone18B_Text_LouisDefeat, Zone18B_EventScript_SlideOpenBuffRoomDoors
	msgbox Zone18B_Text_LouisPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18B_Text_LouisIntro:
	.string "Double Battle! Buff the Absol!$"

Zone18B_Text_LouisDefeat:
	.string "Absol wasn't buff enough!$"

Zone18B_Text_LouisPostBattle:
	.string "Stonjourner, you did great.\n"
	.string "Absol, we gotta work on the\l"
	.string "execution.$"

Zone18B_EventScript_Desiree::
	trainerbattle_single TRAINER_DESIREE, Zone18B_Text_DesireeIntro, Zone18B_Text_DesireeDefeat, Zone18B_EventScript_SlideOpenSpeedRoomDoors
	msgbox Zone18B_Text_DesireePostBattle, MSGBOX_AUTOCLOSE
	end

Zone18B_Text_DesireeIntro:
	.string "Slow you down then spread the pain!$"

Zone18B_Text_DesireeDefeat:
	.string "The only one in pain is me...$"

Zone18B_Text_DesireePostBattle:
	.string "Discharge plus Earthquake is\n"
	.string "a nice combo.$"

Zone18B_EventScript_Pam::
	trainerbattle_single TRAINER_PAM, Zone18B_Text_PamIntro, Zone18B_Text_PamDefeat, Zone18B_EventScript_SlideOpenSupportRoomDoors
	msgbox Zone18B_Text_PamPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18B_Text_PamIntro:
	.string "My Pokémon, lend me a Helping Hand!$"

Zone18B_Text_PamDefeat:
	.string "Drats.$"

Zone18B_Text_PamPostBattle:
	.string "I think I just need more Pokémon.$"

Zone18B_EventScript_Willie::
	trainerbattle_single TRAINER_WILLIE, Zone18B_Text_WillieIntro, Zone18B_Text_WillieDefeat, Zone18B_EventScript_SlideOpenStatsRoomDoors
	msgbox Zone18B_Text_WilliePostBattle, MSGBOX_AUTOCLOSE
	end

Zone18B_Text_WillieIntro:
	.string "My Pokémon have the best stats!$"

Zone18B_Text_WillieDefeat:
	.string "Darn! Stats can't carry the team...$"

Zone18B_Text_WilliePostBattle:
	.string "Ahead you'll find the Leviathan's room.$"

Zone18B_EventScript_Doris::
	trainerbattle_single TRAINER_DORIS, Zone18B_Text_DorisIntro, Zone18B_Text_DorisDefeat, Zone18B_EventScript_SlideOpenAbilityRoomDoors
	msgbox Zone18B_Text_DorisPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18B_Text_DorisIntro:
	.string "My Pokémon have the best abilities!$"

Zone18B_Text_DorisDefeat:
	.string "I guess abilities won't always\n"
	.string "save you...$"

Zone18B_Text_DorisPostBattle:
	.string "Next stop, Leviathan's Room.$"

Zone18B_EventScript_SlideOpenCoolRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenCoolRoomDoors
	special DrawWholeMapView
	release
	end

Zone18B_EventScript_SlideOpenCuteRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenCuteRoomDoors
	special DrawWholeMapView
	release
	end

Zone18B_EventScript_SlideOpenStallRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenStallRoomDoors
	special DrawWholeMapView
	release
	end

Zone18B_EventScript_SlideOpenBalanceRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenBalanceRoomDoors
	special DrawWholeMapView
	release
	end

Zone18B_EventScript_SlideOpenOffenseRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenOffenseRoomDoors
	special DrawWholeMapView
	release
	end

Zone18B_EventScript_SlideOpenSwitchRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenSwitchRoomDoors
	special DrawWholeMapView
	release
	end

Zone18B_EventScript_SlideOpenHazardRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenHazardRoomDoors
	special DrawWholeMapView
	release
	end

Zone18B_EventScript_SlideOpenSetupRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenSetupRoomDoors
	special DrawWholeMapView
	release
	end

Zone18B_EventScript_SlideOpenHailRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenHailRoomDoors
	special DrawWholeMapView
	release
	end

Zone18B_EventScript_SlideOpenBuffRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenBuffRoomDoors
	special DrawWholeMapView
	release
	end

Zone18B_EventScript_SlideOpenSpeedRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenSpeedRoomDoors
	special DrawWholeMapView
	release
	end

Zone18B_EventScript_SlideOpenSupportRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenSupportRoomDoors
	special DrawWholeMapView
	release
	end

Zone18B_EventScript_SlideOpenStatsRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenStatsRoomDoors
	special DrawWholeMapView
	release
	end

Zone18B_EventScript_SlideOpenAbilityRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenAbilityRoomDoors
	special DrawWholeMapView
	release
	end

@ VAR_0x8004 below is the room number
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
Zone18B_EventScript_OpenEntranceDoors::
	setvar VAR_0x8004, 1
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetEntranceRoomDoorMetatiles
	return

Zone18B_EventScript_OpenCoolRoomDoors::
	setvar VAR_0x8004, 2
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetCoolRoomDoorMetatiles
	return

Zone18B_EventScript_OpenCuteRoomDoors::
	setvar VAR_0x8004, 3
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetCuteRoomDoorMetatiles
	return

Zone18B_EventScript_OpenStallRoomDoors::
	setvar VAR_0x8004, 4
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetStallRoomDoorMetatiles
	return

Zone18B_EventScript_OpenBalanceRoomDoors::
	setvar VAR_0x8004, 5
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetBalanceRoomDoorMetatiles
	return

Zone18B_EventScript_OpenOffenseRoomDoors::
	setvar VAR_0x8004, 6
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetOffenseRoomDoorMetatiles
	return

Zone18B_EventScript_OpenSwitchRoomDoors::
	setvar VAR_0x8004, 7
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetSwitchRoomDoorMetatiles
	return

Zone18B_EventScript_OpenHazardRoomDoors::
	setvar VAR_0x8004, 8
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetHazardRoomDoorMetatiles
	return

Zone18B_EventScript_OpenSetupRoomDoors::
	setvar VAR_0x8004, 9
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetSetupRoomDoorMetatiles
	return

Zone18B_EventScript_OpenHailRoomDoors::
	setvar VAR_0x8004, 10
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetHailRoomDoorMetatiles
	return

Zone18B_EventScript_OpenBuffRoomDoors::
	setvar VAR_0x8004, 11
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetBuffRoomDoorMetatiles
	return

Zone18B_EventScript_OpenSpeedRoomDoors::
	setvar VAR_0x8004, 12
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetSpeedRoomDoorMetatiles
	return

Zone18B_EventScript_OpenSupportRoomDoors::
	setvar VAR_0x8004, 13
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetSupportRoomDoorMetatiles
	return

Zone18B_EventScript_OpenStatsRoomDoors::
	setvar VAR_0x8004, 14
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetStatsRoomDoorMetatiles
	return

Zone18B_EventScript_OpenAbilityRoomDoors::
	setvar VAR_0x8004, 15
	compare VAR_0x8005, 0
	call_if_eq Zone18B_EventScript_SlideOpenRoomDoors
	compare VAR_0x8005, 1
	call_if_eq Zone18B_EventScript_UnlockRoomDoors
	call Zone18B_EventScript_SetAbilityRoomDoorMetatiles
	return

Zone18B_EventScript_SetEntranceRoomDoorMetatiles::
	setmetatile 6, 189, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 189, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 176, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 176, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return

Zone18B_EventScript_SetCoolRoomDoorMetatiles::
	setmetatile 6, 163, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 163, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 150, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 150, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return

Zone18B_EventScript_SetCuteRoomDoorMetatiles::
	setmetatile 6, 150, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 150, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 137, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 137, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return

Zone18B_EventScript_SetStallRoomDoorMetatiles::
	setmetatile 6, 124, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 124, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 111, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 111, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return

Zone18B_EventScript_SetBalanceRoomDoorMetatiles::
	setmetatile 6, 111, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 111, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return

Zone18B_EventScript_SetOffenseRoomDoorMetatiles::
	setmetatile 6, 98, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 98, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 85, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 85, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return

Zone18B_EventScript_SetSwitchRoomDoorMetatiles::
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return

Zone18B_EventScript_SetHazardRoomDoorMetatiles::
	setmetatile 6, 72, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 72, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return

Zone18B_EventScript_SetSetupRoomDoorMetatiles::
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 46, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 46, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return

Zone18B_EventScript_SetHailRoomDoorMetatiles::
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return

Zone18B_EventScript_SetBuffRoomDoorMetatiles::
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return

Zone18B_EventScript_SetSpeedRoomDoorMetatiles::
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return

Zone18B_EventScript_SetSupportRoomDoorMetatiles::
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return

Zone18B_EventScript_SetStatsRoomDoorMetatiles::
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return

Zone18B_EventScript_SetAbilityRoomDoorMetatiles::
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SlideOpenRoomDoors::
	special PetalburgGymSlideOpenRoomDoors
	waitstate
	return

Zone18B_EventScript_UnlockRoomDoors::
	special PetalburgGymUnlockRoomDoors
	return

Zone18B_EventScript_EntranceMan::
	lock
	faceplayer
	msgbox Zone18B_Text_EntranceMan, MSGBOX_AUTOCLOSE
	release
	end

Zone18B_Text_EntranceMan:
	.string "Welcome to the Trainer's Dojo!\p"
	.string "Uh... what else is in this script...\p"
	.string "Oh! Each room has a particular style.\n"
	.string "You can pick and choose which room to\l"
	.string "challenge.\p"
	.string "Good luck!$"

Zone18B_EventScript_Statue::
	msgbox Zone18B_Text_Statue, MSGBOX_SIGN
	end

Zone18B_Text_Statue:
	.string "Trainer's Dojo\n"
	.string "Established 2021$"

Zone18B_Text_DoorAppearsLocked:
	.string "This door appears to be locked\n"
	.string "right now…$"

Zone18B_Text_EnterCoolRoom:
	.string "“Cool Room,” the sign says.\p"
	.string "Do you want to go through?$"

Zone18B_Text_EnterCuteRoom:
	.string "“Cute Room,” the sign says.\p"
	.string "Do you want to go through?$"

Zone18B_Text_EnterStallRoom:
	.string "“Stall Room,” the sign says.\p"
	.string "Do you want to go through?$"

Zone18B_Text_EnterBalanceRoom:
	.string "“Balance Room,” the sign says.\p"
	.string "Do you want to go through?$"

Zone18B_Text_EnterOffenseRoom:
	.string "“Offense Room,” the sign says.\p"
	.string "Do you want to go through?$"

Zone18B_Text_EnterSwitchRoom:
	.string "“Switch Room,” the sign says.\p"
	.string "Do you want to go through?$"

Zone18B_Text_EnterHazardRoom:
	.string "“Hazard Room,” the sign says.\p"
	.string "Do you want to go through?$"

Zone18B_Text_EnterSetupRoom:
	.string "“Setup Room,” the sign says.\p"
	.string "Do you want to go through?$"

Zone18B_Text_EnterHailRoom:
	.string "“Hail Room,” the sign says.\p"
	.string "Do you want to go through?$"

Zone18B_Text_EnterBuffRoom:
	.string "“Buff Room,” the sign says.\p"
	.string "Do you want to go through?$"

Zone18B_Text_EnterSpeedRoom:
	.string "“Speed Room,” the sign says.\p"
	.string "Do you want to go through?$"

Zone18B_Text_EnterSupportRoom:
	.string "“Support Room,” the sign says.\p"
	.string "Do you want to go through?$"

Zone18B_Text_EnterStatsRoom:
	.string "“Stats Room,” the sign says.\p"
	.string "Do you want to go through?$"

Zone18B_Text_EnterAbilityRoom:
	.string "“Ability Room,” the sign says.\p"
	.string "Do you want to go through?$"

Zone18B_Text_EnterLeviathanRoom:
	.string "“Leviathan's Room,”\p"
	.string "“See for yourself what Pokémon await\n"
	.string "you!” the sign says.\p"
	.string "Do you want to go through?$"
