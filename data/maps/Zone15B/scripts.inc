Zone15B_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone15B_OnFrame
	.byte 0

Zone15B_OnFrame:
	map_script_2 VAR_ZONE, 13, Zone15B_EventScript_Intro
	.2byte 0

Zone15B_EventScript_Intro:
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	msgbox Zone15B_Text_Shadow_Regice, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	fadeoutbgm 1
	msgbox Zone15B_Text_Shadow_AnotherAI, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_LEVIATHAN10, Zone15B_Text_Leviathan10Defeat
	goto Zone15B_EventScript_Leviathan10Defeated
	end

Zone15B_Text_Shadow_Regice:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: Regice. Finally.$"

Zone15B_Text_Shadow_AnotherAI:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: Another AI program, eh?\n"
	.string "I'll take you down!$"

Zone15B_Text_Leviathan10Defeat:
	.string "No AI could be that strong...$"

Zone15B_EventScript_Leviathan10Defeated:
	msgbox Zone15B_Text_Shadow_WhoAreYou, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone15B_Text_Shadow_Command, MSGBOX_AUTOCLOSE
	fadescreenswapbuffers FADE_TO_BLACK
	playmoncry SPECIES_REGICE, 2
	delay 40
	waitmoncry
	removeobject 1
	removeobject 2
	setflag FLAG_BEATLEVIATHAN10
	fadescreenswapbuffers FADE_FROM_BLACK
	delay 48
	clearflag FLAG_HIDE_ZONE15B_COLRESS
	addobject 3
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	applymovement 3, Common_Movement_WalkUp
	waitmovement 0
	delay 48
	applymovement 3, Common_Movement_WalkDown
	waitmovement 0
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone15B_Text_Colress_TooLate, MSGBOX_AUTOCLOSE
	giveitem ITEM_ABILITY_CAPSULE
	msgbox Zone15B_Text_Colress_Sanctuary, MSGBOX_AUTOCLOSE
	releaseall
	end

Zone15B_Text_Shadow_WhoAreYou:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: Who… are you?\p"
	.string "You're... {PLAYER}.\n"
	.string "Could it be...?$"

Zone15B_Text_Shadow_Command:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: Command.\n"
	.string "I need evac, stat.$"

Zone15B_Text_Colress_TooLate:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: It appears I am just a\n"
	.string "moment too late.\p"
	.string "That was a {COLOR RED}Shadow{COLOR DARK_GREY}, an embodiment of\n"
	.string "malware and viruses infiltrating\l"
	.string "this simulation.\p"
	.string "I have been tracking them for quite\n"
	.string "some time.\p"
	.string "Rest assured, I will take care of\n"
	.string "them. For now, allow me to give you\l"
	.string "this item as thanks.$"

Zone15B_Text_Colress_Sanctuary:
	.string "{COLOR BLUE}Colress{COLOR DARK_GREY}: Now, on to the Sanctuary.$"
