Zone0C_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone0C_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone0C_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE_0_STATE, 2, Zone0C_EventScript_Intro
	.2byte 0


Zone0C_EventScript_Intro::
	lockall
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox Zone0C_EventScript_Intro_Text_0
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	msgbox Zone0C_Text_Intro
	applymovement 1, Zone0C_Movement_PostIntro
	waitmovement 0
	setvar VAR_ZONE_0_STATE, 3
	releaseall
	return


Zone0C_EventScript_Scientist::
	lock
	faceplayer
	msgbox Zone0C_Text_Explain
	release
	return


Zone0C_EventScript_WarpBack::
	lockall
	compare VAR_ZONE_0_STATE, 3
	goto_if_eq Zone0C_EventScript_WarpBack_2
Zone0C_EventScript_WarpBack_1:
	switch VAR_ZONE
	case 1, Zone0C_EventScript_WarpBack_5
	case 2, Zone0C_EventScript_WarpBack_6
	case 3, Zone0C_EventScript_WarpBack_7
	case 4, Zone0C_EventScript_WarpBack_8
	case 5, Zone0C_EventScript_WarpBack_9
	case 6, Zone0C_EventScript_WarpBack_10
	case 7, Zone0C_EventScript_WarpBack_11
	case 9, Zone0C_EventScript_WarpBack_12
	case 10, Zone0C_EventScript_WarpBack_13
	case 11, Zone0C_EventScript_WarpBack_14
	case 12, Zone0C_EventScript_WarpBack_15
	case 13, Zone0C_EventScript_WarpBack_16
	case 15, Zone0C_EventScript_WarpBack_17
	case 16, Zone0C_EventScript_WarpBack_18
	case 17, Zone0C_EventScript_WarpBack_19
	case 18, Zone0C_EventScript_WarpBack_20
	case 20, Zone0C_EventScript_WarpBack_21
	case 21, Zone0C_EventScript_WarpBack_22
	case 22, Zone0C_EventScript_WarpBack_23
	case 23, Zone0C_EventScript_WarpBack_24
	case 24, Zone0C_EventScript_WarpBack_25
	case 26, Zone0C_EventScript_WarpBack_26
	return

Zone0C_EventScript_WarpBack_2:
	setvar VAR_ZONE_0_STATE, 4
	goto Zone0C_EventScript_WarpBack_1

Zone0C_EventScript_WarpBack_5:
	warpteleport MAP_ZONE0SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_6:
	warpteleport MAP_ZONE1SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_7:
	warpteleport MAP_ZONE2SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_8:
	warpteleport MAP_ZONE3SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_9:
	warpteleport MAP_ZONE4SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_10:
	warpteleport MAP_ZONE5SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_11:
	warpteleport MAP_ZONE6SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_12:
	warpteleport MAP_ZONE8SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_13:
	warpteleport MAP_ZONE9SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_14:
	warpteleport MAP_ZONE10SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_15:
	warpteleport MAP_ZONE11SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_16:
	warpteleport MAP_ZONE12SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_17:
	warpteleport MAP_ZONE14SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_18:
	warpteleport MAP_ZONE15SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_19:
	warpteleport MAP_ZONE16SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_20:
	warpteleport MAP_ZONE17SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_21:
	warpteleport MAP_ZONE20SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_22:
	warpteleport MAP_ZONE20SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_23:
	warpteleport MAP_ZONE21SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_24:
	warpteleport MAP_ZONE22SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_25:
	warpteleport MAP_ZONE23SANCTUARY, 255, 22, 12
	waitstate
	return

Zone0C_EventScript_WarpBack_26:
	warpteleport MAP_ZONE25SANCTUARY, 255, 22, 12
	waitstate
	return


Zone0C_EventScript_VerifyDestination::
	msgbox Zone0C_EventScript_VerifyDestination_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone0C_EventScript_VerifyDestination_2
	setflag FLAG_IS_REVISITING_ZONE
	return

Zone0C_EventScript_VerifyDestination_2:
	msgbox Zone0C_EventScript_VerifyDestination_Text_1
	releaseall
	end


Zone0C_EventScript_DenyWarp::
	lockall
	msgbox Zone0C_EventScript_DenyWarp_Text_0
	releaseall
	return


Zone0C_EventScript_WarpZone1::
	lockall
	compare VAR_ZONE, 2
	goto_if_lt Zone0C_EventScript_WarpZone1_2
