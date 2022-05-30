Zone2B_MapScripts::
	.byte 0


Zone2B_EventScript_Exit::
	lockall
	compare VAR_ZONE, 2
	goto_if_gt Zone2B_EventScript_Exit_2
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone2B_EventScript_Exit_7
Zone2B_EventScript_Exit_5:
	warp MAP_ZONE2SANCTUARY, 255, 22, 7
Zone2B_EventScript_Exit_1:
	releaseall
	end

Zone2B_EventScript_Exit_2:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 19, 32
	waitstate
	goto Zone2B_EventScript_Exit_1

Zone2B_EventScript_Exit_6:
	goto EventScript_BrutalExitNotSatisfied
	goto Zone2B_EventScript_Exit_5

Zone2B_EventScript_Exit_7:
	checktrainerflag TRAINER_JEREMIAH
	goto_if 0, Zone2B_EventScript_Exit_6
	checktrainerflag TRAINER_HARPER
	goto_if 0, Zone2B_EventScript_Exit_6
	checktrainerflag TRAINER_ARTHUR
	goto_if 0, Zone2B_EventScript_Exit_6
	goto_if_unset FLAG_BEATLEVIATHAN2, Zone2B_EventScript_Exit_6
	goto Zone2B_EventScript_Exit_5


Zone2B_EventScript_LeviathanBattle::
	lock
	faceplayer
	goto_if_set FLAG_BEATLEVIATHAN2, Zone2B_EventScript_LeviathanBattle_2
	msgbox Zone2B_Text_Leviathan2WantBattle, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_LeviathanBattle_5
	fadeoutbgm 1
	msgbox Zone2B_Text_Leviathan2Intro
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone2B_EventScript_LeviathanBattle_8
	setvar VAR_MUGSHOT_ID, MUGSHOT_JOEY
	trainerbattle_no_intro TRAINER_JOEY_LEVIATHAN_2, Zone2B_Text_Leviathan2Defeat
Zone2B_EventScript_LeviathanBattle_7:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone2B_EventScript_LeviathanBattle_Text_1
	giveitem ITEM_SILK_SCARF, 1
	msgbox Zone2B_EventScript_LeviathanBattle_Text_0
	closemessage
	setflag FLAG_BEATLEVIATHAN2
	release
	end

Zone2B_EventScript_LeviathanBattle_2:
	msgbox Zone2B_EventScript_LeviathanBattle_Text_0
	release
	end

Zone2B_EventScript_LeviathanBattle_5:
	msgbox Zone2B_Text_Leviathan2DenyBattle
	end

Zone2B_EventScript_LeviathanBattle_8:
	setvar VAR_MUGSHOT_ID, MUGSHOT_JOEY
	trainerbattle_no_intro TRAINER_JOEY_LEVIATHAN_2_BRUTAL, Zone2B_Text_Leviathan2Defeat
	goto Zone2B_EventScript_LeviathanBattle_7


Zone2B_EventScript_Harper::
	trainerbattle_single TRAINER_HARPER, Zone2B_Text_HarperIntro, Zone2B_Text_HarperDefeat
	msgbox Zone2B_Text_HarperPostBattle, MSGBOX_AUTOCLOSE
	end

Zone2B_Text_HarperIntro:
	.string "Surprise! Battle time!$"

Zone2B_Text_HarperDefeat:
	.string "My spirit, crushed!$"

Zone2B_Text_HarperPostBattle:
	.string "I don't know if I can ever\n"
	.string "come back from this loss...$"

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

Zone2B_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: Do I have to have more Pokémon in\n"
	.string "order to battle better?\p"
	.string "No!\n"
	.string "I'm sticking with this one no matter\l"
	.string "what!$"

Zone2B_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: Even after all that training,\n"
	.string "Rattata wasn't enough to get across\l"
	.string "the finish line.\p"
	.string "That's all right though;\p"
	.string "I enjoyed our battle so much, I want to\n"
	.string "give you this!$"

Zone2B_Text_Leviathan2WantBattle::
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: My Rattata is in the top\n"
	.string "percentage of Rattata! Want to see?$"

Zone2B_Text_Leviathan2Intro::
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: All right then, let's battle!\p"
	.string "{COLOR BLUE}Leviathan Joey{COLOR DARK_GRAY}, incoming!$"

Zone2B_Text_Leviathan2DenyBattle::
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: Oh, all right…$"

Zone2B_Text_Leviathan2Defeat::
	.string "Ack! I lost again!\p"
	.string "Doggone it!$"
