Zone19Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone19Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone19Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE, 18, Zone19Sanctuary_EventScript_Intro
	.2byte 0


Zone19Sanctuary_EventScript_Intro::
	lockall
	call EventScript_EnterSanctuary
	msgbox Zone19Sanctuary_Text_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	msgbox Zone19Sanctuary_Text_RewardClear18, MSGBOX_DEFAULT
	msgbox Zone19Sanctuary_Text_18Reward, MSGBOX_DEFAULT
	giveitem ITEM_YELLOW_SHARD, 5
	msgbox Zone19Sanctuary_Text_RewardClear19, MSGBOX_DEFAULT
	msgbox Zone19Sanctuary_Text_19Reward, MSGBOX_DEFAULT
	giveitem ITEM_TM37
	closemessage
	setvar VAR_ZONE, 20
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	return


Zone19Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone19Sanctuary_EventScript_NextZone_3
	case 1, Zone19Sanctuary_EventScript_NextZone_4
	case 2, Zone19Sanctuary_EventScript_NextZone_5
Zone19Sanctuary_EventScript_NextZone_1:
	goto EventScript_WhenUReady
	return

Zone19Sanctuary_EventScript_NextZone_3:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone19Sanctuary_EventScript_NextZone_6
	goto Zone19Sanctuary_EventScript_NextZone_1

Zone19Sanctuary_EventScript_NextZone_4:
	goto EventScript_Settings
	goto Zone19Sanctuary_EventScript_NextZone_1

Zone19Sanctuary_EventScript_NextZone_5:
	goto EventScript_Documentation
	goto Zone19Sanctuary_EventScript_NextZone_1

Zone19Sanctuary_EventScript_NextZone_6:
	call EventScript_LeavingSetup
	warp MAP_ZONE20A, 255, 7, 8
	waitstate
	goto Zone19Sanctuary_EventScript_NextZone_1


Zone19Sanctuary_Text_Colress_ReachedZone::
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR RED}Zone 18{COLOR DARK_GRAY} and {COLOR RED}Zone 19{COLOR DARK_GRAY}.$"

Zone19Sanctuary_Text_RewardClear18::
	.string "Your reward for clearing {COLOR RED}Zone 18{COLOR DARK_GRAY} is…$"

Zone19Sanctuary_Text_18Reward::
	.string "5 Yellow Shards!$"

Zone19Sanctuary_Text_RewardClear19::
	.string "Your reward for clearing {COLOR RED}Zone 19{COLOR DARK_GRAY} is…$"

Zone19Sanctuary_Text_19Reward::
	.string "TM37 - Thunder Wave!$"
