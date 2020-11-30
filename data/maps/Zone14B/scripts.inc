Zone14B_MapScripts::
	.byte 0

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