Zone0C_EventScript_WarpZone1_1:
	buffernumberstring 0, 1
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 1
	warpteleport MAP_ZONE1A, 255, 16, 28
	waitstate
	return

Zone0C_EventScript_WarpZone1_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone1_1


Zone0C_EventScript_WarpZone2::
	lockall
	compare VAR_ZONE, 3
	goto_if_lt Zone0C_EventScript_WarpZone2_2
Zone0C_EventScript_WarpZone2_1:
	buffernumberstring 0, 2
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 2
	warpteleport MAP_ZONE2A, 255, 4, 3
	waitstate
	return

Zone0C_EventScript_WarpZone2_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone2_1


Zone0C_EventScript_WarpZone3::
	lockall
	compare VAR_ZONE, 4
	goto_if_lt Zone0C_EventScript_WarpZone3_2
Zone0C_EventScript_WarpZone3_1:
	buffernumberstring 0, 3
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 3
	warpteleport MAP_ZONE3A, 255, 38, 25
	waitstate
	return

Zone0C_EventScript_WarpZone3_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone3_1


Zone0C_EventScript_WarpZone4::
	lockall
	compare VAR_ZONE, 5
	goto_if_lt Zone0C_EventScript_WarpZone4_2
Zone0C_EventScript_WarpZone4_1:
	buffernumberstring 0, 4
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 4
	warpteleport MAP_ZONE4A, 255, 4, 3
	waitstate
	return

Zone0C_EventScript_WarpZone4_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone4_1


Zone0C_EventScript_WarpZone5::
	lockall
	compare VAR_ZONE, 6
	goto_if_lt Zone0C_EventScript_WarpZone5_2
Zone0C_EventScript_WarpZone5_1:
	buffernumberstring 0, 5
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 5
	warpteleport MAP_ZONE5A, 255, 43, 31
	waitstate
	return

Zone0C_EventScript_WarpZone5_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone5_1


Zone0C_EventScript_WarpZone6::
	lockall
	compare VAR_ZONE, 7
	goto_if_lt Zone0C_EventScript_WarpZone6_2
Zone0C_EventScript_WarpZone6_1:
	buffernumberstring 0, 6
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 6
	warpteleport MAP_ZONE6A, 255, 51, 22
	waitstate
	return

Zone0C_EventScript_WarpZone6_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone6_1


Zone0C_EventScript_WarpZone7::
	lockall
	compare VAR_ZONE, 9
	goto_if_lt Zone0C_EventScript_WarpZone7_2
Zone0C_EventScript_WarpZone7_1:
	buffernumberstring 0, 7
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 7
	warpteleport MAP_ZONE7A, 255, 10, 33
	waitstate
	return

Zone0C_EventScript_WarpZone7_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone7_1


Zone0C_EventScript_WarpZone8::
	lockall
	compare VAR_ZONE, 9
	goto_if_lt Zone0C_EventScript_WarpZone8_2
Zone0C_EventScript_WarpZone8_1:
	buffernumberstring 0, 8
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 8
	warpteleport MAP_ZONE8A, 255, 19, 5
	waitstate
	return

Zone0C_EventScript_WarpZone8_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone8_1


Zone0C_EventScript_WarpZone9::
	lockall
	compare VAR_ZONE, 10
	goto_if_lt Zone0C_EventScript_WarpZone9_2
Zone0C_EventScript_WarpZone9_1:
	buffernumberstring 0, 9
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 9
	warpteleport MAP_ZONE9A, 255, 18, 11
	waitstate
	return

Zone0C_EventScript_WarpZone9_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone9_1


Zone0C_EventScript_WarpZone10::
	lockall
	compare VAR_ZONE, 11
	goto_if_lt Zone0C_EventScript_WarpZone10_2
Zone0C_EventScript_WarpZone10_1:
	buffernumberstring 0, 10
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 10
	warpteleport MAP_ZONE10A, 255, 42, 51
	waitstate
	return

Zone0C_EventScript_WarpZone10_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone10_1


Zone0C_EventScript_WarpZone11::
	lockall
	compare VAR_ZONE, 12
	goto_if_lt Zone0C_EventScript_WarpZone11_2
Zone0C_EventScript_WarpZone11_1:
	buffernumberstring 0, 11
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 11
	warpteleport MAP_ZONE11A, 255, 48, 2
	waitstate
	return

Zone0C_EventScript_WarpZone11_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone11_1


Zone0C_EventScript_WarpZone12::
	lockall
	compare VAR_ZONE, 13
	goto_if_lt Zone0C_EventScript_WarpZone12_2
