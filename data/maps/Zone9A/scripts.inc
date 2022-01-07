Zone9A_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Zone9A_OnTransition
	.byte 0

Zone9A_OnTransition:
	goto_if_not_defeated TRAINER_ERICA, Zone9A_EventScript_SetWinstratesNotDefeated
	goto_if_defeated TRAINER_ERICA, Zone9A_EventScript_SetWinstratesDefeated
	end

Zone9A_EventScript_SetWinstratesDefeated:
	setflag FLAG_HIDE_ZONE9A_ARI_WINSTRATE
	setflag FLAG_HIDE_ZONE9A_MAN
	end

Zone9A_EventScript_SetWinstratesNotDefeated:
	clearflag FLAG_HIDE_ZONE9A_MAN
	clearflag FLAG_HIDE_ZONE9A_ARI_WINSTRATE
	setflag FLAG_HIDE_ZONE9A_BERTHA_WINSTRATE
	setflag FLAG_HIDE_ZONE9A_CASSANDRA_WINSTRATE
	setflag FLAG_HIDE_ZONE9A_DOMINIC_WINSTRATE
	setflag FLAG_HIDE_ZONE9A_ERICA_WINSTRATE
	cleartrainerflag TRAINER_ARI
	cleartrainerflag TRAINER_BERTHA
	cleartrainerflag TRAINER_CASSANDRA
	cleartrainerflag TRAINER_DOMINIC
	end

Zone9A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 9
	goto_if_gt EventScript_WarpZone0
	warp MAP_ZONE9SANCTUARY, 255, 22, 7
	releaseall
	end

Zone9A_EventScript_HerbalSign::
	msgbox Zone9A_Text_HerbalSign, MSGBOX_SIGN
	end

Zone9A_Text_HerbalSign:
	.string "Herbal Shop and\n"
	.string "Incense Shop$"

Zone9A_EventScript_MiracleSeed::
	finditem ITEM_MIRACLE_SEED
	end

Zone9A_EventScript_Man::
	lock
	faceplayer
	msgbox Zone9A_Text_ShouldChallenge, MSGBOX_AUTOCLOSE
	release
	end

Zone9A_Text_ShouldChallenge:
	.string "Hey there, champ!\p"
	.string "In our modest village, there is\n"
	.string "a family of strong Trainers.\l"
	.string "Why don't you go spar with them?$"

Zone9A_EventScript_Ari::
	lock
	faceplayer
	msgbox Zone9A_Text_BattleOurFamily, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone9A_EventScript_BattleWinstrates
	msgbox Zone9A_Text_Chicken, MSGBOX_DEFAULT
	release
	end

Zone9A_EventScript_BattleWinstrates::
	msgbox Zone9A_Text_AriIntro, MSGBOX_DEFAULT
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	trainerbattle_no_intro TRAINER_ARI, Zone9A_Text_AriDefeat
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox Zone9A_Text_AriPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Zone9A_Movement_WinstrateEnterHouse
	waitmovement 0
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
	waitmovement 0
	addobject 2
	applymovement 2, Zone9A_Movement_WinstrateExitHouse
	waitmovement 0
	msgbox Zone9A_Text_BerthaIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BERTHA, Zone9A_Text_BerthaDefeat
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox Zone9A_Text_BerthaPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement 2, Zone9A_Movement_WinstrateEnterHouse
	waitmovement 0
	removeobject 2
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
	waitmovement 0
	addobject 3
	applymovement 3, Zone9A_Movement_WinstrateExitHouse
	waitmovement 0
	msgbox Zone9A_Text_CassandraIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CASSANDRA, Zone9A_Text_CassandraDefeat
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox Zone9A_Text_CassandraPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement 3, Zone9A_Movement_WinstrateEnterHouse
	waitmovement 0
	removeobject 3
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
	waitmovement 0
	addobject 4
	applymovement 4, Zone9A_Movement_WinstrateExitHouse
	waitmovement 0
	msgbox Zone9A_Text_DominicIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_DOMINIC, Zone9A_Text_DominicDefeat
	msgbox Zone9A_Text_DominicPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement 4, Zone9A_Movement_WinstrateEnterHouse
	waitmovement 0
	removeobject 4
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
	waitmovement 0
	addobject 5
	applymovement 5, Zone9A_Movement_WinstrateExitHouse
	waitmovement 0
	msgbox Zone9A_Text_EricaIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ERICA, Zone9A_Text_EricaDefeat
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone9A_EventScript_NoZorua
	msgbox Zone9A_Text_EricaPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement 5, Zone9A_Movement_WinstrateEnterHouse
	waitmovement 0
	removeobject 5
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	release
	end

