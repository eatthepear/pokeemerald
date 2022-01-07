Zone25B_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, Zone25B_SetHoleWarp
	.byte 0

Zone25B_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_ZONE25A
	end

Zone25B_EventScript_Sheldon::
	trainerbattle_single TRAINER_SHELDON, Zone25B_Text_SheldonIntro, Zone25B_Text_SheldonDefeat
	msgbox Zone25B_Text_SheldonPostBattle, MSGBOX_AUTOCLOSE
	end

Zone25B_Text_SheldonIntro:
	.string "Hmm… if I had a Bike…$"

Zone25B_Text_SheldonDefeat:
	.string "I dunno.$"

Zone25B_Text_SheldonPostBattle:
	.string "My Psychic powers don't work too\n"
	.string "well here.$"

Zone25B_EventScript_DuskBall::
	finditem ITEM_DUSK_BALL
	end
