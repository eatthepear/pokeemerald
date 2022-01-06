Zone24A_MapScripts::
	.byte 0

Zone24A_EventScript_LookDown::
	lockall
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Zone24A_Movement_Camera_MoveCameraDown
	waitmovement 0
	delay 96
	applymovement OBJ_EVENT_ID_CAMERA, Zone24A_Movement_Camera_MoveCameraUp
	waitmovement 0
	special RemoveCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	releaseall
	end

Zone24A_Movement_Camera_MoveCameraDown:
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	step_end

Zone24A_Movement_Camera_MoveCameraUp:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

Zone24A_EventScript_SellLemonade::
	lock
	faceplayer
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone24A_EventScript_DontSell
	showmoneybox 0, 0, 0
	msgbox Zone24A_Text_WantToBuyLemonade, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone24A_EventScript_BuyLemonade
	hidemoneybox
	msgbox Zone24A_Text_DidntLike, MSGBOX_AUTOCLOSE
	release
	end

Zone24A_EventScript_DontSell:
	msgbox Zone24A_Text_DontSell, MSGBOX_AUTOCLOSE
	releaseall
	end

Zone24A_Text_DontSell:
	.string "Sorry, I'm out of stock.$"

Zone24A_Text_WantToBuyLemonade:
	.string "Lemonade, Lemonade!\n"
	.string "70 HP, for the low price of ¥400!$"

Zone24A_Text_DidntLike:
	.string "Maybe next time!$"

Zone24A_EventScript_BuyLemonade:
	checkmoney 400, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Zone24A_Text_NotEnoughMoney
	msgbox Zone24A_Text_HereYouGo, MSGBOX_AUTOCLOSE
	removemoney 400, 0
	updatemoneybox
	giveitem ITEM_LEMONADE
	hidemoneybox
	release
	end

Zone24A_Text_HereYouGo:
	.string "Here you go!$"

Zone24A_Text_NotEnoughMoney:
	msgbox Zone24A_Text_NotEnough, MSGBOX_AUTOCLOSE
	hidemoneybox
	release
	end

Zone24A_Text_NotEnough:
	.string "You don't have enough money!$"


Zone24A_EventScript_DragonTamer::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ZONE24A_TM34, Zone24A_EventScript_ReceivedTM34
	msgbox Zone24A_Text_GiveTM34, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM34
	setflag FLAG_RECEIVED_ZONE24A_TM34
	release
	end

Zone24A_Text_GiveTM34:
	.string "Training Dragon Pokémon is my\n"
	.string "passion.\p"
	.string "I hope that this gift can inspire\n"
	.string "you, too, to train your own Dragon\l"
	.string "Pokémon.$"

Zone24A_EventScript_ReceivedTM34:
	msgbox Zone24A_Text_ReceivedTM34, MSGBOX_AUTOCLOSE
	release
	end

Zone24A_Text_ReceivedTM34:
	.string "The move Dragon Tail is a tricky\n"
	.string "one to use, but can be extremely\l"
	.string "effective in the right situation.$"

Zone24A_EventScript_Christi::
	trainerbattle_single TRAINER_CHRISTI, Zone24A_Text_ChristiIntro, Zone24A_Text_ChristiDefeat
	msgbox Zone24A_Text_ChristiPostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_ChristiIntro:
	.string "$"

Zone24A_Text_ChristiDefeat:
	.string "$"

Zone24A_Text_ChristiPostBattle:
	.string "$"

Zone24A_EventScript_Spencer::
	trainerbattle_single TRAINER_SPENCER, Zone24A_Text_SpencerIntro, Zone24A_Text_SpencerDefeat
	msgbox Zone24A_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_SpencerIntro:
	.string "$"

Zone24A_Text_SpencerDefeat:
	.string "$"

Zone24A_Text_SpencerPostBattle:
	.string "$"

Zone24A_EventScript_Haywood::
	trainerbattle_single TRAINER_HAYWOOD, Zone24A_Text_HaywoodIntro, Zone24A_Text_HaywoodDefeat
	msgbox Zone24A_Text_HaywoodPostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_HaywoodIntro:
	.string "$"

Zone24A_Text_HaywoodDefeat:
	.string "$"

Zone24A_Text_HaywoodPostBattle:
	.string "$"

Zone24A_EventScript_Monroe::
	trainerbattle_single TRAINER_MONROE, Zone24A_Text_MonroeIntro, Zone24A_Text_MonroeDefeat
	msgbox Zone24A_Text_MonroePostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_MonroeIntro:
	.string "$"

Zone24A_Text_MonroeDefeat:
	.string "$"

Zone24A_Text_MonroePostBattle:
	.string "$"

Zone24A_EventScript_David::
	trainerbattle_single TRAINER_DAVID, Zone24A_Text_DavidIntro, Zone24A_Text_DavidDefeat
	msgbox Zone24A_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_DavidIntro:
	.string "$"

Zone24A_Text_DavidDefeat:
	.string "$"

Zone24A_Text_DavidPostBattle:
	.string "$"

Zone24A_EventScript_Dominik::
	trainerbattle_single TRAINER_DOMINIK, Zone24A_Text_DominikIntro, Zone24A_Text_DominikDefeat
	msgbox Zone24A_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_DominikIntro:
	.string "$"

Zone24A_Text_DominikDefeat:
	.string "$"

Zone24A_Text_DominikPostBattle:
	.string "$"

Zone24A_EventScript_Douglas::
	trainerbattle_single TRAINER_DOUGLAS, Zone24A_Text_DouglasIntro, Zone24A_Text_DouglasDefeat
	msgbox Zone24A_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_DouglasIntro:
	.string "$"

Zone24A_Text_DouglasDefeat:
	.string "$"

Zone24A_Text_DouglasPostBattle:
	.string "$"

Zone24A_EventScript_Nadine::
	trainerbattle_single TRAINER_NADINE, Zone24A_Text_NadineIntro, Zone24A_Text_NadineDefeat
	msgbox Zone24A_Text_NadinePostBattle, MSGBOX_AUTOCLOSE
	end

Zone24A_Text_NadineIntro:
	.string "$"

Zone24A_Text_NadineDefeat:
	.string "$"

Zone24A_Text_NadinePostBattle:
	.string "$"
