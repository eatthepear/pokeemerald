Zone18B_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Zone18B_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Zone18B_MapScripts_MAP_SCRIPT_ON_LOAD:
	setvar VAR_0x8005, 1
	call_if_defeated TRAINER_JOHN, Zone18B_EventScript_OpenNormalRoomDoors
	call_if_defeated TRAINER_GLENN, Zone18B_EventScript_OpenRockRoomDoors
	call_if_defeated TRAINER_JAY, Zone18B_EventScript_OpenIceRoomDoors
	call_if_defeated TRAINER_TYLER, Zone18B_EventScript_OpenDarkRoomDoors
	call_if_defeated TRAINER_TERRENCE, Zone18B_EventScript_OpenFlyingRoomDoors
	call_if_defeated TRAINER_MARTY, Zone18B_EventScript_OpenPsychicRoomDoors
	call_if_defeated TRAINER_KARI, Zone18B_EventScript_OpenFightingRoomDoors
	call_if_defeated TRAINER_ABRAHAM, Zone18B_EventScript_OpenDragonRoomDoors
	call_if_defeated TRAINER_MELINDA, Zone18B_EventScript_OpenFairyRoomDoors
	call_if_defeated TRAINER_EMILIO, Zone18B_EventScript_OpenGroundRoomDoors
	call_if_defeated TRAINER_REX, Zone18B_EventScript_OpenBugRoomDoors
	call_if_defeated TRAINER_LOUIS, Zone18B_EventScript_OpenSteelRoomDoors
	call_if_defeated TRAINER_LEROY, Zone18B_EventScript_OpenPoisonRoomDoors
	call_if_defeated TRAINER_ELTON, Zone18B_EventScript_OpenElectricRoomDoors
	call_if_defeated TRAINER_WILLIE, Zone18B_EventScript_OpenFireRoomDoors
	return


Zone18B_EventScript_DoorLocked::
	msgbox Zone18B_EventScript_DoorLocked_Text_0, MSGBOX_DEFAULT
	releaseall
	end


Zone18B_EventScript_RockRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_JOHN, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_RockRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RockRoomDoor_2
Zone18B_EventScript_RockRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_RockRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 5, 7, 189
	waitstate
	goto Zone18B_EventScript_RockRoomDoor_1


Zone18B_EventScript_IceRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_JOHN, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_IceRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_IceRoomDoor_2
Zone18B_EventScript_IceRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_IceRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 6, 1, 176
	waitstate
	goto Zone18B_EventScript_IceRoomDoor_1


Zone18B_EventScript_DarkRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_GLENN, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_DarkRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_DarkRoomDoor_2
Zone18B_EventScript_DarkRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_DarkRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 13, 7, 163
	waitstate
	goto Zone18B_EventScript_DarkRoomDoor_1


Zone18B_EventScript_LeftFlyingRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_GLENN, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftFlyingRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftFlyingRoomDoor_2
Zone18B_EventScript_LeftFlyingRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_LeftFlyingRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 14, 1, 150
	waitstate
	goto Zone18B_EventScript_LeftFlyingRoomDoor_1


Zone18B_EventScript_RightFlyingRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_JAY, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftFlyingRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightFlyingRoomDoor_2
Zone18B_EventScript_RightFlyingRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_RightFlyingRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 17, 7, 150
	waitstate
	goto Zone18B_EventScript_RightFlyingRoomDoor_1


Zone18B_EventScript_PsychicRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_JAY, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_PsychicRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_PsychicRoomDoor_2
Zone18B_EventScript_PsychicRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_PsychicRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 18, 1, 137
	waitstate
	goto Zone18B_EventScript_PsychicRoomDoor_1


Zone18B_EventScript_FightingRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_TYLER, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_FightingRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_FightingRoomDoor_2
Zone18B_EventScript_FightingRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_FightingRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 27, 7, 124
	waitstate
	goto Zone18B_EventScript_FightingRoomDoor_1


Zone18B_EventScript_LeftDragonRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_TYLER, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftDragonRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftDragonRoomDoor_2
Zone18B_EventScript_LeftDragonRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_LeftDragonRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 28, 1, 111
	waitstate
	goto Zone18B_EventScript_LeftDragonRoomDoor_1


Zone18B_EventScript_RightDragonRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_TERRENCE, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftDragonRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightDragonRoomDoor_2
Zone18B_EventScript_RightDragonRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_RightDragonRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 31, 7, 111
	waitstate
	goto Zone18B_EventScript_RightDragonRoomDoor_1


Zone18B_EventScript_LeftFairyRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_TERRENCE, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftFairyRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftFairyRoomDoor_2
Zone18B_EventScript_LeftFairyRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_LeftFairyRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 32, 1, 98
	waitstate
	goto Zone18B_EventScript_LeftFairyRoomDoor_1


Zone18B_EventScript_RightFairyRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_MARTY, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftFairyRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightFairyRoomDoor_2
Zone18B_EventScript_RightFairyRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_RightFairyRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 35, 7, 98
	waitstate
	goto Zone18B_EventScript_RightFairyRoomDoor_1


