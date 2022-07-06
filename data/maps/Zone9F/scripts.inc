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
	.string "It's so small for the five of us…$"

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
	.string "{COLOR BLUE}Dominic{COLOR DARK_GRAY}: I wonder what's for dinner…$"

Zone9F_EventScript_Erica::
	lock
	faceplayer
	msgbox Zone9F_Text_Erica, MSGBOX_AUTOCLOSE
	release
	end

Zone9F_Text_Erica:
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: May your travels be safe.$"
