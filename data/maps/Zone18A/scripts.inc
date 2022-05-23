Zone18A_MapScripts::
	.byte 0

Zone18A_EventScript_PirateEventRight::
	lockall
	goto Zone18A_EventScript_PirateEvent
	end

Zone18A_EventScript_PirateEventLeft::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Zone18A_Movement_RunRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Zone18A_Movement_RunRight
	waitmovement 0
	goto Zone18A_EventScript_PirateEvent
	end

Zone18A_EventScript_PirateEventMiddle::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Zone18A_Movement_RunRight
	waitmovement 0
	goto Zone18A_EventScript_PirateEvent
	end

Zone18A_EventScript_PirateEvent:
	setflag FLAG_HIDE_ZONE19D_PIRATES
	clearflag FLAG_HIDE_ZONE18B_MAN
	applymovement OBJ_EVENT_ID_PLAYER, Zone18A_Movement_RunDownToBeach
	waitmovement 0
	applymovement 4, Zone18A_Movement_WalkSlowlyRight
	waitmovement 0
	msgbox Zone18A_Text_Odysseus_GotAway, MSGBOX_AUTOCLOSE
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	delay 40
	applymovement 4, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	applymovement 4, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 4, Common_Movement_WalkLeft
	waitmovement 0
	msgbox Zone18A_Text_Odysseus_GoAfterPirates, MSGBOX_AUTOCLOSE
	giveitem ITEM_DIVING_GEAR
	msgbox Zone18A_Text_Odysseus_FindPirates, MSGBOX_AUTOCLOSE
	applymovement 4, Zone18A_Movement_WalkAway
	waitmovement 0
	removeobject 4
	clearflag FLAG_HIDE_ZONE18B_ODYSSEUS
	setflag FLAG_HIDE_ZONE18B_MAN
	setflag FLAG_HIDE_ZONE19D_PIRATES
	setvar VAR_ZONE_18_STATE, 2
	releaseall
	end

Zone18A_Movement_RunRight:
	player_run_right
	step_end

Zone18A_Movement_RunDownToBeach:
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_right
	walk_right
	step_end

Zone18A_Movement_WalkSlowlyRight:
	walk_slow_right
	walk_slow_right
	step_end

Zone18A_Text_Odysseus_GotAway:
	.string "{COLOR BLUE}Odysseus{COLOR DARK_GRAY}: They're gone...\p"
	.string "They can't keep getting away like\n"
	.string "this, but I can't just leave this\l"
	.string "place unprotected.$"

Zone18A_Text_Odysseus_GoAfterPirates:
	.string "Listen, {PLAYER}, you're clearly a\n"
	.string "capable Trainer. I need you to go\l"
	.string "after the pirates. Their hideout\l"
	.string "should be somewhere east of here.\p"
	.string "Here, take this.$"

Zone18A_Text_Odysseus_FindPirates:
	.string "{COLOR BLUE}Odysseus{COLOR DARK_GRAY}: Please, find the pirates!$"

Zone18A_Movement_WalkAway:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Zone18A_EventScript_SellSodaPop::
	lock
	faceplayer
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone18A_EventScript_DontSell
	showmoneybox 0, 0, 0
	msgbox Zone18A_Text_WantToBuySodaPop, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18A_EventScript_BuySodaPop
	hidemoneybox
	msgbox Zone18A_Text_DidntLike, MSGBOX_AUTOCLOSE
	release
	end

Zone18A_EventScript_DontSell:
	msgbox Zone18A_Text_DontSell, MSGBOX_AUTOCLOSE
	releaseall
	end

Zone18A_Text_DontSell:
	.string "Sorry, I'm out of stock.$"

Zone18A_Text_WantToBuySodaPop:
	.string "Want to buy some Soda Pop?\n"
	.string "¥300 for 50 HP a pop!$"

Zone18A_Text_DidntLike:
	.string "Aww, did you not like my pun?$"

Zone18A_EventScript_BuySodaPop:
	checkmoney 300, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Zone18A_Text_NotEnoughMoney
	msgbox Zone18A_Text_HereYouGo, MSGBOX_AUTOCLOSE
	removemoney 300, 0
	updatemoneybox
	giveitem ITEM_SODA_POP
	hidemoneybox
	release
	end

Zone18A_Text_HereYouGo:
	.string "Here you go!$"

Zone18A_Text_NotEnoughMoney:
	msgbox Zone18A_Text_NotEnough, MSGBOX_AUTOCLOSE
	hidemoneybox
	release
	end

Zone18A_Text_NotEnough:
	.string "You don't have enough money!$"

Zone18A_EventScript_Marion::
	trainerbattle_single TRAINER_MARION, Zone18A_Text_MarionIntro, Zone18A_Text_MarionDefeat
	msgbox Zone18A_Text_MarionPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18A_Text_MarionIntro:
	.string "What a relaxing day for a swim.\n"
	.string "You should get off that Surfboard\l"
	.string "and join me!$"

Zone18A_Text_MarionDefeat:
	.string "You're a good swimmer and battler!$"

Zone18A_Text_MarionPostBattle:
	.string "Sometimes I just like to float\n"
	.string "in the water, like a Wailmer.$"

Zone18A_EventScript_Clinton::
	trainerbattle_single TRAINER_CLINTON, Zone18A_Text_ClintonIntro, Zone18A_Text_ClintonDefeat
	msgbox Zone18A_Text_ClintonPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18A_Text_ClintonIntro:
	.string "Fishy fishy, come here...$"

Zone18A_Text_ClintonDefeat:
	.string "Fishy got away!$"

Zone18A_Text_ClintonPostBattle:
	.string "Fishy fishy fishy...$"

Zone18A_EventScript_Kenneth::
	trainerbattle_single TRAINER_KENNETH, Zone18A_Text_KennethIntro, Zone18A_Text_KennethDefeat
	msgbox Zone18A_Text_KennethPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18A_Text_KennethIntro:
	.string "Papa said I should wait here\n"
	.string "while he took care of business!$"

Zone18A_Text_KennethDefeat:
	.string "Wah!$"

Zone18A_Text_KennethPostBattle:
	.string "Papa isn't gonna be happy\n"
	.string "when he finds out I lost...$"

Zone18A_EventScript_Sign::
	msgbox Zone18A_Text_Sign, MSGBOX_SIGN
	end

Zone18A_Text_Sign:
	.string "Trainer's Dojo!\n"
	.string "All challengers welcome!$"

Zone18A_EventScript_ExpertBelt::
	finditem ITEM_EXPERT_BELT
	end

Zone18A_EventScript_TM23::
	finditem ITEM_TM23
	end
