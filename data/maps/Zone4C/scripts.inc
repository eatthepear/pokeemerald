Zone4C_MapScripts::
	.byte 0

Zone4C_EventScript_Patrick::
	trainerbattle_single TRAINER_PATRICK, Zone4C_Text_PatrickIntro, Zone4C_Text_PatrickDefeat
	msgbox Zone4C_Text_PatrickPostBattle, MSGBOX_AUTOCLOSE
	end

Zone4C_Text_PatrickIntro:
	.string "The more legs, the better!$"

Zone4C_Text_PatrickDefeat:
	.string "Oh... Come on!$"

Zone4C_Text_PatrickPostBattle:
	.string "Just wait till my Bugs are all evolved!$"

Zone4C_EventScript_ChloeandKaya::
	trainerbattle_double TRAINER_CHLOE_AND_KAYA, Zone4C_Text_ChloeandKayaIntro, Zone4C_Text_ChloeandKayaDefeat, gText_NotEnoughMons
	msgbox Zone4C_Text_ChloeandKayaPostBattle, MSGBOX_DEFAULT
	release
	end

Zone4C_Text_ChloeandKayaIntro:
	.string "Chloe: Twin power!\p"
	.string "Kaya: Activate!$"

Zone4C_Text_ChloeandKayaDefeat:
	.string "Kaya: Twin power!\p"
	.string "Chloe: Defeated!$"

Zone4C_Text_ChloeandKayaPostBattle:
	.string "Chloe: Twin power!\p"
	.string "Kaya: Twin power!$"

Zone4C_EventScript_ItemMuscleBand::
	finditem ITEM_MUSCLE_BAND
	end
