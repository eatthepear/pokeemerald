Zone13B_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Zone13B_OnTransition
	.byte 0

Zone13B_OnTransition:
	goto_if_set FLAG_ZONE13B_RECEIVED_FLASHLIGHT Zone13B_EventScript_MoveScientist
	end

Zone13B_EventScript_MoveScientist:
	setobjectxyperm 1, 18, 2
	end

Zone13B_EventScript_GiveFlash::
	lock
	faceplayer
	goto_if_set FLAG_ZONE13B_RECEIVED_FLASHLIGHT, Zone13B_EventScript_UseFlash
	msgbox Zone13B_Text_NeedFlashlight, MSGBOX_AUTOCLOSE
	giveitem ITEM_FLASHLIGHT
	setflag FLAG_ZONE13B_RECEIVED_FLASHLIGHT
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 18
	goto_if_eq Zone13B_EventScript_FlashWalkRight
	applymovement 1, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Zone13B_EventScript_FlashWalkRight:
	applymovement 1, Common_Movement_WalkRight
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Zone13B_Text_NeedFlashlight:
	.string "This leads to the old mine.\p"
	.string "You'll need a flashlight to\n"
	.string "navigate through.$"

Zone13B_EventScript_UseFlash:
	msgbox Zone13B_Text_BeCareful, MSGBOX_AUTOCLOSE
	release
	end

Zone13B_Text_BeCareful:
	.string "Be careful down there.$"

Zone13B_EventScript_Scientist1::
	lock
	faceplayer
	msgbox Zone13B_Text_Scientist1, MSGBOX_AUTOCLOSE
	release
	end

Zone13B_Text_Scientist1:
	.string "The mine was operational a few\n"
	.string "decades ago, but it was found that\l"
	.string "the money meant to be going to the\l"
	.string "workers was being stolen by corrupt\l"
	.string "corporations.\p"
	.string "Capitalism, am I right?$"

Zone13B_EventScript_Scientist2::
	lock
	msgbox Zone13B_Text_Scientist2, MSGBOX_AUTOCLOSE
	release
	end

Zone13B_Text_Scientist2:
	.string "He's so focused on his work,\n"
	.string "he doesn't even notice you.$"

Zone13B_EventScript_Scientist3::
	lock
	faceplayer
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone13B_EventScript_Scientist3_GaveBall
	goto_if_set FLAG_DAILY_ZONE13B_POKEBALL_RECEIVED, Zone13B_EventScript_Scientist3_GaveBall
	msgbox Zone13B_Text_Scientist3_GivePokeball, MSGBOX_AUTOCLOSE
	random 7
	compare VAR_RESULT, 0
	call_if_eq Zone13B_EventScript_Scientist3_GiveLevel
	compare VAR_RESULT, 1
	call_if_eq Zone13B_EventScript_Scientist3_GiveLure
	compare VAR_RESULT, 2
	call_if_eq Zone13B_EventScript_Scientist3_GiveMoon
	compare VAR_RESULT, 3
	call_if_eq Zone13B_EventScript_Scientist3_GiveFriend
	compare VAR_RESULT, 4
	call_if_eq Zone13B_EventScript_Scientist3_GiveLove
	compare VAR_RESULT, 5
	call_if_eq Zone13B_EventScript_Scientist3_GiveHeavy
	compare VAR_RESULT, 6
	call_if_eq Zone13B_EventScript_Scientist3_GiveFast
	setflag FLAG_DAILY_ZONE13B_POKEBALL_RECEIVED
	goto Zone13B_EventScript_Scientist3_GaveBall
	end

Zone13B_EventScript_Scientist3_GiveLevel:
	giveitem ITEM_LEVEL_BALL
	return

Zone13B_EventScript_Scientist3_GiveLure:
	giveitem ITEM_LURE_BALL
	return

Zone13B_EventScript_Scientist3_GiveMoon:
	giveitem ITEM_MOON_BALL
	return

Zone13B_EventScript_Scientist3_GiveFriend:
	giveitem ITEM_FRIEND_BALL
	return

Zone13B_EventScript_Scientist3_GiveLove:
	giveitem ITEM_LOVE_BALL
	return

Zone13B_EventScript_Scientist3_GiveHeavy:
	giveitem ITEM_HEAVY_BALL
	return

Zone13B_EventScript_Scientist3_GiveFast:
	giveitem ITEM_FAST_BALL
	return

Zone13B_EventScript_Scientist3_GaveBall:
	msgbox Zone13B_Text_Scientist3_Funded, MSGBOX_AUTOCLOSE
	release
	end

Zone13B_Text_Scientist3_GivePokeball:
	.string "I'm developing new Pokeballs here.\p"
	.string "You're deserving of one!$"

Zone13B_Text_Scientist3_Funded:
	.string "We're funded by Silph Co.$"

Zone13B_EventScript_Scientist4::
	lock
	faceplayer
	msgbox Zone13B_Text_Scientist4, MSGBOX_AUTOCLOSE
	release
	end

Zone13B_Text_Scientist4:
	.string "9 to 5, underpaid,\n"
	.string "wish I had some better grades.$"

Zone13B_EventScript_Scientist5::
	lock
	faceplayer
	msgbox Zone13B_Text_Scientist5, MSGBOX_AUTOCLOSE
	release
	end

Zone13B_Text_Scientist5:
	.string "The Weather Institute?\p"
	.string "No, never been.\p"
	.string "It looks the same as this building?\p"
	.string "No way. I'm sure this is the only\n"
	.string "building that looks like this.$"

Zone13B_EventScript_Scientist6::
	lock
	msgbox Zone13B_Text_Scientist6, MSGBOX_AUTOCLOSE
	release
	end

Zone13B_Text_Scientist6:
	.string "He's sound asleep.\n"
	.string "Better not wake him.$"
