Zone0D_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone0D_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, Zone0D_OnTransition
	.byte 0

Zone0D_OnFrame:
	map_script_2 VAR_ZONE0_WARPS, 1, Zone0D_EventScript_Intro
	.2byte 0

Zone0D_OnTransition:
	call Zone0D_EventScript_TryMoveScientist
	end

Zone0D_EventScript_TryMoveScientist::
	compare VAR_ZONE0_WARPS, 3
	call_if_eq Zone0D_EventScript_MoveScientist1
	return

Zone0D_EventScript_MoveScientist1:
	setobjectxyperm 1, 11, 23
	return

Zone0D_EventScript_Intro:
	lockall
	applymovement 1, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	msgbox Zone0D_Text_Intro1, MSGBOX_AUTOCLOSE
	checkitem ITEM_RUBY, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Zone0D_EventScript_NoWarpstone
	applymovement 1, Zone0D_Movement_JumpUpDown
	waitmovement 0
	msgbox Zone0D_Text_Intro2, MSGBOX_AUTOCLOSE
	removeitem ITEM_RUBY
	msgbox Zone0D_Text_HandedOverWarpstone, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Zone0D_Movement_Warpstone1
	waitmovement 0
	msgbox Zone0D_Text_Intro3, MSGBOX_AUTOCLOSE
	applymovement 1, Zone0D_Movement_PostIntro
	waitmovement 0
	setvar VAR_ZONE0_WARPS, 2
	setvar VAR_WARP_ZONES_1_TO_10, 1
	releaseall
	end

Zone0D_Text_Intro1:
	.string "Who are you?\n"
	.string "{PLAYER}?\p"
	.string "...\n"
	.string "You don't happen to have a\l"
	.string "Warpstone, do you?$"
	
Zone0D_Movement_JumpUpDown:
	jump_in_place_down
	jump_in_place_down
	step_end

Zone0D_Text_Intro2:
	.string "You do?\n"
	.string "I'm jumping up and down with joy!\p"
	.string "This is wonderful! I can use this\n"
	.string "to finally get the TPI, or\l"
	.string "Teleport Institute, functional!$"

Zone0D_Text_HandedOverWarpstone:
	.string "{PLAYER} handed over the Warpstone.$"

Zone0D_Movement_Warpstone1:
	walk_left
	walk_left
	walk_down
	walk_left
	face_up
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	jump_in_place_up
	jump_in_place_up
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_right
	walk_up
	walk_right
	walk_right
	face_down
	step_end

Zone0D_Text_Intro3:
	.string "Huzzah! Now the warps to Zones 1-10\n"
	.string "are fully functional.\p"
	.string "There are more warps I couldn't get\n"
	.string "functional though, I'll need more\l"
	.string "Warpstones for those.\p"
	.string "The Zone 1 Warp is immediately to\n"
	.string "our right, while the furthest down\l"
	.string "to the right is Zone 10.\p"
	.string "If you need to get back to where you\n"
	.string "came from, you can use the warp\l"
	.string "immediately to our left.$"

Zone0D_Movement_PostIntro:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end

Zone0D_EventScript_NoWarpstone:
	msgbox Zone0D_Text_NoWarpstoneGetOut, MSGBOX_AUTOCLOSE
	goto Zone0D_EventScript_WarpBack
	end

Zone0D_Text_NoWarpstoneGetOut:
	.string "You don't have one???\p"
	.string "Then get out!$"

Zone0D_EventScript_LeftCheck::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	goto Zone0D_EventScript_Scientist
	end

Zone0D_EventScript_RightCheck::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	goto Zone0D_EventScript_Scientist
	end

Zone0D_EventScript_Scientist::
	lockall
	compare VAR_ZONE0_WARPS, 2
	goto_if_eq Zone0D_EventScript_CheckWarpstone2
	compare VAR_ZONE0_WARPS, 3
	goto_if_eq Zone0D_EventScript_CheckWarpstone3
	releaseall
	end

