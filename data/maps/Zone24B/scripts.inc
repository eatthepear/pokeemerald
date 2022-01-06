Zone24B_MapScripts::
	.byte 0

Zone24B_EventScript_RuinManiac::
	lock
	faceplayer
	msgbox Zone24B_Text_RuinManiac_Intro, MSGBOX_AUTOCLOSE
	goto_if_set FLAG_RECEIVED_ZONE24B_TM35, Zone24B_EventScript_ReceivedTM35
	goto_if_not_defeated TRAINER_CHRISTI, Zone24B_EventScript_HaventDefeated
	goto_if_not_defeated TRAINER_SPENCER, Zone24B_EventScript_HaventDefeated
	goto_if_not_defeated TRAINER_HAYWOOD, Zone24B_EventScript_HaventDefeated
	goto_if_not_defeated TRAINER_MONROE, Zone24B_EventScript_HaventDefeated
	goto_if_not_defeated TRAINER_DAVID, Zone24B_EventScript_HaventDefeated
	goto_if_not_defeated TRAINER_DOMINIK, Zone24B_EventScript_HaventDefeated
	goto_if_not_defeated TRAINER_DOUGLAS, Zone24B_EventScript_HaventDefeated
	goto_if_not_defeated TRAINER_NADINE, Zone24B_EventScript_HaventDefeated
	msgbox Zone24B_Text_GiveTM35, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM35
	setflag FLAG_RECEIVED_ZONE24B_TM35
	release
	end

Zone24B_Text_GiveTM35:
	.string "Congratulations. You've done it!\p"
	.string "Here is the TM for Sandstorm,\n"
	.string "as promised.$"

Zone24B_EventScript_ReceivedTM35:
	msgbox Zone24B_Text_ReceivedTM35, MSGBOX_AUTOCLOSE
	release
	end

Zone24B_Text_ReceivedTM35:
	.string "Whether you use that TM correctly\n"
	.string "is up to you.$"

Zone24B_Text_RuinManiac_Intro:
	.string "Ah, hello there, young fellow!\p"
	.string "Show me your strength by defeating\n"
	.string "all the trainers scattered\l"
	.string "throughout these hills.\p"
	.string "I'll give you a little something.$"

Zone24B_EventScript_HaventDefeated:
	msgbox Zone24B_Text_RuinManiac_NotYet, MSGBOX_AUTOCLOSE
	release
	end

Zone24B_Text_RuinManiac_NotYet:
	.string "Just a couple more trainers to go.\n"
	.string "You can accomplish this!$"
