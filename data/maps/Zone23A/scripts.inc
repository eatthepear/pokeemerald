Zone23A_MapScripts::
	.byte 0

Zone23A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 23
	goto_if_gt EventScript_WarpZone0
	call_if_set FLAG_SETTINGS_BRUTAL, Zone23A_EventScript_CheckBrutal
	warp MAP_ZONE23SANCTUARY, 255, 22, 7
	releaseall
	end

Zone23A_EventScript_CheckBrutal:
	goto_if_not_defeated TRAINER_EDGARDO, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_JEAN, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_ROSE, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_JENNIFER, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_MATTHEW, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_KERRY, EventScript_BrutalExitNotSatisfied
	goto_if_not_defeated TRAINER_ANNIE, EventScript_BrutalExitNotSatisfied
	return

Zone23A_EventScript_XScissor::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ZONE23A_TM31, Zone23A_EventScript_GaveXScissor
	msgbox Zone23A_Text_XScissor, MSGBOX_AUTOCLOSE
	goto_if_not_defeated TRAINER_EDGARDO, Zone23A_EventScript_NotDefeated
	goto_if_not_defeated TRAINER_JEAN, Zone23A_EventScript_NotDefeated
	goto_if_not_defeated TRAINER_ROSE, Zone23A_EventScript_NotDefeated
	goto_if_not_defeated TRAINER_JENNIFER, Zone23A_EventScript_NotDefeated
	goto_if_not_defeated TRAINER_MATTHEW, Zone23A_EventScript_NotDefeated
	goto_if_not_defeated TRAINER_KERRY, Zone23A_EventScript_NotDefeated
	goto_if_not_defeated TRAINER_ANNIE, Zone23A_EventScript_NotDefeated
	msgbox Zone23A_Text_Here, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM32
	setflag FLAG_RECEIVED_ZONE23A_TM31
	goto Zone23A_EventScript_GaveXScissor
	end

Zone23A_EventScript_GaveXScissor:
	msgbox Zone23A_Text_GaveXScissor, MSGBOX_AUTOCLOSE
	releaseall
	end

Zone23A_EventScript_NotDefeated:
	msgbox Zone23A_Text_NotDefeated, MSGBOX_AUTOCLOSE
	release
	end

Zone23A_Text_XScissor:
	.string "Hey, you.\p"
	.string "Yeah, you.\p"
	.string "If you've beat all the trainers in\n"
	.string "this swamp, I've got a little\l"
	.string "something for you.$"

Zone23A_Text_NotDefeated:
	.string "Hmm. Still more to go.$"

Zone23A_Text_Here:
	.string "Ooh, nice. You've done it.\p"
	.string "Here's what I promised, a special\n"
	.string "Bug-type TM.$"

Zone23A_Text_GaveXScissor:
	.string "X-Scissor has a high critical hit\n"
	.string "ratio. Isn't that neat?$"

Zone23A_EventScript_Edgardo::
	trainerbattle_single TRAINER_EDGARDO, Zone23A_Text_EdgardoIntro, Zone23A_Text_EdgardoDefeat
	msgbox Zone23A_Text_EdgardoPostBattle, MSGBOX_AUTOCLOSE
	end

Zone23A_Text_EdgardoIntro:
	.string "Yuck, I've got mud on my boots!$"

Zone23A_Text_EdgardoDefeat:
	.string "Oh, that's not mud…$"

Zone23A_Text_EdgardoPostBattle:
	.string "Raising these little ones is\n"
	.string "hard work!$"

Zone23A_EventScript_Jean::
	trainerbattle_single TRAINER_JEAN, Zone23A_Text_JeanIntro, Zone23A_Text_JeanDefeat
	msgbox Zone23A_Text_JeanPostBattle, MSGBOX_AUTOCLOSE
	end

Zone23A_Text_JeanIntro:
	.string "Attack, my swarm of Bugs!$"

Zone23A_Text_JeanDefeat:
	.string "Retreat! Full retreat!$"

Zone23A_Text_JeanPostBattle:
	.string "I just need one more Bug to fill\n"
	.string "out my party!$"

Zone23A_EventScript_Rose::
	trainerbattle_single TRAINER_ROSE, Zone23A_Text_RoseIntro, Zone23A_Text_RoseDefeat
	msgbox Zone23A_Text_RosePostBattle, MSGBOX_AUTOCLOSE
	end

Zone23A_Text_RoseIntro:
	.string "I just love the rain!$"

Zone23A_Text_RoseDefeat:
	.string "Water you doing?$"

Zone23A_Text_RosePostBattle:
	.string "Fine, I just love bad puns.\n"
	.string "Happy now?$"

Zone23A_EventScript_Jennifer::
	trainerbattle_single TRAINER_JENNIFER, Zone23A_Text_JenniferIntro, Zone23A_Text_JenniferDefeat
	msgbox Zone23A_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
	end

Zone23A_Text_JenniferIntro:
	.string "A dark, brooding swamp…$"

Zone23A_Text_JenniferDefeat:
	.string "Just the perfect place for me!$"

Zone23A_Text_JenniferPostBattle:
	.string "I like to dress up as a witch.$"

Zone23A_EventScript_Matthew::
	trainerbattle_single TRAINER_MATTHEW, Zone23A_Text_MatthewIntro, Zone23A_Text_MatthewDefeat
	msgbox Zone23A_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
	end

Zone23A_Text_MatthewIntro:
	.string "I journey to exotic biomes to\n"
	.string "gather the rarest of Pokémon!$"

Zone23A_Text_MatthewDefeat:
	.string "Argh!$"

Zone23A_Text_MatthewPostBattle:
	.string "Rare Pokémon don't always battle\n"
	.string "too well.$"

Zone23A_EventScript_Kerry::
	trainerbattle_single TRAINER_KERRY, Zone23A_Text_KerryIntro, Zone23A_Text_KerryDefeat
	msgbox Zone23A_Text_KerryPostBattle, MSGBOX_AUTOCLOSE
	end

Zone23A_Text_KerryIntro:
	.string "What's your favorite food?$"

Zone23A_Text_KerryDefeat:
	.string "I personally love teriyaki!$"

Zone23A_Text_KerryPostBattle:
	.string "Sometimes, it's nice to just chat\n"
	.string "instead of battling.\l"
	.string "Don't you think so?$"

Zone23A_EventScript_Annie::
	trainerbattle_single TRAINER_ANNIE, Zone23A_Text_AnnieIntro, Zone23A_Text_AnnieDefeat
	msgbox Zone23A_Text_AnniePostBattle, MSGBOX_AUTOCLOSE
	end

Zone23A_Text_AnnieIntro:
	.string "For the environment!$"

Zone23A_Text_AnnieDefeat:
	.string "That's a downer!$"

Zone23A_Text_AnniePostBattle:
	.string "Climate change is a real threat to\n"
	.string "environments like these.$"

Zone23A_EventScript_LeafStone::
	finditem ITEM_LEAF_STONE
	end

Zone23A_EventScript_HyperPotion::
	finditem ITEM_HYPER_POTION
	end

Zone23A_EventScript_SuperRepel::
	finditem ITEM_SUPER_REPEL
	end
	
Zone23A_EventScript_QuickBall::
	finditem ITEM_QUICK_BALL
	end

Zone23A_EventScript_TimerBall::
	finditem ITEM_TIMER_BALL
	end

Zone23A_EventScript_DuskBall::
	finditem ITEM_DUSK_BALL
	end
