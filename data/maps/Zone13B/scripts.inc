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
	@ giveitem ITEM_FLASHLIGHT
	setflag FLAG_ZONE13B_RECEIVED_FLASHLIGHT
	applymovement 1, Common_Movement_WalkLeft
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