Zone0C_EventScript_WarpZone12_1:
	buffernumberstring 0, 12
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 12
	warpteleport MAP_ZONE12A, 255, 10, 18
	waitstate
	return

Zone0C_EventScript_WarpZone12_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone12_1


Zone0C_EventScript_WarpZone13::
	lockall
	compare VAR_ZONE, 15
	goto_if_lt Zone0C_EventScript_WarpZone13_2
Zone0C_EventScript_WarpZone13_1:
	buffernumberstring 0, 13
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 13
	warpteleport MAP_ZONE13A, 255, 18, 10
	waitstate
	return

Zone0C_EventScript_WarpZone13_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone13_1


Zone0C_EventScript_WarpZone14::
	lockall
	compare VAR_ZONE, 15
	goto_if_lt Zone0C_EventScript_WarpZone14_2
Zone0C_EventScript_WarpZone14_1:
	buffernumberstring 0, 14
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 14
	warpteleport MAP_ZONE14A, 255, 19, 3
	waitstate
	return

Zone0C_EventScript_WarpZone14_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone14_1


Zone0C_EventScript_WarpZone15::
	lockall
	compare VAR_ZONE, 16
	goto_if_lt Zone0C_EventScript_WarpZone15_2
Zone0C_EventScript_WarpZone15_1:
	buffernumberstring 0, 15
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 15
	warpteleport MAP_ZONE15A, 255, 4, 4
	waitstate
	return

Zone0C_EventScript_WarpZone15_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone15_1


Zone0C_EventScript_WarpZone16::
	lockall
	compare VAR_ZONE, 17
	goto_if_lt Zone0C_EventScript_WarpZone16_2
Zone0C_EventScript_WarpZone16_1:
	buffernumberstring 0, 16
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 16
	warpteleport MAP_ZONE16A, 255, 6, 4
	waitstate
	return

Zone0C_EventScript_WarpZone16_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone16_1


Zone0C_EventScript_WarpZone17::
	lockall
	compare VAR_ZONE, 18
	goto_if_lt Zone0C_EventScript_WarpZone17_2
Zone0C_EventScript_WarpZone17_1:
	buffernumberstring 0, 17
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 17
	warpteleport MAP_ZONE17A, 255, 13, 40
	waitstate
	return

Zone0C_EventScript_WarpZone17_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone17_1


Zone0C_EventScript_WarpZone18::
	lockall
	compare VAR_ZONE, 20
	goto_if_lt Zone0C_EventScript_WarpZone18_2
Zone0C_EventScript_WarpZone18_1:
	buffernumberstring 0, 18
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 18
	warpteleport MAP_ZONE18A, 255, 28, 19
	waitstate
	return

Zone0C_EventScript_WarpZone18_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone18_1


Zone0C_EventScript_WarpZone19::
	lockall
	compare VAR_ZONE, 20
	goto_if_lt Zone0C_EventScript_WarpZone19_2
Zone0C_EventScript_WarpZone19_1:
	buffernumberstring 0, 19
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 19
	warpteleport MAP_ZONE19D, 255, 9, 3
	waitstate
	return

Zone0C_EventScript_WarpZone19_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone19_1


Zone0C_EventScript_WarpZone20::
	lockall
	compare VAR_ZONE, 21
	goto_if_lt Zone0C_EventScript_WarpZone20_2
Zone0C_EventScript_WarpZone20_1:
	buffernumberstring 0, 20
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 20
	warpteleport MAP_ZONE20A, 255, 7, 8
	waitstate
	return

Zone0C_EventScript_WarpZone20_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone20_1


Zone0C_EventScript_WarpZone21::
	lockall
	compare VAR_ZONE, 22
	goto_if_lt Zone0C_EventScript_WarpZone21_2
Zone0C_EventScript_WarpZone21_1:
	buffernumberstring 0, 21
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 21
	warpteleport MAP_ZONE21A, 255, 38, 100
	waitstate
	return

Zone0C_EventScript_WarpZone21_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone21_1


Zone0C_EventScript_WarpZone22::
	lockall
	compare VAR_ZONE, 23
	goto_if_lt Zone0C_EventScript_WarpZone22_2
Zone0C_EventScript_WarpZone22_1:
	buffernumberstring 0, 22
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 22
	warpteleport MAP_ZONE22A, 255, 9, 50
	waitstate
	return

Zone0C_EventScript_WarpZone22_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone22_1


