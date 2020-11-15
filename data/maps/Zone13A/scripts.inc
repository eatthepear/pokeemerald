Zone13A_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Zone13A_OnTransition
	.byte 0

Zone13A_OnTransition:
	goto_if_not_defeated TRAINER_ALINTA, Zone13A_EventScript_MoveAlinta
	end

Zone13A_EventScript_MoveAlinta:
	setobjectxyperm 1, 29, 19
	end

Zone13A_EventScript_Alinta::
	lock
	faceplayer
	goto_if_defeated TRAINER_ALINTA, Zone13A_EventScript_AlintaPostDefeat
	msgbox Zone13A_Text_Alinta_OffLimits, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_ExclamationMark
	msgbox Zone13A_Text_Help, MSGBOX_AUTOCLOSE
	waitmovement 0
	applymovement 1, Common_Movement_FaceUp
	msgbox Zone13A_Text_Alinta_Silence, MSGBOX_AUTOCLOSE
	waitmovement 0
	delay 96
	faceplayer
	msgbox Zone13A_Text_Alinta_HeardThat, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_ALINTA, Zone13A_Text_AlintaDefeat
	goto Zone13A_EventScript_AlintaDefeated
	end

Zone13A_Text_Alinta_OffLimits:
	.string "{COLOR BLUE}Alinta{COLOR DARK_GREY}: This area is strictly off\n"
	.string "limits to civilians. The officials\l"
	.string "are taking care of it.$"

Zone13A_Text_Help:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: Help us! We're trapped inside!$"

Zone13A_Text_Alinta_Silence:
	.string "{COLOR BLUE}Alinta{COLOR DARK_GREY}: Silence the hostages!$"

Zone13A_Text_Alinta_HeardThat:
	.string "{COLOR BLUE}Alinta{COLOR DARK_GREY}: Oh. You heard that. I guess\n"
	.string "someone's got to keep you quiet!$"

Zone13A_Text_AlintaDefeat:
	.string "Bested by a child...$"

Zone13A_EventScript_AlintaDefeated:
	msgbox Zone13A_Text_Alinta_GetOut, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_WalkRight
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Zone13A_Text_Alinta_GetOut:
	.string "{COLOR BLUE}Alinta{COLOR DARK_GREY}: Ugh. Get out of my sight.$"

Zone13A_EventScript_AlintaPostDefeat:
	msgbox Zone13A_Text_Alinta_GetOut, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

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
	.string "the one-two, okay?$"
	.string "Kim: Okay, sister!$"
