Zone25A_MapScripts::
	.byte 0

Zone25A_EventScript_Sandy::
	trainerbattle_single TRAINER_SANDY, Zone25A_Text_SandyIntro, Zone25A_Text_SandyDefeat
	msgbox Zone25A_Text_SandyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone25A_Text_SandyIntro:
	.string "$"

Zone25A_Text_SandyDefeat:
	.string "$"

Zone25A_Text_SandyPostBattle:
	.string "$"
