Zone8D_MapScripts::
	.byte 0

Zone8D_EventScript_Regirock::
	lockall
	waitse
	setflag FLAG_DISABLE_CATCHING
	playmoncry SPECIES_REGIROCK, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIROCK, 15, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
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

Zone8D_EventScript_DefeatedRegirock:: @ 8239768
	setflag FLAG_BEATLEVIATHAN4
	goto Zone8D_EventScript_DefeatedRegirock2
	end

Zone8D_EventScript_RanFromRegirock:: @ 8239771
	goto Zone8D_EventScript_RanFromRegirock2
	end

Zone8D_EventScript_DefeatedRegirock2:: @ 823977C
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_BEATLEVIATHAN4
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_DISABLE_CATCHING
	msgbox Zone8D_Text_RegirockDisappeared, MSGBOX_AUTOCLOSE
	call EventScript_StonesMultichoice
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	warp MAP_ZONE8SANCTUARY, 255, 7, 7
	releaseall
	end

Zone8D_EventScript_RanFromRegirock2:: @ 8239785
	msgbox Zone8D_Text_StillThere, MSGBOX_DEFAULT
	clearflag FLAG_DISABLE_CATCHING
	releaseall
	end

Zone8D_Text_StillThere:
	.string "It's still there, motionless.$"

Zone8D_Text_RegirockDisappeared:
	.string "Regirock disappeared. There's something\n"
	.string "colorful on the ground, a stone!\l"
	.string "What type of stone is it?$"