Zone0C_EventScript_WarpZone23::
	lockall
	compare VAR_ZONE, 24
	goto_if_lt Zone0C_EventScript_WarpZone23_2
Zone0C_EventScript_WarpZone23_1:
	buffernumberstring 0, 23
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 23
	warpteleport MAP_ZONE23A, 255, 9, 1
	waitstate
	return

Zone0C_EventScript_WarpZone23_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone23_1


Zone0C_EventScript_WarpZone24::
	lockall
	compare VAR_ZONE, 25
	goto_if_lt Zone0C_EventScript_WarpZone24_2
Zone0C_EventScript_WarpZone24_1:
	buffernumberstring 0, 24
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 24
	warpteleport MAP_ZONE24A, 255, 31, 23
	waitstate
	return

Zone0C_EventScript_WarpZone24_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone24_1


Zone0C_EventScript_WarpZone25::
	lockall
	compare VAR_ZONE, 26
	goto_if_lt Zone0C_EventScript_WarpZone25_2
Zone0C_EventScript_WarpZone25_1:
	buffernumberstring 0, 25
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 25
	warpteleport MAP_ZONE25A, 255, 10, 13
	waitstate
	return

Zone0C_EventScript_WarpZone25_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone25_1


Zone0C_EventScript_WarpZone26::
	lockall
	compare VAR_ZONE, 27
	goto_if_lt Zone0C_EventScript_WarpZone26_2
Zone0C_EventScript_WarpZone26_1:
	buffernumberstring 0, 26
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 26
	warpteleport MAP_ZONE6A, 255, 13, 29
	waitstate
	return

Zone0C_EventScript_WarpZone26_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone26_1


Zone0C_EventScript_WarpZone27::
	lockall
	compare VAR_ZONE, 28
	goto_if_lt Zone0C_EventScript_WarpZone27_2
Zone0C_EventScript_WarpZone27_1:
	buffernumberstring 0, 27
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 27
	warpteleport MAP_ZONE7A, 255, 5, 34
	waitstate
	return

Zone0C_EventScript_WarpZone27_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone27_1


Zone0C_EventScript_WarpZone28::
	lockall
	compare VAR_ZONE, 29
	goto_if_lt Zone0C_EventScript_WarpZone28_2
Zone0C_EventScript_WarpZone28_1:
	buffernumberstring 0, 28
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 28
	warpteleport MAP_ZONE8A, 255, 33, 9
	waitstate
	return

Zone0C_EventScript_WarpZone28_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone28_1


Zone0C_EventScript_WarpZone29::
	lockall
	compare VAR_ZONE, 30
	goto_if_lt Zone0C_EventScript_WarpZone29_2
Zone0C_EventScript_WarpZone29_1:
	buffernumberstring 0, 29
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 29
	warpteleport MAP_ZONE9A, 255, 23, 13
	waitstate
	return

Zone0C_EventScript_WarpZone29_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone29_1


Zone0C_EventScript_WarpZone30::
	lockall
	compare VAR_ZONE, 31
	goto_if_lt Zone0C_EventScript_WarpZone30_2
Zone0C_EventScript_WarpZone30_1:
	buffernumberstring 0, 30
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 30
	warpteleport MAP_ZONE10A, 255, 42, 51
	waitstate
	return

Zone0C_EventScript_WarpZone30_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone30_1


Zone0C_EventScript_WarpZone31::
	lockall
	compare VAR_ZONE, 32
	goto_if_lt Zone0C_EventScript_WarpZone31_2
Zone0C_EventScript_WarpZone31_1:
	buffernumberstring 0, 31
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 31
	warpteleport MAP_ZONE11A, 255, 48, 2
	waitstate
	return

Zone0C_EventScript_WarpZone31_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone31_1


Zone0C_EventScript_WarpZone32::
	lockall
	compare VAR_ZONE, 33
	goto_if_lt Zone0C_EventScript_WarpZone32_2
Zone0C_EventScript_WarpZone32_1:
	buffernumberstring 0, 32
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 32
	warpteleport MAP_ZONE12A, 255, 10, 18
	waitstate
	return

Zone0C_EventScript_WarpZone32_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone32_1


Zone0C_EventScript_WarpZone33::
	lockall
	compare VAR_ZONE, 34
	goto_if_lt Zone0C_EventScript_WarpZone33_2
Zone0C_EventScript_WarpZone33_1:
	buffernumberstring 0, 33
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 33
	warpteleport MAP_ZONE13A, 255, 18, 10
	waitstate
	return

