Zone2Sanctuary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone2Sanctuary_OnFrame
	.byte 0

Zone2Sanctuary_OnFrame:
	map_script_2 VAR_ZONE, 2, Zone2Sanctuary_EventScript_Intro
	.2byte 0

Zone2Sanctuary_EventScript_Intro:
	lockall
	setvar VAR_HEAL_SHOP_USED, 0
	call EventScript_MoveCameraUp
	applymovement 1, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	call EventScript_MoveCameraDown
	applymovement 1, Common_Movement_Colress_WalkDown
	waitmovement 0
	playfanfare MUS_OBTAIN_BADGE
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
	waitfanfare
	buffernumberstring 0, VAR_ZONE
	msgbox gText_RewardClear, MSGBOX_AUTOCLOSE
	msgbox Zone2Sanctuary_Text_Reward, MSGBOX_AUTOCLOSE
	giveitem ITEM_EXP_SHARE, 1
	closemessage
	setvar VAR_ZONE, 3
	setflag FLAG_HIDE_LEVIATHAN1
	removeobject 4, MAP_ZONE3A
	msgbox Zone2Sanctuary_Text_Colress_ExplainLeviathans, MSGBOX_AUTOCLOSE
	delay 96
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_Colress_WalkUp
	waitmovement 0
	releaseall
	end

Zone2Sanctuary_EventScript_NextZone::
	lock
	faceplayer
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_ReadyToLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone2Sanctuary_EventScript_Leave
	buffernumberstring 0, VAR_ZONE
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
	release
	end

Zone2Sanctuary_EventScript_Leave:
	call EventScript_LeavingSetup
	warp MAP_ZONE3A, 255, 38, 25
	end

Zone2Sanctuary_Text_Colress_ExplainLeviathans:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: The next Zone will contain\n"
	.string "a {COLOR RED}Leviathan{COLOR DARK_GREY}.\p"
	.string "{COLOR RED}Leviathans{COLOR DARK_GREY} are difficult bosses\n"
	.string "that appear in some Zones.\p"
	.string "Defeating a Leviathan yields\n"
	.string "great rewards.\p"
	.string "However, typically you will not be\n"
	.string "warned of them in advance.$"

Zone2Sanctuary_Text_Reward:
	.string "The Exp. Share!$"
