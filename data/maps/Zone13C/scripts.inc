Zone13C_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Zone13C_OnTransition
	.byte 0

Zone13C_OnTransition:
	goto_if_unset FLAG_BEATLEVIATHAN7 Zone13C_EventScript_HideLeviathan8
	goto Zone13C_EventScript_HideLeviathan7
	end

Zone13C_EventScript_HideLeviathan7:
	removeobject 1
	setflag FLAG_HIDE_LEVIATHAN7
	clearflag FLAG_HIDE_LEVIATHAN8
	end

Zone13C_EventScript_HideLeviathan8:
	removeobject 2
	setflag FLAG_HIDE_LEVIATHAN8
	clearflag FLAG_HIDE_LEVIATHAN7
	end

Zone13C_EventScript_KeizanBlackBelt::
	lock
	faceplayer
	goto_if_set FLAG_BEATLEVIATHAN7, Zone13C_EventScript_KeizanBlackBelt_ComeBack
	msgbox Zone13C_Text_KeizanBlackBelt_Battle, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone13C_EventScript_Keizan_ISee
	fadeoutbgm 1
	msgbox Zone13C_Text_KeizanBlackBelt_LetsGetStarted, MSGBOX_AUTOCLOSE
	setvar VAR_MUGSHOT_ID, MUGSHOT_KAIZEN1
	trainerbattle_no_intro TRAINER_LEVIATHAN7, Zone13C_Text_Leviathan7Defeat
	goto Zone13C_EventScript_Leviathan7Defeated
	end

Zone13C_Text_KeizanBlackBelt_Battle:
	.string "{COLOR BLUE}Keizan{COLOR DARK_GRAY}: Greetings.\n"
	.string "I am {COLOR BLUE}Leviathan Keizan{COLOR DARK_GRAY}.\p"
	.string "Would you do me the honor of\n"
	.string "engaging in battle?$"

Zone13C_Text_KeizanBlackBelt_LetsGetStarted:
	.string "Excellent. Let us get started.\p"
	.string "Kiai!$"

Zone13C_Text_Leviathan7Defeat:
	.string "Well matched.$"

Zone13C_EventScript_Keizan_ISee:
	msgbox Zone13C_Text_Keizan_ISee, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_Keizan_ISee:
	.string "I see.$"

Zone13C_EventScript_Leviathan7Defeated:
	setflag FLAG_BEATLEVIATHAN7
	msgbox Zone13C_Text_KeizanBlackBelt_HereTM, MSGBOX_DEFAULT
	giveitem ITEM_TM08
	msgbox Zone13C_Text_KeizanBlackBelt_ExplainTM, MSGBOX_DEFAULT
	goto Zone13C_EventScript_KeizanBlackBelt_ComeBack
	end

Zone13C_Text_KeizanBlackBelt_HereTM:
	.string "{COLOR BLUE}Keizan{COLOR DARK_GRAY}: For the victor go the spoils.$"

Zone13C_Text_KeizanBlackBelt_ExplainTM:
	.string "{COLOR BLUE}Keizan{COLOR DARK_GRAY}: TM08 - Bulk Up helps your\n"
	.string "Pokémon grow ever stronger.$"

Zone13C_EventScript_KeizanBlackBelt_ComeBack:
	msgbox Zone13C_Text_KeizanBlackBelt_ComeBack, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_KeizanBlackBelt_ComeBack:
	.string "{COLOR BLUE}Keizan{COLOR DARK_GRAY}: You should come back later.\n"
	.string "I have other strengths aside from\l"
	.string "my karate training.$"

Zone13C_EventScript_KeizanPsychic::
	lock
	faceplayer
	goto_if_set FLAG_BEATLEVIATHAN8, Zone13C_EventScript_KeizanPsychic_LikeHome
	msgbox Zone13C_Text_KeizanPsychic_Battle, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone13C_EventScript_Keizan_ISee
	fadeoutbgm 1
	msgbox Zone13C_Text_KeizanPsychic_FairBetter, MSGBOX_AUTOCLOSE
	setvar VAR_MUGSHOT_ID, MUGSHOT_KAIZEN2
	trainerbattle_no_intro TRAINER_LEVIATHAN8, Zone13C_Text_Leviathan8Defeat
	goto Zone13C_EventScript_Leviathan8Defeated
	end

