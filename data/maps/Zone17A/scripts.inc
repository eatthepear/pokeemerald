Zone17A_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone17A_OnFrame
	.byte 0

Zone17A_OnFrame:
	map_script_2 VAR_ZONE17A_STATE, 0, Zone17A_EventScript_Intro
	.2byte 0

Zone17A_EventScript_Intro:
	lockall
	delay 48
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 32
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	delay 48
	msgbox Zone17A_Text_Intro, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 1
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	delay 8
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 8
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	delay 8
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 8
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	delay 8
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 8
	releaseall
	end

Zone17A_EventScript_CheckLeave::
	lockall
	compare VAR_ZONE17A_STATE, 30
	goto_if_eq Zone17A_EventScript_Leave
	warp MAP_ZONE17A, 255, 13, 44
	releaseall
	end

Zone17A_EventScript_Leave:
	compare VAR_ZONE, 17
	goto_if_gt EventScript_WarpZone0
	warp MAP_ZONE17SANCTUARY, 255, 22, 7
	releaseall
	end

Zone17A_Text_Intro:
	.string "Release us... Please...\p"
	.string "Fourteen souls...\n"
	.string "Trapped here...\p"
	.string "Inscripted in the stones...$"

Zone17A_EventScript_RiddleSign::
	lock
	checkitem ITEM_ODD_KEYSTONE, 1
	compare VAR_RESULT, TRUE
	call_if_eq Zone17A_EventScript_PlaceOddKeystone
	compare VAR_ZONE17A_STATE, 29
	goto_if_eq Zone17A_EventScript_Released
	msgbox Zone17A_Text_RiddleSign, MSGBOX_SIGN
	release
	end

Zone17A_Text_RiddleSign:
	.string "We celebrate the day of life\n"
	.string "With boundless splurge and wonder,\p"
	.string "We celebrate the day of death\n"
	.string "With rain, lightning, and thunder,\p"
	.string "Bring peace to those who still\n"
	.string "remember every cherished date,\p"
	.string "Another year of special days,\n"
	.string "They number twenty-eight.$"

Zone17A_EventScript_Released:
	delay 48
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	setobjectxy 1, 13, 7
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 32
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	setobjectxy 1, 13, 7
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	setobjectxy 1, 13, 7
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	setobjectxy 1, 13, 7
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	setobjectxy 1, 13, 7
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	setobjectxy 1, 13, 7
	delay 48
	msgbox Zone17A_Text_Released, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 30
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	setobjectxy 1, 13, 7
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	setobjectxy 1, 13, 7
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	setobjectxy 1, 13, 7
	delay 16
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 16
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	setobjectxy 1, 13, 7
	delay 8
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 8
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	delay 8
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 8
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	addobject 1
	setobjectxy 1, 13, 7
	delay 8
	removeobject 1
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
	delay 8
	msgbox Zone17A_Text_Shimmering, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM21
	release
	end

Zone17A_Text_Released:
	.string "Thank you...\n"
	.string "Finally, we may know peace...$"

Zone17A_Text_Shimmering:
	.string "There's something shimmering on the\n"
	.string "ground by your feet!$"

Zone17A_EventScript_PlaceOddKeystone:
	msgbox Zone17A_Text_Spot, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone17A_StartSpiritombBattle
	return

Zone17A_Text_Spot:
	.string "There is a spot that looks like it\n"
	.string "can fit the Odd Keystone.\p"
	.string "Would you like to place the\n"
	.string "Odd Keystone?$"

Zone17A_StartSpiritombBattle:
	removeitem ITEM_ODD_KEYSTONE
	msgbox Zone17A_Text_PlacedOddKeystone, MSGBOX_AUTOCLOSE
	delay 48
	setwildbattle SPECIES_SPIRITOMB, 30, ITEM_NONE
	playmoncry SPECIES_SPIRITOMB, 2
	delay 40
	waitmoncry
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone17A_EventScript_SpiritombDisappeared
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone17A_EventScript_SpiritombDisappeared
	release
	end

Zone17A_Text_PlacedOddKeystone:
	.string "{PLAYER} placed the Odd Keystone.$"

Zone17A_EventScript_SpiritombDisappeared:
	msgbox Zone17A_Text_SpiritombDisappeared, MSGBOX_AUTOCLOSE
	release
	end

Zone17A_Text_SpiritombDisappeared:
	.string "Spiritomb disappeared…$"

Zone17A_EventScript_Sign1::
	lock
	msgbox Zone17A_Text_Sign1, MSGBOX_SIGN
	compare VAR_ZONE17A_STATE, 16
	call_if_eq Zone17A_EventScript_PayRespects16
	compare VAR_ZONE17A_STATE, 19
	call_if_eq Zone17A_EventScript_PayRespects19
	release
	end

Zone17A_EventScript_Sign2::
	lock
	msgbox Zone17A_Text_Sign2, MSGBOX_SIGN
	compare VAR_ZONE17A_STATE, 24
	call_if_eq Zone17A_EventScript_PayRespects24
	compare VAR_ZONE17A_STATE, 9
	call_if_eq Zone17A_EventScript_PayRespects9
	release
	end

