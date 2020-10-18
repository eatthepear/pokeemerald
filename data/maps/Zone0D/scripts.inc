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
	call_if_set FLAG_BEATLEVIATHAN5, Zone0D_EventScript_MoveScientist1
	return

Zone0D_EventScript_MoveScientist1:
	setobjectxyperm 1, 11, 23
	return

Zone0D_EventScript_Intro:
	lockall
	applymovement 1, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	msgbox Zone0D_Text_Intro1, MSGBOX_AUTOCLOSE
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
	setvar VAR_GENERIC, 0
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

Zone0D_EventScript_LeftDeny::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	goto Zone0D_EventScript_DenyNextWarps
	end

Zone0D_EventScript_RightDeny::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	goto Zone0D_EventScript_DenyNextWarps
	end

Zone0D_EventScript_MiddleDeny::
	lockall
	goto Zone0D_EventScript_DenyNextWarps
	end

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

Zone0D_EventScript_WarpBack::
	lockall
	switch VAR_ZONE
	case 11, Zone0D_EventScript_WarpSanctuary10
	end

Zone0D_EventScript_WarpSanctuary10:
	warpteleport MAP_ZONE10SANCTUARY, 255, 7, 7
	end

EventScript_WarpZone0::
	lockall
	warpteleport MAP_ZONE0D, 255, 2, 25
	end

Zone0D_EventScript_WarpZONE1::
	lockall
	warpteleport MAP_ZONE1A, 255, 16, 28
	end

Zone0D_EventScript_WarpZONE2::
	lockall
	warpteleport MAP_ZONE2A, 255, 4, 3
	end

Zone0D_EventScript_WarpZONE3::
	lockall
	warpteleport MAP_ZONE3A, 255, 38, 25
	end

Zone0D_EventScript_WarpZONE4::
	lockall
	warpteleport MAP_ZONE4A, 255, 4, 3
	end

Zone0D_EventScript_WarpZONE5::
	lockall
	warpteleport MAP_ZONE5A, 255, 41, 33
	end

Zone0D_EventScript_WarpZONE6::
	lockall
	warpteleport MAP_ZONE6A, 255, 21, 25
	end

Zone0D_EventScript_WarpZONE7::
	lockall
	warpteleport MAP_ZONE7A, 255, 5, 34
	end

Zone0D_EventScript_WarpZONE8::
	lockall
	warpteleport MAP_ZONE8A, 255, 33, 9
	end

Zone0D_EventScript_WarpZONE9::
	lockall
	warpteleport MAP_ZONE9A, 255, 23, 13
	end

Zone0D_EventScript_WarpZONE10::
	lockall
	warpteleport MAP_ZONE10A, 255, 42, 51
	end