Zone18B_EventScript_GroundRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_MARTY, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_GroundRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_GroundRoomDoor_2
Zone18B_EventScript_GroundRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_GroundRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 36, 1, 85
	waitstate
	goto Zone18B_EventScript_GroundRoomDoor_1


Zone18B_EventScript_LeftBugRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_KARI, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftBugRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftBugRoomDoor_2
Zone18B_EventScript_LeftBugRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_LeftBugRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 44, 1, 72
	waitstate
	goto Zone18B_EventScript_LeftBugRoomDoor_1


Zone18B_EventScript_RightBugRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_ABRAHAM, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftBugRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightBugRoomDoor_2
Zone18B_EventScript_RightBugRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_RightBugRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 47, 7, 72
	waitstate
	goto Zone18B_EventScript_RightBugRoomDoor_1


Zone18B_EventScript_LeftSteelRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_ABRAHAM, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftSteelRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftSteelRoomDoor_2
Zone18B_EventScript_LeftSteelRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_LeftSteelRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 48, 1, 59
	waitstate
	goto Zone18B_EventScript_LeftSteelRoomDoor_1


Zone18B_EventScript_RightSteelRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_MELINDA, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftSteelRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightSteelRoomDoor_2
Zone18B_EventScript_RightSteelRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_RightSteelRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 50, 7, 59
	waitstate
	goto Zone18B_EventScript_RightSteelRoomDoor_1


Zone18B_EventScript_LeftPoisonRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_MELINDA, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftPoisonRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftPoisonRoomDoor_2
Zone18B_EventScript_LeftPoisonRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_LeftPoisonRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 52, 1, 46
	waitstate
	goto Zone18B_EventScript_LeftPoisonRoomDoor_1


Zone18B_EventScript_RightPoisonRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_EMILIO, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftPoisonRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightPoisonRoomDoor_2
Zone18B_EventScript_RightPoisonRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_RightPoisonRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 54, 7, 46
	waitstate
	goto Zone18B_EventScript_RightPoisonRoomDoor_1


Zone18B_EventScript_LeftElectricRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_REX, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftElectricRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftElectricRoomDoor_2
Zone18B_EventScript_LeftElectricRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_LeftElectricRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 60, 1, 33
	waitstate
	goto Zone18B_EventScript_LeftElectricRoomDoor_1


Zone18B_EventScript_RightElectricRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_LOUIS, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftElectricRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightElectricRoomDoor_2
Zone18B_EventScript_RightElectricRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_RightElectricRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 63, 7, 33
	waitstate
	goto Zone18B_EventScript_RightElectricRoomDoor_1


Zone18B_EventScript_LeftFireRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_LOUIS, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftFireRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftFireRoomDoor_2
Zone18B_EventScript_LeftFireRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_LeftFireRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 64, 1, 20
	waitstate
	goto Zone18B_EventScript_LeftFireRoomDoor_1


Zone18B_EventScript_RightFireRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_LEROY, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftFireRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightFireRoomDoor_2
Zone18B_EventScript_RightFireRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_RightFireRoomDoor_2:
	closemessage
	delay 30
	warpdoor MAP_ZONE18B, 67, 7, 20
	waitstate
	goto Zone18B_EventScript_RightFireRoomDoor_1


Zone18B_EventScript_LeftLeviathanRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_ELTON, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftLeviathanRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftLeviathanRoomDoor_2
Zone18B_EventScript_LeftLeviathanRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_LeftLeviathanRoomDoor_2:
	closemessage
	delay 30
	compare VAR_ZONE_18_STATE, 3
	goto_if_lt Zone18B_EventScript_LeftLeviathanRoomDoor_5
Zone18B_EventScript_LeftLeviathanRoomDoor_4:
	warpdoor MAP_ZONE18B, 71, 1, 7
	waitstate
	goto Zone18B_EventScript_LeftLeviathanRoomDoor_1

Zone18B_EventScript_LeftLeviathanRoomDoor_5:
	setvar VAR_ZONE_18_STATE, 1
	goto Zone18B_EventScript_LeftLeviathanRoomDoor_4


Zone18B_EventScript_RightLeviathanRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_WILLIE, Zone18B_EventScript_DoorLocked
	msgbox Zone18B_EventScript_LeftLeviathanRoomDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightLeviathanRoomDoor_2
Zone18B_EventScript_RightLeviathanRoomDoor_1:
	releaseall
	end

Zone18B_EventScript_RightLeviathanRoomDoor_2:
	closemessage
	delay 30
	compare VAR_ZONE_18_STATE, 3
	goto_if_lt Zone18B_EventScript_RightLeviathanRoomDoor_5
Zone18B_EventScript_RightLeviathanRoomDoor_4:
	warpdoor MAP_ZONE18B, 72, 7, 7
	waitstate
	goto Zone18B_EventScript_RightLeviathanRoomDoor_1