Zone17A_EventScript_Sign3::
	lock
	msgbox Zone17A_Text_Sign3, MSGBOX_SIGN
	compare VAR_ZONE17A_STATE, 27
	call_if_eq Zone17A_EventScript_PayRespects27
	compare VAR_ZONE17A_STATE, 15
	call_if_eq Zone17A_EventScript_PayRespects15
	release
	end

Zone17A_EventScript_Sign4::
	lock
	msgbox Zone17A_Text_Sign4, MSGBOX_SIGN
	compare VAR_ZONE17A_STATE, 4
	call_if_eq Zone17A_EventScript_PayRespects4
	compare VAR_ZONE17A_STATE, 13
	call_if_eq Zone17A_EventScript_PayRespects13
	release
	end

Zone17A_EventScript_Sign5::
	lock
	msgbox Zone17A_Text_Sign5, MSGBOX_SIGN
	compare VAR_ZONE17A_STATE, 7
	call_if_eq Zone17A_EventScript_PayRespects7
	compare VAR_ZONE17A_STATE, 22
	call_if_eq Zone17A_EventScript_PayRespects22
	release
	end

Zone17A_EventScript_Sign6::
	lock
	msgbox Zone17A_Text_Sign6, MSGBOX_SIGN
	compare VAR_ZONE17A_STATE, 1
	call_if_eq Zone17A_EventScript_PayRespects1
	compare VAR_ZONE17A_STATE, 17
	call_if_eq Zone17A_EventScript_PayRespects17
	release
	end

Zone17A_EventScript_Sign7::
	lock
	msgbox Zone17A_Text_Sign7, MSGBOX_SIGN
	compare VAR_ZONE17A_STATE, 23
	call_if_eq Zone17A_EventScript_PayRespects23
	compare VAR_ZONE17A_STATE, 3
	call_if_eq Zone17A_EventScript_PayRespects3
	release
	end

Zone17A_EventScript_Sign8::
	lock
	msgbox Zone17A_Text_Sign8, MSGBOX_SIGN
	compare VAR_ZONE17A_STATE, 5
	call_if_eq Zone17A_EventScript_PayRespects5
	compare VAR_ZONE17A_STATE, 25
	call_if_eq Zone17A_EventScript_PayRespects25
	release
	end

Zone17A_EventScript_Sign9::
	lock
	msgbox Zone17A_Text_Sign9, MSGBOX_SIGN
	compare VAR_ZONE17A_STATE, 18
	call_if_eq Zone17A_EventScript_PayRespects18
	compare VAR_ZONE17A_STATE, 2
	call_if_eq Zone17A_EventScript_PayRespects2
	release
	end

Zone17A_EventScript_Sign10::
	lock
	msgbox Zone17A_Text_Sign10, MSGBOX_SIGN
	compare VAR_ZONE17A_STATE, 10
	call_if_eq Zone17A_EventScript_PayRespects10
	compare VAR_ZONE17A_STATE, 14
	call_if_eq Zone17A_EventScript_PayRespects14
	release
	end

Zone17A_EventScript_Sign11::
	lock
	msgbox Zone17A_Text_Sign11, MSGBOX_SIGN
	compare VAR_ZONE17A_STATE, 28
	call_if_eq Zone17A_EventScript_PayRespects28
	compare VAR_ZONE17A_STATE, 11
	call_if_eq Zone17A_EventScript_PayRespects11
	release
	end

Zone17A_EventScript_Sign12::
	lock
	msgbox Zone17A_Text_Sign12, MSGBOX_SIGN
	compare VAR_ZONE17A_STATE, 20
	call_if_eq Zone17A_EventScript_PayRespects20
	compare VAR_ZONE17A_STATE, 6
	call_if_eq Zone17A_EventScript_PayRespects6
	release
	end

Zone17A_EventScript_Sign13::
	lock
	msgbox Zone17A_Text_Sign13, MSGBOX_SIGN
	compare VAR_ZONE17A_STATE, 26
	call_if_eq Zone17A_EventScript_PayRespects26
	compare VAR_ZONE17A_STATE, 12
	call_if_eq Zone17A_EventScript_PayRespects12
	release
	end

Zone17A_EventScript_Sign14::
	lock
	msgbox Zone17A_Text_Sign14, MSGBOX_SIGN
	compare VAR_ZONE17A_STATE, 8
	call_if_eq Zone17A_EventScript_PayRespects8
	compare VAR_ZONE17A_STATE, 21
	call_if_eq Zone17A_EventScript_PayRespects21
	release
	end

Zone17A_EventScript_PayRespects1:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects1
	return

Zone17A_EventScript_PaidRespects1:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 2
	return

Zone17A_EventScript_PayRespects2:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects2
	return

Zone17A_EventScript_PaidRespects2:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 3
	return

Zone17A_EventScript_PayRespects3:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects3
	return

Zone17A_EventScript_PaidRespects3:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 4
	return

Zone17A_EventScript_PayRespects4:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects4
	return

Zone17A_EventScript_PaidRespects4:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 5
	return

Zone17A_EventScript_PayRespects5:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects5
	return

