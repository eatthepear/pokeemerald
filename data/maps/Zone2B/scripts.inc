Zone2B_MapScripts::
	.byte 0

Zone2B_EventScript_Exit::
	lockall
	compare VAR_ZONE, 2
	goto_if_gt EventScript_WarpZone0
	call_if_set FLAG_BRUTAL_MODE_ON, Zone2B_EventScript_CheckBrutal
	warp MAP_ZONE2SANCTUARY, 255, 22, 7
	releaseall
	end

Zone2B_EventScript_CheckBrutal:
	goto_if_not_defeated TRAINER_DEXTER, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_JEREMIAH, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_ARTHUR, EventScript_BrutalExitNotSatisfied
	return

Zone2B_EventScript_Jeremiah::
	trainerbattle_single TRAINER_JEREMIAH, Zone2B_Text_JeremiahIntro, Zone2B_Text_JeremiahDefeat
	msgbox Zone2B_Text_JeremiahPostBattle, MSGBOX_AUTOCLOSE
	end

Zone2B_Text_JeremiahIntro:
	.string "The more legs, the better!$"

Zone2B_Text_JeremiahDefeat:
	.string "Oh... Come on!$"

Zone2B_Text_JeremiahPostBattle:
	.string "Just wait till my Bugs are all evolved!$"

Zone2B_EventScript_Arthur::
	trainerbattle_single TRAINER_ARTHUR, Zone2B_Text_ArthurIntro, Zone2B_Text_ArthurDefeat
	msgbox Zone2B_Text_ArthurPostBattle, MSGBOX_AUTOCLOSE
	end

Zone2B_Text_ArthurIntro:
	.string "Hey, you! Get out of my way!$"

Zone2B_Text_ArthurDefeat:
	.string "You're too strong!$"

Zone2B_Text_ArthurPostBattle:
	.string "Sorry about earlier.$"

Zone2B_EventScript_ItemPotion::
	finditem ITEM_POTION
	end