Zone18B_EventScript_RightLeviathanRoomDoor_5:
	setvar VAR_ZONE_18_STATE, 2
	goto Zone18B_EventScript_RightLeviathanRoomDoor_4


Zone18B_EventScript_SlideOpenNormalRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenNormalRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_SlideOpenRockRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenRockRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_SlideOpenIceRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenIceRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_SlideOpenDarkRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenDarkRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_SlideOpenFlyingRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenFlyingRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_SlideOpenPsychicRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenPsychicRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_SlideOpenFightingRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenFightingRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_SlideOpenDragonRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenDragonRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_SlideOpenFairyRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenFairyRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_SlideOpenGroundRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenGroundRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_SlideOpenBugRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenBugRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_SlideOpenSteelRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenSteelRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_SlideOpenPoisonRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenPoisonRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_SlideOpenElectricRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenElectricRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_SlideOpenFireRoomDoors::
	setvar VAR_0x8005, 0
	call Zone18B_EventScript_OpenFireRoomDoors
	special DrawWholeMapView
	release
	end


Zone18B_EventScript_OpenNormalRoomDoors::
	setvar VAR_0x8004, 1
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenNormalRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenNormalRoomDoors_3
Zone18B_EventScript_OpenNormalRoomDoors_1:
	call Zone18B_EventScript_SetNormalRoomDoorMetatiles
	return

Zone18B_EventScript_OpenNormalRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenNormalRoomDoors_1

Zone18B_EventScript_OpenNormalRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenNormalRoomDoors_1


Zone18B_EventScript_OpenRockRoomDoors::
	setvar VAR_0x8004, 2
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenRockRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenRockRoomDoors_3
Zone18B_EventScript_OpenRockRoomDoors_1:
	call Zone18B_EventScript_SetRockRoomDoorMetatiles
	return

Zone18B_EventScript_OpenRockRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenRockRoomDoors_1

Zone18B_EventScript_OpenRockRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenRockRoomDoors_1


Zone18B_EventScript_OpenIceRoomDoors::
	setvar VAR_0x8004, 3
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenIceRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenIceRoomDoors_3
Zone18B_EventScript_OpenIceRoomDoors_1:
	call Zone18B_EventScript_SetIceRoomDoorMetatiles
	return

Zone18B_EventScript_OpenIceRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenIceRoomDoors_1

Zone18B_EventScript_OpenIceRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenIceRoomDoors_1


Zone18B_EventScript_OpenDarkRoomDoors::
	setvar VAR_0x8004, 4
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenDarkRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenDarkRoomDoors_3
Zone18B_EventScript_OpenDarkRoomDoors_1:
	call Zone18B_EventScript_SetDarkRoomDoorMetatiles
	return

Zone18B_EventScript_OpenDarkRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenDarkRoomDoors_1

Zone18B_EventScript_OpenDarkRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenDarkRoomDoors_1


Zone18B_EventScript_OpenFlyingRoomDoors::
	setvar VAR_0x8004, 5
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenFlyingRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenFlyingRoomDoors_3
Zone18B_EventScript_OpenFlyingRoomDoors_1:
	call Zone18B_EventScript_SetFlyingRoomDoorMetatiles
	return

Zone18B_EventScript_OpenFlyingRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenFlyingRoomDoors_1

Zone18B_EventScript_OpenFlyingRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenFlyingRoomDoors_1


Zone18B_EventScript_OpenPsychicRoomDoors::
	setvar VAR_0x8004, 6
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenPsychicRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenPsychicRoomDoors_3
Zone18B_EventScript_OpenPsychicRoomDoors_1:
	call Zone18B_EventScript_SetPsychicRoomDoorMetatiles
	return

Zone18B_EventScript_OpenPsychicRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenPsychicRoomDoors_1

Zone18B_EventScript_OpenPsychicRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenPsychicRoomDoors_1


Zone18B_EventScript_OpenFightingRoomDoors::
	setvar VAR_0x8004, 7
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenFightingRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenFightingRoomDoors_3
Zone18B_EventScript_OpenFightingRoomDoors_1:
	call Zone18B_EventScript_SetFightingRoomDoorMetatiles
	return

Zone18B_EventScript_OpenFightingRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenFightingRoomDoors_1

Zone18B_EventScript_OpenFightingRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenFightingRoomDoors_1


Zone18B_EventScript_OpenDragonRoomDoors::
	setvar VAR_0x8004, 8
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenDragonRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenDragonRoomDoors_3
Zone18B_EventScript_OpenDragonRoomDoors_1:
	call Zone18B_EventScript_SetDragonRoomDoorMetatiles
	return

Zone18B_EventScript_OpenDragonRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenDragonRoomDoors_1

Zone18B_EventScript_OpenDragonRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenDragonRoomDoors_1


