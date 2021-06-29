Zone1A_MapScripts::
	.byte 0

Zone1A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 1
	goto_if_gt EventScript_WarpZone0
	warp MAP_ZONE1SANCTUARY, 255, 7, 7
	releaseall
	end

Zone1A_EventScript_Corey::
	trainerbattle_single TRAINER_COREY, Zone1A_Text_CoreyIntro, Zone1A_Text_CoreyDefeat
	msgbox Zone1A_Text_CoreyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone1A_Text_CoreyIntro:
	.string "Hey, you! Let's battle!$"

Zone1A_Text_CoreyDefeat:
	.string "Aww... Come on!$"

Zone1A_Text_CoreyPostBattle:
	.string "I always lose...$"

Zone1A_EventScript_Mariam::
	trainerbattle_single TRAINER_MARIAM, Zone1A_Text_MariamIntro, Zone1A_Text_MariamDefeat
	msgbox Zone1A_Text_MariamPostBattle, MSGBOX_AUTOCLOSE
	end

Zone1A_Text_MariamIntro:
	.string "Be careful, I'm tough!$"

Zone1A_Text_MariamDefeat:
	.string "Sheesh!$"

Zone1A_Text_MariamPostBattle:
	.string "Maybe I need more Pokémon.$"

Zone1A_EventScript_Oscar::
	trainerbattle_single TRAINER_OSCAR, Zone1A_Text_OscarIntro, Zone1A_Text_OscarDefeat
	msgbox Zone1A_Text_OscarPostBattle, MSGBOX_AUTOCLOSE
	end

Zone1A_Text_OscarIntro:
	.string "Fear my might!$"

Zone1A_Text_OscarDefeat:
	.string "Beaten! Disgrace!$"

Zone1A_Text_OscarPostBattle:
	.string "I must reclaim my honor...$"

Zone1A_EventScript_ItemPotion::
	finditem ITEM_POTION
	end

Zone1A_EventScript_ItemQuickClaw::
	finditem ITEM_QUICK_CLAW
	end
