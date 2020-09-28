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
	setflag FLAG_BEATLEVIATHAN4
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
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_DISABLE_CATCHING
	releaseall
	end

Zone8D_EventScript_RanFromRegirock2:: @ 8239785
	msgbox Zone8D_Text_StillThere, MSGBOX_DEFAULT
	clearflag FLAG_DISABLE_CATCHING
	releaseall
	end

Zone8D_Text_StillThere:
	.string "It's still there, motionless.$"
