Zone3A_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Zone3A_OnTransition
	.byte 0

Zone3A_OnTransition:
	goto_if_unset FLAG_BEATLEVIATHAN1, Zone3A_EventScript_MoveLeviathan
	end

Zone3A_EventScript_MoveLeviathan:
	setobjectxyperm 4, 29, 5
	end

Zone3A_EventScript_Exit::
	lockall
	goto_if_set FLAG_BEATLEVIATHAN1, Zone3A_EventScript_Warp
	fadeoutbgm 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	addobject 4
	clearflag FLAG_HIDE_LEVIATHAN1
	applymovement 4, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone3A_Text_Leviathan1Intro, MSGBOX_AUTOCLOSE
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	setvar VAR_MUGSHOT_ID, MUGSHOT_REMI
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone3A_EventScript_RemiBrutal
	trainerbattle_no_intro TRAINER_LEVIATHAN1, Zone3A_Text_Leviathan1Defeat
	goto Zone3A_EventScript_Leviathan1Defeated
	end

Zone3A_EventScript_RemiBrutal:
	trainerbattle_no_intro TRAINER_LEVIATHAN1_BRUTAL, Zone3A_Text_Leviathan1Defeat
	goto Zone3A_EventScript_Leviathan1Defeated
	end

Zone3A_EventScript_Leviathan1Defeated:
	setflag FLAG_BEATLEVIATHAN1
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone3A_Text_Leviathan1Reward, MSGBOX_AUTOCLOSE
	giveitem ITEM_GOOD_ROD, 1
	closemessage
	applymovement 4, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 4, Common_Movement_FaceDown
	waitmovement 0
	setobjectxyperm 4, 28, 6
	release
	end

Zone3A_EventScript_Leviathan1::
	lock
	faceplayer
	msgbox Zone3A_Text_Leviathan1Text, MSGBOX_AUTOCLOSE
	release
	end

Zone3A_Text_Leviathan1Text:
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: That's my favorite\n"
	.string "Fishing Rod. Don't lose it!$"

Zone3A_EventScript_Warp:
	compare VAR_ZONE, 3
	goto_if_gt EventScript_WarpZone0
	call_if_set FLAG_BRUTAL_MODE_ON, Zone3A_EventScript_CheckBrutal
	warp MAP_ZONE3SANCTUARY, 255, 22, 7
	releaseall
	end

Zone3A_EventScript_CheckBrutal:
	goto_if_not_defeated TRAINER_BORIS, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_ANNABELLE, EventScript_BrutalExitNotSatisfied
	return

Zone3A_Text_Leviathan1Intro:
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: You! How dare you intrude on\n"
	.string "my house, my home! Begone!\l"
	.string "I am {COLOR BLUE}Leviathan Remi{COLOR DARK_GRAY}, all powerful!$"

Zone3A_Text_Leviathan1Defeat:
	.string "Remi: Do a Marill roll!$"

Zone3A_Text_Leviathan1Reward:
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: You have bested me.\n"
	.string "I grant you the Fishing Rod,\l"
	.string "a way to fish for Water Pokémon.$"

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

Zone3A_EventScript_ItemSuperPotion::
	finditem ITEM_SUPER_POTION
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
