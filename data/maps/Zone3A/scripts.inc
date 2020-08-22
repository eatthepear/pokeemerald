Zone3A_MapScripts::
	.byte 0

Zone3A_EventScript_Exit::
	lockall
	warp MAP_ZONE3SANCTUARY, 255, 7, 7
	releaseall
	end