Zone18B_EventScript_OpenFairyRoomDoors::
	setvar VAR_0x8004, 9
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenFairyRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenFairyRoomDoors_3
Zone18B_EventScript_OpenFairyRoomDoors_1:
	call Zone18B_EventScript_SetFairyRoomDoorMetatiles
	return

Zone18B_EventScript_OpenFairyRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenFairyRoomDoors_1

Zone18B_EventScript_OpenFairyRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenFairyRoomDoors_1


Zone18B_EventScript_OpenGroundRoomDoors::
	setvar VAR_0x8004, 10
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenGroundRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenGroundRoomDoors_3
Zone18B_EventScript_OpenGroundRoomDoors_1:
	call Zone18B_EventScript_SetGroundRoomDoorMetatiles
	return

Zone18B_EventScript_OpenGroundRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenGroundRoomDoors_1

Zone18B_EventScript_OpenGroundRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenGroundRoomDoors_1


Zone18B_EventScript_OpenBugRoomDoors::
	setvar VAR_0x8004, 11
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenBugRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenBugRoomDoors_3
Zone18B_EventScript_OpenBugRoomDoors_1:
	call Zone18B_EventScript_SetBugRoomDoorMetatiles
	return

Zone18B_EventScript_OpenBugRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenBugRoomDoors_1

Zone18B_EventScript_OpenBugRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenBugRoomDoors_1


Zone18B_EventScript_OpenSteelRoomDoors::
	setvar VAR_0x8004, 12
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenSteelRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenSteelRoomDoors_3
Zone18B_EventScript_OpenSteelRoomDoors_1:
	call Zone18B_EventScript_SetSteelRoomDoorMetatiles
	return

Zone18B_EventScript_OpenSteelRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenSteelRoomDoors_1

Zone18B_EventScript_OpenSteelRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenSteelRoomDoors_1


Zone18B_EventScript_OpenPoisonRoomDoors::
	setvar VAR_0x8004, 13
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenPoisonRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenPoisonRoomDoors_3
Zone18B_EventScript_OpenPoisonRoomDoors_1:
	call Zone18B_EventScript_SetPoisonRoomDoorMetatiles
	return

Zone18B_EventScript_OpenPoisonRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenPoisonRoomDoors_1

Zone18B_EventScript_OpenPoisonRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenPoisonRoomDoors_1


Zone18B_EventScript_OpenElectricRoomDoors::
	setvar VAR_0x8004, 14
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenElectricRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenElectricRoomDoors_3
Zone18B_EventScript_OpenElectricRoomDoors_1:
	call Zone18B_EventScript_SetElectricRoomDoorMetatiles
	return

Zone18B_EventScript_OpenElectricRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenElectricRoomDoors_1

Zone18B_EventScript_OpenElectricRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenElectricRoomDoors_1


Zone18B_EventScript_OpenFireRoomDoors::
	setvar VAR_0x8004, 15
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenFireRoomDoors_2
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenFireRoomDoors_3
Zone18B_EventScript_OpenFireRoomDoors_1:
	call Zone18B_EventScript_SetFireRoomDoorMetatiles
	return

Zone18B_EventScript_OpenFireRoomDoors_2:
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenFireRoomDoors_1

Zone18B_EventScript_OpenFireRoomDoors_3:
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenFireRoomDoors_1


Zone18B_EventScript_SetNormalRoomDoorMetatiles::
	setmetatile 6, 189, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 189, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 176, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 176, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetRockRoomDoorMetatiles::
	setmetatile 6, 163, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 163, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 150, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 150, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetIceRoomDoorMetatiles::
	setmetatile 6, 150, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 150, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 137, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 137, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetDarkRoomDoorMetatiles::
	setmetatile 6, 124, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 124, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 111, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 111, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetFlyingRoomDoorMetatiles::
	setmetatile 6, 111, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 111, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetPsychicRoomDoorMetatiles::
	setmetatile 6, 98, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 98, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 85, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 85, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetFightingRoomDoorMetatiles::
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetDragonRoomDoorMetatiles::
	setmetatile 6, 72, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 72, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetFairyRoomDoorMetatiles::
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 46, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 46, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetGroundRoomDoorMetatiles::
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetBugRoomDoorMetatiles::
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetSteelRoomDoorMetatiles::
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, 0
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetPoisonRoomDoorMetatiles::
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetElectricRoomDoorMetatiles::
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetFireRoomDoorMetatiles::
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, 0
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SlideOpenRoomDoors::
	special PetalburgGymSlideOpenRoomDoors
	waitstate
	return


Zone18B_EventScript_UnlockRoomDoors::
	special PetalburgGymUnlockRoomDoors
	return


Zone18B_EventScript_Statue::
	msgbox Zone18B_EventScript_Statue_Text_0, MSGBOX_SIGN
	end


Zone18B_EventScript_John::
	trainerbattle_single TRAINER_JOHN, Zone18B_Text_JohnIntro, Zone18B_Text_JohnDefeat, Zone18B_EventScript_SlideOpenNormalRoomDoors
	msgbox Zone18B_Text_JohnPostBattle
	end

