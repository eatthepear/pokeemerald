Zone4B_MapScripts::
	.byte 0

Zone4B_EventScript_Ralph::
	trainerbattle_single TRAINER_RALPH, Zone4B_Text_RalphIntro, Zone4B_Text_RalphDefeat
	msgbox Zone4B_Text_RalphPostBattle, MSGBOX_AUTOCLOSE
	end

Zone4B_Text_RalphIntro:
	.string "Ugh, where am I? Maybe you'll\n"
	.string "tell me if I beat you!$"

Zone4B_Text_RalphDefeat:
	.string "You don't know either? Oof!$"

Zone4B_Text_RalphPostBattle:
	.string "I guess the more important question is\n"
	.string "where am I going?$"

Zone4B_EventScript_ItemAwakening::
	finditem ITEM_AWAKENING
	end
