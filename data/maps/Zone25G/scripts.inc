Zone25G_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, Zone25G_SetHoleWarp
	.byte 0

Zone25G_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_ZONE25H
	end

Zone25G_EventScript_KingsRock::
	finditem ITEM_KINGS_ROCK
	end

Zone25G_EventScript_Item4000::
	lock
	showmoneybox 0, 0, 0
	addmoney 4000, 0
	playfanfare MUS_OBTAIN_ITEM
	msgbox Zone25G_Text_Found4000, MSGBOX_DEFAULT
	updatemoneybox
	waitfanfare
	hidemoneybox
	setflag FLAG_ITEM_ZONE25G_4000
	removeobject 2
	release
	end

Zone25G_Text_Found4000:
	.string "Found ¥4000!$"
