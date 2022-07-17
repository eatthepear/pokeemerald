Zone10B_MapScripts::
	.byte 0


Zone10B_EventScript_Adamina::
	lock
	faceplayer
	goto Zone10B_EventScript_AdaminaStuff
	return


Zone10B_EventScript_Kirlia::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 7
	goto_if_eq Zone10B_EventScript_Kirlia_2
Zone10B_EventScript_Kirlia_1:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone10B_EventScript_AdaminaStuff
	return

Zone10B_EventScript_Kirlia_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	goto Zone10B_EventScript_Kirlia_1


Zone10B_EventScript_AdaminaStuff::
	compare VAR_ZONE_10_STATE, 2
	goto_if_eq Zone10B_EventScript_AdaminaStuff_2
	msgbox Zone10B_EventScript_AdaminaStuff_Text_4
	giveitem ITEM_TM20
	msgbox Zone10B_EventScript_AdaminaStuff_Text_5, MSGBOX_DEFAULT
	delay 96
	msgbox Zone10B_EventScript_AdaminaStuff_Text_6
	setvar VAR_ZONE_10_STATE, 2
	release
	return

Zone10B_EventScript_AdaminaStuff_2:
	msgbox Zone10B_EventScript_AdaminaStuff_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_AdaminaStuff_5
Zone10B_EventScript_AdaminaStuff_4:
	msgbox Zone10B_EventScript_AdaminaStuff_Text_3
	release
	end

Zone10B_EventScript_AdaminaStuff_5:
	compare VAR_ZONE, 10
	goto_if_gt Zone10B_EventScript_AdaminaStuff_7
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone10B_EventScript_AdaminaStuff_12
Zone10B_EventScript_AdaminaStuff_10:
	clearflag FLAG_IN_ZONE_NOT_SANCTUARY
	setflag FLAG_HIDE_MAX_4
	msgbox Zone10B_EventScript_AdaminaStuff_Text_1
	delay 96
	playmoncry SPECIES_KIRLIA, 0
	msgbox Zone10B_EventScript_AdaminaStuff_Text_2
	waitmoncry
	warp MAP_ZONE10SANCTUARY, 255, 22, 7
	waitstate
	goto Zone10B_EventScript_AdaminaStuff_4

Zone10B_EventScript_AdaminaStuff_7:
	clearflag FLAG_IN_ZONE_NOT_SANCTUARY
	clearflag FLAG_IS_REVISITING_ZONE
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 51, 32
	waitstate
	goto Zone10B_EventScript_AdaminaStuff_4

Zone10B_EventScript_AdaminaStuff_11:
	goto EventScript_BrutalExitNotSatisfied
	goto Zone10B_EventScript_AdaminaStuff_10

Zone10B_EventScript_AdaminaStuff_12:
	checktrainerflag TRAINER_KYLE
	goto_if 0, Zone10B_EventScript_AdaminaStuff_11
	checktrainerflag TRAINER_BELLE
	goto_if 0, Zone10B_EventScript_AdaminaStuff_11
	checktrainerflag TRAINER_DEWEY
	goto_if 0, Zone10B_EventScript_AdaminaStuff_11
	checktrainerflag TRAINER_PEARLIE
	goto_if 0, Zone10B_EventScript_AdaminaStuff_11
	checktrainerflag TRAINER_ERNEST
	goto_if 0, Zone10B_EventScript_AdaminaStuff_11
	checktrainerflag TRAINER_ALANA
	goto_if 0, Zone10B_EventScript_AdaminaStuff_11
	checktrainerflag TRAINER_SUSAN
	goto_if 0, Zone10B_EventScript_AdaminaStuff_11
	checktrainerflag TRAINER_CONRAD
	goto_if 0, Zone10B_EventScript_AdaminaStuff_11
	goto Zone10B_EventScript_AdaminaStuff_10


