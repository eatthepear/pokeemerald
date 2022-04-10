ZoneB1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ZoneB1_OnFrame
	.byte 0

ZoneB1_OnFrame:
	map_script_2 VAR_ZONEB1_STATE, 2, ZoneB1_EventScript_Intro
	.2byte 0

ZoneB1_EventScript_Intro:
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	playmoncry SPECIES_PORYGON, 2
	msgbox ZoneB1_Text_Notice, MSGBOX_AUTOCLOSE
	delay 40
	waitmoncry
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 1
	removeobject 3
	removeobject 4
	removeobject 5
	setvar VAR_ZONEB1_STATE, 3
	setflag FLAG_ZONE_B1_PORYGON_1
	setflag FLAG_ZONE_B1_PORYGON_3
	setflag FLAG_ZONE_B1_PORYGON_4
	setflag FLAG_ZONE_B1_PORYGON_5
	delay 40
	fadescreenswapbuffers FADE_FROM_BLACK
	releaseall
	end

ZoneB1_Text_Notice:
	.string "...!$"

ZoneB1_EventScript_Interact2::
	lock
	applymovement 2, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	playmoncry SPECIES_PORYGON, 2
	msgbox ZoneB1_Text_Notice, MSGBOX_AUTOCLOSE
	delay 40
	waitmoncry
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 2
	setvar VAR_ZONEB1_STATE, 4
	setflag FLAG_ZONE_B1_PORYGON_2
	clearflag FLAG_ZONE_B1_PORYGON_3
	delay 40
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

ZoneB1_EventScript_Interact3::
	lock
	applymovement 3, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	playmoncry SPECIES_PORYGON, 2
	msgbox ZoneB1_Text_Notice, MSGBOX_AUTOCLOSE
	delay 40
	waitmoncry
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 3
	setvar VAR_ZONEB1_STATE, 5
	setflag FLAG_ZONE_B1_PORYGON_3
	clearflag FLAG_ZONE_B1_PORYGON_4
	delay 40
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

ZoneB1_Text_NoticeQuestion:
	.string "...?$"

ZoneB1_EventScript_Interact4::
	lock
	applymovement 4, Common_Movement_QuestionMark
	playse SE_PIN
	waitmovement 0
	waitse
	playmoncry SPECIES_PORYGON, 2
	msgbox ZoneB1_Text_NoticeQuestion, MSGBOX_AUTOCLOSE
	delay 40
	waitmoncry
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 4
	setvar VAR_ZONEB1_STATE, 6
	setflag FLAG_ZONE_B1_PORYGON_4
	clearflag FLAG_ZONE_B1_PORYGON_5
	delay 40
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

ZoneB1_EventScript_Interact5::
	lock
	applymovement 5, Common_Movement_QuestionMark
	playse SE_PIN
	waitmovement 0
	waitse
	playmoncry SPECIES_PORYGON, 2
	msgbox ZoneB1_Text_NoticeQuestion, MSGBOX_AUTOCLOSE
	delay 40
	waitmoncry
	playmoncry SPECIES_PORYGON, 2
	msgbox ZoneB1_Text_Notice, MSGBOX_AUTOCLOSE
	delay 40
	waitmoncry
	msgbox ZoneB1_Text_LooksLike, MSGBOX_AUTOCLOSE
	playmoncry SPECIES_PORYGON, 2
	delay 40
	msgbox ZoneB1_Text_Porygon, MSGBOX_AUTOCLOSE
	waitmoncry
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq VAR_RESULT, PARTY_SIZE, ZoneB1_EventScript_SendPorygonPC
	goto ZoneB1_EventScript_SendPorygonParty
	release
	end

ZoneB1_Text_LooksLike:
	.string "It looks like Porygon…\n"
	.string "recognizes you?$"

ZoneB1_Text_Porygon:
	.string "Porygon looks like it wants to\n"
	.string "join you!$"

ZoneB1_EventScript_SendPorygonParty::
	givemon SPECIES_PORYGON, 25, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_PORYGON
	call ZoneB1_EventScript_ReceivedPorygonFanfare
	msgbox ZoneB1_Text_HowBoutNickname, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ZoneB1_EventScript_ReceivedPorygon
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto ZoneB1_EventScript_ReceivedPorygon
	end

ZoneB1_EventScript_SendPorygonPC::
	givemon SPECIES_PORYGON, 25, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_PORYGON
	call ZoneB1_EventScript_ReceivedPorygonFanfare
	msgbox ZoneB1_Text_HowBoutNickname, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ZoneB1_EventScript_PorygonTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto ZoneB1_EventScript_PorygonTransferredToPC
	end

ZoneB1_EventScript_PorygonTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto ZoneB1_EventScript_ReceivedPorygon
	end

ZoneB1_EventScript_ReceivedPorygonFanfare::
	playfanfare MUS_OBTAIN_ITEM
	message ZoneB1_Text_ReceivedPorygon
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_PORYGON
	return

ZoneB1_EventScript_ReceivedPorygon::
	setflag FLAG_RECEIVED_PORYGON
	removeobject 5
	setvar VAR_ZONEB1_STATE, 7
	setflag FLAG_ZONE_B1_PORYGON_5
	releaseall
	end

ZoneB1_Text_HowBoutNickname:
	.string "Would you like to give a nickname\n"
	.string "to Porygon?$"

ZoneB1_Text_ReceivedPorygon:
	.string "Porygon joined you!$"
