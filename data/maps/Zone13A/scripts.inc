Zone13A_MapScripts::
	.byte 0

Zone13A_EventScript_JanandErin::
	trainerbattle_double TRAINER_JAN_AND_ERIN, Zone13A_Text_JanandErinIntro, Zone13A_Text_JanandErinDefeat, gText_NotEnoughMons
	msgbox Zone13A_Text_JanandErinPostBattle, MSGBOX_DEFAULT
	release
	end

Zone13A_Text_JanandErinIntro:
	.string "Jan: After our time together\n"
	.string "terrorizing new trainers in Kalos,\p"
	.string "Erin: We've come to rain on your\n"
	.string "parade with our Furfrou!$"

Zone13A_Text_JanandErinDefeat:
	.string "Jan: My Furfrou!\p"
	.string "Erin: My Furfrou!$"

Zone13A_Text_JanandErinPostBattle:
	.string "Jan: Maybe it's time to settle down.\p"
	.string "Erin: Yeah. In Hoenn, maybe.$"

Zone13A_EventScript_AmberandKim::
	trainerbattle_double TRAINER_AMBER_AND_KIM, Zone13A_Text_AmberandKimIntro, Zone13A_Text_AmberandKimDefeat, gText_NotEnoughMons
	msgbox Zone13A_Text_AmberandKimPostBattle, MSGBOX_DEFAULT
	release
	end

Zone13A_Text_AmberandKimIntro:
	.string "Amber: As twins, we're in sync!\n"
	.string "We always finish each others\p"
	.string "Kim: Sandwiches!$"

Zone13A_Text_AmberandKimDefeat:
	.string "Amber: Let it go!\p"
	.string "Kim: I love Frozen!$"

Zone13A_Text_AmberandKimPostBattle:
	.string "Amber: Kim, next time, hit em with\n"
	.string "the one-two, okay?\p"
	.string "Kim: Okay, sister!$"

Zone13A_EventScript_SuperPotion::
	finditem ITEM_SUPER_POTION
	end

Zone13A_EventScript_Sign::
	msgbox Zone13A_Text_Sign, MSGBOX_SIGN
	end

Zone13A_Text_Sign:
	.string "Mining Facility$"
