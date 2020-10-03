Zone8Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone8Sanctuary_OnFrame
	.byte 0

Zone8Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 7, Zone8Sanctuary_EventScript_Intro
	.2byte 0

Zone8Sanctuary_EventScript_Intro:
	lockall
	setvar VAR_HEAL_SHOP_USED, 0
	call EventScript_MoveCameraUp
	applymovement 1, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	call EventScript_MoveCameraDown
	applymovement 1, Common_Movement_Quentin_WalkDown
	waitmovement 0
	playfanfare MUS_OBTAIN_BADGE
	msgbox Zone8Sanctuary_Text_Quentin_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	msgbox Zone8Sanctuary_Text_RewardClear7, MSGBOX_AUTOCLOSE
	msgbox Zone8Sanctuary_Text_ReceivedBlueShards, MSGBOX_AUTOCLOSE
	giveitem ITEM_BLUE_SHARD, 3
	msgbox Zone8Sanctuary_Text_RewardClear8, MSGBOX_AUTOCLOSE
	msgbox Zone8Sanctuary_Text_ReceivedRockTomb, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM02
	closemessage
	setvar VAR_ZONE, 9
	msgbox gText_Quentin_Unlocked, MSGBOX_AUTOCLOSE
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Quentin_UnlockedGeneral, MSGBOX_DEFAULT
	waitfanfare
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Quentin_UnlockedUnique, MSGBOX_DEFAULT
	waitfanfare
	playfanfare MUS_OBTAIN_ITEM
	msgbox gText_Quentin_UnlockedServices, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Quentin_WalkUp
	waitmovement 0
	releaseall
	end

Zone8Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone8Sanctuary_EventScript_Leave
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Quentin_WhenUReady, MSGBOX_AUTOCLOSE
	release
	end

Zone8Sanctuary_EventScript_Leave:
	call EventScript_LeavingSetup
	warp MAP_ZONE7A, 255, 7, 6
	end

Zone8Sanctuary_Text_Quentin_ReachedZone:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: CONGRATULATIONS.\n"
	.string "YOU HAVE CLEARED {COLOR RED}ZONE 7 AND ZONE 8{COLOR DARK_GREY}.$"

Zone8Sanctuary_Text_RewardClear7:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: FOR CLEARING {COLOR RED}ZONE 7{COLOR DARK_GREY},$"

Zone8Sanctuary_Text_ReceivedBlueShards:
	.string "YOU HAVE EARNED 3 BLUE SHARDS.$"

Zone8Sanctuary_Text_RewardClear8:
	.string "{COLOR BLUE}Quentin{COLOR DARK_GREY}: FOR CLEARING {COLOR RED}ZONE 8{COLOR DARK_GREY},$"

Zone8Sanctuary_Text_ReceivedRockTomb:
	.string "YOU HAVE EARNED TM02 ROCK TOMB.$"
