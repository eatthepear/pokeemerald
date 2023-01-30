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


Zone18A_EventScript_PirateEvent::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone18A_EventScript_PirateEvent_Text_0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Zone18A_Movement_CameraDown
	waitmovement 0
	playbgm MUS_ENCOUNTER_AQUA, 0
	addobject 7
	addobject 8
	clearflag FLAG_HIDE_ZONE18A_PIRATES
	delay 40
	applymovement 7, Zone18A_Movement_Pirate1_Left
	applymovement 8, Zone18A_Movement_Pirate2_Left
	waitmovement 0
	msgbox Zone18A_EventScript_PirateEvent_Text_1, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_PirateEvent_Text_2, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_PirateEvent_Text_3
	applymovement 7, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone18A_EventScript_PirateEvent_Text_4
	applymovement 7, Common_Movement_FaceDown
	waitmovement 0
	removeobject 6
	setflag FLAG_HIDE_ZONE18A_DOLL
	delay 40
	applymovement 7, Zone18A_Movement_Pirate1_Right
	applymovement 8, Zone18A_Movement_Pirate2_Right
	waitmovement 0
	removeobject 7
	removeobject 8
	setflag FLAG_HIDE_ZONE18A_PIRATES
	applymovement OBJ_EVENT_ID_CAMERA, Zone18A_Movement_CameraUp
	waitmovement 0
	special RemoveCameraObject
	removeobject 11
	setflag FLAG_HIDE_ZONE18A_BOAT
	applymovement 9, Common_Movement_FaceRight
	waitmovement 0
	msgbox Zone18A_EventScript_PirateEvent_Text_5, MSGBOX_DEFAULT
	applymovement 10, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone18A_EventScript_PirateEvent_Text_6, MSGBOX_DEFAULT
	applymovement 10, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone18A_EventScript_PirateEvent_Text_7, MSGBOX_DEFAULT
	giveitem ITEM_DIVING_GEAR
	applymovement 9, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone18A_Text_Eli, MSGBOX_DEFAULT
	fadedefaultbgm
	setflag FLAG_HIDE_ZONE19D_PIRATES
	setvar VAR_ZONE_18_STATE, 4
	release
	end


Zone18A_Movement_CameraDown:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Zone18A_Movement_Pirate1_Left:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_down
	step_end

Zone18A_Movement_Pirate2_Left:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Zone18A_Movement_Pirate1_Right:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Zone18A_Movement_Pirate2_Right:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Zone18A_Movement_CameraUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Zone18A_EventScript_Eli::
	lock
	faceplayer
	msgbox Zone18A_Text_Eli
	release
	end


Zone18A_EventScript_Zoe::
	lock
	faceplayer
	msgbox Zone18A_Text_Zoe
	release
	end


Zone18A_EventScript_AzurillDoll::
	msgbox Zone18A_EventScript_AzurillDoll_Text_0, MSGBOX_SIGN
	end


Zone18A_EventScript_SellSodaPop::
	lock
	faceplayer
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone18A_EventScript_SellSodaPop_2
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone18A_EventScript_SellSodaPop_2
	showmoneybox 0, 0, 0
	msgbox Zone18A_EventScript_SellSodaPop_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone18A_EventScript_SellSodaPop_7
	hidemoneybox
	msgbox Zone18A_EventScript_SellSodaPop_Text_4
Zone18A_EventScript_SellSodaPop_6:
	release
	end

Zone18A_EventScript_SellSodaPop_2:
	msgbox Zone18A_EventScript_SellSodaPop_Text_0
	release
	end

Zone18A_EventScript_SellSodaPop_7:
	checkmoney 300, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Zone18A_EventScript_SellSodaPop_10
	msgbox Zone18A_EventScript_SellSodaPop_Text_3
	removemoney 300, 0
	updatemoneybox
	giveitem ITEM_SODA_POP
	hidemoneybox
	goto Zone18A_EventScript_SellSodaPop_6

Zone18A_EventScript_SellSodaPop_10:
	msgbox Zone18A_EventScript_SellSodaPop_Text_2
	hidemoneybox
	goto Zone18A_EventScript_SellSodaPop_6


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
	.string "I've wanted a relaxing vacation for\n"
	.string "so long, but it's been so boring!\p"
	.string "How about a battle to spice things up?$"

Zone18A_Text_DorisDefeat:
	.string "Now that was exciting!$"

Zone18A_Text_DorisPostBattle:
	.string "I'll check out the Trainer's Dojo.\n"
	.string "It'll be more fun than just\l"
	.string "lounging around, right?$"

Zone18A_EventScript_Homer::
	trainerbattle_single TRAINER_HOMER, Zone18A_Text_HomerIntro, Zone18A_Text_HomerDefeat
	msgbox Zone18A_Text_HomerPostBattle, MSGBOX_AUTOCLOSE
	end

Zone18A_Text_HomerIntro:
	.string "Ah, a lovely day by the beach.\p"
	.string "What's that? A battle?\p"
	.string "Say no more! I'm all riled up!$"

Zone18A_Text_HomerDefeat:
	.string "Argh! You ruined my perfect day!$"

Zone18A_Text_HomerPostBattle:
	.string "My day is ruined! How am I supposed\n"
	.string "to enjoy my day at the beach\l"
	.string "knowing I've lost to some commoner?$"

Zone18A_EventScript_PirateEvent_Text_0:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: There it is! My Azurill doll!$"

Zone18A_EventScript_PirateEvent_Text_1:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: What the?$"

Zone18A_EventScript_PirateEvent_Text_2:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Pirates!$"

Zone18A_EventScript_PirateEvent_Text_3:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Hey, wait! That's my special doll!\n"
	.string "Don't take it, please!$"

Zone18A_EventScript_PirateEvent_Text_4:
	.string "It be ours now, laddy!$"

Zone18A_EventScript_PirateEvent_Text_5:
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Wah!!!$"

Zone18A_EventScript_PirateEvent_Text_6:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: It'll be ok, Eli!$"

Zone18A_EventScript_PirateEvent_Text_7:
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: {PLAYER}! You're stronger than\n"
	.string "both of us.\p"
	.string "Can you chase the pirates and recover\n"
	.string "the doll?\p"
	.string "Here, you can borrow this Diving Gear; it\n"
	.string "might be helpful.$"

Zone18A_EventScript_AzurillDoll_Text_0:
	.string "It's an Azurill doll.\nIt's clearly been well loved.$"

Zone18A_EventScript_SellSodaPop_Text_0:
	.string "Soda Pop! I usually sell it, but today\n"
	.string "I'm out of stock!$"

Zone18A_EventScript_SellSodaPop_Text_1:
	.string "Want to buy some Soda Pop?\n¥300 for 50 HP a pop!$"

Zone18A_EventScript_SellSodaPop_Text_2:
	.string "You don't have enough money!$"

Zone18A_EventScript_SellSodaPop_Text_3:
	.string "Here you go!$"

Zone18A_EventScript_SellSodaPop_Text_4:
	.string "Aww, did you not like my pun?$"

Zone18A_Text_Eli::
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Please! Help!$"

Zone18A_Text_Zoe::
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: Please, recover my brother's\n"
	.string "Azurill doll from the pirates.$"
