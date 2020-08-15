EntranceShops_MapScripts::
	.byte 0

EntranceShops_EventScript_Shop_TimIntroCheck::
	lock
	faceplayer
	goto_if_set FLAG_TIM_INTRO, EntranceShops_EventScripts_Shop_General
	setflag FLAG_TIM_INTRO
	msgbox EntranceShops_Text_Tim_Intro, MSGBOX_AUTOCLOSE
	goto EntranceShops_EventScripts_Shop_General
	release
	end

EntranceShops_Text_Tim_Intro:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: New challenger, huh?\n"
	.string "The name's Tim Johnson.\p"
	.string "{COLOR BLUE}Tim{COLOR DARK_GREY}: I run this store, sponsored by\n"
	.string "Pokémart Incorporated.\l"
	.string "You can find all sorts of general\l"
	.string "supplies for your travels.$"

EntranceShops_EventScript_Shop_General::
	message gText_Tim_Welcome
	waitmessage
	pokemart EntranceShops_Shop_General
	msgbox gText_Tim_Leave, MSGBOX_DEFAULT
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

EntranceShops_EventScript_Shop_VarrickIntroCheck::
	lock
	faceplayer
	goto_if_set FLAG_VARRICK_INTRO, EntranceShops_EventScripts_Shop_Unique
	setflag FLAG_VARRICK_INTRO
	msgbox EntranceShops_Text_Varrick_Intro, MSGBOX_AUTOCLOSE
	goto EntranceShops_EventScripts_Shop_Unique
	release
	end

EntranceShops_Text_Varrick_Intro:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: Wowza! Yeetastic! Blamo!\p"
	.string "My name is Varrick,\n"
	.string "entrepreneur extraordinaire!\p"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GREY}: I pitched this idea to\n"
	.string "Silph a couple years back,\l"
	.string "and now it's become a reality!\p"
	.string "All the random items you can't find\n"
	.string "in the world, you'll find here!\p"
	.string "Fantastic evolution stones!\p"
	.string "Countless Pokéball variations!\p"
	.string "Delicious Berries!\p"
	.string "The greatest held item collection\n"
	.string "you've never seen!\p"
	.string "Please, enjoy my shop!$"

EntranceShops_EventScript_Shop_Unique::
	message gText_Varrick_Welcome
	waitmessage
	pokemart EntranceShops_Shop_Unique
	msgbox gText_Varrick_Leave, MSGBOX_DEFAULT
	release
	end

	.align 2
EntranceShops_Shop_Unique:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE
	release
	end

EntranceShops_EventScript_Shop_LelouchIntroCheck::
	lock
	goto_if_set FLAG_LELOUCH_INTRO, EntranceShops_EventScripts_Shop_Services
	setflag FLAG_LELOUCH_INTRO
	msgbox EntranceShops_Text_Lelouch_Intro1, MSGBOX_AUTOCLOSE
	delay 96
	msgbox EntranceShops_Text_Lelouch_Intro2, MSGBOX_AUTOCLOSE
	goto EntranceShops_EventScripts_Shop_Services
	end

EntranceShops_EventScripts_Shop_Services:
	msgbox EntranceShops_Text_Lelouch_NoPoints, MSGBOX_AUTOCLOSE
	release
	end

EntranceShops_Text_Lelouch_Intro1:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: You... What is your name?\p"
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: (PLAYER)? Now that’s a name...\n"
	.string "I haven’t heard in...$"

EntranceShops_Text_Lelouch_Intro2:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: You may call me Lelouch.\p"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GREY}: I provide a variety of\n"
	.string "services to improve one’s Pokémon.\p"
	.string "But I demand a special price, one\n"
	.string "that I see you cannot pay.$"

EntranceShops_Text_Lelouch_NoPoints:
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GREY}: You have nothing of value\n"
	.string "to me. Leave.$"

EntranceShops_EventScript_Shop_JoyIntroCheck::
	lock
	faceplayer
	goto_if_set FLAG_JOY_INTRO, EventScript_Joy_Welcome
	setflag FLAG_JOY_INTRO
	msgbox EntranceShops_Text_Joy_Intro, MSGBOX_AUTOCLOSE
	goto EventScript_Joy_Welcome
	release
	end

EntranceShops_Text_Joy_Intro:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: Welcome to the Pokémon…\n"
	.string "Ugh. Never mind.\p"
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: My name is Joy. Just Joy.\p"
	.string "{COLOR BLUE}Joy{COLOR DARK_GREY}: I used to work at the\n"
	.string "Pokémon Center, but they gave\l"
	.string "terrible pay.\p"
	.string "So I’ve started my own shop,\n"
	.string "Joy’s Healing Shop!$"