Zone0D_EventScript_MiddleCheckWarpstone2:
	goto Zone0D_EventScript_CheckWarpstone2
	end

Zone0D_EventScript_CheckWarpstone2::
	checkitem ITEM_SAPPHIRE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Zone0D_EventScript_DenyNextWarps
	removeitem ITEM_SAPPHIRE
	msgbox Zone0D_Text_AnotherWarpstone, MSGBOX_AUTOCLOSE
	applymovement 1, Zone0D_Movement_WarpstoneGeneral
	waitmovement 0
	msgbox Zone0D_Text_Warps1120, MSGBOX_AUTOCLOSE
	applymovement 1, Zone0D_Movement_WalkUp
	waitmovement 0
	setvar VAR_ZONE0_WARPS, 3
	releaseall
	end

Zone0D_Text_AnotherWarpstone:
	.string "Oh! You have another Warpstone?\p"
	.string "I can upgrade the warps again!$"

Zone0D_Movement_WarpstoneGeneral:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	jump_in_place_up
	jump_in_place_up
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

Zone0D_Text_Warps1120:
	.string "Huzzah! Now the warps to Zones 11-20\n"
	.string "are fully functional.\p"
	.string "There are more warps I couldn't get\n"
	.string "functional though, I'll need more\l"
	.string "Warpstones for those.$"

Zone0D_Movement_WalkUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end

Zone0D_EventScript_DenyNextWarps:
	msgbox Zone0D_Text_NoWarpstone, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	releaseall
	end

Zone0D_Text_NoWarpstone:
	.string "The warps in the hallway aren't\n"
	.string "functional yet and quite dangerous.\p"
	.string "If you've got a Warpstone, maybe I\n"
	.string "could make some progress.$"

Zone0D_EventScript_CheckWarpstone3::
	goto Zone0D_EventScript_DenyNextWarps
	end

Zone0D_EventScript_WarpBack::
	lockall
	clearflag FLAG_IN_ZONE_NOT_SANCTUARY
	switch VAR_ZONE
	case 1, Zone0D_EventScript_WarpSanctuary0
	case 2, Zone0D_EventScript_WarpSanctuary1
	case 3, Zone0D_EventScript_WarpSanctuary2
	case 4, Zone0D_EventScript_WarpSanctuary3
	case 5, Zone0D_EventScript_WarpSanctuary4
	case 6, Zone0D_EventScript_WarpSanctuary5
	case 7, Zone0D_EventScript_WarpSanctuary6
	case 9, Zone0D_EventScript_WarpSanctuary8
	case 10, Zone0D_EventScript_WarpSanctuary9
	case 11, Zone0D_EventScript_WarpSanctuary10
	case 12, Zone0D_EventScript_WarpSanctuary11
	case 13, Zone0D_EventScript_WarpSanctuary12
	case 15, Zone0D_EventScript_WarpSanctuary14
	case 16, Zone0D_EventScript_WarpSanctuary15
	case 17, Zone0D_EventScript_WarpSanctuary16
	case 18, Zone0D_EventScript_WarpSanctuary17
	case 20, Zone0D_EventScript_WarpSanctuary19
	case 21, Zone0D_EventScript_WarpSanctuary20
	end

Zone0D_EventScript_WarpSanctuary0:
	warpteleport MAP_ZONE0SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary1:
	warpteleport MAP_ZONE1SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary2:
	warpteleport MAP_ZONE2SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary3:
	warpteleport MAP_ZONE3SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary4:
	warpteleport MAP_ZONE4SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary5:
	warpteleport MAP_ZONE5SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary6:
	warpteleport MAP_ZONE6SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary8:
	warpteleport MAP_ZONE8SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary9:
	warpteleport MAP_ZONE9SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary10:
	warpteleport MAP_ZONE10SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary11:
	warpteleport MAP_ZONE11SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary12:
	warpteleport MAP_ZONE12SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary14:
	warpteleport MAP_ZONE14SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary15:
	warpteleport MAP_ZONE15SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary16:
	warpteleport MAP_ZONE16SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary17:
	warpteleport MAP_ZONE17SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary19:
	warpteleport MAP_ZONE19SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_WarpSanctuary20:
	warpteleport MAP_ZONE20SANCTUARY, 255, 7, 7
	end

