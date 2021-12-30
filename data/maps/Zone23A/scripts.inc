Zone23A_MapScripts::
	.byte 0

Zone23A_EventScript_Exit::
	lockall
	call_if_set FLAG_BRUTAL_MODE_ON, Zone23A_EventScript_CheckBrutal
	warp MAP_ZONE23SANCTUARY, 255, 22, 7
	releaseall
	end

Zone23A_EventScript_CheckBrutal:
	goto_if_not_defeated TRAINER_EDGARDO, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_JEAN, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_ROSE, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_JENNIFER, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_MATTHEW, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_KERRY, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_ANNIE, EventScript_BrutalExitNotSatisfied
	return

Zone23A_EventScript_Edgardo::
	trainerbattle_single TRAINER_EDGARDO, Zone23A_Text_EdgardoIntro, Zone23A_Text_EdgardoDefeat
	msgbox Zone23A_Text_EdgardoPostBattle, MSGBOX_AUTOCLOSE
	end

Zone23A_Text_EdgardoIntro:
	.string "$"

Zone23A_Text_EdgardoDefeat:
	.string "$"

Zone23A_Text_EdgardoPostBattle:
	.string "$"

Zone23A_EventScript_Jean::
	trainerbattle_single TRAINER_JEAN, Zone23A_Text_JeanIntro, Zone23A_Text_JeanDefeat
	msgbox Zone23A_Text_JeanPostBattle, MSGBOX_AUTOCLOSE
	end

Zone23A_Text_JeanIntro:
	.string "$"

Zone23A_Text_JeanDefeat:
	.string "$"

Zone23A_Text_JeanPostBattle:
	.string "$"

Zone23A_EventScript_Rose::
	trainerbattle_single TRAINER_ROSE, Zone23A_Text_RoseIntro, Zone23A_Text_RoseDefeat
	msgbox Zone23A_Text_RosePostBattle, MSGBOX_AUTOCLOSE
	end

Zone23A_Text_RoseIntro:
	.string "$"

Zone23A_Text_RoseDefeat:
	.string "$"

Zone23A_Text_RosePostBattle:
	.string "$"

Zone23A_EventScript_Jennifer::
	trainerbattle_single TRAINER_JENNIFER, Zone23A_Text_JenniferIntro, Zone23A_Text_JenniferDefeat
	msgbox Zone23A_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
	end

Zone23A_Text_JenniferIntro:
	.string "$"

Zone23A_Text_JenniferDefeat:
	.string "$"

Zone23A_Text_JenniferPostBattle:
	.string "$"

Zone23A_EventScript_Matthew::
	trainerbattle_single TRAINER_MATTHEW, Zone23A_Text_MatthewIntro, Zone23A_Text_MatthewDefeat
	msgbox Zone23A_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
	end

Zone23A_Text_MatthewIntro:
	.string "$"

Zone23A_Text_MatthewDefeat:
	.string "$"

Zone23A_Text_MatthewPostBattle:
	.string "$"

Zone23A_EventScript_Kerry::
	trainerbattle_single TRAINER_KERRY, Zone23A_Text_KerryIntro, Zone23A_Text_KerryDefeat
	msgbox Zone23A_Text_KerryPostBattle, MSGBOX_AUTOCLOSE
	end

Zone23A_Text_KerryIntro:
	.string "$"

Zone23A_Text_KerryDefeat:
	.string "$"

Zone23A_Text_KerryPostBattle:
	.string "$"

Zone23A_EventScript_Annie::
	trainerbattle_single TRAINER_ANNIE, Zone23A_Text_AnnieIntro, Zone23A_Text_AnnieDefeat
	msgbox Zone23A_Text_AnniePostBattle, MSGBOX_AUTOCLOSE
	end

Zone23A_Text_AnnieIntro:
	.string "$"

Zone23A_Text_AnnieDefeat:
	.string "$"

Zone23A_Text_AnniePostBattle:
	.string "$"
