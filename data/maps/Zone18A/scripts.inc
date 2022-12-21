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
	msgbox Zone18A_EventScript_PirateEvent_Text_0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement 0
	special RemoveCameraObject
	playbgm MUS_ENCOUNTER_AQUA, 0
	clearflag FLAG_HIDE_ZONE18A_PIRATES
	addobject 7
	addobject 8
	applymovement 7, Zone18A_Movement_Pirate1_Left
	applymovement 8, Zone18A_Movement_Pirate2_Left
	msgbox Zone18A_EventScript_PirateEvent_Text_1, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_PirateEvent_Text_2, MSGBOX_DEFAULT
	waitmovement 0
	msgbox Zone18A_EventScript_PirateEvent_Text_3, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_PirateEvent_Text_4, MSGBOX_DEFAULT
	removeobject 6
	setflag FLAG_HIDE_ZONE18A_DOLL
	applymovement 7, Zone18A_Movement_Pirate1_Right
	applymovement 8, Zone18A_Movement_Pirate2_Right
	waitmovement 0
	removeobject 7
	removeobject 8
	setflag FLAG_HIDE_ZONE18A_PIRATES
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	waitmovement 0
	special RemoveCameraObject
	removeobject 11
	setflag FLAG_HIDE_ZONE18A_BOAT
	msgbox Zone18A_EventScript_PirateEvent_Text_5, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_PirateEvent_Text_6, MSGBOX_DEFAULT
	msgbox Zone18A_EventScript_PirateEvent_Text_7, MSGBOX_DEFAULT
	giveitem ITEM_DIVING_GEAR
	fadedefaultbgm
	msgbox Zone18A_EventScript_PirateEvent_Text_8, MSGBOX_DEFAULT
	setvar VAR_ZONE_18_STATE, 4
	release
	end


Zone18A_Movement_Pirate1_Left:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	face_down
	step_end

Zone18A_Movement_Pirate2_Left:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	step_end

Zone18A_Movement_Pirate1_Right:
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
	.string "Here, this Diving Gear might be helpful.$"

Zone18A_EventScript_PirateEvent_Text_8:
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
