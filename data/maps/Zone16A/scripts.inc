Zone16A_MapScripts::
	.byte 0

Zone16A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 16
	goto_if_gt EventScript_WarpZone0
	warp MAP_ZONE16SANCTUARY, 255, 22, 7
	releaseall
	end

Zone16A_EventScript_Sign::
	msgbox Zone16A_Text_Sign, MSGBOX_SIGN
	end

Zone16A_Text_Sign:
	.string "The sea is teeming with life.\n"
	.string "Don't litter!$"

Zone16A_EventScript_Angus::
	trainerbattle_single TRAINER_ANGUS, Zone16A_Text_AngusIntro, Zone16A_Text_AngusDefeat
	msgbox Zone16A_Text_AngusPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_AngusIntro:
	.string "Fishing isn't just a hobby.\n"
	.string "It's a lifestyle!$"

Zone16A_Text_AngusDefeat:
	.string "I've fished up defeat!$"

Zone16A_Text_AngusPostBattle:
	.string "Dive Balls can help capture\n"
	.string "Pokémon while fishing.$"

Zone16A_EventScript_Homer::
	trainerbattle_single TRAINER_HOMER, Zone16A_Text_HomerIntro, Zone16A_Text_HomerDefeat
	msgbox Zone16A_Text_HomerPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_HomerIntro:
	.string "A leisurely swim in the sea...\p"
	.string "Oh, you want to battle?\p"
	.string "Let's get started, then!$"

Zone16A_Text_HomerDefeat:
	.string "I was a bit too sluggish\n"
	.string "to win!$"

Zone16A_Text_HomerPostBattle:
	.string "Now, a leisurely swim to\n"
	.string "ease my defeat.$"

Zone16A_EventScript_Iona::
	trainerbattle_single TRAINER_IONA, Zone16A_Text_IonaIntro, Zone16A_Text_IonaDefeat
	msgbox Zone16A_Text_IonaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_IonaIntro:
	.string "The Water Pokémon are tickling\n"
	.string "my toes!$"

Zone16A_Text_IonaDefeat:
	.string "Oh, that was just seaweed.$"

Zone16A_Text_IonaPostBattle:
	.string "Don't you love that there is such\n"
	.string "a diversity of Water Pokémon?$"

Zone16A_EventScript_Tanisha::
	trainerbattle_single TRAINER_TANISHA, Zone16A_Text_TanishaIntro, Zone16A_Text_TanishaDefeat
	msgbox Zone16A_Text_TanishaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_TanishaIntro:
	.string "Have you ever been to a\n"
	.string "Lazy River?$"

Zone16A_Text_TanishaDefeat:
	.string "It's the best place for Tubers!$"

Zone16A_Text_TanishaPostBattle:
	.string "Lazy River is the best!$"

Zone16A_EventScript_Rafael::
	trainerbattle_single TRAINER_RAFAEL, Zone16A_Text_RafaelIntro, Zone16A_Text_RafaelDefeat
	msgbox Zone16A_Text_RafaelPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_RafaelIntro:
	.string "Sometimes I get tired of\n"
	.string "swimming, so I just float.$"

Zone16A_Text_RafaelDefeat:
	.string "Wheeee!$"

Zone16A_Text_RafaelPostBattle:
	.string "Just floating is fun.$"

Zone16A_EventScript_Otis::
	trainerbattle_single TRAINER_OTIS, Zone16A_Text_OtisIntro, Zone16A_Text_OtisDefeat
	msgbox Zone16A_Text_OtisPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_OtisIntro:
	.string "My team is impeccable!\n"
	.string "Prepare to be crushed!$"

Zone16A_Text_OtisDefeat:
	.string "I tried to intimidate you,\n"
	.string "but you saw through the facade!$"

Zone16A_Text_OtisPostBattle:
	.string "Can't I catch a break?$"

Zone16A_EventScript_Berke::
	trainerbattle_single TRAINER_BERKE, Zone16A_Text_BerkeIntro, Zone16A_Text_BerkeDefeat
	msgbox Zone16A_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_BerkeIntro:
	.string "Just keep swimming,\n"
	.string "just keep swimming!$"

Zone16A_Text_BerkeDefeat:
	.string "It's a good motto, right?$"

Zone16A_Text_BerkePostBattle:
	.string "Who's Dory?$"

Zone16A_EventScript_Georgina::
	trainerbattle_single TRAINER_GEORGINA, Zone16A_Text_GeorginaIntro, Zone16A_Text_GeorginaDefeat
	msgbox Zone16A_Text_GeorginaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_GeorginaIntro:
	.string "Up, right, left, down,\p"
	.string "up, right, left, down!$"

Zone16A_Text_GeorginaDefeat:
	.string "It's my little chant.$"

Zone16A_Text_GeorginaPostBattle:
	.string "I'm practicing for my\n"
	.string "upcoming competition!$"

Zone16A_EventScript_Russell::
	trainerbattle_single TRAINER_RUSSELL, Zone16A_Text_RussellIntro, Zone16A_Text_RussellDefeat
	msgbox Zone16A_Text_RussellPostBattle, MSGBOX_AUTOCLOSE
	end

Zone16A_Text_RussellIntro:
	.string "The sea is my life,\n"
	.string "and my life is the sea.$"

Zone16A_Text_RussellDefeat:
	.string "But my heart is battle!$"

Zone16A_Text_RussellPostBattle:
	.string "I'll sea you another time.$"

Zone16A_EventScript_DiveBall::
	finditem ITEM_DIVE_BALL
	end

Zone16A_EventScript_WaterStone::
	finditem ITEM_WATER_STONE
	end

Zone16A_EventScript_TM19::
	finditem ITEM_TM19
	end

Zone16A_EventScript_TM20::
	finditem ITEM_TM20
	end
