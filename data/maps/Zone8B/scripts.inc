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

Zone8B_EventScript_Karen::
	trainerbattle_single TRAINER_KAREN, Zone8B_Text_KarenIntro, Zone8B_Text_KarenDefeat
	msgbox Zone8B_Text_KarenPostBattle, MSGBOX_AUTOCLOSE
	end

Zone8B_Text_KarenIntro:
	.string "Can I speak to your manager?$"

Zone8B_Text_KarenDefeat:
	.string "What do you mean you don't have a\n"
	.string "manager?$"

Zone8B_Text_KarenPostBattle:
	.string "Argh! You're a cheapskate,\n"
	.string "just like the rest of them!$"

Zone8B_EventScript_ItemDuskBall::
	finditem ITEM_DUSK_BALL
	end

Zone8B_EventScript_ItemFullHeal::
	finditem ITEM_FULL_HEAL
	end

Zone8B_EventScript_ItemHardStone::
	finditem ITEM_HARD_STONE
	end
