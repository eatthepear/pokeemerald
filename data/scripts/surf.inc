EventScript_UseSurf::
	checkitem ITEM_SURFBOARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_EndUseSurf
	setitemarg ITEM_SURFBOARD
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end
