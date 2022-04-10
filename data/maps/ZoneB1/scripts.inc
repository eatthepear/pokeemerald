ZoneB1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ZoneB1_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, ZoneB1_OnTransition
	.byte 0

ZoneB1_OnFrame:
	map_script_2 VAR_ZONEB1_STATE, 2, ZoneB1_EventScript_Intro
	.2byte 0

ZoneB1_OnTransition:
	goto_if_eq VAR_ZONEB1_STATE, 3, ZoneB1_EventScript_MovePorygon1
	goto_if_eq VAR_ZONEB1_STATE, 4, ZoneB1_EventScript_MovePorygon2
	goto_if_eq VAR_ZONEB1_STATE, 5, ZoneB1_EventScript_MovePorygon3
	goto_if_eq VAR_ZONEB1_STATE, 6, ZoneB1_EventScript_MovePorygon4
	goto_if_eq VAR_ZONEB1_STATE, 7, ZoneB1_EventScript_MovePorygon5
	end

ZoneB1_EventScript_MovePorygon1:
	setobjectxyperm 1, 10, 12
	end

ZoneB1_EventScript_MovePorygon2:
	setobjectxyperm 1, 24, 8
	end

ZoneB1_EventScript_MovePorygon3:
	setobjectxyperm 1, 11, 17
	end

ZoneB1_EventScript_MovePorygon4:
	setobjectxyperm 1, 28, 15
	end

ZoneB1_EventScript_MovePorygon5:
	setobjectxyperm 1, 16, 3
	end

ZoneB1_EventScript_Intro:
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	call ZoneB1_EventScript_Porygon_Movement
	setobjectxyperm 1, 10, 12
	fadescreenswapbuffers FADE_FROM_BLACK
	setvar VAR_ZONEB1_STATE, 3
	releaseall
	end

ZoneB1_EventScript_Porygon_Movement:
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	playmoncry SPECIES_PORYGON, 2
	msgbox ZoneB1_Text_Notice, MSGBOX_AUTOCLOSE
	delay 40
	waitmoncry
	fadescreenswapbuffers FADE_TO_BLACK
	delay 40
	return

ZoneB1_Text_Notice:
	.string "...!$"

ZoneB1_EventScript_Porygon_Interact::
	lock
	@ goto_if_eq VAR_ZONEB1_STATE, 7, 
	call ZoneB1_EventScript_Porygon_Movement
	goto_if_eq VAR_ZONEB1_STATE, 3, ZoneB1_EventScript_MovePorygonAfterInteract1
	goto_if_eq VAR_ZONEB1_STATE, 4, ZoneB1_EventScript_MovePorygonAfterInteract1
	goto_if_eq VAR_ZONEB1_STATE, 5, ZoneB1_EventScript_MovePorygonAfterInteract1
	goto_if_eq VAR_ZONEB1_STATE, 6, ZoneB1_EventScript_MovePorygonAfterInteract1
	end

ZoneB1_EventScript_MovePorygonAfterInteract1:
	setvar VAR_ZONEB1_STATE, 4
	setobjectxyperm 1, 24, 8
	fadescreenswapbuffers FADE_FROM_BLACK
	releaseall
	end

ZoneB1_EventScript_MovePorygonAfterInteract2:
	setvar VAR_ZONEB1_STATE, 5
	setobjectxyperm 1, 11, 17
	fadescreenswapbuffers FADE_FROM_BLACK
	releaseall
	end

ZoneB1_EventScript_MovePorygonAfterInteract3:
	setvar VAR_ZONEB1_STATE, 6
	setobjectxyperm 1, 28, 15
	fadescreenswapbuffers FADE_FROM_BLACK
	releaseall
	end

ZoneB1_EventScript_MovePorygonAfterInteract4:
	setvar VAR_ZONEB1_STATE, 7
	setobjectxyperm 1, 16, 3
	fadescreenswapbuffers FADE_FROM_BLACK
	releaseall
	end
