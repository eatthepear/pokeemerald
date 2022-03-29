Zone0D_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone0D_OnFrame
	.byte 0

Zone0D_OnFrame:
	map_script_2 VAR_ZONE0_STATE, 1, Zone0D_EventScript_Intro
	map_script_2 VAR_ZONEB1_STATE, 1, Zone0D_EventScript_B1WarpIntro
	.2byte 0

Zone0D_EventScript_Intro:
	lockall
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox Zone0D_Text_Intro1, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	msgbox Zone0D_Text_Intro2, MSGBOX_AUTOCLOSE
	applymovement 1, Zone0D_Movement_PostIntro
	waitmovement 0
	setvar VAR_ZONE0_STATE, 2
	releaseall
	end

Zone0D_Text_Intro1:
	.string "A test subject! Perfect!$"

Zone0D_Text_Intro2:
	.string "Welcome to the Teleport Institute,\n"
	.string "or TPI for short.\p"
	.string "There are warps that will bring you\n"
	.string "to any area you've already visited.\p"
	.string "I'm sure you'll get the hang of it.\p"
	.string "If you need to get back to where you\n"
	.string "came from, you can use the warp\l"
	.string "immediately to our left.$"

Zone0D_Movement_PostIntro:
	walk_up
	walk_up
	face_down
	step_end

Zone0D_EventScript_Scientist::
	lock
	faceplayer
	msgbox Zone0D_Text_Explain, MSGBOX_AUTOCLOSE
	release
	end

Zone0D_Text_Explain:
	.string "The warps are hardwired to only\n"
	.string "teleport people to places they\l"
	.string "have been before.\p"
	.string "If you need to get back to where you\n"
	.string "came from, you can use the warp\l"
	.string "immediately to our left.$"

Zone0D_EventScript_B1WarpIntro:
	lockall
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox Zone0D_Text_ExplainSpecialZones1, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	msgbox Zone0D_Text_ExplainSpecialZones2, MSGBOX_AUTOCLOSE
	applymovement 1, Zone0D_Movement_PostIntro
	waitmovement 0
	setvar VAR_ZONEB1_STATE, 2
	releaseall
	end

Zone0D_Text_ExplainSpecialZones1:
	.string "Ah, my warp tester!$"

Zone0D_Text_ExplainSpecialZones2:
	.string "You may have noticed there are\n"
	.string "special warps on the left side that\l"
	.string "are disabled.\p"
	.string "I've just finished installing the\n"
	.string "warp to {COLOR RED}Zone B1{COLOR DARK_GRAY}.\p"
	.string "If you could, please test it out\n"
	.string "when you have the chance!\p"
	.string "By my calculations, there's only a\n"
	.string "17% chance of instant death!$"

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
	case 22, Zone0D_EventScript_WarpSanctuary21
	case 23, Zone0D_EventScript_WarpSanctuary22
	case 24, Zone0D_EventScript_WarpSanctuary23
	case 26, Zone0D_EventScript_WarpSanctuary25
	end

Zone0D_EventScript_WarpSanctuary0:
	warpteleport MAP_ZONE0SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary1:
	warpteleport MAP_ZONE1SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary2:
	warpteleport MAP_ZONE2SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary3:
	warpteleport MAP_ZONE3SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary4:
	warpteleport MAP_ZONE4SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary5:
	warpteleport MAP_ZONE5SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary6:
	warpteleport MAP_ZONE6SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary8:
	warpteleport MAP_ZONE8SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary9:
	warpteleport MAP_ZONE9SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary10:
	warpteleport MAP_ZONE10SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary11:
	warpteleport MAP_ZONE11SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary12:
	warpteleport MAP_ZONE12SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary14:
	warpteleport MAP_ZONE14SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary15:
	warpteleport MAP_ZONE15SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary16:
	warpteleport MAP_ZONE16SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary17:
	warpteleport MAP_ZONE17SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary19:
	warpteleport MAP_ZONE19SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary20:
	warpteleport MAP_ZONE20SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary21:
	warpteleport MAP_ZONE21SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary22:
	warpteleport MAP_ZONE22SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary23:
	warpteleport MAP_ZONE23SANCTUARY, 255, 22, 12
	end