Zone10B_EventScript_SideQuestLuckyEgg::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_ZONE10B_LUCKY_EGG, Zone10B_EventScript_SideQuestLuckyEgg_2
Zone10B_EventScript_SideQuestLuckyEgg_1:
	msgbox Zone10B_EventScript_SideQuestLuckyEgg_Text_2
	applymovement 3, Common_Movement_FaceRight
	waitmovement 0
	release
	return

Zone10B_EventScript_SideQuestLuckyEgg_2:
	msgbox Zone10B_EventScript_SideQuestLuckyEgg_Text_0
	specialvar VAR_RESULT, GetCaughtSpeciesCount
	compare VAR_RESULT, 49
	goto_if_gt Zone10B_EventScript_SideQuestLuckyEgg_4
	applymovement 3, Common_Movement_FaceRight
	waitmovement 0
	release
	end

Zone10B_EventScript_SideQuestLuckyEgg_4:
	msgbox Zone10B_EventScript_SideQuestLuckyEgg_Text_1
	setflag FLAG_RECEIVED_ZONE10B_LUCKY_EGG
	giveitem ITEM_LUCKY_EGG, 1
	goto Zone10B_EventScript_SideQuestLuckyEgg_1


Zone10B_EventScript_SideQuestTeleport::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_ZONE10B_TM21_TELEPORT, Zone10B_EventScript_SideQuestTeleport_2
Zone10B_EventScript_SideQuestTeleport_1:
	msgbox Zone10B_EventScript_SideQuestTeleport_Text_3
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

Zone10B_EventScript_SideQuestTeleport_2:
	msgbox Zone10B_EventScript_SideQuestTeleport_Text_0
	checktrainerflag TRAINER_JEREMIAH
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_HARPER
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_ARTHUR
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	goto_if_unset FLAG_BEAT_LEVIATHAN_2, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_PATRICK
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_RICHARD
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_ANNABELLE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_HERMAN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_RALPH
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_SANTIAGO
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_CHLOE_AND_KAYA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_LUCIA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_FRED
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_ANNE_AND_JUNE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_GILBERT
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_MELANIE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_CONSTANCE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_FRANK
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_DUDLEY
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_DAISY
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	goto_if_unset FLAG_BEAT_LEVIATHAN_6, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_MILLIE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_JAMAL
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_PAIGE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_SETH
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_CONNIE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_JIMMY
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_EMILIANO
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_KAREN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_JAYDEN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_NEIL
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_TAMARA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_COOPER
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_CARMINE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_KYLE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_BELLE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_DEWEY
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_PEARLIE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_ERNEST
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_ALANA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_SUSAN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	checktrainerflag TRAINER_CONRAD
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	setflag FLAG_RECEIVED_ZONE10B_TM21_TELEPORT
	msgbox Zone10B_EventScript_SideQuestTeleport_Text_2
	giveitem ITEM_TM21
	goto Zone10B_EventScript_SideQuestTeleport_1

Zone10B_EventScript_SideQuestTeleport_4:
	msgbox Zone10B_EventScript_SideQuestTeleport_Text_1
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	release
	end


Zone10B_EventScript_BerryExchange::
	lock
	faceplayer
	msgbox Zone10B_EventScript_BerryExchange_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_BerryExchange_2
	msgbox Zone10B_EventScript_BerryExchange_Text_8
Zone10B_EventScript_BerryExchange_1:
	applymovement 5, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

Zone10B_EventScript_BerryExchange_2:
	checkitem ITEM_CHERI_BERRY, 10
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_5
	msgbox Zone10B_EventScript_BerryExchange_Text_7
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_5:
	checkitem ITEM_CHESTO_BERRY, 10
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_8
	msgbox Zone10B_EventScript_BerryExchange_Text_6
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_8:
	checkitem ITEM_PECHA_BERRY, 10
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_11
	msgbox Zone10B_EventScript_BerryExchange_Text_5
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_11:
	checkitem ITEM_RAWST_BERRY, 10
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_14
	msgbox Zone10B_EventScript_BerryExchange_Text_4
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_14:
	checkitem ITEM_ASPEAR_BERRY, 10
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_17
	msgbox Zone10B_EventScript_BerryExchange_Text_3
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_17:
	removeitem ITEM_CHERI_BERRY, 10
	removeitem ITEM_CHESTO_BERRY, 10
	removeitem ITEM_PECHA_BERRY, 10
	removeitem ITEM_RAWST_BERRY, 10
	removeitem ITEM_ASPEAR_BERRY, 10
	msgbox Zone10B_EventScript_BerryExchange_Text_1
	giveitem ITEM_REVIVE, 5
	msgbox Zone10B_EventScript_BerryExchange_Text_2
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_ZONE10B_BERRYMAN
	removeobject 5
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Zone10B_EventScript_BerryExchange_1


