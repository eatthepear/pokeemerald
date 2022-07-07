Zone0B_EventScript_SpecialRock::
	lockall
	goto_if_set FLAG_ZONE0B_ABILITY_CHANGE_USED, Zone0B_EventScript_SpecialRock_2
	specialvar VAR_RESULT, CheckLeadMonCool
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_SpecialRock_5
	msgbox Zone0B_EventScript_SpecialRock_Text_3
Zone0B_EventScript_SpecialRock_1:
	releaseall
	end

Zone0B_EventScript_SpecialRock_2:
	msgbox Zone0B_EventScript_SpecialRock_Text_0
	goto Zone0B_EventScript_SpecialRock_1

Zone0B_EventScript_SpecialRock_5:
	bufferleadmonspeciesname 0
	msgbox Zone0B_EventScript_SpecialRock_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_EventScript_SpecialRock_8
	goto Zone0B_EventScript_SpecialRock_1

Zone0B_EventScript_SpecialRock_8:
	playse SE_EXP_MAX
	waitse
	msgbox Zone0B_EventScript_SpecialRock_Text_2
	special CheckLeadMonBeauty
	setflag FLAG_ZONE0B_ABILITY_CHANGE_USED
	playse SE_M_ROCK_THROW
	waitse
	warp MAP_ZONE0A, 2
	waitstate
	goto Zone0B_EventScript_SpecialRock_1


Zone0B_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Zone0B_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Zone0B_OnLoad
	.byte 0

Zone0B_OnLoad:
	call_if_set FLAG_ZONE0B_ABILITY_CHANGE_USED, Zone0B_EventScript_DisableBlueRock
	end

Zone0B_EventScript_DisableBlueRock::
	setmetatile 3, 3, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	return

Zone0B_OnTransition:
	call Zone0B_EventScript_SetFlashRadius
	end

Zone0B_EventScript_SetFlashRadius:
	setflashlevel 2
	return

Zone0B_EventScript_SpecialRock_Text_0:
	.string "It's a blue, shining rock, but it looks\n"
	.string "like other rocks have collapsed on top\l"
	.string "of it, leaving it out of reach.$"

Zone0B_EventScript_SpecialRock_Text_1:
	.string "It's a blue, shining rock.\p"
	.string "Would you like to let your\n"
	.string "{STR_VAR_1} touch it?$"

Zone0B_EventScript_SpecialRock_Text_2:
	.string "…{PAUSE_UNTIL_PRESS}!\p"
	.string "It seems your {STR_VAR_1} has\n"
	.string "changed its ability!$"

Zone0B_EventScript_SpecialRock_Text_3:
	.string "It's a blue, shining rock.\p"
	.string "It seems your starter Pokémon might\n"
	.string "find it fascinating.$"
