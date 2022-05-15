Zone3A_MapScripts::
	.byte 0


Zone3A_EventScript_Exit::
	lockall
	goto_if_unset FLAG_BEATLEVIATHAN3, Zone3A_EventScript_Exit_2
Zone3A_EventScript_Exit_1:
	compare VAR_ZONE, 3
	goto_if_gt Zone3A_EventScript_Exit_5
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone3A_EventScript_Exit_10
Zone3A_EventScript_Exit_8:
	warp MAP_ZONE3SANCTUARY, 255, 22, 7
Zone3A_EventScript_Exit_4:
	releaseall
	end

Zone3A_EventScript_Exit_2:
	goto Zone3A_EventScript_LeviathanBattle
	goto Zone3A_EventScript_Exit_1

Zone3A_EventScript_Exit_5:
	clearflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE0D, 255, 2, 32
	goto Zone3A_EventScript_Exit_4

Zone3A_EventScript_Exit_9:
	goto EventScript_BrutalExitNotSatisfied
	goto Zone3A_EventScript_Exit_8

Zone3A_EventScript_Exit_10:
	checktrainerflag TRAINER_RICHARD
	goto_if 0, Zone3A_EventScript_Exit_9
	checktrainerflag TRAINER_ANNABELLE
	goto_if 0, Zone3A_EventScript_Exit_9
	goto Zone3A_EventScript_Exit_8


Zone3A_EventScript_LeviathanBattle::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	addobject 10
	clearflag FLAG_HIDE_ZONE3A_PHILLIPA
	applymovement 10, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone3A_Text_Leviathan3Intro
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone3A_EventScript_LeviathanBattle_2
	setvar VAR_MUGSHOT_ID, MUGSHOT_PHILLIPA
	trainerbattle_no_intro TRAINER_PHILLIPA_LEVIATHAN_3, Zone3A_Text_Leviathan3Defeat
Zone3A_EventScript_LeviathanBattle_1:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone3A_EventScript_LeviathanBattle_Text_0
	applymovement 10, Zone3A_Movement_Phillipa_RunAway
	waitmovement 0
	addobject 4
	clearflag FLAG_HIDE_ZONE3A_REMI
	applymovement 4, Common_Movement_WalkDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	giveitem ITEM_GOOD_ROD, 1
	msgbox Zone3A_EventScript_LeviathanBattle_Text_1
	closemessage
	setflag FLAG_BEATLEVIATHAN3
	release
	end

Zone3A_EventScript_LeviathanBattle_2:
	setvar VAR_MUGSHOT_ID, MUGSHOT_PHILLIPA
	trainerbattle_no_intro TRAINER_PHILLIPA_LEVIATHAN_3, Zone3A_Text_Leviathan3Defeat
	goto Zone3A_EventScript_LeviathanBattle_1


Zone3A_Movement_Phillipa_RunAway:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Zone3A_EventScript_Jemma::
	trainerbattle_single TRAINER_JEMMA, Zone3A_Text_JemmaIntro, Zone3A_Text_JemmaDefeat
	msgbox Zone3A_Text_JemmaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone3A_Text_JemmaIntro:
	.string "Hey! You have to pay to cross!$"

Zone3A_Text_JemmaDefeat:
	.string "Uh... You can go for free!$"

Zone3A_Text_JemmaPostBattle:
	.string "I was scamming people so well too...$"

Zone3A_EventScript_Boris::
	trainerbattle_single TRAINER_BORIS, Zone3A_Text_BorisIntro, Zone3A_Text_BorisDefeat
	msgbox Zone3A_Text_BorisPostBattle, MSGBOX_AUTOCLOSE
	end

Zone3A_Text_BorisIntro:
	.string "Never give up, never surrender!$"

Zone3A_Text_BorisDefeat:
	.string "I surrender!$"

Zone3A_Text_BorisPostBattle:
	.string "I'm a hypocrite, I know.$"

Zone3A_EventScript_Annabelle::
	trainerbattle_single TRAINER_ANNABELLE, Zone3A_Text_AnnabelleIntro, Zone3A_Text_AnnabelleDefeat
	msgbox Zone3A_Text_AnnabellePostBattle, MSGBOX_AUTOCLOSE
	end

Zone3A_Text_AnnabelleIntro:
	.string "I wonder what day it is...$"

Zone3A_Text_AnnabelleDefeat:
	.string "Apparently it's defeat day!$"

Zone3A_Text_AnnabellePostBattle:
	.string "Tomorrow will be another day.$"

Zone3A_EventScript_Richard::
	trainerbattle_single TRAINER_RICHARD, Zone3A_Text_RichardIntro, Zone3A_Text_RichardDefeat
	msgbox Zone3A_Text_RichardPostBattle, MSGBOX_AUTOCLOSE
	end

Zone3A_Text_RichardIntro:
	.string "I have far too much money to deal\n"
	.string "with the likes of you!$"

Zone3A_Text_RichardDefeat:
	.string "Agh! My money!$"

Zone3A_Text_RichardPostBattle:
	.string "Do you think I can buy humility\n"
	.string "with my money?$"

Zone3A_EventScript_ItemTM03::
	finditem ITEM_TM03
	end

Zone3A_EventScript_ItemPotion::
	finditem ITEM_POTION
	end

Zone3A_EventScript_ItemParalyzeHeal::
	finditem ITEM_PARALYZE_HEAL
	end

Zone3A_EventScript_ItemHyperPotion::
	finditem ITEM_HYPER_POTION
	end

Zone3A_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Wah! I lost!$"

Zone3A_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: Do I have to have more Pokémon in\n"
	.string "order to battle better?\p"
	.string "No!\n"
	.string "I'm sticking with this one no matter\l"
	.string "what!$"

Zone3A_Text_Leviathan3Intro::
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: You! How dare you intrude on\n"
	.string "my home!\p"
	.string "I am {COLOR BLUE}Leviathan Phillipa{COLOR DARK_GRAY}, all powerful!$"

Zone3A_Text_Leviathan3Defeat::
	.string "Wah!!!$"
