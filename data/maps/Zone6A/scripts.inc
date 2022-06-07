Zone6A_MapScripts::
	.byte 0


Zone6A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 6
	goto_if_gt Zone6A_EventScript_Exit_2
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone6A_EventScript_Exit_7
Zone6A_EventScript_Exit_5:
	warp MAP_ZONE6SANCTUARY, 255, 22, 7
Zone6A_EventScript_Exit_1:
	releaseall
	end

Zone6A_EventScript_Exit_2:
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 31, 32
	waitstate
	goto Zone6A_EventScript_Exit_1

Zone6A_EventScript_Exit_6:
	goto EventScript_BrutalExitNotSatisfied
	goto Zone6A_EventScript_Exit_5

Zone6A_EventScript_Exit_7:
	checktrainerflag TRAINER_FRANK
	goto_if 0, Zone6A_EventScript_Exit_6
	checktrainerflag TRAINER_MELANIE
	goto_if 0, Zone6A_EventScript_Exit_6
	checktrainerflag TRAINER_CONSTANCE
	goto_if 0, Zone6A_EventScript_Exit_6
	checktrainerflag TRAINER_RONAN
	goto_if 0, Zone6A_EventScript_Exit_6
	goto Zone6A_EventScript_Exit_5


Zone6A_EventScript_LeviathanBattle::
	lock
	faceplayer
	fadeoutbgm 1
	msgbox Zone6A_Text_Leviathan6Intro
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone6A_EventScript_LeviathanBattle_2
	setvar VAR_MUGSHOT_ID, MUGSHOT_BETTY
	trainerbattle_no_intro TRAINER_BETTY_LEVIATHAN_6, Zone6A_Text_Leviathan6Defeat
Zone6A_EventScript_LeviathanBattle_1:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone6A_EventScript_LeviathanBattle_Text_0
	giveitem ITEM_SITRUS_BERRY, 5
	msgbox Zone6A_EventScript_LeviathanBattle_Text_1
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 1
	setflag FLAG_BEAT_LEVIATHAN_6
	fadescreen FADE_FROM_BLACK
	release
	end

Zone6A_EventScript_LeviathanBattle_2:
	setvar VAR_MUGSHOT_ID, MUGSHOT_BETTY
	trainerbattle_no_intro TRAINER_BETTY_LEVIATHAN_6_BRUTAL, Zone6A_Text_Leviathan6Defeat
	goto Zone6A_EventScript_LeviathanBattle_1


Zone6A_EventScript_Frank::
	trainerbattle_single TRAINER_FRANK, Zone6A_Text_FrankIntro, Zone6A_Text_FrankDefeat
	msgbox Zone6A_Text_FrankPostBattle, MSGBOX_AUTOCLOSE
	end

Zone6A_Text_FrankIntro:
	.string "I love it! I love it!$"

Zone6A_Text_FrankDefeat:
	.string "I love camping, of course!$"

Zone6A_Text_FrankPostBattle:
	.string "It's my favorite activity!$"

Zone6A_EventScript_Melanie::
	trainerbattle_single TRAINER_MELANIE, Zone6A_Text_MelanieIntro, Zone6A_Text_MelanieDefeat
	msgbox Zone6A_Text_MelaniePostBattle, MSGBOX_AUTOCLOSE
	end

Zone6A_Text_MelanieIntro:
	.string "Watch where you're going!$"

Zone6A_Text_MelanieDefeat:
	.string "Sorry I yelled at you...$"

Zone6A_Text_MelaniePostBattle:
	.string "I also need to be careful about\n"
	.string "where I'm going.$"

Zone6A_EventScript_Constance::
	trainerbattle_single TRAINER_CONSTANCE, Zone6A_Text_ConstanceIntro, Zone6A_Text_ConstanceDefeat
	msgbox Zone6A_Text_ConstancePostBattle, MSGBOX_AUTOCLOSE
	end

Zone6A_Text_ConstanceIntro:
	.string "Want to join my picnic?$"

Zone6A_Text_ConstanceDefeat:
	.string "Oops, I forgot to pack food!$"

Zone6A_Text_ConstancePostBattle:
	.string "I can look for some Berries or something...$"

Zone6A_EventScript_Ronan::
	trainerbattle_single TRAINER_RONAN, Zone6A_Text_RonanIntro, Zone6A_Text_RonanDefeat
	msgbox Zone6A_Text_RonanPostBattle, MSGBOX_AUTOCLOSE
	end

Zone6A_Text_RonanIntro:
	.string "Ah, a plebeian.\n"
	.string "Want to have a go?$"

Zone6A_Text_RonanDefeat:
	.string "My honor, tainted...$"

Zone6A_Text_RonanPostBattle:
	.string "Beaten by a mere commoner...$"

Zone6A_EventScript_ItemNetBall::
	finditem ITEM_NET_BALL
	end

Zone6A_EventScript_ItemPotion::
	finditem ITEM_POTION
	end

Zone6A_EventScript_ItemNestBall::
	finditem ITEM_NEST_BALL
	end

Zone6A_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: Child, while your battling skills\n"
	.string "are certainly up to par, might I\l"
	.string "suggest a little more…{PAUSE_UNTIL_PRESS}effort into your\l"
	.string "outfit?\p"
	.string "Aside from that, I'd like to give you\n"
	.string "these Berries.\p"
	.string "Very, very expensive, or so my butler\n"
	.string "tells me.$"

Zone6A_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: It seems it's time for my\n"
	.string "afternoon bath.\p"
	.string "Goodbye.$"

Zone6A_Text_Leviathan6Intro::
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: Child, your clothes are all\n"
	.string "covered in sand.\p"
	.string "I suppose {COLOR BLUE}Leviathan Betty{COLOR DARK_GRAY} had ought to\n"
	.string "give you a lesson in proper etiquette!$"

Zone6A_Text_Leviathan6Defeat::
	.string "It seems I was the one who ended\n"
	.string "up being humbled…$"
