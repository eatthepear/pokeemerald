EntranceShops_MapScripts::
	.byte 0

EntranceShops_DenyPC::
	lockall
	msgbox EntranceShops_Text_Joy_CantUse, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

EntranceShops_Text_Joy_CantUse:
	.string "{COLOR BLUE}Joy{COLOR DARK_GREY}: You have to pay to use the PC!$"

EntranceShops_EventScript_Shop_General::
	lock
	faceplayer
	message EntranceShops_Text_Tim_Welcome
	waitmessage
	pokemart EntranceShops_Shop_General
	msgbox EntranceShops_Text_Tim_Leave, MSGBOX_DEFAULT
	release
	end

	.align 2
EntranceShops_Shop_General:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE
	release
	end

EntranceShops_Text_Tim_Welcome:
	.string "{COLOR BLUE}Tim{COLOR DARK_GREY}: Welcome to Tim’s.\n"
	.string "Can I get you anything?$"

EntranceShops_Text_Tim_Leave:
	.string "{COLOR BLUE}Tim{COLOR DARK_GREY}: Have a nice day.$"

EntranceShops_EventScript_Shop_Unique::
	lock
	faceplayer
	message EntranceShops_Text_Varrick_Welcome
	waitmessage
	pokemart EntranceShops_Shop_Unique
	msgbox EntranceShops_Text_Varrick_Leave, MSGBOX_DEFAULT
	release
	end

	.align 2
EntranceShops_Shop_Unique:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE
	release
	end

EntranceShops_Text_Varrick_Welcome:
	.string "{COLOR BLUE}Varrick{COLOR DARK_GREY}: Greetings and salutations!\n"
	.string "Welcome to Silph Unique Item Store!$"

EntranceShops_Text_Varrick_Leave:
	.string "{COLOR BLUE}Varrick{COLOR DARK_GREY}: A big thank you from Silph!$"