Zone13C_Text_KeizanPsychic_Battle:
	.string "{COLOR BLUE}Keizan{COLOR DARK_GRAY}: Yes, I am both a Psychic\n"
	.string "and a Black Belt.\p"
	.string "Speaking of which, I would like to\n"
	.string "battle again, if you are up to it?$"

Zone13C_Text_KeizanPsychic_FairBetter:
	.string "Perhaps I will fair better with a\n"
	.string "different angle of attack!$"

Zone13C_Text_Leviathan8Defeat:
	.string "Well matched.$"

Zone13C_EventScript_Leviathan8Defeated:
	setflag FLAG_BEATLEVIATHAN8
	msgbox Zone13C_Text_KeizanPsychic_HereTM, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM09
	msgbox Zone13C_Text_KeizanPsychic_ExplainTM, MSGBOX_AUTOCLOSE
	goto Zone13C_EventScript_KeizanPsychic_LikeHome
	end

Zone13C_Text_KeizanPsychic_HereTM:
	.string "{COLOR BLUE}Keizan{COLOR DARK_GRAY}: Another victory, another TM.$"

Zone13C_Text_KeizanPsychic_ExplainTM:
	.string "{COLOR BLUE}Keizan{COLOR DARK_GRAY}: TM09 - Calm Mind functions\n"
	.string "similarly to Bulk Up, just as\l"
	.string "Psychics train similarly to\l"
	.string "Black Belts.$"

Zone13C_EventScript_KeizanPsychic_LikeHome:
	msgbox Zone13C_Text_KeizanPsychic_LikeHome, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_KeizanPsychic_LikeHome:
	.string "{COLOR BLUE}Keizan{COLOR DARK_GRAY}: It is a bit strange, but I\n"
	.string "enjoy this place.\l"
	.string "I can train in peace here.\p"
	.string "It feels like home, despite all the\n"
	.string "lab coats.$"

Zone13C_EventScript_Fossil_Scientist::
	lock
	faceplayer
	goto_if_set FLAG_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_NuzlockeReceived
	goto_if_set FLAG_DAILY_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_VanillaReceived
	applymovement 3, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox Zone13C_Text_Fossil_YouGetAFossil, MSGBOX_AUTOCLOSE
	call_if_set FLAG_NUZLOCKE_ON, Zone13C_EventScript_Fossil_SetNuzlockeFossilFlag
	setflag FLAG_DAILY_FOSSIL_RECEIVED
	random 9
	compare VAR_RESULT, 0
	goto_if_eq Zone13C_EventScript_Fossil_GiveDome
	compare VAR_RESULT, 1
	goto_if_eq Zone13C_EventScript_Fossil_GiveHelix
	compare VAR_RESULT, 2
	goto_if_eq Zone13C_EventScript_Fossil_GiveOldAmber
	compare VAR_RESULT, 3
	goto_if_eq Zone13C_EventScript_Fossil_GiveRoot
	compare VAR_RESULT, 4
	goto_if_eq Zone13C_EventScript_Fossil_GiveClaw
	compare VAR_RESULT, 5
	goto_if_eq Zone13C_EventScript_Fossil_GiveCover
	compare VAR_RESULT, 6
	goto_if_eq Zone13C_EventScript_Fossil_GivePlume
	compare VAR_RESULT, 7
	goto_if_eq Zone13C_EventScript_Fossil_GiveJaw
	compare VAR_RESULT, 8
	goto_if_eq Zone13C_EventScript_Fossil_GiveSail
	goto_if_set FLAG_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_VanillaReceived
	end

Zone13C_EventScript_Fossil_SetNuzlockeFossilFlag:
	setflag FLAG_NUZLOCKE_FOSSIL_RECEIVED
	return

Zone13C_Text_Fossil_YouGetAFossil:
	.string "You get a Fossil!\n"
	.string "You get a Fossil!\l"
	.string "Everybody gets a Fossil!$"

Zone13C_EventScript_Fossil_VanillaReceived:
	msgbox Zone13C_Text_Fossil_VanillaReceived, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_Fossil_VanillaReceived:
	.string "Hope you enjoy your Fossil!\n"
	.string "Come back tomorrow for another!$"

Zone13C_EventScript_Fossil_NuzlockeReceived:
	msgbox Zone13C_Text_Fossil_NuzlockeReceived, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_Fossil_NuzlockeReceived:
	.string "Hope you enjoy your Fossil!$"

