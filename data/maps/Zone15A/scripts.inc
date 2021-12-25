Zone15A_MapScripts::
	.byte 0

Zone15A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 15
	goto_if_gt EventScript_WarpZone0
	setflag FLAG_HIDE_ZONE15B_COLRESS
	warp MAP_ZONE15B, 255, 7, 72
	releaseall
	end

Zone15A_EventScript_TM17::
	finditem ITEM_TM17
	end

Zone15A_EventScript_TM18::
	finditem ITEM_TM18
	end

Zone15A_EventScript_DuskBall::
	finditem ITEM_DUSK_BALL
	end

Zone15A_EventScript_Ether::
	finditem ITEM_ETHER
	end

Zone15A_EventScript_Glalitite::
	finditem ITEM_GLALITITE
	end

Zone15A_EventScript_IceStone::
	finditem ITEM_ICE_STONE
	end

Zone15A_EventScript_ZoomLens::
	finditem ITEM_ZOOM_LENS
	end

Zone15A_EventScript_HyperPotion::
	finditem ITEM_HYPER_POTION
	end
