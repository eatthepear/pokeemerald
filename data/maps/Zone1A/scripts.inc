Zone1A_MapScripts::
	.byte 0

Zone1A_EventScript_Corey::
	trainerbattle_single TRAINER_COREY, Zone1A_Text_CoreyIntro, Zone1A_Text_CoreyDefeat
	msgbox Zone1A_Text_CoreyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone1A_Text_CoreyIntro:
	.string "Hey, you! Let's battle!$"

Zone1A_Text_CoreyDefeat:
	.string "Aww... Come on!$"

Zone1A_Text_CoreyPostBattle:
	.string "I always lose...$"

Zone1A_EventScript_Mariam::
	trainerbattle_single TRAINER_MARIAM, Zone1A_Text_MariamIntro, Zone1A_Text_MariamDefeat
	msgbox Zone1A_Text_MariamPostBattle, MSGBOX_AUTOCLOSE
	end

Zone1A_Text_MariamIntro:
	.string "Be careful, I'm tough!$"

Zone1A_Text_MariamDefeat:
	.string "Sheesh!$"

Zone1A_Text_MariamPostBattle:
	.string "Maybe I'll catch more Pokémon.$"
