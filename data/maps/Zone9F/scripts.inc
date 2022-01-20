Zone9F_MapScripts::
	.byte 0

Zone9F_EventScript_Ari::
	lock
	faceplayer
	msgbox Zone9F_Text_Ari, MSGBOX_AUTOCLOSE
	release
	end

Zone9F_Text_Ari:
	.string "{COLOR BLUE}Ari{COLOR DARK_GRAY}: I miss my cousin Victoria.\n"
	.string "She lives in the Hoenn region.$"

Zone9F_EventScript_Bertha::
	lock
	faceplayer
	msgbox Zone9F_Text_Bertha, MSGBOX_AUTOCLOSE
	release
	end

Zone9F_Text_Bertha:
	.string "{COLOR BLUE}Bertha{COLOR DARK_GRAY}: Why did Mom buy this house?\n"
	.string "It's so small for the five of us...$"

Zone9F_EventScript_Cassandra::
	lock
	faceplayer
	msgbox Zone9F_Text_Cassandra, MSGBOX_AUTOCLOSE
	release
	end

Zone9F_Text_Cassandra:
	.string "{COLOR BLUE}Cassandra{COLOR DARK_GRAY}: All my kids do is\n"
	.string "complain, complain, then complain\l"
	.string "some more.$"

Zone9F_EventScript_Dominic::
	lock
	faceplayer
	msgbox Zone9F_Text_Dominic, MSGBOX_AUTOCLOSE
	release
	end

Zone9F_Text_Dominic:
	.string "{COLOR BLUE}Dominic{COLOR DARK_GRAY}: I wonder what's for dinner...$"

Zone9F_EventScript_Erica::
	lock
	faceplayer
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone9F_EventScript_SafeTravels
	goto_if_set FLAG_RECEIVED_ZONE9F_ZORUA, Zone9F_EventScript_SafeTravels
	msgbox Zone9F_Text_Erica_Request, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone9F_EventScript_NoZorua
	msgbox Zone9F_Text_ThankYou, MSGBOX_DEFAULT
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone9F_EventScript_SendZoruaPC
	goto Zone9F_EventScript_SendZoruaParty
	end

Zone9F_EventScript_SendZoruaParty::
	givecustommon SPECIES_ZORUA, 10, ITEM_NONE, ITEM_CHERISH_BALL, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0, 32, 32, 32, 32, 32, 32, 0xFF, 0xFF, 0xFF, 0xFF, TRUE
	setvar VAR_TEMP_1, SPECIES_ZORUA
	call Zone9F_EventScript_ReceivedZoruaFanfare
	msgbox Zone9F_Text_HowBoutNickname, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone9F_EventScript_ReceivedZorua
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Zone9F_EventScript_ReceivedZorua
	end

Zone9F_EventScript_SendZoruaPC::
	givecustommon SPECIES_ZORUA, 10, ITEM_NONE, ITEM_CHERISH_BALL, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0, 32, 32, 32, 32, 32, 32, 0xFF, 0xFF, 0xFF, 0xFF, TRUE
	setvar VAR_TEMP_1, SPECIES_ZORUA
	call Zone9F_EventScript_ReceivedZoruaFanfare
	msgbox Zone9F_Text_HowBoutNickname, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone9F_EventScript_ZoruaTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto Zone9F_EventScript_ZoruaTransferredToPC
	end

Zone9F_EventScript_ZoruaTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto Zone9F_EventScript_ReceivedZorua
	end

Zone9F_EventScript_ReceivedZoruaFanfare::
	playfanfare MUS_OBTAIN_ITEM
	message Zone9F_Text_ReceivedZorua
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_ZORUA
	return

Zone9F_EventScript_ReceivedZorua::
	setflag FLAG_RECEIVED_ZONE9F_ZORUA
	goto Zone9F_EventScript_SafeTravels
	releaseall
	end

Zone9F_EventScript_NoZorua:
	msgbox Zone9F_Text_NoZorua, MSGBOX_AUTOCLOSE
	release
	end

Zone9F_EventScript_SafeTravels:
	msgbox Zone9F_Text_Erica, MSGBOX_AUTOCLOSE
	release
	end

Zone9F_Text_Erica_Request:
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: {PLAYER}, is it?\n"
	.string "I have a request for you.\p"
	.string "About two weeks ago, I found an\n"
	.string "abandoned Pokémon in the forest.\p"
	.string "It is an unusual color for its\n"
	.string "species and therefore an outcast.\p"
	.string "I have been searching for a Trainer\n"
	.string "strong enough to take care of it.\l"
	.string "Will you accept the responsibility?$"

Zone9F_Text_Erica:
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: May your travels be safe.$"

Zone9F_Text_NoZorua:
	.string "Ah. That is... unfortunate.\n"
	.string "Come back if you change your mind.$"

Zone9F_Text_ThankYou:
	.string "Thank you, kind Trainer.$"

Zone9F_Text_HowBoutNickname:
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: Would you like to give a\n"
	.string "nickname to Zorua?$"

Zone9F_Text_ReceivedZorua:
	.string "Received Zorua!$"