Zone9A_Movement_WinstrateEnterHouse:
	walk_in_place_faster_up
	walk_up
	step_end

Zone9A_Movement_WinstrateExitHouse:
	walk_down
	step_end

Zone9A_Movement_WaitForNextWinstrate:
	delay_16
	delay_16
	delay_16
	step_end

Zone9A_Text_BattleOurFamily:
	.string "{COLOR BLUE}Ari{COLOR DARK_GRAY}: Howzit goin?\p"
	.string "Oh, you're a traveler!\n"
	.string "You might be strong enough...\p"
	.string "I bet you can't defeat the five\n"
	.string "members of my family in a row.\l"
	.string "What do you say to my little wager?$"

Zone9A_Text_Chicken:
	.string "Ah, so you're a chicken. Well, if\n"
	.string "you change your mind, I'll be here.$"

Zone9A_Text_AriIntro:
	.string "Alright, well, best of luck!$"

Zone9A_Text_AriDefeat:
	.string "What!? How!?\n"
	.string "You're tougher than I thought!$"

Zone9A_Text_AriPostBattle:
	.string "{COLOR BLUE}Ari{COLOR DARK_GRAY}: Hey, everyone!\n"
	.string "I've found a pretty strong Trainer!$"

Zone9A_Text_BerthaIntro:
	.string "{COLOR BLUE}Bertha{COLOR DARK_GRAY}: You beat my brother?\n"
	.string "Ugh. Such a brat.\p"
	.string "Let's just get this over with.$"

Zone9A_Text_BerthaDefeat:
	.string "Sigh...\n"
	.string "I thought this would happen...$"

Zone9A_Text_BerthaPostBattle:
	.string "{COLOR BLUE}Bertha{COLOR DARK_GRAY}: Mom! It's your turn!$"

Zone9A_Text_CassandraIntro:
	.string "{COLOR BLUE}Cassandra{COLOR DARK_GRAY}: Oh! I am so excited!\p"
	.string "Finally, a challenger who got past\n"
	.string "both of my children!\p"
	.string "It's Momma's time to shine!$"

Zone9A_Text_CassandraDefeat:
	.string "It was you who shined instead!$"

Zone9A_Text_CassandraPostBattle:
	.string "{COLOR BLUE}Cassandra{COLOR DARK_GRAY}: It's all you, baby!$"

Zone9A_Text_DominicIntro:
	.string "{COLOR BLUE}Dominic{COLOR DARK_GRAY}: Guess what time it is?\n"
	.string "It's time to take out the trash!$"

Zone9A_Text_DominicDefeat:
	.string "Sorry, sorry!\n"
	.string "I didn't realize you were so strong!$"

Zone9A_Text_DominicPostBattle:
	.string "{COLOR BLUE}Dominic{COLOR DARK_GRAY}: Kids!\n"
	.string "Wake your grandma up!$"

Zone9A_Text_EricaIntro:
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: Who dares disturb me from\n"
	.string "my slumber?$"

Zone9A_Text_EricaDefeat:
	.string "Oh... You are the one...$"

Zone9A_Text_EricaPostBattle:
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: Please, come inside.\n"
	.string "I have a request for you.$"

Zone9A_EventScript_NoZorua:
	msgbox Zone9A_Text_EricaPostBattleNoZorua, MSGBOX_DEFAULT
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement 5, Zone9A_Movement_WinstrateEnterHouse
	waitmovement 0
	removeobject 5
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	release
	end

Zone9A_Text_EricaPostBattleNoZorua:
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: Good, good.\p"
	.string "Well done, young one.$"
