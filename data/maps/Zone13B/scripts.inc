Zone13B_MapScripts::
	.byte 0

Zone13B_EventScript_Bart::
	trainerbattle_single TRAINER_BART, Zone13B_Text_BartIntro, Zone13B_Text_BartDefeat
	msgbox Zone13B_Text_BartPostBattle, MSGBOX_AUTOCLOSE
	end

Zone13B_Text_BartIntro:
	.string "You beat Alinta? I don't believe you!$"

Zone13B_Text_BartDefeat:
	.string "So strong!$"

Zone13B_Text_BartPostBattle:
	.string "It doesn't matter that we lost though.\n"
	.string "I'm just here to stall time.$"

Zone13B_EventScript_Lola::
	trainerbattle_single TRAINER_LOLA, Zone13B_Text_LolaIntro, Zone13B_Text_LolaDefeat
	msgbox Zone13B_Text_LolaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone13B_Text_LolaIntro:
	.string "Grunts have names too!$"

Zone13B_Text_LolaDefeat:
	.string "We have individuality!$"

Zone13B_Text_LolaPostBattle:
	.string "Sigh. I don't get paid enough for this.$"
