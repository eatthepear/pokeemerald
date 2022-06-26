Zone8A_MapScripts::
	.byte 0

Zone8A_EventScript_Jimmy::
	trainerbattle_single TRAINER_JIMMY, Zone8A_Text_JimmyIntro, Zone8A_Text_JimmyDefeat
	msgbox Zone8A_Text_JimmyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone8A_Text_JimmyIntro:
	.string "Rare Pokémon… Do you have them?$"

Zone8A_Text_JimmyDefeat:
	.string "You do! You do have rare Pokémon!$"

Zone8A_Text_JimmyPostBattle:
	.string "I want to collect all the rare\n"
	.string "Pokémon in the world!$"

Zone8A_EventScript_Emiliano::
	trainerbattle_single TRAINER_EMILIANO, Zone8A_Text_EmilianoIntro, Zone8A_Text_EmilianoDefeat
	msgbox Zone8A_Text_EmilianoPostBattle, MSGBOX_AUTOCLOSE
	end

Zone8A_Text_EmilianoIntro:
	.string "I'm so hungry…$"

Zone8A_Text_EmilianoDefeat:
	.string "It's because I keep thinking about\n"
	.string "pancakes!$"

Zone8A_Text_EmilianoPostBattle:
	.string "Mmm… Pancakes…$"

Zone8A_EventScript_Marcus::
	trainerbattle_single TRAINER_MARCUS, Zone8A_Text_MarcusIntro, Zone8A_Text_MarcusDefeat
	msgbox Zone8A_Text_MarcusPostBattle, MSGBOX_AUTOCLOSE
	end

Zone8A_Text_MarcusIntro:
	.string "If I win, you have to lead me out of here!$"

Zone8A_Text_MarcusDefeat:
	.string "Wahhhhh!!!$"

Zone8A_Text_MarcusPostBattle:
	.string "It's my destiny to wander this cave\n"
	.string "forever…$"

Zone8A_EventScript_ItemMagnet::
	finditem ITEM_MAGNET
	end

Zone8A_EventScript_ItemPokeBall::
	finditem ITEM_POKE_BALL
	end

Zone8A_EventScript_ItemSoftSand::
	finditem ITEM_SOFT_SAND
	end
