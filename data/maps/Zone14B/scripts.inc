Zone14B_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Zone14B_OnTransition
	.byte 0

Zone14B_OnTransition: @ 81FC642
	call Zone14B_EventScript_SetFlashRadius
	end

Zone14B_EventScript_SetFlashRadius:
	setflashradius 4
	return

Zone14B_EventScript_Todd::
	trainerbattle_single TRAINER_TODD, Zone14B_Text_ToddIntro, Zone14B_Text_ToddDefeat
	msgbox Zone14B_Text_ToddPostBattle, MSGBOX_AUTOCLOSE
	end

Zone14B_Text_ToddIntro:
	.string "Hohoho!\n"
	.string "What a great place to hike!$"

Zone14B_Text_ToddDefeat:
	.string "Hohoho!\n"
	.string "What a terrible place to lose!$"

Zone14B_Text_ToddPostBattle:
	.string "Hohoho!$"

Zone14B_EventScript_Charlie::
	trainerbattle_single TRAINER_CHARLIE, Zone14B_Text_CharlieIntro, Zone14B_Text_CharlieDefeat
	msgbox Zone14B_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end

Zone14B_Text_CharlieIntro:
	.string "Lola, baby, where are you?$"

Zone14B_Text_CharlieDefeat:
	.string "I'm sorry, I couldn't win for you!$"

Zone14B_Text_CharliePostBattle:
	.string "Sigh. I wish NPCs got phones.\n"
	.string "Then I could just text her.$"

Zone14B_EventScript_MuscleBand::
	finditem ITEM_MUSCLE_BAND
	end

Zone14B_EventScript_QuickBall::
	finditem ITEM_QUICK_BALL
	end

Zone14B_EventScript_WiseGlasses::
	finditem ITEM_WISE_GLASSES
	end