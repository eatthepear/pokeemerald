Zone4C_MapScripts::
	.byte 0

Zone4C_EventScript_Santiago::
	trainerbattle_single TRAINER_SANTIAGO, Zone4C_Text_SantiagoIntro, Zone4C_Text_SantiagoDefeat
	msgbox Zone4C_Text_SantiagoPostBattle, MSGBOX_AUTOCLOSE
	end

Zone4C_Text_SantiagoIntro:
	.string "I've collected rare Bug Pokémon!\n"
	.string "Here, let me show you!$"

Zone4C_Text_SantiagoDefeat:
	.string "Why are they so weak, though?$"

Zone4C_Text_SantiagoPostBattle:
	.string "I'll just work on evolving them.\n"
	.string "Then I can finally win!$"

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

Zone4C_EventScript_Sign::
	msgbox Zone4C_Text_Sign, MSGBOX_SIGN
	end

Zone4C_Text_Sign:
	.string "There is a 20% chance to encounter\n"
	.string "wild Pokémon in a Double Battle.$"
