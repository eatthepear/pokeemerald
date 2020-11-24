Zone8B_MapScripts::
	.byte 0

Zone8B_EventScript_Jayden::
	trainerbattle_single TRAINER_JAYDEN, Zone8B_Text_JaydenIntro, Zone8B_Text_JaydenDefeat
	msgbox Zone8B_Text_JaydenPostBattle, MSGBOX_AUTOCLOSE
	end

Zone8B_Text_JaydenIntro:
	.string "I'm an explorer, a spelunkerer,\n"
	.string "an adventurer, a Hiker!$"

Zone8B_Text_JaydenDefeat:
	.string "Also a bit of a sore loser...$"

Zone8B_Text_JaydenPostBattle:
	.string "Next time, I'll be a winner too!$"

Zone8B_EventScript_Anita::
	trainerbattle_single TRAINER_ANITA, Zone8B_Text_AnitaIntro, Zone8B_Text_AnitaDefeat
	msgbox Zone8B_Text_AnitaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone8B_Text_AnitaIntro:
	.string "If I win, you have to lead me out of here!$"

Zone8B_Text_AnitaDefeat:
	.string "Wahhhhh!!!$"

Zone8B_Text_AnitaPostBattle:
	.string "It's my destiny to wander this cave\n"
	.string "forever...$"

Zone8B_EventScript_ItemDuskBall::
	finditem ITEM_DUSK_BALL
	end

Zone8B_EventScript_ItemFullHeal::
	finditem ITEM_FULL_HEAL
	end

Zone8B_EventScript_ItemHardStone::
	finditem ITEM_HARD_STONE
	end
