Zone7A_MapScripts::
	.byte 0


Zone7A_EventScript_LeviathanBattle::
	lock
	faceplayer
	fadeoutbgm 1
	msgbox Zone7A_Text_Leviathan7Intro
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone7A_EventScript_LeviathanBattle_2
	setvar VAR_MUGSHOT_ID, MUGSHOT_BETTY
	trainerbattle_no_intro TRAINER_BETTY_LEVIATHAN_7, Zone7A_Text_Leviathan7Defeat
Zone7A_EventScript_LeviathanBattle_1:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone7A_EventScript_LeviathanBattle_Text_0
	giveitem ITEM_SITRUS_BERRY, 5
	msgbox Zone7A_EventScript_LeviathanBattle_Text_1
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 1
	setflag FLAG_BEAT_LEVIATHAN_7
	fadescreen FADE_FROM_BLACK
	release
	end

Zone7A_EventScript_LeviathanBattle_2:
	setvar VAR_MUGSHOT_ID, MUGSHOT_BETTY
	trainerbattle_no_intro TRAINER_BETTY_LEVIATHAN_7_BRUTAL, Zone7A_Text_Leviathan7Defeat
	goto Zone7A_EventScript_LeviathanBattle_1


Zone7A_EventScript_Millie::
	trainerbattle_single TRAINER_MILLIE, Zone7A_Text_MillieIntro, Zone7A_Text_MillieDefeat
	msgbox Zone7A_Text_MilliePostBattle, MSGBOX_AUTOCLOSE
	end

Zone7A_Text_MillieIntro:
	.string "At the base of this mountain,\n"
	.string "is a perfect spot for battle!$"

Zone7A_Text_MillieDefeat:
	.string "This spot is now tainted, by\n"
	.string "my defeat!$"

Zone7A_Text_MilliePostBattle:
	.string "It's a good spot for camping, too!$"

Zone7A_EventScript_Paige::
	trainerbattle_single TRAINER_PAIGE, Zone7A_Text_PaigeIntro, Zone7A_Text_PaigeDefeat
	msgbox Zone7A_Text_PaigePostBattle, MSGBOX_AUTOCLOSE
	end

Zone7A_Text_PaigeIntro:
	.string "My son ran up the steps so fast!$"

Zone7A_Text_PaigeDefeat:
	.string "I just can't keep up!$"

Zone7A_Text_PaigePostBattle:
	.string "Maybe I'll rest in the rest house...$"

Zone7A_EventScript_Jamal::
	trainerbattle_single TRAINER_JAMAL, Zone7A_Text_JamalIntro, Zone7A_Text_JamalDefeat
	msgbox Zone7A_Text_JamalPostBattle, MSGBOX_AUTOCLOSE
	end

Zone7A_Text_JamalIntro:
	.string "Momma! You're too slow!$"

Zone7A_Text_JamalDefeat:
	.string "I wasn't fast enough!$"

Zone7A_Text_JamalPostBattle:
	.string "I'm all out of energy...\n"
	.string "Snack time!$"

Zone7A_EventScript_ItemSharpBeak::
	finditem ITEM_SHARP_BEAK
	end

Zone7A_EventScript_ItemSuperPotion::
	finditem ITEM_SUPER_POTION
	end

Zone7A_EventScript_ItemTwistedSpoon::
	finditem ITEM_TWISTED_SPOON
	end

Zone7A_EventScript_ItemRockyHelmet::
	finditem ITEM_ROCKY_HELMET
	end

Zone7A_EventScript_ItemPoisonBarb::
	finditem ITEM_POISON_BARB
	end

Zone7A_EventScript_ItemNestBall::
	finditem ITEM_NEST_BALL
	end

Zone7A_EventScript_ItemSilverPowder::
	finditem ITEM_SILVER_POWDER
	end

Zone7A_EventScript_HealSign::
	msgbox Zone7A_Text_HealSign, MSGBOX_SIGN
	end

Zone7A_Text_HealSign:
	.string "A stop for weary travelers.$"

Zone7A_EventScript_NoFish::
	msgbox Zone7A_Text_NoFish, MSGBOX_SIGN
	end

Zone7A_Text_NoFish:
	.string "Due to nitrogen runoff, there are\n"
	.string "no Pokémon living in the water.$"

Zone7A_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: Child, while your battling skills\n"
	.string "are certainly up to par, might I\l"
	.string "suggest a little more…{PAUSE_UNTIL_PRESS}effort into your\l"
	.string "outfit?\p"
	.string "Aside from that, I'd like to give you\n"
	.string "these Berries.\p"
	.string "Very, very expensive, or so my butler\n"
	.string "tells me.$"

Zone7A_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: It seems it's time for my\n"
	.string "afternoon bath.\p"
	.string "Goodbye.$"

Zone7A_Text_Leviathan7Intro::
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: Child, your clothes are all\n"
	.string "covered in dirt.\p"
	.string "I suppose {COLOR BLUE}Leviathan Betty{COLOR DARK_GRAY} had ought to\n"
	.string "give you a lesson in proper etiquette!$"

Zone7A_Text_Leviathan7Defeat::
	.string "It seems I was the one who ended\n"
	.string "up being humbled…$"
