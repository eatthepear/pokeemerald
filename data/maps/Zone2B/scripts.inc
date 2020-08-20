Zone2B_MapScripts::
	.byte 0

Zone2B_EventScript_Exit::
	lockall
	warp MAP_ZONE2SANCTUARY, 255, 7, 7
	releaseall
	end

Zone2B_EventScript_Jeremiah::
	trainerbattle_single TRAINER_JEREMIAH, Zone2B_Text_JeremiahIntro, Zone2B_Text_JeremiahDefeat
	msgbox Zone2B_Text_JeremiahPostBattle, MSGBOX_AUTOCLOSE
	end

Zone2B_Text_JeremiahIntro:
	.string "Beware the power of Poison Sting!$"

Zone2B_Text_JeremiahDefeat:
	.string "30% is basically 100%!$"

Zone2B_Text_JeremiahPostBattle:
	.string "I hope you have some Antidotes!$"

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

Zone2B_EventScript_ItemEther::
	finditem ITEM_ETHER
	end
