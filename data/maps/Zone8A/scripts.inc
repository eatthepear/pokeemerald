Zone8A_MapScripts::
	.byte 0

Zone8A_EventScript_Emiliano::
	trainerbattle_single TRAINER_EMILIANO, Zone8A_Text_EmilianoIntro, Zone8A_Text_EmilianoDefeat
	msgbox Zone8A_Text_EmilianoPostBattle, MSGBOX_AUTOCLOSE
	end

Zone8A_Text_EmilianoIntro:
	.string "I'm so hungry...$"

Zone8A_Text_EmilianoDefeat:
	.string "It's because I keep thinking about\n"
	.string "pancakes!$"

Zone8A_Text_EmilianoPostBattle:
	.string "Mmm... Pancakes...$"

Zone8A_EventScript_Marcus::
	trainerbattle_single TRAINER_MARCUS, Zone8A_Text_MarcusIntro, Zone8A_Text_MarcusDefeat
	msgbox Zone8A_Text_MarcusPostBattle, MSGBOX_AUTOCLOSE
	end

Zone8A_Text_MarcusIntro:
	.string "I wonder how far this cave goes.$"

Zone8A_Text_MarcusDefeat:
	.string "At least there's a rest house outside.$"

Zone8A_Text_MarcusPostBattle:
	.string "The lady says we can only heal once.$"

Zone8A_EventScript_ItemMagnet::
	finditem ITEM_MAGNET
	end

Zone8A_EventScript_ItemPokeBall::
	finditem ITEM_POKE_BALL
	end

Zone8A_EventScript_ItemSoftSand::
	finditem ITEM_SOFT_SAND
	end
