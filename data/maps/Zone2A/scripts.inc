Zone2A_MapScripts::
	.byte 0

Zone2A_EventScript_ItemAntidote::
	finditem ITEM_ANTIDOTE
	end

Zone2A_EventScript_Harper::
	trainerbattle_single TRAINER_HARPER, Zone2A_Text_HarperIntro, Zone2A_Text_HarperDefeat
	msgbox Zone2A_Text_HarperPostBattle, MSGBOX_AUTOCLOSE
	end

Zone2A_Text_HarperIntro:
	.string "We're not in Kansas anymore...$"

Zone2A_Text_HarperDefeat:
	.string "We're in a simulation!$"

Zone2A_Text_HarperPostBattle:
	.string "Does that mean... I could be just\n"
	.string "a construct of the simulation?$"

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
