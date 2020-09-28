Zone7A_MapScripts::
	.byte 0

Zone7A_EventScript_Millie::
	trainerbattle_single TRAINER_MILLIE, Zone7A_Text_MillieIntro, Zone7A_Text_MillieDefeat
	msgbox Zone7A_Text_MilliePostBattle, MSGBOX_AUTOCLOSE
	end

Zone7A_Text_MillieIntro:
	.string "At the base of this mountain,"
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


