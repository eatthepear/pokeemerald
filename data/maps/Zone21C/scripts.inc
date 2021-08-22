Zone21C_MapScripts::
	.byte 0

Zone21C_EventScript_Scientist::
	lock
	faceplayer
	msgbox Zone21C_Text_Scientist_Intro, MSGBOX_AUTOCLOSE
	goto_if_set FLAG_RECEIVED_ZONE21C_PORYGON, Zone21C_EventScript_SafeTravels
	goto_if_not_defeated TRAINER_HOWARD, Zone21C_EventScript_NoPorygon
	goto_if_not_defeated TRAINER_ELOISE, Zone21C_EventScript_NoPorygon
	goto_if_not_defeated TRAINER_ALLY_AND_EMMY, Zone21C_EventScript_NoPorygon
	goto_if_not_defeated TRAINER_AMIR, Zone21C_EventScript_NoPorygon
	goto_if_not_defeated TRAINER_GETHIN, Zone21C_EventScript_NoPorygon
	goto_if_not_defeated TRAINER_BERNARD, Zone21C_EventScript_NoPorygon
	goto_if_not_defeated TRAINER_ELLIE, Zone21C_EventScript_NoPorygon
	goto_if_not_defeated TRAINER_RUSTY, Zone21C_EventScript_NoPorygon
	msgbox Zone21C_Text_Scientist_Request, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone21C_EventScript_NoPorygon
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone21C_EventScript_SendPorygonPC
	goto Zone21C_EventScript_SendPorygonParty
	end

Zone21C_EventScript_SendPorygonParty::
	givecustommon SPECIES_PORYGON, 25, ITEM_NONE, ITEM_CHERISH_BALL, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0, 32, 32, 32, 32, 32, 32, MOVE_THUNDER_WAVE, MOVE_SHOCK_WAVE, MOVE_BARRIER, MOVE_SWIFT, TRUE
	setvar VAR_TEMP_1, SPECIES_PORYGON
	call Zone21C_EventScript_ReceivedPorygonFanfare
	msgbox Zone21C_Text_HowBoutNickname, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone21C_EventScript_ReceivedPorygon
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Zone21C_EventScript_ReceivedPorygon
	end

Zone21C_EventScript_SendPorygonPC::
	givecustommon SPECIES_PORYGON, 25, ITEM_NONE, ITEM_CHERISH_BALL, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0, 32, 32, 32, 32, 32, 32, MOVE_THUNDER_WAVE, MOVE_SHOCK_WAVE, MOVE_BARRIER, MOVE_SWIFT, TRUE
	setvar VAR_TEMP_1, SPECIES_PORYGON
	call Zone21C_EventScript_ReceivedPorygonFanfare
	msgbox Zone21C_Text_HowBoutNickname, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone21C_EventScript_PorygonTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto Zone21C_EventScript_PorygonTransferredToPC
	end

Zone21C_EventScript_PorygonTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto Zone21C_EventScript_ReceivedPorygon
	end

Zone21C_EventScript_ReceivedPorygonFanfare::
	playfanfare MUS_OBTAIN_ITEM
	message Zone21C_Text_ReceivedPorygon
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_PORYGON
	return

Zone21C_EventScript_ReceivedPorygon::
	setflag FLAG_RECEIVED_ZONE21C_PORYGON
	goto Zone21C_EventScript_SafeTravels
	releaseall
	end

Zone21C_EventScript_NoPorygon:
	msgbox Zone21C_Text_NoPorygon, MSGBOX_AUTOCLOSE
	release
	end

Zone21C_EventScript_SafeTravels:
	msgbox Zone21C_Text_Scientist, MSGBOX_AUTOCLOSE
	release
	end

Zone21C_Text_Scientist_Intro:
	.string "I have a special Pokémon that\n"
	.string "shines brilliantly, but it requires\l"
	.string "care from an excellent trainer.\p"
	.string "If you can prove yourself by\n"
	.string "defeating all the trainers in this\l"
	.string "area, I'll give you this Pokémon.$"

Zone21C_Text_Scientist_Request:
	.string "Oh? It looks like you've proven\n"
	.string "yourself an excellent trainer.\p"
	.string "Would you like to take Porygon?$"

Zone21C_Text_Scientist:
	.string "Take good care of Porygon.$"

Zone21C_Text_NoPorygon:
	.string "Alas, I fear it may never find a\n"
	.string "proper home…$"

Zone21C_Text_HowBoutNickname:
	.string "Would you like to give a nickname\n"
	.string "to Porygon?$"

Zone21C_Text_ReceivedPorygon:
	.string "Received Porygon!$"
