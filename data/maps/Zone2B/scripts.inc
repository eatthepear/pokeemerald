Zone2B_MapScripts::
	.byte 0

Zone2B_EventScript_Exit::
	lockall
	compare VAR_ZONE, 2
	goto_if_gt EventScript_WarpZone0
	warp MAP_ZONE2SANCTUARY, 255, 7, 7
	releaseall
	end

Zone2B_EventScript_Jeremiah::
	trainerbattle_single TRAINER_JEREMIAH, Zone2B_Text_JeremiahIntro, Zone2B_Text_JeremiahDefeat
	msgbox Zone2B_Text_JeremiahPostBattle, MSGBOX_AUTOCLOSE
	end

Zone2B_Text_JeremiahIntro:
	.string "My friends call me the free Exp guy,\n"
	.string "but I'll prove them wrong!$"

Zone2B_Text_JeremiahDefeat:
	.string "Oops, guess not...$"

Zone2B_Text_JeremiahPostBattle:
	.string "I guess I am the free Exp guy...$"

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

Zone2B_EventScript_ItemParalyzeHeal::
	finditem ITEM_PARALYZE_HEAL
	end
