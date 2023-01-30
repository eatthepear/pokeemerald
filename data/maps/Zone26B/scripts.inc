Zone26B_MapScripts::
	.byte 0

Zone26B_EventScript_InteractComputer::
	lockall
	goto_if_eq VAR_ZONE_26_STATE, 1, Zone26B_EventScript_SingleRotomFight
	goto_if_eq VAR_ZONE_26_STATE, 2, Zone26B_EventScript_NoRotom
	msgbox Zone26B_Text_Flickering, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone26B_EventScript_StartRotomBattles
	releaseall
	end

Zone26B_EventScript_NoRotom:
	msgbox Zone26B_Text_ComputerOff, MSGBOX_AUTOCLOSE
	releaseall
	end

Zone26B_Text_ComputerOff:
	.string "The computer is off.$"

Zone26B_EventScript_SingleRotomFight:
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone26B_EventScript_NoRotom
	msgbox Zone26B_Text_Flickering, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Zone26B_EventScript_StartRotomSingleBattle
	releaseall
	end

Zone26B_EventScript_StartRotomSingleBattle:
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	setwildbattle SPECIES_ROTOM, 45
	playmoncry SPECIES_ROTOM, 2
	delay 40
	waitmoncry
	delay 40
	dowildbattle
	setvar VAR_ZONE_26_STATE, 2
	releaseall
	end

Zone26B_Text_Flickering:
	.string "The computer screen is flickering…\p"
	.string "Would you like to try turning it on?$"

Zone26B_EventScript_StartRotomBattles:
	setflag FLAG_SYS_NO_CATCHING
	setflag FLAG_SYS_SMART_WILD_AI_ON
	call_if_set FLAG_SETTINGS_BRUTAL, Zone26B_EventScript_DisableBag
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	setwildbattle SPECIES_ROTOM, 42
	playmoncry SPECIES_ROTOM, 2
	delay 40
	waitmoncry
	delay 40
	call_if_set FLAG_SETTINGS_BRUTAL, Zone26B_EventScript_SetTotemBoost
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	playmoncry SPECIES_ROTOM, 2
	delay 40
	waitmoncry
	msgbox Zone26B_Text_RotomBoxes, MSGBOX_AUTOCLOSE
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	setwildbattle SPECIES_ROTOM_HEAT, 42
	playmoncry SPECIES_ROTOM_HEAT, 2
	delay 40
	waitmoncry
	delay 40
	call_if_set FLAG_SETTINGS_BRUTAL, Zone26B_EventScript_SetTotemBoost
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox Zone26B_Text_Rotom, MSGBOX_AUTOCLOSE
	setwildbattle SPECIES_ROTOM_MOW, 42
	playmoncry SPECIES_ROTOM_MOW, 2
	delay 40
	waitmoncry
	delay 40
	call_if_set FLAG_SETTINGS_BRUTAL, Zone26B_EventScript_SetTotemBoost
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox Zone26B_Text_Rotom, MSGBOX_AUTOCLOSE
	setwildbattle SPECIES_ROTOM_FAN, 42
	playmoncry SPECIES_ROTOM_FAN, 2
	delay 40
	waitmoncry
	delay 40
	call_if_set FLAG_SETTINGS_BRUTAL, Zone26B_EventScript_SetTotemBoost
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox Zone26B_Text_Rotom, MSGBOX_AUTOCLOSE
	setwildbattle SPECIES_ROTOM_FROST, 42
	playmoncry SPECIES_ROTOM_FROST, 2
	delay 40
	waitmoncry
	delay 40
	call_if_set FLAG_SETTINGS_BRUTAL, Zone26B_EventScript_SetTotemBoost
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox Zone26B_Text_Rotom, MSGBOX_AUTOCLOSE
	setwildbattle SPECIES_ROTOM_WASH, 42
	playmoncry SPECIES_ROTOM_WASH, 2
	delay 40
	waitmoncry
	delay 40
	call_if_set FLAG_SETTINGS_BRUTAL, Zone26B_EventScript_SetTotemBoost
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone26B_EventScript_RestartRotomBattles
	clearflag FLAG_SYS_NO_CATCHING
	call_if_unset FLAG_SETTINGS_BRUTAL, Zone26B_EventScript_RemoveSmartWildAI
	call_if_set FLAG_SETTINGS_BRUTAL, Zone26B_EventScript_EnableBag
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	playmoncry SPECIES_ROTOM, 2
	delay 40
	waitmoncry
	delay 40
	msgbox Zone26B_Text_RotomCalmedDown, MSGBOX_AUTOCLOSE
	setvar VAR_ZONE_26_STATE, 1
	releaseall
	end

Zone26B_EventScript_SetTotemBoost:
	totemboost_spatk1 B_POSITION_OPPONENT_LEFT
	return

Zone26B_Text_RotomCalmedDown:
	.string "Rotom seemed to calm down.\n"
	.string "It retreated back into the computer…$"

Zone26B_EventScript_RemoveSmartWildAI:
	clearflag FLAG_SYS_SMART_WILD_AI_ON
	return

Zone26B_EventScript_DisableBag:
	setflag FLAG_SYS_NO_BAG_USE_IN_BATTLE
	return

Zone26B_EventScript_EnableBag:
	clearflag FLAG_SYS_NO_BAG_USE_IN_BATTLE
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