Zone18B_Text_JohnIntro:
	.string "Welcome to the Trainer's Dojo!\p"
	.string "Uh… what else is in this script…\p"
	.string "Oh! Each room has a particular type\n"
	.string "associated with it.\p"
	.string "You can pick and choose which room to\n"
	.string "challenge.\p"
	.string "Hmm… Looks like I'm supposed to\n"
	.string "battle you now.\p"
	.string "Well, good luck to you, facing my\n"
	.string "Normal-types in battle!$"

Zone18B_Text_JohnDefeat:
	.string "You got me! How typical.$"

Zone18B_Text_JohnPostBattle:
	.string "You can pick between the Rock room\n"
	.string "and the Ice room.\p"
	.string "Oh, and in case it wasn't obvious,\n"
	.string "everyone here battles in\l"
	.string "Double Battles.$"

Zone18B_EventScript_Glenn::
	trainerbattle_single TRAINER_GLENN, Zone18B_Text_GlennIntro, Zone18B_Text_GlennDefeat, Zone18B_EventScript_SlideOpenRockRoomDoors
	msgbox Zone18B_Text_GlennPostBattle
	end

Zone18B_Text_GlennIntro:
	.string "Rock 'em, sock em!$"

Zone18B_Text_GlennDefeat:
	.string "You rocked!$"

Zone18B_Text_GlennPostBattle:
	.string "How many weaknesses do Rock-types\n"
	.string "have?\p"
	.string "I'll tell you: none, if you're\n"
	.string "careful about type matchups!$"

Zone18B_EventScript_Jay::
	trainerbattle_single TRAINER_JAY, Zone18B_Text_JayIntro, Zone18B_Text_JayDefeat, Zone18B_EventScript_SlideOpenIceRoomDoors
	msgbox Zone18B_Text_JayPostBattle
	end

Zone18B_Text_JayIntro:
	.string "Welcome to the Cool Room.\n"
	.string "Speaking of cool, have you\l"
	.string "ever read the Great Gatsby?$"

Zone18B_Text_JayDefeat:
	.string "I'm not Gatsby!$"

Zone18B_Text_JayPostBattle:
	.string "I just think he's a pretty chill\n"
	.string "dude.$"

Zone18B_EventScript_Tyler::
	trainerbattle_single TRAINER_TYLER, Zone18B_Text_TylerIntro, Zone18B_Text_TylerDefeat, Zone18B_EventScript_SlideOpenDarkRoomDoors
	msgbox Zone18B_Text_TylerPostBattle
	end

Zone18B_Text_TylerIntro:
	.string "You look tough, kid.\p"
	.string "Can you beat the toughest\n"
	.string "Dark-types around?$"

Zone18B_Text_TylerDefeat:
	.string "I guess you can!$"

Zone18B_Text_TylerPostBattle:
	.string "I know I'm tough because my momma\n"
	.string "said so!$"

Zone18B_EventScript_Terrence::
	trainerbattle_single TRAINER_TERRENCE, Zone18B_Text_TerrenceIntro, Zone18B_Text_TerrenceDefeat, Zone18B_EventScript_SlideOpenFlyingRoomDoors
	msgbox Zone18B_Text_TerrencePostBattle
	end

Zone18B_Text_TerrenceIntro:
	.string "Take flight, my Pokémon,\n"
	.string "and defeat this Trainer!$"

Zone18B_Text_TerrenceDefeat:
	.string "Our wings are clipped and our\n"
	.string "flight path broken!$"

Zone18B_Text_TerrencePostBattle:
	.string "My favorite board game is Wingspan.\n"
	.string "You should try it sometime!$"

Zone18B_EventScript_Marty::
	trainerbattle_single TRAINER_MARTY, Zone18B_Text_MartyIntro, Zone18B_Text_MartyDefeat, Zone18B_EventScript_SlideOpenPsychicRoomDoors
	msgbox Zone18B_Text_MartyPostBattle
	end

Zone18B_Text_MartyIntro:
	.string "Through my powers, I see a\n"
	.string "great battle ahead of us…$"

Zone18B_Text_MartyDefeat:
	.string "It wasn't a great battle because\n"
	.string "I lost!$"

Zone18B_Text_MartyPostBattle:
	.string "Why don't my visions ever show me\n"
	.string "winning?$"

Zone18B_EventScript_Kari::
	trainerbattle_single TRAINER_KARI, Zone18B_Text_KariIntro, Zone18B_Text_KariDefeat, Zone18B_EventScript_SlideOpenFightingRoomDoors
	msgbox Zone18B_Text_KariPostBattle
	end

Zone18B_Text_KariIntro:
	.string "Fight me!$"

Zone18B_Text_KariDefeat:
	.string "The taste of defeat is bitter!$"

Zone18B_Text_KariPostBattle:
	.string "I'll have to train more for next\n"
	.string "time!$"

