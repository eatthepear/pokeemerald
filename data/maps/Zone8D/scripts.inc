Zone8D_MapScripts::
	.byte 0

Zone8D_EventScript_Neil::
	trainerbattle_single TRAINER_KADEEM, Zone8D_Text_NeilIntro, Zone8D_Text_NeilDefeat
	msgbox Zone8D_Text_NeilPostBattle, MSGBOX_AUTOCLOSE
	end

Zone8D_Text_NeilIntro:
	.string "I'm looking for another path down...$"

Zone8D_Text_NeilDefeat:
	.string "But all I found is you.$"

Zone8D_Text_NeilPostBattle:
	.string "Maybe it's on the other side\n"
	.string "of the mountain?$"

Zone8D_EventScript_Regirock::
	lockall
	waitse
	setflag FLAG_DISABLE_CATCHING
	playmoncry SPECIES_REGIROCK, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIROCK, 15, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Zone8D_EventScript_DefeatedRegirock
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone8D_EventScript_RanFromRegirock
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone8D_EventScript_RanFromRegirock
	releaseall
	end

Zone8D_EventScript_DefeatedRegirock::
	setflag FLAG_BEATLEVIATHAN4
	goto Zone8D_EventScript_DefeatedRegirock2
	end

Zone8D_EventScript_RanFromRegirock::
	goto Zone8D_EventScript_RanFromRegirock2
	end

Zone8D_EventScript_DefeatedRegirock2::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_BEATLEVIATHAN4
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_DISABLE_CATCHING
	msgbox Zone8D_Text_RegirockDisappeared, MSGBOX_AUTOCLOSE
	finditem ITEM_EVIOLITE, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	warp MAP_ZONE8SANCTUARY, 255, 7, 7
	releaseall
	end

Zone8D_EventScript_RanFromRegirock2::
	msgbox Zone8D_Text_StillThere, MSGBOX_DEFAULT
	clearflag FLAG_DISABLE_CATCHING
	releaseall
	end

Zone8D_Text_StillThere:
	.string "It's still there, motionless.$"

Zone8D_Text_RegirockDisappeared:
	.string "Regirock disappeared. There's something\n"
	.string "colorful on the ground, a stone!$"
