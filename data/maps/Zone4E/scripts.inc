Zone4E_MapScripts::
	.byte 0

Zone4E_EventScript_ItemEnergyPowder::
	finditem ITEM_ENERGY_POWDER
	end

Zone4E_EventScript_Exit::
	lockall
	compare VAR_ZONE, 4
	goto_if_gt EventScript_WarpZone0
	call_if_set FLAG_BRUTAL_MODE_ON, Zone4E_EventScript_CheckBrutal
	warp MAP_ZONE4SANCTUARY, 255, 22, 7
	releaseall
	end

Zone4E_EventScript_CheckBrutal:
	goto_if_not_defeated TRAINER_RALPH, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_CHLOE_AND_KAYA, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_PATRICK, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_LUCIA, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_FRED, EventScript_BrutalExitNotSatisfied
	return
