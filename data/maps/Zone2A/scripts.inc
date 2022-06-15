Zone2A_MapScripts::
	.byte 0

Zone2A_EventScript_ItemAntidote::
	finditem ITEM_ANTIDOTE
	end

Zone2A_EventScript_Polly::
	trainerbattle_single TRAINER_POLLY, Zone2A_Text_PollyIntro, Zone2A_Text_PollyDefeat
	msgbox Zone2A_Text_PollyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone2A_Text_PollyIntro:
	.string "Don't you just love magic?$"

Zone2A_Text_PollyDefeat:
	.string "Absolutely magical!$"

Zone2A_Text_PollyPostBattle:
	.string "I'm glad I live in as magical a\n"
	.string "world as this one!$"

Zone2A_EventScript_Jeremiah::
	trainerbattle_single TRAINER_JEREMIAH, Zone2A_Text_JeremiahIntro, Zone2A_Text_JeremiahDefeat
	msgbox Zone2A_Text_JeremiahPostBattle, MSGBOX_AUTOCLOSE
	end

Zone2A_Text_JeremiahIntro:
	.string "The more legs, the better!$"

Zone2A_Text_JeremiahDefeat:
	.string "Oh... Come on!$"

Zone2A_Text_JeremiahPostBattle:
	.string "Just wait till my Bugs are all evolved!$"

Zone2A_EventScript_Sign::
	msgbox Zone2A_Text_Sign, MSGBOX_SIGN
	end

Zone2A_Text_Sign:
	.string "You may find hidden items by\n"
	.string "checking certain tiles with {A_BUTTON}.$"