Zone18B_EventScript_Abraham::
	trainerbattle_single TRAINER_ABRAHAM, Zone18B_Text_AbrahamIntro, Zone18B_Text_AbrahamDefeat, Zone18B_EventScript_SlideOpenDragonRoomDoors
	msgbox Zone18B_Text_AbrahamPostBattle
	end

Zone18B_Text_AbrahamIntro:
	.string "Dragons can inspire fear or\n"
	.string "reverence in different cultures.\p"
	.string "Which one is it for you?$"

Zone18B_Text_AbrahamDefeat:
	.string "Personally, I fear them.\n"
	.string "Well, when they evolve more.$"

Zone18B_Text_AbrahamPostBattle:
	.string "Evolution won't be for a while,\n"
	.string "though!$"

Zone18B_EventScript_Melinda::
	trainerbattle_single TRAINER_MELINDA, Zone18B_Text_MelindaIntro, Zone18B_Text_MelindaDefeat, Zone18B_EventScript_SlideOpenFairyRoomDoors
	msgbox Zone18B_Text_MelindaPostBattle
	end

Zone18B_Text_MelindaIntro:
	.string "Momma… where are you?$"

Zone18B_Text_MelindaDefeat:
	.string "She'll be with me soon…$"

Zone18B_Text_MelindaPostBattle:
	.string "We'll be together again,\n"
	.string "like we were meant to be…$"

Zone18B_EventScript_Emilio::
	trainerbattle_single TRAINER_EMILIO, Zone18B_Text_EmilioIntro, Zone18B_Text_EmilioDefeat, Zone18B_EventScript_SlideOpenGroundRoomDoors
	msgbox Zone18B_Text_EmilioPostBattle
	end

Zone18B_Text_EmilioIntro:
	.string "Rock 'em, sock 'em!$"

Zone18B_Text_EmilioDefeat:
	.string "Our boulders have been reduced to\n"
	.string "pebbles!$"

Zone18B_Text_EmilioPostBattle:
	.string "We gotta be more solid next time.$"

Zone18B_EventScript_Rex::
	trainerbattle_single TRAINER_REX, Zone18B_Text_RexIntro, Zone18B_Text_RexDefeat, Zone18B_EventScript_SlideOpenBugRoomDoors
	msgbox Zone18B_Text_RexPostBattle
	end

Zone18B_Text_RexIntro:
	.string "Bugs, Bugs, I love Bugs.\n"
	.string "Don't you?$"

Zone18B_Text_RexDefeat:
	.string "Ah! My poor Bugs!$"

Zone18B_Text_RexPostBattle:
	.string "My sweet, lovely, creepy-crawlies,\n"
	.string "I'll work harder for you next time!$"

Zone18B_EventScript_Louis::
	trainerbattle_single TRAINER_LOUIS, Zone18B_Text_LouisIntro, Zone18B_Text_LouisDefeat, Zone18B_EventScript_SlideOpenSteelRoomDoors
	msgbox Zone18B_Text_LouisPostBattle
	end

Zone18B_Text_LouisIntro:
	.string "I'm a researcher studying rare\n"
	.string "metal artifacts. Do you have any?$"

Zone18B_Text_LouisDefeat:
	.string "Perhaps I should study Pokémon\n"
	.string "battling as well.$"

Zone18B_Text_LouisPostBattle:
	.string "I've heard there is a great ruin\n"
	.string "in a dense jungle somewhere, and\l"
	.string "deep within lies a powerful item.$"

Zone18B_EventScript_Leroy::
	trainerbattle_single TRAINER_LEROY, Zone18B_Text_LeroyIntro, Zone18B_Text_LeroyDefeat, Zone18B_EventScript_SlideOpenPoisonRoomDoors
	msgbox Zone18B_Text_LeroyPostBattle
	end

Zone18B_Text_LeroyIntro:
	.string "Sneak attack! Poison Powder!$"

Zone18B_Text_LeroyDefeat:
	.string "I forgot about the powder!$"

Zone18B_Text_LeroyPostBattle:
	.string "I didn't really sneak up on you\n"
	.string "either, did I.$"

Zone18B_EventScript_Elton::
	trainerbattle_single TRAINER_ELTON, Zone18B_Text_EltonIntro, Zone18B_Text_EltonDefeat, Zone18B_EventScript_SlideOpenElectricRoomDoors
	msgbox Zone18B_Text_EltonPostBattle
	end

Zone18B_Text_EltonIntro:
	.string "My music will shock you!$"

Zone18B_Text_EltonDefeat:
	.string "You don't like Electric beats?$"

Zone18B_Text_EltonPostBattle:
	.string "I just like the smooth current!$"

Zone18B_EventScript_Willie::
	trainerbattle_single TRAINER_WILLIE, Zone18B_Text_WillieIntro, Zone18B_Text_WillieDefeat, Zone18B_EventScript_SlideOpenFireRoomDoors
	msgbox Zone18B_Text_WilliePostBattle
	end

Zone18B_Text_WillieIntro:
	.string "Hot, hot hot hot!$"

Zone18B_Text_WillieDefeat:
	.string "Sorry, I had a hot potato in my hands.$"

