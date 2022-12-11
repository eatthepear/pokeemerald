Zone18A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE18A_SUPER_POTION_2, Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE18A_SUPER_REPEL, Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME_5
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone18A_EventScript_SellSodaPop::
	lock
	faceplayer
	showmoneybox 0, 0, 0
	msgbox Zone18A_EventScript_SellSodaPop_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18A_EventScript_SellSodaPop_2
	hidemoneybox
	msgbox Zone18A_EventScript_SellSodaPop_Text_3
Zone18A_EventScript_SellSodaPop_1:
	release
	end

Zone18A_EventScript_SellSodaPop_2:
	checkmoney 300, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Zone18A_EventScript_SellSodaPop_5
	msgbox Zone18A_EventScript_SellSodaPop_Text_2
	removemoney 300, 0
	updatemoneybox
	giveitem ITEM_SODA_POP
	hidemoneybox
	goto Zone18A_EventScript_SellSodaPop_1

Zone18A_EventScript_SellSodaPop_5:
	msgbox Zone18A_EventScript_SellSodaPop_Text_1
	hidemoneybox
	goto Zone18A_EventScript_SellSodaPop_1


Zone18A_EventScript_SuperPotion2::
	lock
	goto_if_set FLAG_ITEM_ZONE18A_SUPER_POTION_2, Zone18A_EventScript_SuperPotion2_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE18A_SUPER_POTION_2
	addobject VAR_LAST_TALKED
	finditem ITEM_SUPER_POTION, 2
	release
	end

Zone18A_EventScript_SuperPotion2_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone18A_EventScript_SuperRepel::
	lock
	goto_if_set FLAG_ITEM_ZONE18A_SUPER_REPEL, Zone18A_EventScript_SuperRepel_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE18A_SUPER_REPEL
	addobject VAR_LAST_TALKED
	finditem ITEM_SUPER_REPEL, 1
	release
	end

Zone18A_EventScript_SuperRepel_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone18A_EventScript_Sign::
	msgbox Zone18A_Text_Sign, MSGBOX_SIGN
	end

Zone18A_Text_Sign:
	.string "Trainer's Dojo!\n"
	.string "All challengers welcome!$"

Zone18A_EventScript_Doris::
	trainerbattle_single TRAINER_DORIS, Zone18A_Text_DorisIntro, Zone18A_Text_DorisDefeat
	msgbox Zone18A_Text_DorisPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18A_Text_DorisIntro:
	.string "$"

Zone18A_Text_DorisDefeat:
	.string "$"

Zone18A_Text_DorisPostBattle:
	.string "$"

Zone18A_EventScript_Homer::
	trainerbattle_single TRAINER_HOMER, Zone18A_Text_HomerIntro, Zone18A_Text_HomerDefeat
	msgbox Zone18A_Text_HomerPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18A_Text_HomerIntro:
	.string "$"

Zone18A_Text_HomerDefeat:
	.string "$"

Zone18A_Text_HomerPostBattle:
	.string "$"


Zone18A_EventScript_PirateEventRight::
	lockall
	goto Zone18A_EventScript_PirateEvent
	end

Zone18A_EventScript_PirateEventLeft::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Zone18A_Movement_RunRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Zone18A_Movement_RunRight
	waitmovement 0
	goto Zone18A_EventScript_PirateEvent
	end

Zone18A_EventScript_PirateEventMiddle::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Zone18A_Movement_RunRight
	waitmovement 0
	goto Zone18A_EventScript_PirateEvent
	end

Zone18A_EventScript_PirateEvent:
	setflag FLAG_HIDE_ZONE19D_PIRATES
	clearflag FLAG_HIDE_ZONE18B_MAN
	applymovement OBJ_EVENT_ID_PLAYER, Zone18A_Movement_RunDownToBeach
	waitmovement 0
	applymovement 4, Zone18A_Movement_WalkSlowlyRight
	waitmovement 0
	msgbox Zone18A_Text_Odysseus_GotAway, MSGBOX_AUTOCLOSE
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	delay 40
	applymovement 4, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	applymovement 4, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 4, Common_Movement_WalkLeft
	waitmovement 0
	msgbox Zone18A_Text_Odysseus_GoAfterPirates, MSGBOX_AUTOCLOSE
	giveitem ITEM_DIVING_GEAR
	msgbox Zone18A_Text_Odysseus_FindPirates, MSGBOX_AUTOCLOSE
	applymovement 4, Zone18A_Movement_WalkAway
	waitmovement 0
	removeobject 4
	clearflag FLAG_HIDE_ZONE18B_ODYSSEUS
	setflag FLAG_HIDE_ZONE18B_MAN
	setflag FLAG_HIDE_ZONE19D_PIRATES
	setvar VAR_ZONE_18_STATE, 2
	releaseall
	end

Zone18A_Movement_RunRight:
	player_run_right
	step_end

Zone18A_Movement_RunDownToBeach:
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_right
	walk_right
	step_end

Zone18A_Movement_WalkSlowlyRight:
	walk_slow_right
	walk_slow_right
	step_end

Zone18A_Text_Odysseus_GotAway:
	.string "{COLOR BLUE}Odysseus{COLOR DARK_GRAY}: They're gone...\p"
	.string "They can't keep getting away like\n"
	.string "this, but I can't just leave this\l"
	.string "place unprotected.$"

Zone18A_Text_Odysseus_GoAfterPirates:
	.string "Listen, {PLAYER}, you're clearly a\n"
	.string "capable Trainer. I need you to go\l"
	.string "after the pirates. Their hideout\l"
	.string "should be somewhere east of here.\p"
	.string "Here, take this.$"

Zone18A_Text_Odysseus_FindPirates:
	.string "{COLOR BLUE}Odysseus{COLOR DARK_GRAY}: Please, find the pirates!$"

Zone18A_Movement_WalkAway:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Zone18A_EventScript_SellSodaPop_Text_0:
	.string "Want to buy some Soda Pop?\n¥300 for 50 HP a pop!$"

Zone18A_EventScript_SellSodaPop_Text_1:
	.string "You don't have enough money!$"

Zone18A_EventScript_SellSodaPop_Text_2:
	.string "Here you go!$"

Zone18A_EventScript_SellSodaPop_Text_3:
	.string "Aww, did you not like my pun?$"
