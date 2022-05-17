Zone4A_MapScripts::
	.byte 0

Zone4A_EventScript_Sign::
	msgbox Zone4A_Text_Sign, MSGBOX_SIGN
	end

Zone4A_EventScript_ItemBurnHeal::
	finditem ITEM_BURN_HEAL
	end

Zone4A_Text_Sign:
	.string "These woods are enchanted...\n"
	.string "Don't get lost!$"

Zone4A_EventScript_Herman::
	trainerbattle_single TRAINER_HERMAN, Zone4A_Text_HermanIntro, Zone4A_Text_HermanDefeat
	msgbox Zone4A_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
	end

Zone4A_Text_HermanIntro:
	.string "I keep going through this exit,\n"
	.string "'cause it might lead somewhere!$"

Zone4A_Text_HermanDefeat:
	.string "But I keep getting back here!$"

Zone4A_Text_HermanPostBattle:
	.string "Try something else?\n"
	.string "No, I'm sure this is the right way!$"
