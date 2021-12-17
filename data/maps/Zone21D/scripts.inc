Zone21D_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Zone21D_OnTransition
	.byte 0

Zone21D_OnTransition:
	call Zone21D_EventScript_SetFlashRadius
	end

Zone21D_EventScript_SetFlashRadius:
	setflashradius 4
	return

Zone21D_EventScript_SecretWarp::
	lockall
	setvar VAR_ZONE21A_STATE, 0
        warp MAP_ZONE21A, 255, 39, 54
        releaseall
        end
