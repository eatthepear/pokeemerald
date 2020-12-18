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
	goto_if_set FLAG_BEATLEVIATHAN7 Zone13C_EventScript_KeizanBlackBelt_ComeBack
	msgbox Zone13C_Text_KeizanBlackBelt_Battle, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone13C_EventScript_Keizan_ISee
	msgbox Zone13C_Text_KeizanBlackBelt_LetsGetStarted, MSGBOX_AUTOCLOSE
	call EventScript_BeforeLeviathanHeal
	trainerbattle_no_intro TRAINER_LEVIATHAN7, Zone13C_Text_Leviathan7Defeat
	goto Zone13C_EventScript_Leviathan7Defeated
	end

Zone13C_Text_KeizanBlackBelt_Battle:
	.string "{COLOR BLUE}Keizan{COLOR DARK_GREY}: Greetings.\n"
	.string "I am Leviathan Keizan.\p"
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
	.string "{COLOR BLUE}Keizan{COLOR DARK_GREY}: For the victor go the spoils.$"

Zone13C_Text_KeizanBlackBelt_ExplainTM:
	.string "{COLOR BLUE}Keizan{COLOR DARK_GREY}: TM08 - Bulk Up helps your\n"
	.string "Pokémon grow ever stronger.$"

Zone13C_EventScript_KeizanBlackBelt_ComeBack:
	msgbox Zone13C_Text_KeizanBlackBelt_ComeBack, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_KeizanBlackBelt_ComeBack:
	.string "{COLOR BLUE}Keizan{COLOR DARK_GREY}: You should come back later.\n"
	.string "I have other strengths aside from\l"
	.string "my karate training.$"

Zone13C_EventScript_KeizanPsychic::
	lock
	faceplayer
	goto_if_set FLAG_BEATLEVIATHAN8 Zone13C_EventScript_KeizanPsychic_LikeHome
	msgbox Zone13C_Text_KeizanPsychic_Battle, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone13C_EventScript_Keizan_ISee
	msgbox Zone13C_Text_KeizanPsychic_FairBetter, MSGBOX_AUTOCLOSE
	call EventScript_BeforeLeviathanHeal
	trainerbattle_no_intro TRAINER_LEVIATHAN8, Zone13C_Text_Leviathan8Defeat
	goto Zone13C_EventScript_Leviathan8Defeated
	end

Zone13C_Text_KeizanPsychic_Battle:
	.string "{COLOR BLUE}Keizan{COLOR DARK_GREY}: Yes, I am both a Psychic\n"
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
	.string "{COLOR BLUE}Keizan{COLOR DARK_GREY}: Another victory, another TM.$"

Zone13C_Text_KeizanPsychic_ExplainTM:
	.string "{COLOR BLUE}Keizan{COLOR DARK_GREY}: TM09 - Calm Mind functions\n"
	.string "similarly to Bulk Up, just as\l"
	.string "Psychics train similarly to\l"
	.string "Black Belts.$"

Zone13C_EventScript_KeizanPsychic_LikeHome:
	msgbox Zone13C_Text_KeizanPsychic_LikeHome, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_KeizanPsychic_LikeHome:
	.string "{COLOR BLUE}Keizan{COLOR DARK_GREY}: It is a bit strange, but I\n"
	.string "enjoy this place.\l"
	.string "I can train in peace here.\p"
	.string "It feels like home, despite all the\n"
	.string "lab coats.$"

Zone13C_EventScript_Fossil_Scientist::
	lock
	goto_if_set FLAG_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_NuzlockeReceived
	goto_if_set FLAG_DAILY_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_VanillaReceived
	delay 48
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	faceplayer
	msgbox Zone13C_Text_Fossil_YouGetAFossil, MSGBOX_AUTOCLOSE
	call_if_set FLAG_NUZLOCKE_ON, Zone13C_EventScript_Fossil_SetNuzlockeFossilFlag
	setflag FLAG_DAILY_FOSSIL_RECEIVED
	random 11
	compare VAR_RESULT, 0
	call_if_eq Zone13C_EventScript_Fossil_GiveDome
	compare VAR_RESULT, 1
	call_if_eq Zone13C_EventScript_Fossil_GiveHelix
	compare VAR_RESULT, 2
	call_if_eq Zone13C_EventScript_Fossil_GiveOldAmber
	compare VAR_RESULT, 3
	call_if_eq Zone13C_EventScript_Fossil_GiveRoot
	compare VAR_RESULT, 4
	call_if_eq Zone13C_EventScript_Fossil_GiveClaw
	compare VAR_RESULT, 5
	call_if_eq Zone13C_EventScript_Fossil_GiveSkull
	compare VAR_RESULT, 6
	call_if_eq Zone13C_EventScript_Fossil_GiveArmor
	compare VAR_RESULT, 7
	call_if_eq Zone13C_EventScript_Fossil_GiveCover
	compare VAR_RESULT, 8
	call_if_eq Zone13C_EventScript_Fossil_GivePlume
	compare VAR_RESULT, 9
	call_if_eq Zone13C_EventScript_Fossil_GiveJaw
	compare VAR_RESULT, 10
	call_if_eq Zone13C_EventScript_Fossil_GiveSail
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
	faceplayer
	msgbox Zone13C_Text_Fossil_VanillaReceived, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_Fossil_VanillaReceived:
	.string "Hope you enjoy your Fossil!\n"
	.string "Come back tomorrow for another!$"

Zone13C_EventScript_Fossil_NuzlockeReceived:
	faceplayer
	msgbox Zone13C_Text_Fossil_NuzlockeReceived, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_Fossil_NuzlockeReceived:
	.string "Hope you enjoy your Fossil!$"

Zone13C_EventScript_Fossil_GiveDome:
	giveitem ITEM_DOME_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveHelix:
	giveitem ITEM_HELIX_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveOldAmber:
	giveitem ITEM_OLD_AMBER, 1
	return

Zone13C_EventScript_Fossil_GiveRoot:
	giveitem ITEM_ROOT_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveClaw:
	giveitem ITEM_CLAW_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveSkull:
	giveitem ITEM_SKULL_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveArmor:
	giveitem ITEM_ARMOR_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveCover:
	giveitem ITEM_COVER_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GivePlume:
	giveitem ITEM_PLUME_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveJaw:
	giveitem ITEM_JAW_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveSail:
	giveitem ITEM_SAIL_FOSSIL, 1
	return
