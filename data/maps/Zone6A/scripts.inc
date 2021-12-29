Zone6A_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone6A_OnFrame
	.byte 0

Zone6A_OnFrame:
	map_script_2 VAR_ZONE6A_STATE, 0, Zone6A_EventScript_Intro
	.2byte 0

Zone6A_EventScript_Intro:
	lockall
	applymovement 1, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement 1, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 1, Common_Movement_WalkLeft
	waitmovement 0
	msgbox Zone6A_Text_Rita_Intro, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_WalkRight
	waitmovement 0
	applymovement 1, Common_Movement_WalkRight
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	setvar VAR_ZONE6A_STATE, 1
	releaseall
	end

Zone6A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 6
	goto_if_gt EventScript_WarpZone0
	call_if_set FLAG_BRUTAL_MODE_ON, Zone6A_EventScript_CheckBrutal
	warp MAP_ZONE6SANCTUARY, 255, 22, 7
	releaseall
	end

Zone6A_EventScript_CheckBrutal:
	goto_if_not_defeated TRAINER_FRANK, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_MELANIE, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_CONSTANCE, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_RONAN, EventScript_BrutalExitNotSatisfied
	goto_if_unset FLAG_BEATLEVIATHAN3, EventScript_BrutalExitNotSatisfied
	return

Zone6A_EventScript_Rita::
	lock
	faceplayer
	goto_if_not_defeated TRAINER_FRANK, Zone6A_EventScript_RitaSaysNo
	goto_if_not_defeated TRAINER_MELANIE, Zone6A_EventScript_RitaSaysNo
	goto_if_not_defeated TRAINER_CONSTANCE, Zone6A_EventScript_RitaSaysNo
	goto_if_not_defeated TRAINER_RONAN, Zone6A_EventScript_RitaSaysNo
	goto_if_defeated TRAINER_LEVIATHAN3, Zone6A_EventScript_RitaAlreadyDefeated
	goto_if_defeated TRAINER_LEVIATHAN3_BRUTAL, Zone6A_EventScript_RitaAlreadyDefeated
	msgbox Zone6A_Text_Rita_ReadyToBattle, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone6A_EventScript_RitaBattle
	msgbox Zone6A_Text_Rita_IWait, MSGBOX_AUTOCLOSE
	release
	end

Zone6A_EventScript_RitaSaysNo:
	msgbox Zone6A_Text_Rita_HaventDefeatedEveryone, MSGBOX_AUTOCLOSE
	release
	end

Zone6A_EventScript_RitaBattle:
	fadeoutbgm 1
	msgbox Zone6A_Text_Rita_IWillWin, MSGBOX_AUTOCLOSE
	setvar VAR_MUGSHOT_ID, MUGSHOT_RITA
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone6A_EventScript_RitaBrutal
	trainerbattle_no_intro TRAINER_LEVIATHAN3, Zone6A_Text_Leviathan3Defeat
	goto Zone6A_EventScript_Leviathan3Defeated
	end

Zone6A_EventScript_RitaBrutal:
	trainerbattle_no_intro TRAINER_LEVIATHAN3_BRUTAL, Zone6A_Text_Leviathan3Defeat
	goto Zone6A_EventScript_Leviathan3Defeated
	end

Zone6A_EventScript_Leviathan3Defeated:
	setflag FLAG_BEATLEVIATHAN3
	msgbox Zone6A_Text_Rita_HereReward, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM04, 1
	release
	end

Zone6A_EventScript_RitaAlreadyDefeated:
	msgbox Zone6A_Text_Rita_GoodLuck, MSGBOX_AUTOCLOSE
	release
	end

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

Zone6A_EventScript_ItemSootheBell::
	finditem ITEM_SOOTHE_BELL
	end

Zone6A_EventScript_ItemNestBall::
	finditem ITEM_NEST_BALL
	end

Zone6A_Text_Rita_Intro:
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: Hey. I'm {COLOR BLUE}Leviathan Rita{COLOR DARK_GRAY}.\n"
	.string "Welcome to our humble island.\p"
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: You can challenge me, if you\n"
	.string "want. I'm pretty tough.\l"
	.string "But you have to show your strength.\p"
	.string "Beat all the other Trainers on the\n"
	.string "island, then come back here.$"

Zone6A_Text_Rita_HaventDefeatedEveryone:
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: You haven't beaten everyone.\n"
	.string "Come on, where's your spirit?$"

Zone6A_Text_Rita_ReadyToBattle:
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: Wow, you beat everyone.\n"
	.string "Want to challenge me now?$"

Zone6A_Text_Rita_IWait:
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: I'll wait for your challenge.$"

Zone6A_Text_Rita_IWillWin:
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: I will defeat you using the\n"
	.string "power of Friendship and Happiness!$"

Zone6A_Text_Leviathan3Defeat:
	.string "Happiness and Friendship are\n"
	.string "one and the same!$"

Zone6A_Text_Rita_HereReward:
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: For your victory, have the\n"
	.string "TM for Return. It grows stronger as\l"
	.string "your Pokémon become more friendly.$"

Zone6A_Text_Rita_GoodLuck:
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: Did you know Pokémon\n"
	.string "no longer evolve by Friendship?\p"
	.string "That's right, no need to walk around\n"
	.string "for ages just to evolve them.$"