Zone0C_EventScript_WarpZone33_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone33_1


Zone0C_EventScript_WarpZone34::
	lockall
	compare VAR_ZONE, 35
	goto_if_lt Zone0C_EventScript_WarpZone34_2
Zone0C_EventScript_WarpZone34_1:
	buffernumberstring 0, 34
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 34
	warpteleport MAP_ZONE14A, 255, 19, 3
	waitstate
	return

Zone0C_EventScript_WarpZone34_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone34_1


Zone0C_EventScript_WarpZone35::
	lockall
	compare VAR_ZONE, 36
	goto_if_lt Zone0C_EventScript_WarpZone35_2
Zone0C_EventScript_WarpZone35_1:
	buffernumberstring 0, 35
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 35
	warpteleport MAP_ZONE15A, 255, 4, 4
	waitstate
	return

Zone0C_EventScript_WarpZone35_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone35_1


Zone0C_EventScript_WarpZone36::
	lockall
	compare VAR_ZONE, 37
	goto_if_lt Zone0C_EventScript_WarpZone36_2
Zone0C_EventScript_WarpZone36_1:
	buffernumberstring 0, 36
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 36
	warpteleport MAP_ZONE16A, 255, 6, 4
	waitstate
	return

Zone0C_EventScript_WarpZone36_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone36_1


Zone0C_EventScript_WarpZone37::
	lockall
	compare VAR_ZONE, 38
	goto_if_lt Zone0C_EventScript_WarpZone37_2
Zone0C_EventScript_WarpZone37_1:
	buffernumberstring 0, 37
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 37
	warpteleport MAP_ZONE17A, 255, 13, 42
	waitstate
	return

Zone0C_EventScript_WarpZone37_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone37_1


Zone0C_EventScript_WarpZone38::
	lockall
	compare VAR_ZONE, 39
	goto_if_lt Zone0C_EventScript_WarpZone38_2
Zone0C_EventScript_WarpZone38_1:
	buffernumberstring 0, 38
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 38
	warpteleport MAP_ZONE18A, 255, 28, 19
	waitstate
	return

Zone0C_EventScript_WarpZone38_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone38_1


Zone0C_EventScript_WarpZone39::
	lockall
	compare VAR_ZONE, 40
	goto_if_lt Zone0C_EventScript_WarpZone39_2
Zone0C_EventScript_WarpZone39_1:
	buffernumberstring 0, 39
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 39
	warpteleport MAP_ZONE19D, 255, 9, 3
	waitstate
	return

Zone0C_EventScript_WarpZone39_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone39_1


Zone0C_EventScript_WarpZone40::
	lockall
	compare VAR_ZONE, 41
	goto_if_lt Zone0C_EventScript_WarpZone40_2
Zone0C_EventScript_WarpZone40_1:
	buffernumberstring 0, 40
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 40
	warpteleport MAP_ZONE20A, 255, 7, 8
	waitstate
	return

Zone0C_EventScript_WarpZone40_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone40_1


Zone0C_EventScript_WarpZone41::
	lockall
	compare VAR_ZONE, 42
	goto_if_lt Zone0C_EventScript_WarpZone41_2
Zone0C_EventScript_WarpZone41_1:
	buffernumberstring 0, 41
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 41
	warpteleport MAP_ZONE11A, 255, 48, 2
	waitstate
	return

Zone0C_EventScript_WarpZone41_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone41_1


Zone0C_EventScript_WarpZone42::
	lockall
	compare VAR_ZONE, 43
	goto_if_lt Zone0C_EventScript_WarpZone42_2
Zone0C_EventScript_WarpZone42_1:
	buffernumberstring 0, 42
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 42
	warpteleport MAP_ZONE12A, 255, 10, 18
	waitstate
	return

Zone0C_EventScript_WarpZone42_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone42_1


Zone0C_EventScript_WarpZone43::
	lockall
	compare VAR_ZONE, 44
	goto_if_lt Zone0C_EventScript_WarpZone43_2
Zone0C_EventScript_WarpZone43_1:
	buffernumberstring 0, 43
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 43
	warpteleport MAP_ZONE13A, 255, 18, 10
	waitstate
	return

Zone0C_EventScript_WarpZone43_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone43_1


Zone0C_EventScript_WarpZone44::
	lockall
	compare VAR_ZONE, 45
	goto_if_lt Zone0C_EventScript_WarpZone44_2
Zone0C_EventScript_WarpZone44_1:
	buffernumberstring 0, 44
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 44
	warpteleport MAP_ZONE14A, 255, 19, 3
	waitstate
	return

