Zone4E_MapScripts::
	.byte 0

Zone4E_EventScript_Declan::
	trainerbattle_single TRAINER_DECLAN, Zone4E_Text_DeclanIntro, Zone4E_Text_DeclanDefeat
	msgbox Zone4E_Text_DeclanPostBattle, MSGBOX_AUTOCLOSE
	end

Zone4E_Text_DeclanIntro:
	.string "Let me sing you the song of my people!$"

Zone4E_Text_DeclanDefeat:
	.string "Bug Pokémon! Bug Pokémon!$"

Zone4E_Text_DeclanPostBattle:
	.string "Did you like my song?$"

Zone4E_EventScript_ItemRareCandy::
	finditem ITEM_RARE_CANDY
	end