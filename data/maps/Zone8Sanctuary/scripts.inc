Zone8Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone8Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone8Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ZONE, 7, Zone8Sanctuary_EventScript_Intro
	.2byte 0


Zone8Sanctuary_EventScript_Intro::
	lockall
	call EventScript_EnterSanctuary
	msgbox Zone8Sanctuary_Text_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	msgbox Zone8Sanctuary_Text_RewardClear7
	msgbox Zone8Sanctuary_Text_7Reward
	giveitem ITEM_BLUE_SHARD, 3
	msgbox Zone8Sanctuary_Text_RewardClear8
	msgbox Zone8Sanctuary_Text_8Reward
	giveitem ITEM_TM05
	closemessage
	setvar VAR_ZONE, 9
	msgbox gText_Colress_Unlocked
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Colress_UnlockedGeneral, MSGBOX_DEFAULT
	waitfanfare
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Colress_UnlockedUnique, MSGBOX_DEFAULT
	waitfanfare
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Colress_UnlockedServices, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	return


Zone8Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_COLRESS_MENU, 0
	switch VAR_RESULT
	case 0, Zone8Sanctuary_EventScript_NextZone_3
	case 1, Zone8Sanctuary_EventScript_NextZone_4
	case 2, Zone8Sanctuary_EventScript_NextZone_5
Zone8Sanctuary_EventScript_NextZone_1:
	goto EventScript_WhenUReady
	return

Zone8Sanctuary_EventScript_NextZone_3:
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone8Sanctuary_EventScript_NextZone_6
	goto Zone8Sanctuary_EventScript_NextZone_1

Zone8Sanctuary_EventScript_NextZone_4:
	goto EventScript_Settings
	goto Zone8Sanctuary_EventScript_NextZone_1

Zone8Sanctuary_EventScript_NextZone_5:
	goto EventScript_Documentation
	goto Zone8Sanctuary_EventScript_NextZone_1

Zone8Sanctuary_EventScript_NextZone_6:
	call EventScript_LeavingSetup
	warp MAP_ZONE9A, 255, 23, 13
	waitstate
	goto Zone8Sanctuary_EventScript_NextZone_1


Zone8Sanctuary_Text_Colress_ReachedZone::
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}.$"

Zone8Sanctuary_Text_RewardClear7::
	.string "Your reward for clearing {COLOR RED}Zone 7{COLOR DARK_GRAY} is...$"

Zone8Sanctuary_Text_7Reward::
	.string "3 Blue Shards!$"

Zone8Sanctuary_Text_RewardClear8::
	.string "Your reward for clearing {COLOR RED}Zone 8{COLOR DARK_GRAY} is...$"

Zone8Sanctuary_Text_8Reward::
	.string "TM05 - Rock Tomb!$"
