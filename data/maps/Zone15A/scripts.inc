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

Zone15A_EventScript_TM11::
	finditem ITEM_TM11
	end

Zone15A_EventScript_TM12::
	finditem ITEM_TM12
	end

Zone15A_EventScript_DuskBall::
	finditem ITEM_DUSK_BALL
	end

Zone15A_EventScript_MuscleBand::
	finditem ITEM_MUSCLE_BAND
	end

Zone15A_EventScript_WiseGlasses::
	finditem ITEM_WISE_GLASSES
	end

Zone15A_EventScript_WideLens::
	finditem ITEM_WIDE_LENS
	end

Zone15A_EventScript_ZoomLens::
	finditem ITEM_ZOOM_LENS
	end

Zone15A_EventScript_HyperPotion::
	finditem ITEM_HYPER_POTION
	end
