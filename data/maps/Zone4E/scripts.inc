Zone4E_MapScripts::
	.byte 0

Zone4E_EventScript_ItemRareCandy::
	finditem ITEM_RARE_CANDY
	end

Zone4E_EventScript_Exit::
	lockall
	warp MAP_ZONE4SANCTUARY, 255, 7, 7
	releaseall
	end
