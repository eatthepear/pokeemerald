Zone16A_MapScripts::
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