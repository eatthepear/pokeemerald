Zone22A_MapScripts::
	.byte 0

Zone22A_EventScript_Cody::
	trainerbattle_single TRAINER_CODY, Zone22A_Text_CodyIntro, Zone22A_Text_CodyDefeat
	msgbox Zone22A_Text_CodyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone22A_Text_CodyIntro:
	.string "Running through the snow makes my\n"
	.string "workout that much more intense!$"

Zone22A_Text_CodyDefeat:
	.string "But brr! It's so cold!$"

Zone22A_Text_CodyPostBattle:
	.string "Maybe I'll stick to the treadmill\n"
	.string "next time.$"

Zone22A_EventScript_Lewis::
	trainerbattle_single TRAINER_LEWIS, Zone22A_Text_LewisIntro, Zone22A_Text_LewisDefeat
	msgbox Zone22A_Text_LewisPostBattle, MSGBOX_AUTOCLOSE
	end

Zone22A_Text_LewisIntro:
	.string "Did you know you can cancel a\n"
	.string "Pokémon's evolution?$"

Zone22A_Text_LewisDefeat:
	.string "Yeah, I just like the challenge!$"

Zone22A_Text_LewisPostBattle:
	.string "I love all Bug Pokémon, even if\n"
	.string "they're not fully evolved!$"

Zone22A_EventScript_Cornelius::
	trainerbattle_single TRAINER_CORNELIUS, Zone22A_Text_CorneliusIntro, Zone22A_Text_CorneliusDefeat
	msgbox Zone22A_Text_CorneliusPostBattle, MSGBOX_AUTOCLOSE
	end

Zone22A_Text_CorneliusIntro:
	.string "To protect all Pokémon!\n"
	.string "That's the Pokémon Ranger motto!$"

Zone22A_Text_CorneliusDefeat:
	.string "You're strong!$"

Zone22A_Text_CorneliusPostBattle:
	.string "Being a Pokémon Ranger is a really\n"
	.string "rewarding career!\p"
	.string "You should consider it!$"

Zone22A_EventScript_InezandEmma::
	trainerbattle_double TRAINER_INEZ_AND_EMMA, Zone22A_Text_InezandEmmaIntro, Zone22A_Text_InezandEmmaDefeat, gText_NotEnoughMons
	msgbox Zone22A_Text_InezandEmmaPostBattle, MSGBOX_DEFAULT
	release
	end

Zone22A_Text_InezandEmmaIntro:
	.string "Inez: The cold don't bother!\p"
	.string "Emma: We got fire!$"

Zone22A_Text_InezandEmmaDefeat:
	.string "Emma: Our fires are put out!\p"
	.string "Inez: We're all out of gas!$"

Zone22A_Text_InezandEmmaPostBattle:
	.string "Inez: Dad tells us jokes!\p"
	.string "Emma: He calls them puns!$"

Zone22A_EventScript_Helen::
	trainerbattle_single TRAINER_HELEN, Zone22A_Text_HelenIntro, Zone22A_Text_HelenDefeat
	msgbox Zone22A_Text_HelenPostBattle, MSGBOX_AUTOCLOSE
	end

Zone22A_Text_HelenIntro:
	.string "You ever just decide that today is\n"
	.string "the day you're going to picnic in a\l"
	.string "snowy forest?$"

Zone22A_Text_HelenDefeat:
	.string "Okay, I know, I'm weird.$"

Zone22A_Text_HelenPostBattle:
	.string "In my defense, this place certainly\n"
	.string "has its charm.$"

Zone22A_EventScript_Wesley::
	trainerbattle_single TRAINER_WESLEY, Zone22A_Text_WesleyIntro, Zone22A_Text_WesleyDefeat
	msgbox Zone22A_Text_WesleyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone22A_Text_WesleyIntro:
	.string "Imagine! Hiking a vast, snowy\n"
	.string "mountain! Oh, the challenge!$"

Zone22A_Text_WesleyDefeat:
	.string "Oh, disappointment!$"

Zone22A_Text_WesleyPostBattle:
	.string "I think I'll stick to hiking.$"

Zone22A_EventScript_Alfredo::
	trainerbattle_single TRAINER_ALFREDO, Zone22A_Text_AlfredoIntro, Zone22A_Text_AlfredoDefeat
	msgbox Zone22A_Text_AlfredoPostBattle, MSGBOX_AUTOCLOSE
	end

Zone22A_Text_AlfredoIntro:
	.string "TRAINING! BATTLE!$"

Zone22A_Text_AlfredoDefeat:
	.string "DEFEAT!$"

Zone22A_Text_AlfredoPostBattle:
	.string "TRAINING! ONCE MORE!$"

Zone22A_EventScript_Ian::
	trainerbattle_single TRAINER_IAN, Zone22A_Text_IanIntro, Zone22A_Text_IanDefeat
	msgbox Zone22A_Text_IanPostBattle, MSGBOX_AUTOCLOSE
	end

Zone22A_Text_IanIntro:
	.string "Chestnuts roasting on an open fire…$"

Zone22A_Text_IanDefeat:
	.string "It's from a song!$"

Zone22A_Text_IanPostBattle:
	.string "But what is a chestnut anyway?$"

Zone22A_EventScript_Audrey::
	trainerbattle_single TRAINER_AUDREY, Zone22A_Text_AudreyIntro, Zone22A_Text_AudreyDefeat
	msgbox Zone22A_Text_AudreyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone22A_Text_AudreyIntro:
	.string "A rare Pokémon has been spotted!$"

Zone22A_Text_AudreyDefeat:
	.string "My bad. It was just you.$"

Zone22A_Text_AudreyPostBattle:
	.string "Am I disappointed?\n"
	.string "Maybe a little bit.$"
