Zone13C_MapScripts::
	.byte 0

Zone13C_EventScript_Fossil_Scientist::
	lock
	goto_if_set FLAG_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_NuzlockeReceived
	goto_if_set FLAG_DAILY_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_VanillaReceived
	delay 48
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	faceplayer
	msgbox Zone13C_Text_Fossil_YouGetAFossil, MSGBOX_AUTOCLOSE
	call_if_set FLAG_NUZLOCKE_ON, Zone13C_EventScript_Fossil_SetNuzlockeFossilFlag
	setflag FLAG_DAILY_FOSSIL_RECEIVED
	random 11
	compare VAR_RESULT, 0
	call_if_eq Zone13C_EventScript_Fossil_GiveDome
	compare VAR_RESULT, 1
	call_if_eq Zone13C_EventScript_Fossil_GiveHelix
	compare VAR_RESULT, 2
	call_if_eq Zone13C_EventScript_Fossil_GiveOldAmber
	compare VAR_RESULT, 3
	call_if_eq Zone13C_EventScript_Fossil_GiveRoot
	compare VAR_RESULT, 4
	call_if_eq Zone13C_EventScript_Fossil_GiveClaw
	compare VAR_RESULT, 5
	call_if_eq Zone13C_EventScript_Fossil_GiveSkull
	compare VAR_RESULT, 6
	call_if_eq Zone13C_EventScript_Fossil_GiveArmor
	compare VAR_RESULT, 7
	call_if_eq Zone13C_EventScript_Fossil_GiveCover
	compare VAR_RESULT, 8
	call_if_eq Zone13C_EventScript_Fossil_GivePlume
	compare VAR_RESULT, 9
	call_if_eq Zone13C_EventScript_Fossil_GiveJaw
	compare VAR_RESULT, 10
	call_if_eq Zone13C_EventScript_Fossil_GiveSail
	goto_if_set FLAG_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_VanillaReceived
	end

Zone13C_EventScript_Fossil_SetNuzlockeFossilFlag:
	setflag FLAG_NUZLOCKE_FOSSIL_RECEIVED
	return

Zone13C_Text_Fossil_YouGetAFossil:
	.string "You get a Fossil!\n"
	.string "You get a Fossil!\l"
	.string "Everybody gets a Fossil!$"

Zone13C_EventScript_Fossil_VanillaReceived:
	faceplayer
	msgbox Zone13C_Text_Fossil_VanillaReceived, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_Fossil_VanillaReceived:
	.string "Hope you enjoy your Fossil!\n"
	.string "Come back tomorrow for another!$"

Zone13C_EventScript_Fossil_NuzlockeReceived:
	faceplayer
	msgbox Zone13C_Text_Fossil_NuzlockeReceived, MSGBOX_AUTOCLOSE
	release
	end

Zone13C_Text_Fossil_NuzlockeReceived:
	.string "Hope you enjoy your Fossil!$"

Zone13C_EventScript_Fossil_GiveDome:
	giveitem ITEM_DOME_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveHelix:
	giveitem ITEM_HELIX_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveOldAmber:
	giveitem ITEM_OLD_AMBER, 1
	return

Zone13C_EventScript_Fossil_GiveRoot:
	giveitem ITEM_ROOT_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveClaw:
	giveitem ITEM_CLAW_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveSkull:
	giveitem ITEM_SKULL_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveArmor:
	giveitem ITEM_ARMOR_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveCover:
	giveitem ITEM_COVER_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GivePlume:
	giveitem ITEM_PLUME_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveJaw:
	giveitem ITEM_JAW_FOSSIL, 1
	return

Zone13C_EventScript_Fossil_GiveSail:
	giveitem ITEM_SAIL_FOSSIL, 1
	return
