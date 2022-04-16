Zone26B_MapScripts::
	.byte 0

Zone26B_EventScript_InteractComputer::
	lockall
	msgbox Zone26B_Text_Flickering, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone26B_EventScript_StartRotomBattles
	releaseall
	end

Zone26B_Text_Flickering:
	.string "The computer screen is flickering…\p"
	.string "Would you like to try turning it on?$"

Zone26B_EventScript_StartRotomBattles:
	setflag FLAG_DISABLE_CATCHING
	setflag FLAG_SMART_WILD_AI_ON
	call_if_set FLAG_BRUTAL_MODE_ON Zone26B_EventScript_DisableBag
	closemessage
	setwildbattle SPECIES_ROTOM, 42
	playmoncry SPECIES_ROTOM, 2
	delay 40
	waitmoncry
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	playmoncry SPECIES_ROTOM, 2
	delay 40
	waitmoncry
	msgbox Zone26B_Text_RotomBoxes, MSGBOX_AUTOCLOSE
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	setwildbattle SPECIES_ROTOM_HEAT, 42
	playmoncry SPECIES_ROTOM_HEAT, 2
	delay 40
	waitmoncry
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	clearflag FLAG_DISABLE_CATCHING
	clearflag FLAG_SMART_WILD_AI_ON
	call_if_set FLAG_BRUTAL_MODE_ON Zone26B_EventScript_EnableBag
	setvar VAR_ZONE26_STATE, 1
	releaseall
	end

Zone26B_EventScript_DisableBag:
	setflag FLAG_DISABLE_BAG
	return

Zone26B_EventScript_EnableBag:
	clearflag FLAG_DISABLE_BAG
	return

Zone26B_Text_RotomBoxes:
	.string "Rotom flew out of the computer and\n"
	.string "into the boxes!$"

Zone26B_EventScript_RestartRotomBattles:
	msgbox Zone26B_Text_Rotom, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone26B_EventScript_StartRotomBattles
	end

Zone26B_Text_Rotom:
	.string "Rotom somehow seems angrier!$"
