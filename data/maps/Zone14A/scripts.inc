Zone14A_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Zone14A_OnTransition
	.byte 0

Zone14A_OnTransition: @ 81FC642
	call Zone14A_EventScript_SetFlashRadius
	end

Zone14A_EventScript_SetFlashRadius:
	setflashlevel 4
	return

Zone14A_EventScript_Bart::
	trainerbattle_single TRAINER_BART, Zone14A_Text_BartIntro, Zone14A_Text_BartDefeat
	msgbox Zone14A_Text_BartPostBattle, MSGBOX_AUTOCLOSE
	end

Zone14A_Text_BartIntro:
	.string "I sympathize with the plight of\n"
	.string "the working class, but I simply\l"
	.string "benefit too much from inequality!$"

Zone14A_Text_BartDefeat:
	.string "Mama! Some poor person beat me!$"

Zone14A_Text_BartPostBattle:
	.string "I already gave you money, ok?\n"
	.string "Just scram or something.$"

Zone14A_EventScript_Lola::
	trainerbattle_single TRAINER_LOLA, Zone14A_Text_LolaIntro, Zone14A_Text_LolaDefeat
	msgbox Zone14A_Text_LolaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone14A_Text_LolaIntro:
	.string "Seriously, when I find Charlie,\n"
	.string "he's going to regret choosing this\l"
	.string "place for our 1.5 month anniversary!$"

Zone14A_Text_LolaDefeat:
	.string "What kind of place to picnic is\n"
	.string "is this anyways!?$"

Zone14A_Text_LolaPostBattle:
	.string "That stupid, stupid boy!$"

Zone14A_EventScript_GreatBall::
	finditem ITEM_GREAT_BALL
	end