Zone10B_EventScript_FossilScientist::
	lock
	faceplayer
	setvar VAR_TEMP_2, 0
	checkitem ITEM_HELIX_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_FossilScientist_2
Zone10B_EventScript_FossilScientist_1:
	checkitem ITEM_DOME_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_FossilScientist_5
Zone10B_EventScript_FossilScientist_4:
	checkitem ITEM_OLD_AMBER, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_FossilScientist_11
Zone10B_EventScript_FossilScientist_10:
	checkitem ITEM_ROOT_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_FossilScientist_20
Zone10B_EventScript_FossilScientist_19:
	checkitem ITEM_CLAW_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_FossilScientist_32
Zone10B_EventScript_FossilScientist_31:
	checkitem ITEM_COVER_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_FossilScientist_44
Zone10B_EventScript_FossilScientist_43:
	checkitem ITEM_PLUME_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_FossilScientist_56
Zone10B_EventScript_FossilScientist_55:
	checkitem ITEM_JAW_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_FossilScientist_68
Zone10B_EventScript_FossilScientist_67:
	checkitem ITEM_SAIL_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_FossilScientist_80
Zone10B_EventScript_FossilScientist_79:
	msgbox Zone10B_EventScript_FossilScientist_Text_0
	goto Zone10B_EventScript_FossilDone
	return

Zone10B_EventScript_FossilScientist_2:
	bufferitemname 0, ITEM_HELIX_FOSSIL
	bufferspeciesname 1, SPECIES_OMANYTE
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_HELIX_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone10B_EventScript_FossilScientist_8
Zone10B_EventScript_FossilScientist_7:
	compare VAR_TEMP_2, 0
	goto_if_eq Zone10B_EventScript_FossilScientist_17
Zone10B_EventScript_FossilScientist_16:
	givemon SPECIES_OMANYTE, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_OMANYTE
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_FossilScientist_28
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_1

Zone10B_EventScript_FossilScientist_5:
	bufferitemname 0, ITEM_DOME_FOSSIL
	bufferspeciesname 1, SPECIES_KABUTO
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_DOME_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone10B_EventScript_FossilScientist_14
Zone10B_EventScript_FossilScientist_13:
	compare VAR_TEMP_2, 0
	goto_if_eq Zone10B_EventScript_FossilScientist_26
Zone10B_EventScript_FossilScientist_25:
	givemon SPECIES_KABUTO, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_KABUTO
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_FossilScientist_40
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_8:
	setvar VAR_TEMP_2, 1
	goto Zone10B_EventScript_FossilScientist_7

Zone10B_EventScript_FossilScientist_11:
	bufferitemname 0, ITEM_OLD_AMBER
	bufferspeciesname 1, SPECIES_AERODACTYL
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_OLD_AMBER
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone10B_EventScript_FossilScientist_23
Zone10B_EventScript_FossilScientist_22:
	compare VAR_TEMP_2, 0
	goto_if_eq Zone10B_EventScript_FossilScientist_38
Zone10B_EventScript_FossilScientist_37:
	givemon SPECIES_AERODACTYL, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_AERODACTYL
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_FossilScientist_52
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_10

Zone10B_EventScript_FossilScientist_14:
	setvar VAR_TEMP_2, 1
	goto Zone10B_EventScript_FossilScientist_13

