Zone1A_MapScripts::
	.byte 0

Zone1A_EventScript_Corey::
	trainerbattle_single TRAINER_COREY, Zone1A_Text_CoreyIntro, Zone1A_Text_CoreyDefeat
	msgbox Zone1A_Text_CoreyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone1A_Text_CoreyIntro:
	.string "Hey, you! Let's battle!$"

Zone1A_Text_CoreyDefeat:
	string "Aww... Come on!$"

Zone1A_Text_CoreyPostBattle:
	.string "I always lose...$"