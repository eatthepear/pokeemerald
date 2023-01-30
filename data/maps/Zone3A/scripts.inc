Zone3A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE3A_SUPER_POTION, Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE3A_REPEL, Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	goto_if_set FLAG_ITEM_ZONE3A_PARALYZE_HEAL, Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_10
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
	goto_if_set FLAG_ITEM_ZONE3A_HYPER_POTION, Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_13
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone3A_EventScript_TriggerLeviathan::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone3A_EventScript_TriggerLeviathan_2
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	fadeoutbgm 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	addobject 1
	clearflag FLAG_HIDE_ZONE3A_PHILLIPA
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone3A_Text_Leviathan3Intro
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone3A_EventScript_TriggerLeviathan_5
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone3A_EventScript_TriggerLeviathan_5
	setvar VAR_MUGSHOT_ID, MUGSHOT_PHILLIPA
	trainerbattle_no_intro TRAINER_PHILLIPA_LEVIATHAN_3, Zone3A_Text_Leviathan3Defeat
Zone3A_EventScript_TriggerLeviathan_4:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_1
	applymovement 1, Zone3A_Movement_Phillipa_RunAway
	waitmovement 0
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	addobject 2
	clearflag FLAG_HIDE_ZONE3A_REMI
	applymovement 2, Common_Movement_WalkDown
	waitmovement 0
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_3
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	delay 32
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_4
	applymovement 2, Zone3A_Movement_Remi_WalkToPhillipa
	waitmovement 0
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_5, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_6, MSGBOX_DEFAULT
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_7
	delay 32
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_8
	applymovement 2, Zone3A_Movement_Remi_WalkBack
	applymovement 1, Zone3A_Movement_Phillipa_WalkBack
	waitmovement 0
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_9, MSGBOX_DEFAULT
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_10, MSGBOX_DEFAULT
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_11
	applymovement 2, Zone3A_Movement_Remi_WalkToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_12, MSGBOX_DEFAULT
	giveitem ITEM_GOOD_ROD, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement 2, Zone3A_Movement_Remi_WalkBackToPhillipa
	waitmovement 0
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_13, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_14
	closemessage
	applymovement 1, Common_Movement_WalkUp
	waitmovement 0
	setflag FLAG_HIDE_ZONE3A_PHILLIPA
	removeobject 1
	applymovement 2, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 2, Common_Movement_WalkUp
	waitmovement 0
	setflag FLAG_HIDE_ZONE3A_REMI
	removeobject 2
	setflag FLAG_BEAT_LEVIATHAN_3
	setvar VAR_ZONE_3_STATE, 1
	releaseall
	end

Zone3A_EventScript_TriggerLeviathan_2:
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

Zone3A_EventScript_TriggerLeviathan_5:
	setvar VAR_MUGSHOT_ID, MUGSHOT_PHILLIPA
	trainerbattle_no_intro TRAINER_PHILLIPA_LEVIATHAN_3_BRUTAL, Zone3A_Text_Leviathan3Defeat
	goto Zone3A_EventScript_TriggerLeviathan_4


Zone3A_Movement_Phillipa_RunAway:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Zone3A_Movement_Remi_WalkToPhillipa:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

Zone3A_Movement_Remi_WalkBack:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	step_end

Zone3A_Movement_Phillipa_WalkBack:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	face_down
	step_end

Zone3A_Movement_Remi_WalkToPlayer:
	walk_down
	face_left
	step_end

Zone3A_Movement_Remi_WalkBackToPhillipa:
	walk_up
	face_left
	step_end

Zone3A_EventScript_ItemSuperPotion::
	lock
	goto_if_set FLAG_ITEM_ZONE3A_SUPER_POTION, Zone3A_EventScript_ItemSuperPotion_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE3A_SUPER_POTION
	addobject VAR_LAST_TALKED
	finditem ITEM_SUPER_POTION, 1
	release
	end

Zone3A_EventScript_ItemSuperPotion_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone3A_EventScript_ItemRepel::
	lock
	goto_if_set FLAG_ITEM_ZONE3A_REPEL, Zone3A_EventScript_ItemRepel_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE3A_REPEL
	addobject VAR_LAST_TALKED
	finditem ITEM_REPEL, 1
	release
	end

Zone3A_EventScript_ItemRepel_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone3A_EventScript_ItemParalyzeHeal::
	lock
	goto_if_set FLAG_ITEM_ZONE3A_PARALYZE_HEAL, Zone3A_EventScript_ItemParalyzeHeal_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE3A_PARALYZE_HEAL
	addobject VAR_LAST_TALKED
	finditem ITEM_PARALYZE_HEAL, 1
	release
	end

Zone3A_EventScript_ItemParalyzeHeal_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone3A_EventScript_ItemHyperPotion::
	lock
	goto_if_set FLAG_ITEM_ZONE3A_HYPER_POTION, Zone3A_EventScript_ItemHyperPotion_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE3A_HYPER_POTION
	addobject VAR_LAST_TALKED
	finditem ITEM_HYPER_POTION, 1
	release
	end