Zone10B_EventScript_FossilScientist_17:
	setvar VAR_TEMP_2, 2
	goto Zone10B_EventScript_FossilScientist_16

Zone10B_EventScript_FossilScientist_20:
	bufferitemname 0, ITEM_ROOT_FOSSIL
	bufferspeciesname 1, SPECIES_LILEEP
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_ROOT_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone10B_EventScript_FossilScientist_35
Zone10B_EventScript_FossilScientist_34:
	compare VAR_TEMP_2, 0
	goto_if_eq Zone10B_EventScript_FossilScientist_50
Zone10B_EventScript_FossilScientist_49:
	givemon SPECIES_LILEEP, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_LILEEP
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_FossilScientist_64
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_19

Zone10B_EventScript_FossilScientist_23:
	setvar VAR_TEMP_2, 1
	goto Zone10B_EventScript_FossilScientist_22

Zone10B_EventScript_FossilScientist_26:
	setvar VAR_TEMP_2, 2
	goto Zone10B_EventScript_FossilScientist_25

Zone10B_EventScript_FossilScientist_28:
	goto Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_FossilScientist_1

Zone10B_EventScript_FossilScientist_32:
	bufferitemname 0, ITEM_CLAW_FOSSIL
	bufferspeciesname 1, SPECIES_ANORITH
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_CLAW_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone10B_EventScript_FossilScientist_47
Zone10B_EventScript_FossilScientist_46:
	compare VAR_TEMP_2, 0
	goto_if_eq Zone10B_EventScript_FossilScientist_62
Zone10B_EventScript_FossilScientist_61:
	givemon SPECIES_ANORITH, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_ANORITH
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_FossilScientist_76
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_31

Zone10B_EventScript_FossilScientist_35:
	setvar VAR_TEMP_2, 1
	goto Zone10B_EventScript_FossilScientist_34

Zone10B_EventScript_FossilScientist_38:
	setvar VAR_TEMP_2, 2
	goto Zone10B_EventScript_FossilScientist_37

Zone10B_EventScript_FossilScientist_40:
	goto Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_44:
	bufferitemname 0, ITEM_COVER_FOSSIL
	bufferspeciesname 1, SPECIES_TIRTOUGA
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_COVER_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone10B_EventScript_FossilScientist_59
Zone10B_EventScript_FossilScientist_58:
	compare VAR_TEMP_2, 0
	goto_if_eq Zone10B_EventScript_FossilScientist_74
Zone10B_EventScript_FossilScientist_73:
	givemon SPECIES_TIRTOUGA, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_TIRTOUGA
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_FossilScientist_88
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_43

Zone10B_EventScript_FossilScientist_47:
	setvar VAR_TEMP_2, 1
	goto Zone10B_EventScript_FossilScientist_46

Zone10B_EventScript_FossilScientist_50:
	setvar VAR_TEMP_2, 2
	goto Zone10B_EventScript_FossilScientist_49

Zone10B_EventScript_FossilScientist_52:
	goto Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_FossilScientist_10

Zone10B_EventScript_FossilScientist_56:
	bufferitemname 0, ITEM_PLUME_FOSSIL
	bufferspeciesname 1, SPECIES_ARCHEN
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_PLUME_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone10B_EventScript_FossilScientist_71
Zone10B_EventScript_FossilScientist_70:
	compare VAR_TEMP_2, 0
	goto_if_eq Zone10B_EventScript_FossilScientist_86
Zone10B_EventScript_FossilScientist_85:
	givemon SPECIES_ARCHEN, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_ARCHEN
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_FossilScientist_97
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_55

Zone10B_EventScript_FossilScientist_59:
	setvar VAR_TEMP_2, 1
	goto Zone10B_EventScript_FossilScientist_58

Zone10B_EventScript_FossilScientist_62:
	setvar VAR_TEMP_2, 2
	goto Zone10B_EventScript_FossilScientist_61

Zone10B_EventScript_FossilScientist_64:
	goto Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_FossilScientist_19

