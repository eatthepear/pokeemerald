Zone4E_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE4E_SUPER_POTION, Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_1
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone4E_EventScript_LeviathanBattleLeft::
	lockall
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone4E_EventScript_LeviathanBattle
	return


Zone4E_EventScript_LeviathanBattleMiddle::
	lockall
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	goto Zone4E_EventScript_LeviathanBattle
	return


Zone4E_EventScript_LeviathanBattleRight::
	lockall
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone4E_EventScript_LeviathanBattle
	return


Zone4E_EventScript_LeviathanBattle::
	fadeoutbgm 1
	msgbox Zone4E_Text_Leviathan4Intro
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone4E_EventScript_LeviathanBattle_2
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone4E_EventScript_LeviathanBattle_2
	setvar VAR_MUGSHOT_ID, MUGSHOT_RITA
	trainerbattle_no_intro TRAINER_RITA_LEVIATHAN_4, Zone4E_Text_Leviathan4Defeat
Zone4E_EventScript_LeviathanBattle_1:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone4E_EventScript_LeviathanBattle_Text_0
	giveitem ITEM_TM02
	msgbox Zone4E_EventScript_LeviathanBattle_Text_1
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 1
	setflag FLAG_BEAT_LEVIATHAN_4
	setvar VAR_ZONE_4_STATE, 1
	fadescreenswapbuffers FADE_FROM_BLACK
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone4E_EventScript_LeviathanBattle_8
Zone4E_EventScript_LeviathanBattle_7:
	releaseall
	end

Zone4E_EventScript_LeviathanBattle_2:
	setvar VAR_MUGSHOT_ID, MUGSHOT_RITA
	trainerbattle_no_intro TRAINER_RITA_LEVIATHAN_4_BRUTAL, Zone4E_Text_Leviathan4Defeat
	goto Zone4E_EventScript_LeviathanBattle_1

Zone4E_EventScript_LeviathanBattle_8:
	setflag FLAG_ZONE4A_RECEIVED_GEM
	goto Zone4E_EventScript_LeviathanBattle_7


Zone4E_EventScript_ItemSuperPotion::
	lock
	goto_if_set FLAG_ITEM_ZONE4E_SUPER_POTION, Zone4E_EventScript_ItemSuperPotion_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE4E_SUPER_POTION
	addobject VAR_LAST_TALKED
	finditem ITEM_SUPER_POTION, 1
	release
	end

Zone4E_EventScript_ItemSuperPotion_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone4E_EventScript_Sign::
	msgbox Zone4E_Text_Sign, MSGBOX_SIGN
	end

Zone4E_Text_Sign:
	.string "Trainer Tips!\p"
	.string "Golden Trees often have Berries\n"
	.string "or wild Pokémon!$"

Zone4E_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: That was great! I hope our\n"
	.string "Pokémon are friends now, too!\p"
	.string "Here, I want you to have this gift, from\n"
	.string "me!\p"
	.string "The best way to bring out one's inner\n"
	.string "power is through friendship!$"

Zone4E_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: Alright, I'm off to go meet some\n"
	.string "more friends!\p"
	.string "See you around!$"

Zone4E_Text_Leviathan4Intro::
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: Hey! I'm {COLOR BLUE}Rita{COLOR DARK_GRAY}.\p"
	.string "Nice to meet you!\p"
	.string "People always criticize me for being too\n"
	.string "friendly with others.\p"
	.string "But I just find that's the best way to\n"
	.string "make new friends!\p"
	.string "Well, how about a battle, friend?$"

Zone4E_Text_Leviathan4Defeat::
	.string "That was a lovely battle.\n"
	.string "Thank you!$"
