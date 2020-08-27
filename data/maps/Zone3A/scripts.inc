Zone3A_MapScripts::
	.byte 0

Zone3A_EventScript_Exit::
	lockall
	fadeoutbgm 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 96
	addobject 4
	clearflag FLAG_HIDE_LEVIATHAN1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	applymovement 4, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	applymovement 4, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone3A_Text_Leviathan1Intro, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_LEVIATHAN1, Zone3A_Text_Leviathan1Defeat
	goto Zone3A_EventScript_LeviathanDefeated
	end

Zone3A_EventScript_LeviathanDefeated:
	setflag FLAG_HIDE_LEVIATHAN1
	removeobject 4
	setvar VAR_TUTORIAL, 5
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	warp MAP_ZONE3SANCTUARY, 255, 7, 7
	releaseall
	end

Zone3A_Text_Leviathan1Intro:
	.string "Prepare to be crushed.$"

Zone3A_Text_Leviathan1Defeat:
	.string "You have defeated me.$"

Zone3A_EventScript_Jemma::
	setflag FLAG_HIDE_LEVIATHAN1
	removeobject 4
	trainerbattle_single TRAINER_JEMMA, Zone3A_Text_JemmaIntro, Zone3A_Text_JemmaDefeat
	msgbox Zone3A_Text_JemmaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone3A_Text_JemmaIntro:
	.string "Beware the power of Poison Sting!$"

Zone3A_Text_JemmaDefeat:
	.string "30% is basically 100%!$"

Zone3A_Text_JemmaPostBattle:
	.string "I hope you have some Antidotes!$"

Zone3A_EventScript_Boris::
	trainerbattle_single TRAINER_BORIS, Zone3A_Text_BorisIntro, Zone3A_Text_BorisDefeat
	msgbox Zone3A_Text_BorisPostBattle, MSGBOX_AUTOCLOSE
	end

Zone3A_Text_BorisIntro:
	.string "Beware the power of Poison Sting!$"

Zone3A_Text_BorisDefeat:
	.string "30% is basically 100%!$"

Zone3A_Text_BorisPostBattle:
	.string "I hope you have some Antidotes!$"

Zone3A_EventScript_Annabelle::
	trainerbattle_single TRAINER_ANNABELLE, Zone3A_Text_AnnabelleIntro, Zone3A_Text_AnnabelleDefeat
	msgbox Zone3A_Text_AnnabellePostBattle, MSGBOX_AUTOCLOSE
	end

Zone3A_Text_AnnabelleIntro:
	.string "Beware the power of Poison Sting!$"

Zone3A_Text_AnnabelleDefeat:
	.string "30% is basically 100%!$"

Zone3A_Text_AnnabellePostBattle:
	.string "I hope you have some Antidotes!$"

Zone3A_EventScript_ItemSuperPotion::
	finditem ITEM_SUPER_POTION
	end

Zone3A_EventScript_ItemAwakening::
	finditem ITEM_AWAKENING
	end

Zone3A_EventScript_ItemBurnHeal::
	finditem ITEM_BURN_HEAL
	end