Zone13C_EventScript_Fossil_GiveDome:
	giveitem ITEM_DOME_FOSSIL, 1
	goto_if_set FLAG_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_VanillaReceived

Zone13C_EventScript_Fossil_GiveHelix:
	giveitem ITEM_HELIX_FOSSIL, 1
	goto_if_set FLAG_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_VanillaReceived

Zone13C_EventScript_Fossil_GiveOldAmber:
	giveitem ITEM_OLD_AMBER, 1
	goto_if_set FLAG_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_VanillaReceived

Zone13C_EventScript_Fossil_GiveRoot:
	giveitem ITEM_ROOT_FOSSIL, 1
	goto_if_set FLAG_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_VanillaReceived

Zone13C_EventScript_Fossil_GiveClaw:
	giveitem ITEM_CLAW_FOSSIL, 1
	goto_if_set FLAG_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_VanillaReceived

Zone13C_EventScript_Fossil_GiveCover:
	giveitem ITEM_COVER_FOSSIL, 1
	goto_if_set FLAG_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_VanillaReceived

Zone13C_EventScript_Fossil_GivePlume:
	giveitem ITEM_PLUME_FOSSIL, 1
	goto_if_set FLAG_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_VanillaReceived

Zone13C_EventScript_Fossil_GiveJaw:
	giveitem ITEM_JAW_FOSSIL, 1
	goto_if_set FLAG_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_VanillaReceived

Zone13C_EventScript_Fossil_GiveSail:
	giveitem ITEM_SAIL_FOSSIL, 1
	goto_if_set FLAG_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_VanillaReceived

Zone13C_EventScript_Scientist1::
	lock
	msgbox Zone13C_Text_Scientist1, MSGBOX_SIGN
	release
	end

Zone13C_Text_Scientist1:
	.string "He's so focused on his work,\n"
	.string "he doesn't even notice you.$"

Zone13C_EventScript_Scientist2::
	lock
	faceplayer
	msgbox Zone13C_Text_Scientist2_WhyMale, MSGBOX_AUTOCLOSE
	delay 48
	msgbox Zone13C_Text_Scientist2_GenderRoles, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_Scientist2_WhyMale:
	.string "Why are all the scientists male,\n"
	.string "you ask?$"

Zone13C_Text_Scientist2_GenderRoles:
	.string "Um... Game Freak existed a while\n"
	.string "ago and helped perpetuate\l"
	.string "traditional gender roles in\l"
	.string "society?\p"
	.string "Never mind. Google it.$"

Zone13C_EventScript_Scientist3::
	lock
	msgbox Zone13C_Text_Scientist3, MSGBOX_SIGN
	release
	end

Zone13C_Text_Scientist3:
	.string "He's sound asleep.\n"
	.string "Better not wake him.$"

Zone13C_EventScript_Scientist4::
	lock
	faceplayer
	goto_if_set FLAG_ZONE13C_RECEIVED_SCOPE_LENS, Zone13C_EventScript_GaveScopeLens
	msgbox Zone13C_Text_Scientist4_GiveScopeLens, MSGBOX_AUTOCLOSE
	giveitem ITEM_SCOPE_LENS	
	setflag FLAG_ZONE13C_RECEIVED_SCOPE_LENS
	goto Zone13C_EventScript_GaveScopeLens
	end

Zone13C_EventScript_GaveScopeLens:
	msgbox Zone13C_Text_Scientist4_GaveScopeLens, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_Scientist4_GiveScopeLens:
	.string "Your moves always miss?\n"
	.string "No problem! Here you go!$"

Zone13C_Text_Scientist4_GaveScopeLens:
	.string "What do you mean it only\n"
	.string "increases the critical hit ratio?\p"
	.string "It has the word Lens in it!$"

Zone13C_EventScript_DeveloperEatthepear::
	lock
	faceplayer
	msgbox Zone13C_Text_Eatthepear, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_Eatthepear:
	.string "Hello there. It's {COLOR BLUE}eatthepear{COLOR DARK_GRAY}, the\n"
	.string "developer of this ROM hack!\p"
	.string "Thanks for playing and I hope\n"
	.string "you're enjoying your time.\p"
	.string "When you beat the game, come back\n"
	.string "here and let's have a battle!$"