Zone10B_EventScript_FossilScientist_68:
	bufferitemname 0, ITEM_JAW_FOSSIL
	bufferspeciesname 1, SPECIES_TYRUNT
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_JAW_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone10B_EventScript_FossilScientist_83
Zone10B_EventScript_FossilScientist_82:
	compare VAR_TEMP_2, 0
	goto_if_eq Zone10B_EventScript_FossilScientist_95
Zone10B_EventScript_FossilScientist_94:
	givemon SPECIES_TYRUNT, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_TYRUNT
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_FossilScientist_103
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_67

Zone10B_EventScript_FossilScientist_71:
	setvar VAR_TEMP_2, 1
	goto Zone10B_EventScript_FossilScientist_70

Zone10B_EventScript_FossilScientist_74:
	setvar VAR_TEMP_2, 2
	goto Zone10B_EventScript_FossilScientist_73

Zone10B_EventScript_FossilScientist_76:
	goto Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_FossilScientist_31

Zone10B_EventScript_FossilScientist_80:
	bufferitemname 0, ITEM_SAIL_FOSSIL
	bufferspeciesname 1, SPECIES_AMAURA
	call Zone10B_EventScript_CommonFossilIntro
	removeitem ITEM_SAIL_FOSSIL
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Zone10B_EventScript_FossilScientist_92
Zone10B_EventScript_FossilScientist_91:
	compare VAR_TEMP_2, 0
	goto_if_eq Zone10B_EventScript_FossilScientist_101
Zone10B_EventScript_FossilScientist_100:
	givemon SPECIES_AMAURA, 20, ITEM_NONE
	setvar VAR_TEMP_1, SPECIES_AMAURA
	call Zone10B_EventScript_ReceivedFossilMonFanfare
	compare VAR_TEMP_2, 1
	goto_if_eq Zone10B_EventScript_FossilScientist_106
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_79

Zone10B_EventScript_FossilScientist_83:
	setvar VAR_TEMP_2, 1
	goto Zone10B_EventScript_FossilScientist_82

Zone10B_EventScript_FossilScientist_86:
	setvar VAR_TEMP_2, 2
	goto Zone10B_EventScript_FossilScientist_85

Zone10B_EventScript_FossilScientist_88:
	goto Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_FossilScientist_43

Zone10B_EventScript_FossilScientist_92:
	setvar VAR_TEMP_2, 1
	goto Zone10B_EventScript_FossilScientist_91

Zone10B_EventScript_FossilScientist_95:
	setvar VAR_TEMP_2, 2
	goto Zone10B_EventScript_FossilScientist_94

Zone10B_EventScript_FossilScientist_97:
	goto Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_FossilScientist_55

Zone10B_EventScript_FossilScientist_101:
	setvar VAR_TEMP_2, 2
	goto Zone10B_EventScript_FossilScientist_100

Zone10B_EventScript_FossilScientist_103:
	goto Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_FossilScientist_67

Zone10B_EventScript_FossilScientist_106:
	goto Zone10B_EventScript_SendFossilMonPC
	goto Zone10B_EventScript_FossilScientist_79


Zone10B_EventScript_SendFossilMonParty::
	msgbox Zone10B_EventScript_SendFossilMonParty_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_SendFossilMonParty_2
Zone10B_EventScript_SendFossilMonParty_1:
	goto Zone10B_EventScript_FossilDone
	return

Zone10B_EventScript_SendFossilMonParty_2:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Zone10B_EventScript_SendFossilMonParty_1


Zone10B_EventScript_SendFossilMonPC::
	msgbox Zone10B_EventScript_SendFossilMonParty_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_SendFossilMonPC_2
Zone10B_EventScript_SendFossilMonPC_1:
	call Common_EventScript_TransferredToPC
	goto Zone10B_EventScript_FossilDone
	return

Zone10B_EventScript_SendFossilMonPC_2:
	call Common_EventScript_NameReceivedBoxMon
	goto Zone10B_EventScript_SendFossilMonPC_1


