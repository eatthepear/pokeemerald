Zone4E_MapScripts::
	.byte 0


Zone4E_EventScript_Exit::
	lockall
	compare VAR_ZONE, 4
	goto_if_gt Zone4E_EventScript_Exit_2
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone4E_EventScript_Exit_7
Zone4E_EventScript_Exit_5:
	warp MAP_ZONE4SANCTUARY, 255, 22, 7
Zone4E_EventScript_Exit_1:
	releaseall
	end

Zone4E_EventScript_Exit_2:
	clearflag FLAG_IS_REVISITING_ZONE
	warpteleport MAP_ZONE0D, 255, 2, 32
	goto Zone4E_EventScript_Exit_1

Zone4E_EventScript_Exit_6:
	goto EventScript_BrutalExitNotSatisfied
	goto Zone4E_EventScript_Exit_5

Zone4E_EventScript_Exit_7:
	checktrainerflag TRAINER_HERMAN
	goto_if 0, Zone4E_EventScript_Exit_6
	checktrainerflag TRAINER_RALPH
	goto_if 0, Zone4E_EventScript_Exit_6
	checktrainerflag TRAINER_SANTIAGO
	goto_if 0, Zone4E_EventScript_Exit_6
	checktrainerflag TRAINER_CHLOE_AND_KAYA
	goto_if 0, Zone4E_EventScript_Exit_6
	checktrainerflag TRAINER_LUCIA
	goto_if 0, Zone4E_EventScript_Exit_6
	checktrainerflag TRAINER_FRED
	goto_if 0, Zone4E_EventScript_Exit_6
	goto Zone4E_EventScript_Exit_5


Zone4E_EventScript_LeviathanBattle::
	lock
	faceplayer
	fadeoutbgm 1
	msgbox Zone4E_Text_Leviathan4Intro
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone4E_EventScript_LeviathanBattle_2
	totemboost_spatk1 B_POSITION_OPPONENT_LEFT
	setvar VAR_MUGSHOT_ID, MUGSHOT_ISABELLA
	trainerbattle_no_intro TRAINER_ISABELLA_LEVIATHAN_4, Zone4E_Text_Leviathan4Defeat
Zone4E_EventScript_LeviathanBattle_1:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone4E_EventScript_LeviathanBattle_Text_0
	giveitem ITEM_SITRUS_BERRY, 5
	msgbox Zone4E_EventScript_LeviathanBattle_Text_1
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 2
	setflag FLAG_BEATLEVIATHAN4
	fadescreen FADE_FROM_BLACK
	release
	end

Zone4E_EventScript_LeviathanBattle_2:
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1
	setvar VAR_MUGSHOT_ID, MUGSHOT_ISABELLA
	trainerbattle_no_intro TRAINER_ISABELLA_LEVIATHAN_4, Zone4E_Text_Leviathan4Defeat
	goto Zone4E_EventScript_LeviathanBattle_1


Zone4E_EventScript_ItemSuperPotion::
	finditem ITEM_SUPER_POTION
	end

Zone4E_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Isabella{COLOR DARK_GRAY}: Did you like my enchantment?\p"
	.string "Those little aura boosts sure pack a\n"
	.string "punch, don't they?\p"
	.string "Anyways, you can have some Sitrus\n"
	.string "Berries, if you want.\p"
	.string "Ponyta and I spent some time gathering\n"
	.string "them earlier, but we've got too many\l"
	.string "and we want to share.$"

Zone4E_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Isabella{COLOR DARK_GRAY}: I'm gonna go finish reading my\n"
	.string "story now.\p"
	.string "I do hope your story has a happy\n"
	.string "ending.$"

Zone4E_Text_Leviathan4Intro::
	.string "{COLOR BLUE}Isabella{COLOR DARK_GRAY}: And the prince saw her from\n"
	.string "across the room, clad in her light pink\l"
	.string "dress, looking around as if she was\l"
	.string "searching for someone she had only\l"
	.string "seen in a dream.\p"
	.string "That's just a bit from my story that\n"
	.string "I've been reading, 'The Shining\l"
	.string "Honedge'.\p"
	.string "I just love fables; they're so magical!\n"
	.string "I hope our battle is just as special.\p"
	.string "I, {COLOR BLUE}Leviathan Isabella{COLOR DARK_GRAY}, accept your\n"
	.string "challenge!$"

Zone4E_Text_Leviathan4Defeat::
	.string "It seems your story is only just\n"
	.string "beginning!$"