Zone18B_Text_WilliePostBattle:
	.string "You should be careful while\n"
	.string "cooking something hot!$"

Zone18B_EventScript_EliZoe::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 3
	goto_if_eq Zone18B_EventScript_EliZoe_2
	compare VAR_TEMP_0, 5
	goto_if_eq Zone18B_EventScript_EliZoe_3
Zone18B_EventScript_EliZoe_1:
	compare VAR_ZONE_18_STATE, 3
	goto_if_lt Zone18B_EventScript_EliZoe_6
	compare VAR_ZONE_18_STATE, 5
	goto_if_eq Zone18B_EventScript_EliZoe_7
	msgbox Zone18B_EventScript_EliZoe_Text_6, MSGBOX_DEFAULT
	msgbox Zone18B_EventScript_EliZoe_Text_5, MSGBOX_DEFAULT
	release
	end

Zone18B_EventScript_EliZoe_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone18B_EventScript_EliZoe_1

Zone18B_EventScript_EliZoe_3:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone18B_EventScript_EliZoe_1

Zone18B_EventScript_EliZoe_6:
	goto Zone18B_EventScript_LeviathanBattle
	return

Zone18B_EventScript_EliZoe_7:
	msgbox Zone18B_EventScript_EliZoe_Text_0, MSGBOX_DEFAULT
	msgbox Zone18B_EventScript_EliZoe_Text_1, MSGBOX_DEFAULT
	msgbox Zone18B_EventScript_EliZoe_Text_2, MSGBOX_DEFAULT
	msgbox Zone18B_EventScript_EliZoe_Text_3, MSGBOX_DEFAULT
	delay 40
	msgbox Zone18B_EventScript_EliZoe_Text_4, MSGBOX_DEFAULT
	msgbox Zone18B_EventScript_EliZoe_Text_5, MSGBOX_DEFAULT
	setvar VAR_ZONE_18_STATE, 6
	clearflag FLAG_HIDE_ZONE18A_PORYGON
	release
	end


Zone18B_EventScript_LeviathanBattle::
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone18B_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	msgbox Zone18B_EventScript_LeviathanBattle_Text_1
	fadeoutbgm 1
	applymovement 1, Common_Movement_FaceDown
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone18B_EventScript_LeviathanBattle_Text_2, MSGBOX_DEFAULT
	msgbox Zone18B_EventScript_LeviathanBattle_Text_3, MSGBOX_DEFAULT
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone18B_EventScript_LeviathanBattle_2
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone18B_EventScript_LeviathanBattle_2
	setvar VAR_MUGSHOT_ID, MUGSHOT_ZOE_AND_ELI
	trainerbattle_no_intro TRAINER_ZOE_AND_ELI_LEVIATHAN_16, Zone18B_Text_Leviathan16Defeat
Zone18B_EventScript_LeviathanBattle_1:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	applymovement 1, Common_Movement_FaceRight
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone18B_EventScript_LeviathanBattle_Text_5, MSGBOX_DEFAULT
	msgbox Zone18B_EventScript_LeviathanBattle_Text_6, MSGBOX_DEFAULT
	msgbox Zone18B_EventScript_LeviathanBattle_Text_7, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_FaceDown
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone18B_EventScript_LeviathanBattle_Text_8, MSGBOX_DEFAULT
	giveitem ITEM_TM35
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	msgbox Zone18B_EventScript_LeviathanBattle_Text_9, MSGBOX_DEFAULT
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone18B_EventScript_LeviathanBattle_Text_10, MSGBOX_DEFAULT
	msgbox Zone18B_EventScript_LeviathanBattle_Text_11, MSGBOX_DEFAULT
	msgbox Zone18B_EventScript_LeviathanBattle_Text_12
	setflag FLAG_BEAT_LEVIATHAN_16
	compare VAR_ZONE_18_STATE, 1
	goto_if_eq Zone18B_EventScript_LeviathanBattle_8
	compare VAR_ZONE_18_STATE, 2
	goto_if_eq Zone18B_EventScript_LeviathanBattle_9
Zone18B_EventScript_LeviathanBattle_7:
	playse SE_DOOR
	delay 10
	removeobject 1
	removeobject 2
	setflag FLAG_HIDE_ZONE18B_ELI
	setflag FLAG_HIDE_ZONE18B_ZOE
	clearflag FLAG_HIDE_ZONE18A_ELI
	clearflag FLAG_HIDE_ZONE18A_ZOE
	clearflag FLAG_HIDE_ZONE18A_BOAT
	setvar VAR_ZONE_18_STATE, 3
	release
	end

Zone18B_EventScript_LeviathanBattle_2:
	setweather WEATHER_RAIN
	doweather
	msgbox Zone18B_EventScript_LeviathanBattle_Text_4, MSGBOX_DEFAULT
	setvar VAR_MUGSHOT_ID, MUGSHOT_ZOE_AND_ELI
	trainerbattle_no_intro TRAINER_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL, Zone18B_Text_Leviathan16Defeat
	resetweather
	doweather
	goto Zone18B_EventScript_LeviathanBattle_1