Zone17A_EventScript_PaidRespects5:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 6
	return

Zone17A_EventScript_PayRespects6:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects6
	return

Zone17A_EventScript_PaidRespects6:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 7
	return

Zone17A_EventScript_PayRespects7:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects7
	return

Zone17A_EventScript_PaidRespects7:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 8
	return

Zone17A_EventScript_PayRespects8:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects8
	return

Zone17A_EventScript_PaidRespects8:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 9
	return

Zone17A_EventScript_PayRespects9:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects9
	return

Zone17A_EventScript_PaidRespects9:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 10
	return

Zone17A_EventScript_PayRespects10:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects10
	return

Zone17A_EventScript_PaidRespects10:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 11
	return

Zone17A_EventScript_PayRespects11:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects11
	return

Zone17A_EventScript_PaidRespects11:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 12
	return

Zone17A_EventScript_PayRespects12:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects12
	return

Zone17A_EventScript_PaidRespects12:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 13
	return

Zone17A_EventScript_PayRespects13:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects13
	return

Zone17A_EventScript_PaidRespects13:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 14
	return

Zone17A_EventScript_PayRespects14:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects14
	return

Zone17A_EventScript_PaidRespects14:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 15
	return

Zone17A_EventScript_PayRespects15:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects15
	return

Zone17A_EventScript_PaidRespects15:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 16
	return

Zone17A_EventScript_PayRespects16:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects16
	return

Zone17A_EventScript_PaidRespects16:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 17
	return

Zone17A_EventScript_PayRespects17:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects17
	return

Zone17A_EventScript_PaidRespects17:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 18
	return

Zone17A_EventScript_PayRespects18:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects18
	return

Zone17A_EventScript_PaidRespects18:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 19
	return

Zone17A_EventScript_PayRespects19:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects19
	return

Zone17A_EventScript_PaidRespects19:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 20
	return

Zone17A_EventScript_PayRespects20:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects20
	return

Zone17A_EventScript_PaidRespects20:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 21
	return

Zone17A_EventScript_PayRespects21:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects21
	return

Zone17A_EventScript_PaidRespects21:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 22
	return

Zone17A_EventScript_PayRespects22:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects22
	return

Zone17A_EventScript_PaidRespects22:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 23
	return

Zone17A_EventScript_PayRespects23:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects23
	return

Zone17A_EventScript_PaidRespects23:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 24
	return

Zone17A_EventScript_PayRespects24:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects24
	return

Zone17A_EventScript_PaidRespects24:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 25
	return

Zone17A_EventScript_PayRespects25:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects25
	return

Zone17A_EventScript_PaidRespects25:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 26
	return

Zone17A_EventScript_PayRespects26:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects26
	return

Zone17A_EventScript_PaidRespects26:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 27
	return

Zone17A_EventScript_PayRespects27:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects27
	return

Zone17A_EventScript_PaidRespects27:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 28
	return

Zone17A_EventScript_PayRespects28:
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Zone17A_EventScript_PaidRespects28
	return

Zone17A_EventScript_PaidRespects28:
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE17A_STATE, 29
	return

Zone17A_Text_PayRespects:
	.string "Would you like to pay respects?$"

Zone17A_Text_PaidRespects:
	.string "{PLAYER} paid respects to the dead.$"

Zone17A_Text_Sign1:
	.string "Undulli Holmes\n"
	.string "July 27, '40 - September 14, '02$"

Zone17A_Text_Sign2:
	.string "Koon Olafsson\n"
	.string "November 9, '03 - May 24, '95$"

Zone17A_Text_Sign3:
	.string "Fisto Zhang\n"
	.string "December 13, '66 - July 5, '20$"

Zone17A_Text_Sign4:
	.string "Topal Lee\n"
	.string "February 25, '47 - June 22, '15$"

Zone17A_Text_Sign5:
	.string "Gallia Martez\n"
	.string "April 28, '50 - October 1, '03$"

Zone17A_Text_Sign6:
	.string "Windu Jackson\n"
	.string "January 4, '60 - August 10, '19$"

Zone17A_Text_Sign7:
	.string "Jinn Neelson\n"
	.string "October 11, '44 - February 16, '08$"

Zone17A_Text_Sign8:
	.string "Secura Vogelzang\n"
	.string "March 2, '45 - November 21, '04$"

Zone17A_Text_Sign9:
	.string "Mundi Sato\n"
	.string "August 20, '39 - January 6, '98$"

Zone17A_Text_Sign10:
	.string "Billaba Sina\n"
	.string "June 7, '48 - June 23, '15$"

Zone17A_Text_Sign11:
	.string "Tiplar Rodriguez\n"
	.string "December 29, '36 - June 17, '94$"

Zone17A_Text_Sign12:
	.string "Tinn Smith\n"
	.string "September 19, '49 - March 15, '00$"

Zone17A_Text_Sign13:
	.string "Kolar Dali\n"
	.string "December 3, '33 - June 18, '89$"

Zone17A_Text_Sign14:
	.string "Piell Wei\n"
	.string "May 12, '62 - September 26, '17$"