Zone10B_EventScript_ReceivedFossilMonFanfare::
	playfanfare MUS_OBTAIN_ITEM
	message Zone10B_EventScript_ReceivedFossilMonFanfare_Text_0
	waitmessage
	waitfanfare
	return


Zone10B_EventScript_CommonFossilIntro::
	applymovement 6, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement 6, Common_Movement_Delay48
	waitmovement 0
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone10B_EventScript_CommonFossilIntro_2
Zone10B_EventScript_CommonFossilIntro_1:
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_1
	applymovement 6, Common_Movement_FaceLeft
	waitmovement 0
	delay 192
	faceplayer
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_2
	return

Zone10B_EventScript_CommonFossilIntro_2:
	goto Zone10B_EventScript_FossilDone
	goto Zone10B_EventScript_CommonFossilIntro_1


Zone10B_EventScript_FossilDone::
	msgbox Zone10B_EventScript_FossilDone_Text_0
	applymovement 6, Common_Movement_FaceLeft
	waitmovement 0
	release
	end


Zone10B_EventScript_WaterMerchant::
	lock
	faceplayer
	showmoneybox 0, 0, 0
	msgbox Zone10B_EventScript_WaterMerchant_Text_0
	closemessage
	multichoice 0, 12, MULTI_FRESH_WATER, 0
	switch VAR_RESULT
	case 0, Zone10B_EventScript_WaterMerchant_3
	case 1, Zone10B_EventScript_WaterMerchant_4
Zone10B_EventScript_WaterMerchant_1:
	closemessage
	hidemoneybox
	msgbox Zone10B_EventScript_WaterMerchant_Text_2
	release
	return

Zone10B_EventScript_WaterMerchant_3:
	checkmoney 200, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_WaterMerchant_5
	removemoney 200, 0
	updatemoneybox
	msgbox Zone10B_EventScript_WaterMerchant_Text_1
	giveitem ITEM_FRESH_WATER, 1
	hidemoneybox
	release
	end

Zone10B_EventScript_WaterMerchant_4:
	checkmoney 2000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_WaterMerchant_8
	removemoney 2000, 0
	updatemoneybox
	msgbox Zone10B_EventScript_WaterMerchant_Text_1
	giveitem ITEM_FRESH_WATER, 10
	hidemoneybox
	release
	end

Zone10B_EventScript_WaterMerchant_5:
	goto Zone10B_EventScript_WaterNotEnough
	goto Zone10B_EventScript_WaterMerchant_1

Zone10B_EventScript_WaterMerchant_8:
	goto Zone10B_EventScript_WaterNotEnough
	goto Zone10B_EventScript_WaterMerchant_1


Zone10B_EventScript_WaterNotEnough::
	msgbox Zone10B_EventScript_WaterNotEnough_Text_0
	hidemoneybox
	releaseall
	end


Zone10B_EventScript_AdaminaStuff_Text_0:
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Are you leaving here?$"

Zone10B_EventScript_AdaminaStuff_Text_1:
	.string "Safe travels.$"

Zone10B_EventScript_AdaminaStuff_Text_2:
	.string "Kirlia, use Teleport!$"

Zone10B_EventScript_AdaminaStuff_Text_3:
	.string "Come speak to me when you're ready.$"

Zone10B_EventScript_AdaminaStuff_Text_4:
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: You…\n…\pLook.\nI said some harsh words earlier.\lConsider this part of my apology.$"

Zone10B_EventScript_AdaminaStuff_Text_5:
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: This is my tavern.\nIt's my safe space.\pAll the people from around here\ngather for shelter from the\lsandstorm.\pI just… feel defensive around\noutsiders. Because it feels like\lfamily here, you know?$"

Zone10B_EventScript_AdaminaStuff_Text_6:
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Tell you what, you can\nstay as long as you like to chat\lwith the people here.\pWhen you're ready to leave,\ncome speak to me.$"

Zone10B_EventScript_SideQuestLuckyEgg_Text_0:
	.string "You know what would make a\nCollector like me happy? Meeting\lsomeone who has caught 50 different\lspecies of Pokémon. Now, that\lperson is someone I'd like to meet!$"