Zone0D_EventScript_WarpSanctuary25:
	warpteleport MAP_ZONE25SANCTUARY, 255, 22, 12
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

Zone0D_EventScript_DenyWarp::
	lockall
	msgbox Zone0D_Text_DoesntWork, MSGBOX_AUTOCLOSE
	releaseall
	end

Zone0D_Text_DoesntWork:
	.string "The warp doesn't seem to work…$"

Zone0D_EventScript_WarpZoneB1::
	lockall
	compare VAR_ZONEB1_STATE, 2
	goto_if_lt Zone0D_EventScript_DenyWarp
	warpteleport MAP_ZONE_B1, 255, 4, 19
	end

Zone0D_EventScript_WarpZONE1::
	lockall
	compare VAR_ZONE, 2
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 1
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE1A, 255, 16, 28
	end

Zone0D_EventScript_WarpZONE2::
	lockall
	compare VAR_ZONE, 3
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 2
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE2A, 255, 4, 3
	end

Zone0D_EventScript_WarpZONE3::
	lockall
	compare VAR_ZONE, 4
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 3
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE3A, 255, 38, 25
	end

Zone0D_EventScript_WarpZONE4::
	lockall
	compare VAR_ZONE, 5
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 4
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE4A, 255, 4, 3
	end

Zone0D_EventScript_WarpZONE5::
	lockall
	compare VAR_ZONE, 6
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 5
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE5A, 255, 43, 31
	end

Zone0D_EventScript_WarpZONE6::
	lockall
	compare VAR_ZONE, 7
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 6
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE6A, 255, 27, 30
	end

Zone0D_EventScript_WarpZONE7::
	lockall
	compare VAR_ZONE, 9
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 7
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE7A, 255, 5, 34
	end

Zone0D_EventScript_WarpZONE8::
	lockall
	compare VAR_ZONE, 9
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 8
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE8A, 255, 33, 9
	end

Zone0D_EventScript_WarpZONE9::
	lockall
	compare VAR_ZONE, 10
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 9
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE9A, 255, 23, 13
	end

Zone0D_EventScript_WarpZONE10::
	lockall
	compare VAR_ZONE, 11
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 10
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE10A, 255, 42, 51
	end

Zone0D_EventScript_WarpZONE11::
	lockall
	compare VAR_ZONE, 12
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 11
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE11A, 255, 48, 2
	end

Zone0D_EventScript_WarpZONE12::
	lockall
	compare VAR_ZONE, 13
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 12
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE12A, 255, 10, 18
	end

Zone0D_EventScript_WarpZONE13::
	lockall
	compare VAR_ZONE, 15
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 13
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE13A, 255, 18, 10
	end

Zone0D_EventScript_WarpZONE14::
	lockall
	compare VAR_ZONE, 15
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 14
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE14A, 255, 19, 3
	end

Zone0D_EventScript_WarpZONE15::
	lockall
	compare VAR_ZONE, 16
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 15
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE15A, 255, 4, 4
	end

Zone0D_EventScript_WarpZONE16::
	lockall
	compare VAR_ZONE, 17
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 16
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE16A, 255, 6, 4
	end

Zone0D_EventScript_WarpZONE17::
	lockall
	compare VAR_ZONE, 18
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 17
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE17A, 255, 11, 39
	end

Zone0D_EventScript_WarpZONE18::
	lockall
	compare VAR_ZONE, 20
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 18
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE18A, 255, 28, 19
	end

Zone0D_EventScript_WarpZONE19::
	lockall
	compare VAR_ZONE, 20
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 19
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE19D, 255, 9, 3
	end

Zone0D_EventScript_WarpZONE20::
	lockall
	compare VAR_ZONE, 21
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 20
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE20A, 255, 7, 8
	end

Zone0D_EventScript_WarpZONE21::
	lockall
	compare VAR_ZONE, 22
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 21
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE21A, 255, 38, 100
	end

Zone0D_EventScript_WarpZONE22::
	lockall
	compare VAR_ZONE, 23
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 22
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE22A, 255, 9, 50
	end

Zone0D_EventScript_WarpZONE23::
	lockall
	compare VAR_ZONE, 24
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 23
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE23A, 255, 9, 1
	end