Zone3A_EventScript_ItemHyperPotion_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone3A_EventScript_Patrick::
	trainerbattle_single TRAINER_PATRICK, Zone3A_Text_PatrickIntro, Zone3A_Text_PatrickDefeat
	msgbox Zone3A_Text_PatrickPostBattle, MSGBOX_AUTOCLOSE
	end

Zone3A_Text_PatrickIntro:
	.string "My friends call me the free Exp guy,\n"
	.string "but I'll prove them wrong!$"

Zone3A_Text_PatrickDefeat:
	.string "Oops, guess not…$"

Zone3A_Text_PatrickPostBattle:
	.string "I guess I am the free Exp guy…$"

Zone3A_EventScript_Jemma::
	trainerbattle_single TRAINER_JEMMA, Zone3A_Text_JemmaIntro, Zone3A_Text_JemmaDefeat
	msgbox Zone3A_Text_JemmaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone3A_Text_JemmaIntro:
	.string "Hey! You have to pay to cross!$"

Zone3A_Text_JemmaDefeat:
	.string "Uh… You can go for free!$"

Zone3A_Text_JemmaPostBattle:
	.string "I was scamming people so well too…$"

Zone3A_EventScript_Annabelle::
	trainerbattle_single TRAINER_ANNABELLE, Zone3A_Text_AnnabelleIntro, Zone3A_Text_AnnabelleDefeat
	msgbox Zone3A_Text_AnnabellePostBattle, MSGBOX_AUTOCLOSE
	end

Zone3A_Text_AnnabelleIntro:
	.string "I wonder what day it is…$"

Zone3A_Text_AnnabelleDefeat:
	.string "Apparently it's defeat day!$"

Zone3A_Text_AnnabellePostBattle:
	.string "Tomorrow will be another day.$"

Zone3A_EventScript_Boris::
	trainerbattle_single TRAINER_BORIS, Zone3A_Text_BorisIntro, Zone3A_Text_BorisDefeat
	msgbox Zone3A_Text_BorisPostBattle, MSGBOX_AUTOCLOSE
	end

Zone3A_Text_BorisIntro:
	.string "Never give up, never surrender!$"

Zone3A_Text_BorisDefeat:
	.string "I surrender!$"

Zone3A_Text_BorisPostBattle:
	.string "I'm a hypocrite, I know.$"

Zone3A_EventScript_Richard::
	trainerbattle_single TRAINER_RICHARD, Zone3A_Text_RichardIntro, Zone3A_Text_RichardDefeat
	msgbox Zone3A_Text_RichardPostBattle, MSGBOX_AUTOCLOSE
	end

Zone3A_Text_RichardIntro:
	.string "I have far too much money to deal\n"
	.string "with the likes of you!$"

Zone3A_Text_RichardDefeat:
	.string "Agh! My money!$"

Zone3A_Text_RichardPostBattle:
	.string "Do you think I can buy humility\n"
	.string "with my money?$"

Zone3A_EventScript_TriggerLeviathan_Text_0:
	.string "This looks like someone's home!\nGo inside?$"

Zone3A_EventScript_TriggerLeviathan_Text_1:
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Wah!$"

Zone3A_EventScript_TriggerLeviathan_Text_2:
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Phillipa? Are you ok?$"

Zone3A_EventScript_TriggerLeviathan_Text_3:
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Oh!$"

Zone3A_EventScript_TriggerLeviathan_Text_4:
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: I see.\p"
	.string "You must have defeated my daughter in\n"
	.string "battle.\p"
	.string "Don't worry, I'll go talk to her.$"

Zone3A_EventScript_TriggerLeviathan_Text_5:
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Hey, kiddo.$"

Zone3A_EventScript_TriggerLeviathan_Text_6:
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Wah! Daddy! I lost!$"

Zone3A_EventScript_TriggerLeviathan_Text_7:
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: I know, love, but sometimes we\n"
	.string "lose, and that's life. We have to face\l"
	.string "our losses with honor, right?$"

Zone3A_EventScript_TriggerLeviathan_Text_8:
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Sniff…\p"
	.string "Okay…$"

Zone3A_EventScript_TriggerLeviathan_Text_9:
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: What do you say?$"

Zone3A_EventScript_TriggerLeviathan_Text_10:
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Sniff… Thank you very much\n"
	.string "for the battle!$"

Zone3A_EventScript_TriggerLeviathan_Text_11:
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: I'm proud of you, kiddo.$"

Zone3A_EventScript_TriggerLeviathan_Text_12:
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Thanks for being a good sport.\p"
	.string "Here, I want you to have this.$"

Zone3A_EventScript_TriggerLeviathan_Text_13:
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Alright, that's enough excitement\n"
	.string "for one day.\p"
	.string "It's dinner time.$"

Zone3A_EventScript_TriggerLeviathan_Text_14:
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Food!$"

Zone3A_Text_Leviathan3Intro::
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: You! How dare you intrude on\n"
	.string "my home!\p"
	.string "I am {COLOR BLUE}Leviathan Phillipa{COLOR DARK_GRAY}, all powerful!$"

Zone3A_Text_Leviathan3Defeat::
	.string "Wah!!!$"
