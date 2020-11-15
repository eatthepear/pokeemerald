Zone13C_MapScripts::
	.byte 0

Zone13C_EventScript_Todd::
	trainerbattle_single TRAINER_TODD, Zone13C_Text_ToddIntro, Zone13C_Text_ToddDefeat
	msgbox Zone13C_Text_ToddPostBattle, MSGBOX_AUTOCLOSE
	end

Zone13C_Text_ToddIntro:
	.string "We've gotten what we came for.$"

Zone13C_Text_ToddDefeat:
	.string "I'm not going to monologue for you!$"

Zone13C_Text_ToddPostBattle:
	.string "Looks like it's time to go.\p"
	.string "You'll be seeing Team Magma again\n"
	.string "real soon.$"
