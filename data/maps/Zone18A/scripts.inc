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


Zone18A_EventScript_LeviathanBattle::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone18A_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_LeviathanBattle_Text_1, MSGBOX_DEFAULT
	fadeoutbgm 1
	msgbox Zone18A_EventScript_LeviathanBattle_Text_2, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_LeviathanBattle_Text_3, MSGBOX_DEFAULT
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone18A_EventScript_LeviathanBattle_2
	setvar VAR_MUGSHOT_ID, MUGSHOT_LILY
	trainerbattle_no_intro TRAINER_ZOE_AND_ELI_LEVIATHAN_16, Zone18A_Text_Leviathan16Defeat
Zone18A_EventScript_LeviathanBattle_1:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone18A_EventScript_LeviathanBattle_Text_5, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_LeviathanBattle_Text_6, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_LeviathanBattle_Text_7, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_LeviathanBattle_Text_8, MSGBOX_DEFAULT
	giveitem ITEM_TM36
	playbgm MUS_ENCOUNTER_AQUA, 0
	clearflag FLAG_HIDE_ZONE18A_PIRATES
	applymovement 9, Zone18A_Movement_Pirate1_Left
	applymovement 10, Zone18A_Movement_Pirate2_Left
	msgbox Zone18A_EventScript_LeviathanBattle_Text_9, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_LeviathanBattle_Text_10, MSGBOX_DEFAULT
	waitmovement 0
	msgbox Zone18A_EventScript_LeviathanBattle_Text_11, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_LeviathanBattle_Text_12, MSGBOX_DEFAULT
	removeobject 8
	setflag FLAG_HIDE_ZONE18A_DOLL
	applymovement 9, Zone18A_Movement_Pirate1_Right
	applymovement 10, Zone18A_Movement_Pirate2_Right
	waitmovement 0
	removeobject 9
	removeobject 10
	setflag FLAG_HIDE_ZONE18A_PIRATES
	msgbox Zone18A_EventScript_LeviathanBattle_Text_13, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_LeviathanBattle_Text_14, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_LeviathanBattle_Text_15, MSGBOX_DEFAULT
	giveitem ITEM_DIVING_GEAR
	fadedefaultbgm
	msgbox Zone18A_EventScript_LeviathanBattle_Text_16, MSGBOX_DEFAULT
	setflag FLAG_BEAT_LEVIATHAN_16
	setvar VAR_ZONE_18_STATE, 1
	release
	end

Zone18A_EventScript_LeviathanBattle_2:
	setweather WEATHER_RAIN
	doweather
	msgbox Zone18A_EventScript_LeviathanBattle_Text_4, MSGBOX_DEFAULT
	setvar VAR_MUGSHOT_ID, MUGSHOT_LILY
	trainerbattle_no_intro TRAINER_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL, Zone18A_Text_Leviathan16Defeat
	resetweather
	doweather
	goto Zone18A_EventScript_LeviathanBattle_1


Zone18A_Movement_Pirate1_Left:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_down
	step_end

Zone18A_Movement_Pirate2_Left:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_left
	walk_faster_left
	step_end

Zone18A_Movement_Pirate1_Right:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end

Zone18A_Movement_Pirate2_Right:
	walk_faster_right
	walk_faster_right
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end

Zone18A_EventScript_AzurillDoll::
	msgbox Zone18A_EventScript_AzurillDoll_Text_0, MSGBOX_SIGN
	end


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

Zone18A_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: Is this the challenger you were\n"
	.string "telling me about?$"

Zone18A_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Yeah yeah!$"

Zone18A_EventScript_LeviathanBattle_Text_2:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: To truly clear the Trainer's Dojo,\n"
	.string "you must defeat the two of us in a\l"
	.string "Double Battle!$"

Zone18A_EventScript_LeviathanBattle_Text_3:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Taste our power!$"

Zone18A_EventScript_LeviathanBattle_Text_4:
	.string "It suddenly began to rain!$"

Zone18A_EventScript_LeviathanBattle_Text_5:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Aww! We lost, sis!$"

Zone18A_EventScript_LeviathanBattle_Text_6:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: That's ok, Eli. We'll learn from this,\n"
	.string "yeah?$"

Zone18A_EventScript_LeviathanBattle_Text_7:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Yeah yeah! And we gotta give\n"
	.string "{PLAYER} the reward!$"

Zone18A_EventScript_LeviathanBattle_Text_8:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: Right! Here's our little gift for\n"
	.string "clearing the Trainer's Dojo.$"

Zone18A_EventScript_LeviathanBattle_Text_9:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: What the?$"

Zone18A_EventScript_LeviathanBattle_Text_10:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Pirates!$"

Zone18A_EventScript_LeviathanBattle_Text_11:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Hey, wait! That's my special doll!\n"
	.string "Don't take it, please!$"

Zone18A_EventScript_LeviathanBattle_Text_12:
	.string "It be ours now, laddy!$"

Zone18A_EventScript_LeviathanBattle_Text_13:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Wah!!!$"

Zone18A_EventScript_LeviathanBattle_Text_14:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: It'll be ok, Eli!$"

Zone18A_EventScript_LeviathanBattle_Text_15:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: {PLAYER}! You're stronger than\n"
	.string "both of us.\p"
	.string "Can you chase the pirates and recover\n"
	.string "the doll?\p"
	.string "Here, this Diving Gear might be helpful.$"

Zone18A_EventScript_LeviathanBattle_Text_16:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Please! Help!$"

Zone18A_EventScript_AzurillDoll_Text_0:
	.string "It's an Azurill doll.\nIt's clearly been well loved.$"

Zone18A_EventScript_SellSodaPop_Text_0:
	.string "Want to buy some Soda Pop?\n¥300 for 50 HP a pop!$"

Zone18A_EventScript_SellSodaPop_Text_1:
	.string "You don't have enough money!$"

Zone18A_EventScript_SellSodaPop_Text_2:
	.string "Here you go!$"

Zone18A_EventScript_SellSodaPop_Text_3:
	.string "Aww, did you not like my pun?$"

Zone18A_Text_Leviathan16Defeat::
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Darn it!\p"
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: It seems you've defeated us.$"
