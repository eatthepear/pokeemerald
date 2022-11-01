Zone3B_MapScripts::
	.byte 0


Zone3B_EventScript_Exit::
	lock
	faceplayer
	compare VAR_ZONE, 3
	goto_if_gt Zone3B_EventScript_Exit_2
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone3B_EventScript_Exit_7
Zone3B_EventScript_Exit_5:
	msgbox gText_PorygonCheckExit, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone3B_EventScript_Exit_10
Zone3B_EventScript_Exit_1:
	releaseall
	end

Zone3B_EventScript_Exit_2:
	call EventScript_WarpZone0
	goto Zone3B_EventScript_Exit_1

Zone3B_EventScript_Exit_6:
	goto EventScript_BrutalExitNotSatisfied
	goto Zone3B_EventScript_Exit_5

Zone3B_EventScript_Exit_7:
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_ne Zone3B_EventScript_Exit_6
	goto Zone3B_EventScript_Exit_5

Zone3B_EventScript_Exit_10:
	setflag FLAG_HIDE_ZONE3A_MAX
	warp MAP_ZONE3SANCTUARY, 255, 22, 7
	waitstate
	goto Zone3B_EventScript_Exit_1


Zone3B_EventScript_Phillipa::
	lock
	msgbox Zone3B_EventScript_Phillipa_Text_0
	release
	end


Zone3B_EventScript_Remi::
	lock
	msgbox Zone3B_EventScript_Remi_Text_0
	release
	end


Zone3B_EventScript_Phillipa_Text_0:
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: This food is so tasty!$"

Zone3B_EventScript_Remi_Text_0:
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: I'm glad you like the food, kiddo.$"
