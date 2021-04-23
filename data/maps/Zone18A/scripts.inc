Zone18A_MapScripts::
	.byte 0

Zone18A_EventScript_Marion::
	trainerbattle_single TRAINER_MARION, Zone18A_Text_MarionIntro, Zone18A_Text_MarionDefeat
	msgbox Zone18A_Text_MarionPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18A_Text_MarionIntro:
	.string "What a relaxing day for a swim.\n"
	.string "You should get off that Surfboard\l"
	.string "and join me!$"

Zone18A_Text_MarionDefeat:
	.string "You're a good swimmer and battler!$"

Zone18A_Text_MarionPostBattle:
	.string "Sometimes I just like to float\n"
	.string "in the water, like a Wailmer.$"

Zone18A_EventScript_Clinton::
	trainerbattle_single TRAINER_CLINTON, Zone18A_Text_ClintonIntro, Zone18A_Text_ClintonDefeat
	msgbox Zone18A_Text_ClintonPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18A_Text_ClintonIntro:
	.string "Fishy fishy, come here...$"

Zone18A_Text_ClintonDefeat:
	.string "Fishy got away!$"

Zone18A_Text_ClintonPostBattle:
	.string "Fishy fishy fishy...$"

Zone18A_EventScript_Kenneth::
	trainerbattle_single TRAINER_KENNETH, Zone18A_Text_KennethIntro, Zone18A_Text_KennethDefeat
	msgbox Zone18A_Text_KennethPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18A_Text_KennethIntro:
	.string "Papa said I should wait here\n"
	.string "while he took care of business!$"

Zone18A_Text_KennethDefeat:
	.string "Wah!$"

Zone18A_Text_KennethPostBattle:
	.string "Papa isn't gonna be happy\n"
	.string "when he finds out I lost...$"

Zone18A_EventScript_HeatRock::
	finditem ITEM_HEAT_ROCK
	end

Zone18A_EventScript_TM16::
	finditem ITEM_TM16
	end