Zone0D_EventScript_WarpZONE24::
	lockall
	compare VAR_ZONE, 25
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 24
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE24A, 255, 31, 23
	end

Zone0D_EventScript_WarpZONE25::
	lockall
	compare VAR_ZONE, 26
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 25
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE25A, 255, 10, 13
	end

Zone0D_EventScript_WarpZONE26::
	lockall
	compare VAR_ZONE, 27
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 26
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE6A, 255, 21, 25
	end

Zone0D_EventScript_WarpZONE27::
	lockall
	compare VAR_ZONE, 28
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 27
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE7A, 255, 5, 34
	end

Zone0D_EventScript_WarpZONE28::
	lockall
	compare VAR_ZONE, 29
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 28
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE8A, 255, 33, 9
	end

Zone0D_EventScript_WarpZONE29::
	lockall
	compare VAR_ZONE, 30
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 29
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE9A, 255, 23, 13
	end

Zone0D_EventScript_WarpZONE30::
	lockall
	compare VAR_ZONE, 31
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 30
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE10A, 255, 42, 51
	end

Zone0D_EventScript_WarpZONE31::
	lockall
	compare VAR_ZONE, 32
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 31
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE11A, 255, 48, 2
	end

Zone0D_EventScript_WarpZONE32::
	lockall
	compare VAR_ZONE, 33
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 32
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE12A, 255, 10, 18
	end

Zone0D_EventScript_WarpZONE33::
	lockall
	compare VAR_ZONE, 34
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 33
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE13A, 255, 18, 10
	end

Zone0D_EventScript_WarpZONE34::
	lockall
	compare VAR_ZONE, 35
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 34
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE14A, 255, 19, 3
	end

Zone0D_EventScript_WarpZONE35::
	lockall
	compare VAR_ZONE, 36
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 35
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE15A, 255, 4, 4
	end

Zone0D_EventScript_WarpZONE36::
	lockall
	compare VAR_ZONE, 37
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 36
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE16A, 255, 6, 4
	end

Zone0D_EventScript_WarpZONE37::
	lockall
	compare VAR_ZONE, 38
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 37
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE17A, 255, 13, 42
	end

Zone0D_EventScript_WarpZONE38::
	lockall
	compare VAR_ZONE, 39
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 38
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE18A, 255, 28, 19
	end

Zone0D_EventScript_WarpZONE39::
	lockall
	compare VAR_ZONE, 40
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 39
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE19D, 255, 9, 3
	end

Zone0D_EventScript_WarpZONE40::
	lockall
	compare VAR_ZONE, 41
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 40
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE20A, 255, 7, 8
	end

Zone0D_EventScript_WarpZONE41::
	lockall
	compare VAR_ZONE, 42
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 41
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE11A, 255, 48, 2
	end

Zone0D_EventScript_WarpZONE42::
	lockall
	compare VAR_ZONE, 43
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 42
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE12A, 255, 10, 18
	end

Zone0D_EventScript_WarpZONE43::
	lockall
	compare VAR_ZONE, 44
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 43
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE13A, 255, 18, 10
	end

Zone0D_EventScript_WarpZONE44::
	lockall
	compare VAR_ZONE, 45
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 44
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE14A, 255, 19, 3
	end

Zone0D_EventScript_WarpZONE45::
	lockall
	compare VAR_ZONE, 46
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 45
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE15A, 255, 4, 4
	end

Zone0D_EventScript_WarpZONE46::
	lockall
	compare VAR_ZONE, 47
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 46
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE16A, 255, 6, 4
	end

Zone0D_EventScript_WarpZONE47::
	lockall
	compare VAR_ZONE, 48
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 47
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE17A, 255, 13, 42
	end

Zone0D_EventScript_WarpZONE48::
	lockall
	compare VAR_ZONE, 49
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 48
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE18A, 255, 28, 19
	end

Zone0D_EventScript_WarpZONE49::
	lockall
	compare VAR_ZONE, 50
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 49
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE19D, 255, 9, 3
	end

Zone0D_EventScript_WarpZONE50::
	lockall
	compare VAR_ZONE, 51
	goto_if_lt Zone0D_EventScript_DenyWarp
	buffernumberstring 0, 50
	call Zone0D_EventScript_VerifyDestination
	setflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE20A, 255, 7, 8
	end
