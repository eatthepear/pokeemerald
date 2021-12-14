Zone4E_MapScripts::
	.byte 0

Zone4E_EventScript_ItemEnergyPowder::
	finditem ITEM_ENERGY_POWDER
	end

Zone4E_EventScript_Exit::
	lockall
	compare VAR_ZONE, 4
	goto_if_gt EventScript_WarpZone0
	warp MAP_ZONE4SANCTUARY, 255, 22, 7
	releaseall
	end
