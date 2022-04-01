Zone8C_MapScripts::
	.byte 0

Zone8C_EventScript_Neil::
	trainerbattle_single TRAINER_NEIL, Zone8C_Text_NeilIntro, Zone8C_Text_NeilDefeat
	msgbox Zone8C_Text_NeilPostBattle, MSGBOX_AUTOCLOSE
	end

Zone8C_Text_NeilIntro:
	.string "I'm looking for another path down...$"

Zone8C_Text_NeilDefeat:
	.string "But all I found is you.$"

Zone8C_Text_NeilPostBattle:
	.string "Maybe it's on the other side\n"
	.string "of the mountain?$"

Zone8C_EventScript_ItemSuperPotion::
	finditem ITEM_SUPER_POTION
	end

Zone8C_EventScript_ItemGreatBall::
	finditem ITEM_GREAT_BALL
	end

Zone8C_EventScript_ItemPotion::
	finditem ITEM_POTION
	end
