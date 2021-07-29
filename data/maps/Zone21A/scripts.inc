Zone21A_MapScripts::
	.byte 0

Zone21A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 21
	goto_if_gt EventScript_WarpZone0
	warp MAP_ZONE16SANCTUARY, 255, 7, 7
	releaseall
	end

Zone21A_EventScript_SecretWarp::
	lockall
	warpteleport MAP_ZONE21D, 255, 7, 7
	releaseall
	end
