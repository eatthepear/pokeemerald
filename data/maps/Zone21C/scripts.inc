Zone21C_MapScripts::
	.byte 0

Zone21C_EventScript_Breeder::
	lock
	faceplayer
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone21C_EventScript_BreederNoHappiny
	goto_if_set FLAG_RECEIVED_ZONE21C_HAPPINY, Zone21C_EventScript_SafeTravels
	msgbox Zone21C_Text_Breeder_Intro, MSGBOX_AUTOCLOSE
	goto_if_not_defeated TRAINER_HOWARD, Zone21C_EventScript_NoHappiny
	goto_if_not_defeated TRAINER_ELOISE, Zone21C_EventScript_NoHappiny
	goto_if_not_defeated TRAINER_ALLY_AND_EMMY, Zone21C_EventScript_NoHappiny
	goto_if_not_defeated TRAINER_AMIR, Zone21C_EventScript_NoHappiny
	goto_if_not_defeated TRAINER_GETHIN, Zone21C_EventScript_NoHappiny
	goto_if_not_defeated TRAINER_BERNARD, Zone21C_EventScript_NoHappiny
	goto_if_not_defeated TRAINER_ELLIE, Zone21C_EventScript_NoHappiny
	goto_if_not_defeated TRAINER_RUSTY, Zone21C_EventScript_NoHappiny
	msgbox Zone21C_Text_Breeder_Request, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone21C_EventScript_NoHappiny
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone21C_EventScript_SendHappinyPC
	goto Zone21C_EventScript_SendHappinyParty
	end

Zone21C_EventScript_BreederNoHappiny:
	msgbox Zone21C_Text_Breeder_NoHappiny, MSGBOX_AUTOCLOSE
	release
	end

Zone21C_EventScript_SendHappinyParty::
	givemon SPECIES_HAPPINY, 25, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_HAPPINY
	call Zone21C_EventScript_ReceivedHappinyFanfare
	msgbox Zone21C_Text_HowBoutNickname, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone21C_EventScript_ReceivedHappiny
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Zone21C_EventScript_ReceivedHappiny
	end

Zone21C_EventScript_SendHappinyPC::
	givemon SPECIES_HAPPINY, 25, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_HAPPINY
	call Zone21C_EventScript_ReceivedHappinyFanfare
	msgbox Zone21C_Text_HowBoutNickname, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone21C_EventScript_HappinyTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto Zone21C_EventScript_HappinyTransferredToPC
	end

Zone21C_EventScript_HappinyTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto Zone21C_EventScript_ReceivedHappiny
	end

Zone21C_EventScript_ReceivedHappinyFanfare::
	playfanfare MUS_OBTAIN_ITEM
	message Zone21C_Text_ReceivedHappiny
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_HAPPINY
	return

Zone21C_EventScript_ReceivedHappiny::
	setflag FLAG_RECEIVED_ZONE21C_HAPPINY
	goto Zone21C_EventScript_SafeTravels
	releaseall
	end

Zone21C_EventScript_NoHappiny:
	msgbox Zone21C_Text_NoHappiny, MSGBOX_AUTOCLOSE
	release
	end

Zone21C_EventScript_SafeTravels:
	msgbox Zone21C_Text_Breeder, MSGBOX_AUTOCLOSE
	release
	end

Zone21C_Text_Breeder_Intro:
	.string "I have a special Pokémon that\n"
	.string "is powerful, but it requires\l"
	.string "care from an excellent trainer.\p"
	.string "If you can prove yourself by\n"
	.string "defeating all the trainers in this\l"
	.string "area, I'll give you this Pokémon.$"

Zone21C_Text_Breeder_Request:
	.string "Oh? It looks like you've proven\n"
	.string "yourself an excellent trainer.\p"
	.string "Would you like to take Happiny?$"

Zone21C_Text_Breeder:
	.string "Take good care of Happiny.$"

Zone21C_Text_NoHappiny:
	.string "Alas, I fear it may never find a\n"
	.string "proper home…$"

Zone21C_Text_HowBoutNickname:
	.string "Would you like to give a nickname\n"
	.string "to Happiny?$"

Zone21C_Text_ReceivedHappiny:
	.string "Received Happiny!$"

Zone21C_Text_Breeder_NoHappiny:
	.string "My Happiny is so happy!$"
