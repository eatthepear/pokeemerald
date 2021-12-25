Zone22A_MapScripts::
	.byte 0

Zone22A_EventScript_Exit::
	lockall
	goto_if_unset FLAG_BEATLEVIATHAN13, Zone22A_EventScript_LeviathanBattle
	releaseall
	end

Zone22A_EventScript_LeviathanBattle:
	fadeoutbgm 1
	msgbox Zone22A_Text_Pam_StopRightThere, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	addobject 11
	addobject 12
	clearflag FLAG_HIDE_CAM_AND_PAM
	applymovement 11, Zone22A_Movement_Cam_WalkUp
	applymovement 12, Zone22A_Movement_Pam_WalkUp
	waitmovement 0
	msgbox Zone22A_Text_Cam_LookWhatWeHave, MSGBOX_AUTOCLOSE
	msgbox Zone22A_Text_Pam_LittleTrainer, MSGBOX_AUTOCLOSE
	applymovement 11, Common_Movement_FaceRight
	applymovement 12, Common_Movement_FaceLeft
	waitmovement 0
	delay 32
	applymovement 11, Common_Movement_FaceUp
	applymovement 12, Common_Movement_FaceUp
	waitmovement 0
	getpartysize
	compare VAR_RESULT, 1
	goto_if_eq Zone22A_EventScript_DontHaveEnoughMons
	msgbox Zone22A_Text_Cam_WhatDo, MSGBOX_AUTOCLOSE
	msgbox Zone22A_Text_Pam_OurCombo, MSGBOX_AUTOCLOSE
	setvar VAR_MUGSHOT_ID, MUGSHOT_PAM_AND_CAM
	@ goto_if_set FLAG_BRUTAL_MODE_ON, Zone22A_EventScript_PamAndCamBrutal
	settotemboost B_POSITION_OPPONENT_RIGHT, 1, 1, 1, 1, 1
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1
	trainerbattle_no_intro TRAINER_LEVIATHAN13, Zone22A_Text_Leviathan13Defeat
	goto Zone22A_EventScript_Leviathan13Defeated
	end

Zone22A_EventScript_DontHaveEnoughMons:
	msgbox Zone22A_Text_Cam_Well, MSGBOX_AUTOCLOSE
	msgbox Zone22A_Text_Pam_GetMore, MSGBOX_AUTOCLOSE
	applymovement 11, Zone22A_Movement_Cam_WalkDown
	applymovement 12, Zone22A_Movement_Pam_WalkDown
	waitmovement 0
	setflag FLAG_HIDE_CAM_AND_PAM
	removeobject 11
	removeobject 12
	fadeinbgm 1
	releaseall
	end

Zone22A_EventScript_Leviathan13Defeated:
	setflag FLAG_BEATLEVIATHAN13
	msgbox Zone22A_Text_Cam_Wah, MSGBOX_AUTOCLOSE
	msgbox Zone22A_Text_Pam_Crushed, MSGBOX_AUTOCLOSE
	applymovement 11, Common_Movement_FaceRight
	applymovement 12, Common_Movement_FaceLeft
	waitmovement 0
	delay 32
	applymovement 11, Common_Movement_FaceUp
	applymovement 12, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone22A_Text_Pam_Strong, MSGBOX_AUTOCLOSE
	msgbox Zone22A_Text_Cam_GiveYou, MSGBOX_AUTOCLOSE
	giveitem ITEM_DESTINY_KNOT
	msgbox Zone22A_Text_Pam_Seeya, MSGBOX_AUTOCLOSE
	applymovement 11, Zone22A_Movement_Cam_WalkDown
	applymovement 12, Zone22A_Movement_Pam_WalkDown
	waitmovement 0
	setflag FLAG_HIDE_CAM_AND_PAM
	removeobject 11
	removeobject 12
	fadeinbgm 1
	releaseall
	end

Zone22A_Movement_Cam_WalkUp:
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Zone22A_Movement_Pam_WalkUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Zone22A_Movement_Cam_WalkDown:
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Zone22A_Movement_Pam_WalkDown:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Zone22A_Text_Pam_StopRightThere:
	.string "Pam: Stop right there!$"

Zone22A_Text_Cam_LookWhatWeHave:
	.string "Cam: Look what we have here, honey.\n"
	.string "Another lonely trainer!$"

Zone22A_Text_Pam_LittleTrainer:
	.string "Pam: Oh, little trainer.\n"
	.string "Don't you know you're trespassing?\p"
	.string "This is our private space!$"

Zone22A_Text_Cam_WhatDo:
	.string "Cam: Well then, trespasser.\p"
	.string "What shall we do with you?$"

Zone22A_Text_Pam_OurCombo:
	.string "Pam: The obvious thing, of course.\p"
	.string "Prepare to face the combined combo\n"
	.string "of Leviathan Pam and Cam!$"

Zone22A_Text_Leviathan13Defeat:
	.string "Pam: What? How did we lose?\p"
	.string "Cam: Our combo, ruined!$"

Zone22A_Text_Cam_Well:
	.string "Cam: Well, we were going to beat\n"
	.string "you in a battle.$"

Zone22A_Text_Pam_GetMore:
	.string "Pam: But you don't even have enough\n"
	.string "Pokémon. Go get some more!$"

Zone22A_Text_Cam_Wah:
	.string "Cam: Wah!$"

Zone22A_Text_Pam_Crushed:
	.string "Pam: Our perfect pair, defeated?\p"
	.string "It can't be!\l"
	.string "We're the perfect couple!$"

Zone22A_Text_Pam_Strong:
	.string "Pam: Our relationship is strong\n"
	.string "enough to get through anything.\p"
	.string "You've shown us that we just need\n"
	.string "to work harder, together!$"

Zone22A_Text_Cam_GiveYou:
	.string "Cam: Here's a little something for\n"
	.string "inspiring us.$"

Zone22A_Text_Pam_Seeya:
	.string "Pam: Well, we've got to run.\n"
	.string "Our dinner reservation is soon!\p"
	.string "Bye!$"

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