Zone10B_EventScript_SideQuestLuckyEgg_Text_1:
	.string "Whoah, you've caught 50 species of\nPokémon? That's amazing.\pI aspire to be like you. Here, I\nwant you to have this.$"

Zone10B_EventScript_SideQuestLuckyEgg_Text_2:
	.string "Maybe I can catch 50 species of\nPokémon someday too.$"

Zone10B_EventScript_SideQuestTeleport_Text_0:
	.string "Greetings, young one. In my\npossession, I hold a useful TM for\lyour Pokémon, but only if you have\lproven yourself in battle.\pYou must have defeated all\nTrainers available thus far.$"

Zone10B_EventScript_SideQuestTeleport_Text_1:
	.string "You still have trainers to defeat.$"

Zone10B_EventScript_SideQuestTeleport_Text_2:
	.string "Impressive, young one. I see you\nhave defeated all those trainers.\pHere is the TM21 - Teleport.$"

Zone10B_EventScript_SideQuestTeleport_Text_3:
	.string "The move Teleport can help you\neasily bring in frail Pokémon\lwithout risking big damage.$"

Zone10B_EventScript_BerryExchange_Text_0:
	.string "Listen, you know how some berries\ncan treat status conditions?\pWell, I'm looking to start a Berry\nfarm. If you have 10 of each of\lthose Berries, I'll trade them\lfor 5 Revives. How about it?$"

Zone10B_EventScript_BerryExchange_Text_1:
	.string "Alright…{PAUSE_UNTIL_PRESS} Here we go…{PAUSE_UNTIL_PRESS}\nAnd bam! 5 Revives!$"

Zone10B_EventScript_BerryExchange_Text_2:
	.string "Thank you.\nI'll be seeing you around!$"

Zone10B_EventScript_BerryExchange_Text_3:
	.string "It looks like you don't have enough\nAspear Berries.$"

Zone10B_EventScript_BerryExchange_Text_4:
	.string "It looks like you don't have enough\nRawst Berries.$"

Zone10B_EventScript_BerryExchange_Text_5:
	.string "It looks like you don't have enough\nPecha Berries.$"

Zone10B_EventScript_BerryExchange_Text_6:
	.string "It looks like you don't have enough\nChesto Berries.$"

Zone10B_EventScript_BerryExchange_Text_7:
	.string "It looks like you don't have enough\nCheri Berries.$"

Zone10B_EventScript_BerryExchange_Text_8:
	.string "Aw, that's too bad.\nIt's a good offer though!$"

Zone10B_EventScript_FossilScientist_Text_0:
	.string "You got fossils? No?$"

Zone10B_EventScript_SendFossilMonParty_Text_0:
	.string "You want to give it a nickname?$"

Zone10B_EventScript_ReceivedFossilMonFanfare_Text_0:
	.string "Received the Fossil Pokémon\n{STR_VAR_2}!$"

Zone10B_EventScript_CommonFossilIntro_Text_0:
	.string "Hmm? What do you want?\pOh, gotcha.\pYou want me to turn that\n{STR_VAR_1} back into a Pokémon?$"

Zone10B_EventScript_CommonFossilIntro_Text_1:
	.string "Alright. Gimme a moment…$"

Zone10B_EventScript_CommonFossilIntro_Text_2:
	.string "There. Here's your Pokémon.$"

Zone10B_EventScript_FossilDone_Text_0:
	.string "Ok, back to my drink.$"

Zone10B_EventScript_WaterMerchant_Text_0:
	.string "In the desert, it's supply and\ndemand. And the demand is water.\p¥200 for Fresh Water.\nRestores 30 HP each.$"

Zone10B_EventScript_WaterMerchant_Text_1:
	.string "Here you go.$"

Zone10B_EventScript_WaterMerchant_Text_2:
	.string "Ah, fine.$"

Zone10B_EventScript_WaterNotEnough_Text_0:
	.string "You don't have enough money.$"
