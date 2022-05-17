Zone2A_MapScripts::
	.byte 0

Zone2A_EventScript_ItemAntidote::
	finditem ITEM_ANTIDOTE
	end

Zone2A_EventScript_Dexter::
	trainerbattle_single TRAINER_DEXTER, Zone2A_Text_DexterIntro, Zone2A_Text_DexterDefeat
	msgbox Zone2A_Text_DexterPostBattle, MSGBOX_AUTOCLOSE
	end

Zone2A_Text_DexterIntro:
	.string "It's so dark here!$"

Zone2A_Text_DexterDefeat:
	.string "Not fair!$"

Zone2A_Text_DexterPostBattle:
	.string "I couldn't see clearly!$"

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
