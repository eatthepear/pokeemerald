Zone2A_MapScripts::
	.byte 0

Zone2A_EventScript_ItemAntidote::
	finditem ITEM_ANTIDOTE
	end

Zone2A_EventScript_Arnold::
	trainerbattle_single TRAINER_ARNOLD, Zone2A_Text_ArnoldIntro, Zone2A_Text_ArnoldDefeat
	msgbox Zone2A_Text_ArnoldPostBattle, MSGBOX_AUTOCLOSE
	end

Zone2A_Text_ArnoldIntro:
	.string "Crawling... writhing...$"

Zone2A_Text_ArnoldDefeat:
	.string "Bug Pokémon!$"

Zone2A_Text_ArnoldPostBattle:
	.string "Soon... Evolution...$"

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
