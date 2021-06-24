Zone12A_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Zone12A_OnTransition
	.byte 0

Zone12A_EventScript_Exit::
	lockall
	warp MAP_ZONE12SANCTUARY, 255, 7, 7
	releaseall
	end

Zone12A_OnTransition:
	goto_if_not_defeated TRAINER_DOLORES, Zone12A_EventScript_DoNothing
	goto_if_not_defeated TRAINER_ESSENCE, Zone12A_EventScript_DoNothing
	goto_if_not_defeated TRAINER_RANDOLPH, Zone12A_EventScript_DoNothing
	goto_if_not_defeated TRAINER_HILDA, Zone12A_EventScript_DoNothing
	goto_if_not_defeated TRAINER_GENIE, Zone12A_EventScript_DoNothing
	goto_if_not_defeated TRAINER_KINLEY, Zone12A_EventScript_DoNothing
	removeobject 12
	setflag FLAG_HIDE_ZONE12A_MAN
	end

Zone12A_EventScript_DoNothing:
	end

Zone12A_EventScript_BlockMan::
	lock
	faceplayer
	msgbox Zone12A_Text_DefeatAll, MSGBOX_AUTOCLOSE
	release
	end
	
Zone12A_Text_DefeatAll:
	.string "Greetings, trainer!\p"
	.string "In order to pass, you must defeat\n"
	.string "all the other Trainers in this area.$"

Zone12A_EventScript_Dolores::
	trainerbattle_single TRAINER_DOLORES, Zone12A_Text_DoloresIntro, Zone12A_Text_DoloresDefeat
	msgbox Zone12A_Text_DoloresPostBattle, MSGBOX_AUTOCLOSE
	end

Zone12A_Text_DoloresIntro:
	.string "Let me take a look at how well\n"
	.string "you've raised your Pokémon!$"

Zone12A_Text_DoloresDefeat:
	.string "You've raised them well!$"

Zone12A_Text_DoloresPostBattle:
	.string "You should check out the Day-Care.\n"
	.string "Their service is excellent!$"

Zone12A_EventScript_Essence::
	trainerbattle_single TRAINER_ESSENCE, Zone12A_Text_EssenceIntro, Zone12A_Text_EssenceDefeat
	msgbox Zone12A_Text_EssencePostBattle, MSGBOX_AUTOCLOSE
	end

Zone12A_Text_EssenceIntro:
	.string "I know I shouldn't be walking\n"
	.string "in a puddle like this...$"

Zone12A_Text_EssenceDefeat:
	.string "But I just love looking at my\n"
	.string "reflection too much!$"

Zone12A_Text_EssencePostBattle:
	.string "Sigh... I'm even more beautiful\n"
	.string "than Narcissus...$"

Zone12A_EventScript_Randolph::
	trainerbattle_single TRAINER_RANDOLPH, Zone12A_Text_RandolphIntro, Zone12A_Text_RandolphDefeat
	msgbox Zone12A_Text_RandolphPostBattle, MSGBOX_AUTOCLOSE
	end

Zone12A_Text_RandolphIntro:
	.string "Huh? Declan? Who's that?$"

Zone12A_Text_RandolphDefeat:
	.string "Why does everyone think I'm Declan?$"

Zone12A_Text_RandolphPostBattle:
	.string "I'm pretty sure we don't look alike!$"

Zone12A_EventScript_Hilda::
	trainerbattle_single TRAINER_HILDA, Zone12A_Text_HildaIntro, Zone12A_Text_HildaDefeat
	msgbox Zone12A_Text_HildaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone12A_Text_HildaIntro:
	.string "Hi, I'm a fan!$"

Zone12A_Text_HildaDefeat:
	.string "A fan of sneaking up on people!$"

Zone12A_Text_HildaPostBattle:
	.string "Okay, I admit, it's a weird hobby.$"

Zone12A_EventScript_Genie::
	trainerbattle_single TRAINER_GENIE, Zone12A_Text_GenieIntro, Zone12A_Text_GenieDefeat
	msgbox Zone12A_Text_GeniePostBattle, MSGBOX_AUTOCLOSE
	end

Zone12A_Text_GenieIntro:
	.string "Running trains the mind and the soul!$"

Zone12A_Text_GenieDefeat:
	.string "But it does not train your Pokémon!$"

Zone12A_Text_GeniePostBattle:
	.string "Huff... I need a break...$"

Zone12A_EventScript_Kinley::
	trainerbattle_single TRAINER_KINLEY, Zone12A_Text_KinleyIntro, Zone12A_Text_KinleyDefeat
	msgbox Zone12A_Text_KinleyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone12A_Text_KinleyIntro:
	.string "This grass is far too tall\n"
	.string "for someone of my stature!$"

Zone12A_Text_KinleyDefeat:
	.string "I meant financial stature!\n"
	.string "I'm not short!$"

Zone12A_Text_KinleyPostBattle:
	.string "Errr... Never mind.$"

Zone12A_EventScript_ExpertBelt::
	finditem ITEM_EXPERT_BELT
	end

Zone12A_EventScript_Metronome::
	finditem ITEM_METRONOME
	end

Zone12A_EventScript_OvalStone::
	finditem ITEM_OVAL_STONE
	end

Zone12A_EventScript_GripClaw::
	finditem ITEM_GRIP_CLAW
	end

Zone12A_EventScript_BlackSludge::
	finditem ITEM_BLACK_SLUDGE
	end