Zone18B_EventScript_LeviathanBattle_8:
	applymovement 1, Zone18B_Movement_Eli_RunOutLeft
	applymovement 2, Zone18B_Movement_Zoe_RunOutLeft
	waitmovement 0
	goto Zone18B_EventScript_LeviathanBattle_7

Zone18B_EventScript_LeviathanBattle_9:
	applymovement 2, Zone18B_Movement_Zoe_RunOutRight
	applymovement 1, Zone18B_Movement_Eli_RunOutRight
	waitmovement 0
	goto Zone18B_EventScript_LeviathanBattle_7


Zone18B_Movement_Eli_RunOutLeft:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

Zone18B_Movement_Eli_RunOutRight:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_down
	walk_down
	step_end

Zone18B_Movement_Zoe_RunOutLeft:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	step_end

Zone18B_Movement_Zoe_RunOutRight:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

Zone18B_EventScript_DoorLocked_Text_0:
	.string "This door appears to be locked\nright now…$"

Zone18B_EventScript_RockRoomDoor_Text_0:
	.string "“Rock Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_IceRoomDoor_Text_0:
	.string "“Ice Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_DarkRoomDoor_Text_0:
	.string "“Dark Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftFlyingRoomDoor_Text_0:
	.string "“Flying Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_PsychicRoomDoor_Text_0:
	.string "“Psychic Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_FightingRoomDoor_Text_0:
	.string "“Fighting Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftDragonRoomDoor_Text_0:
	.string "“Dragon Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftFairyRoomDoor_Text_0:
	.string "“Fairy Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_GroundRoomDoor_Text_0:
	.string "“Ground Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftBugRoomDoor_Text_0:
	.string "“Bug Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftSteelRoomDoor_Text_0:
	.string "“Steel Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftPoisonRoomDoor_Text_0:
	.string "“Poison Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftElectricRoomDoor_Text_0:
	.string "“Electric Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftFireRoomDoor_Text_0:
	.string "“Fire Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftLeviathanRoomDoor_Text_0:
	.string "“Leviathan's Room,”\p“See for yourself what Pokémon await\nyou!” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_Statue_Text_0:
	.string "Trainer's Dojo\nEstablished 2021$"

Zone18B_EventScript_EliZoe_Text_0:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: You really got it back for me?$"

Zone18B_EventScript_EliZoe_Text_1:
	.string "{PLAYER} returned the Azurill doll to\n"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}.$"

Zone18B_EventScript_EliZoe_Text_2:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Wow! Thank you so much!$"

Zone18B_EventScript_EliZoe_Text_3:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: Seriously, thank you so much.\p"
	.string "My brother loves that doll, so we are\n"
	.string "sincerely in your debt.$"

Zone18B_EventScript_EliZoe_Text_4:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: We don't have much in the way of a\n"
	.string "reward, but maybe you can just keep\l"
	.string "that Diving Gear we lent you. Thank you\l"
	.string "again for your help.$"

Zone18B_EventScript_EliZoe_Text_5:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Yeah, thank you thank you thank\n"
	.string "you!$"

Zone18B_EventScript_EliZoe_Text_6:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: Thank you again for your help.$"

Zone18B_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: Is this the challenger you were\n"
	.string "telling me about?$"

Zone18B_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Yeah yeah! They've been beating all\n"
	.string "the other Trainers!$"

Zone18B_EventScript_LeviathanBattle_Text_2:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: To truly clear the Trainer's Dojo,\n"
	.string "you must defeat the two of us in a\l"
	.string "Double Battle!$"

Zone18B_EventScript_LeviathanBattle_Text_3:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Taste our power!$"

Zone18B_EventScript_LeviathanBattle_Text_4:
	.string "It suddenly began to rain!$"

Zone18B_EventScript_LeviathanBattle_Text_5:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Aww! We lost, sis!$"

Zone18B_EventScript_LeviathanBattle_Text_6:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: That's ok, Eli. We'll learn from this,\n"
	.string "yeah?$"

Zone18B_EventScript_LeviathanBattle_Text_7:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Yeah yeah! And we gotta give\n"
	.string "{PLAYER} the reward!$"

Zone18B_EventScript_LeviathanBattle_Text_8:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: Right! Here's our little gift for\n"
	.string "clearing the Trainer's Dojo.$"

Zone18B_EventScript_LeviathanBattle_Text_9:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Ah! I just remembered!$"

Zone18B_EventScript_LeviathanBattle_Text_10:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: What? What is it?$"

Zone18B_EventScript_LeviathanBattle_Text_11:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: I left my Azurill doll at the beach!\p"
	.string "I gotta go get it!$"

Zone18B_EventScript_LeviathanBattle_Text_12:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: Oh! I'll come with you, I guess.$"

Zone18B_Text_Leviathan16Defeat::
	.string "Eli: Darn it!\p"
	.string "Zoe: It seems you've defeated us.$"
