Zone12Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone12Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone12Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE, 12, Zone12Sanctuary_EventScript_Intro
	.2byte 0


Zone12Sanctuary_EventScript_Intro::
	lockall
	call EventScript_EnterSanctuary
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_RewardClear
	msgbox Zone12Sanctuary_Text_Reward
	giveitem ITEM_ULTRA_BALL, 10
	msgbox gText_Colress_Unlocked
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Colress_UnlockedGeneral, MSGBOX_DEFAULT
	waitfanfare
	setvar VAR_ZONE, 13
	msgbox Zone12Sanctuary_Text_Colress_Explain
	msgbox Zone12Sanctuary_Text_Colress_WhenUReady
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	return


Zone12Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone12Sanctuary_EventScript_NextZone_3
	case 1, Zone12Sanctuary_EventScript_NextZone_4
	case 2, Zone12Sanctuary_EventScript_NextZone_5
Zone12Sanctuary_EventScript_NextZone_1:
	goto EventScript_WhenUReady
	return

Zone12Sanctuary_EventScript_NextZone_3:
	msgbox Zone12Sanctuary_Text_Colress_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone12Sanctuary_EventScript_NextZone_6
	goto Zone12Sanctuary_EventScript_NextZone_1

Zone12Sanctuary_EventScript_NextZone_4:
	goto EventScript_Settings
	goto Zone12Sanctuary_EventScript_NextZone_1

Zone12Sanctuary_EventScript_NextZone_5:
	goto EventScript_Documentation
	goto Zone12Sanctuary_EventScript_NextZone_1

Zone12Sanctuary_EventScript_NextZone_6:
	call EventScript_LeavingSetup
	warp MAP_ZONE13A, 255, 26, 28
	waitstate
	goto Zone12Sanctuary_EventScript_NextZone_1


Zone12Sanctuary_Text_Reward::
	.string "10 Ultra Balls!$"

Zone12Sanctuary_Text_Colress_Explain::
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones, {COLOR RED}Zone 13{COLOR DARK_GRAY}\n"
	.string "and {COLOR RED}Zone 14{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.$"

Zone12Sanctuary_Text_Colress_WhenUReady::
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR RED}Zone 13{COLOR DARK_GRAY} and {COLOR RED}Zone 14{COLOR DARK_GRAY}, speak to me.$"

Zone12Sanctuary_Text_Colress_ReadyToLeave::
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\n"
	.string "You will be entering\l"
	.string "{COLOR RED}Zone 13{COLOR DARK_GRAY} and {COLOR RED}Zone 14{COLOR DARK_GRAY}.$"