Zone0C_EventScript_WarpZone44_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone44_1


Zone0C_EventScript_WarpZone45::
	lockall
	compare VAR_ZONE, 46
	goto_if_lt Zone0C_EventScript_WarpZone45_2
Zone0C_EventScript_WarpZone45_1:
	buffernumberstring 0, 45
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 45
	warpteleport MAP_ZONE15A, 255, 4, 4
	waitstate
	return

Zone0C_EventScript_WarpZone45_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone45_1


Zone0C_EventScript_WarpZone46::
	lockall
	compare VAR_ZONE, 47
	goto_if_lt Zone0C_EventScript_WarpZone46_2
Zone0C_EventScript_WarpZone46_1:
	buffernumberstring 0, 46
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 46
	warpteleport MAP_ZONE16A, 255, 6, 4
	waitstate
	return

Zone0C_EventScript_WarpZone46_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone46_1


Zone0C_EventScript_WarpZone47::
	lockall
	compare VAR_ZONE, 48
	goto_if_lt Zone0C_EventScript_WarpZone47_2
Zone0C_EventScript_WarpZone47_1:
	buffernumberstring 0, 47
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 47
	warpteleport MAP_ZONE17A, 255, 13, 42
	waitstate
	return

Zone0C_EventScript_WarpZone47_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone47_1


Zone0C_EventScript_WarpZone48::
	lockall
	compare VAR_ZONE, 49
	goto_if_lt Zone0C_EventScript_WarpZone48_2
Zone0C_EventScript_WarpZone48_1:
	buffernumberstring 0, 48
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 48
	warpteleport MAP_ZONE18A, 255, 28, 19
	waitstate
	return

Zone0C_EventScript_WarpZone48_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone48_1


Zone0C_EventScript_WarpZone49::
	lockall
	compare VAR_ZONE, 50
	goto_if_lt Zone0C_EventScript_WarpZone49_2
Zone0C_EventScript_WarpZone49_1:
	buffernumberstring 0, 49
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 49
	warpteleport MAP_ZONE19D, 255, 9, 3
	waitstate
	return

Zone0C_EventScript_WarpZone49_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone49_1


Zone0C_EventScript_WarpZone50::
	lockall
	compare VAR_ZONE, 51
	goto_if_lt Zone0C_EventScript_WarpZone50_2
Zone0C_EventScript_WarpZone50_1:
	buffernumberstring 0, 50
	call Zone0C_EventScript_VerifyDestination
	setvar VAR_REVISITING_ZONE, 50
	warpteleport MAP_ZONE20A, 255, 7, 8
	waitstate
	return

Zone0C_EventScript_WarpZone50_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone50_1


Zone0C_EventScript_WarpZoneB1::
	lockall
	compare VAR_ZONE_B1_STATE, 2
	goto_if_lt Zone0C_EventScript_WarpZoneB1_2
Zone0C_EventScript_WarpZoneB1_1:
	setvar VAR_REVISITING_ZONE, 51
	warpteleport MAP_ZONE_B1, 255, 11, 0
	end

Zone0C_EventScript_WarpZoneB1_2:
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZoneB1_1


Zone0C_Movement_PostIntro:
	walk_up
	walk_up
	walk_up
	face_down
	step_end

Zone0C_EventScript_Intro_Text_0:
	.string "A test subject! Perfect!$"

Zone0C_EventScript_VerifyDestination_Text_0:
	.string "Are you sure you want to go to {COLOR RED}Zone\n"
	.string "{STR_VAR_1}{COLOR DARK_GRAY}?$"

Zone0C_EventScript_VerifyDestination_Text_1:
	.string "Decided not to warp.$"

Zone0C_EventScript_DenyWarp_Text_0:
	.string "The warp doesn't seem to work…$"

Zone0C_Text_Intro::
	.string "Welcome to the Teleport Institute, or\n"
	.string "TPI for short.\p"
	.string "There are warps that will bring you to\n"
	.string "any area you've already visited.\p"
	.string "I'm sure you'll get the hang of it.\p"
	.string "If you need to get back to where you\n"
	.string "came from, you can use the warp\l"
	.string "immediately to our left.$"

Zone0C_Text_Explain::
	.string "The warps are hardwired to only\n"
	.string "teleport people to places they have\l"
	.string "been before.\p"
	.string "If you need to get back to where you\n"
	.string "came from, you can use the warp\l"
	.string "immediately to our left.$"
