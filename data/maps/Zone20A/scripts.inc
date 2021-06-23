Zone20A_MapScripts::
	.byte 0

Zone20A_EventScript_Exit::
	lockall
	warp MAP_ZONE20SANCTUARY, 255, 7, 7
	releaseall
	end

Zone20A_EventScript_InitiateLeviathanBattle::
	lock
	fadeoutbgm 1
	applymovement 2, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	faceplayer
	msgbox Zone20A_Text_Leviathan11Intro, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_LEVIATHAN11, Zone20A_Text_Leviathan11Defeat
	goto Zone20A_EventScript_Leviathan11Defeated
	end

Zone20A_Text_Leviathan11Intro:
	.string "{COLOR BLUE}Julie{COLOR DARK_GRAY}: The terrain in these tunnels\n"
	.string "is harsh, a perfect training ground\l"
	.string "for my Pokémon.\p"
	.string "What Pokémon will you use to defeat\n"
	.string "me, {COLOR BLUE}Leviathan Julie{COLOR DARK_GRAY}?$"

Zone20A_Text_Leviathan11Defeat:
	.string "Woe is me...$"

Zone20A_EventScript_Leviathan11Defeated:
	msgbox Zone20A_Text_Leviathan2StrongWeak, MSGBOX_AUTOCLOSE
	fadeoutbgm 1
	delay 96
	applymovement 2, Common_Movement_FaceRight
	waitmovement 0
	delay 48
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	delay 48
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone20A_Text_Leviathan2Karen, MSGBOX_AUTOCLOSE
	delay 128
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	setflag FLAG_BEATLEVIATHAN11
	removeobject 2
	waitmovement 0
	delay 96
	msgbox Zone20A_Text_Ground, MSGBOX_AUTOCLOSE
	finditem ITEM_SAPPHIRE, 1
	closemessage
	fadeinbgm 1
	releaseall
	end

Zone20A_Text_Leviathan2StrongWeak:
	.string "{COLOR BLUE}Julie{COLOR DARK_GRAY}: Strong Pokémon.\n"
	.string "Weak Pokémon.\p"
	.string "That is only the selfish perception\n"
	.string "of people. Truly skilled Trainers\l"
	.string "should try to win with the Pokémon\l"
	.string "they love best.$"

Zone20A_Text_Leviathan2Karen:
	.string "...\p"
	.string "Who... is Karen?\p"
	.string "Where... where am I?$"

Zone20A_Text_Ground:
	.string "There's something on the ground!$"

Zone20A_EventScript_HyperPotion::
	finditem ITEM_HYPER_POTION
	end
