Zone7A_MapScripts::
	.byte 0

Zone8D_EventScript_Cobalion::
	lockall
	waitse
	playmoncry SPECIES_COBALION, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_Cobalion, 15, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Zone8D_EventScript_DefeatedCobalion
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone8D_EventScript_RanFromCobalion
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone8D_EventScript_RanFromCobalion
	setflag FLAG_BEATLEVIATHAN4
	releaseall
	end

Zone8D_EventScript_DefeatedCobalion:: @ 8239768
	setflag FLAG_BEATLEVIATHAN4
	goto Zone8D_EventScript_DefeatedCobalion2
	end

Zone8D_EventScript_RanFromCobalion:: @ 8239771
	setvar VAR_0x8004, SPECIES_COBALION
	goto Zone8D_EventScript_RanFromCobalion2
	end

Zone8D_EventScript_DefeatedCobalion2:: @ 823977C
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	releaseall
	end

Zone8D_EventScript_RanFromCobalion2:: @ 8239785
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	bufferspeciesname 0, VAR_0x8004
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
	releaseall
	end