Zone0D_EventScript_VerifyDestination:
	msgbox Zone0D_Text_AreYouSure, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone0D_EventScript_DecidedNot
	return

Zone0D_EventScript_DecidedNot:
	msgbox Zone0D_Text_DecidedNot, MSGBOX_AUTOCLOSE
	releaseall
	end

Zone0D_Text_AreYouSure:
	.string "Are you sure you want to go to\n"
	.string "{COLOR RED}Zone {STR_VAR_1}{COLOR DARK_GRAY}?$"

Zone0D_Text_DecidedNot:
	.string "Decided not to warp.$"

Zone0D_EventScript_WarpZONE1::
	lockall
	buffernumberstring 0, 1
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE1A, 255, 16, 28
	end

Zone0D_EventScript_WarpZONE2::
	lockall
	buffernumberstring 0, 2
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE2A, 255, 4, 3
	end

Zone0D_EventScript_WarpZONE3::
	lockall
	buffernumberstring 0, 3
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE3A, 255, 38, 25
	end

Zone0D_EventScript_WarpZONE4::
	lockall
	buffernumberstring 0, 4
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE4A, 255, 4, 3
	end

Zone0D_EventScript_WarpZONE5::
	lockall
	buffernumberstring 0, 5
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE5A, 255, 43, 31
	end

Zone0D_EventScript_WarpZONE6::
	lockall
	buffernumberstring 0, 6
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE6A, 255, 21, 25
	end

Zone0D_EventScript_WarpZONE7::
	lockall
	buffernumberstring 0, 7
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE7A, 255, 5, 34
	end

Zone0D_EventScript_WarpZONE8::
	lockall
	buffernumberstring 0, 8
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE8A, 255, 33, 9
	end

Zone0D_EventScript_WarpZONE9::
	lockall
	buffernumberstring 0, 9
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE9A, 255, 23, 13
	end

Zone0D_EventScript_WarpZONE10::
	lockall
	buffernumberstring 0, 10
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE10A, 255, 42, 51
	end

Zone0D_EventScript_WarpZONE11::
	lockall
	buffernumberstring 0, 11
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE11A, 255, 48, 2
	end

Zone0D_EventScript_WarpZONE12::
	lockall
	buffernumberstring 0, 12
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE12A, 255, 10, 18
	end

Zone0D_EventScript_WarpZONE13::
	lockall
	buffernumberstring 0, 13
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE13A, 255, 18, 10
	end

Zone0D_EventScript_WarpZONE14::
	lockall
	buffernumberstring 0, 14
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE14A, 255, 19, 3
	end

Zone0D_EventScript_WarpZONE15::
	lockall
	buffernumberstring 0, 15
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE15A, 255, 4, 4
	end

Zone0D_EventScript_WarpZONE16::
	lockall
	buffernumberstring 0, 16
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE16A, 255, 6, 4
	end

Zone0D_EventScript_WarpZONE17::
	lockall
	buffernumberstring 0, 17
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE17A, 255, 13, 42
	end

Zone0D_EventScript_WarpZONE18::
	lockall
	buffernumberstring 0, 18
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE18A, 255, 28, 19
	end

Zone0D_EventScript_WarpZONE19::
	lockall
	buffernumberstring 0, 19
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE19D, 255, 9, 3
	end

Zone0D_EventScript_WarpZONE20::
	lockall
	buffernumberstring 0, 20
	call Zone0D_EventScript_VerifyDestination
	warpteleport MAP_ZONE20A, 255, 7, 8
	end
