Zone2Shops_MapScripts::
	.byte 0

Zone2Shops_EventScript_Shop_TimIntroCheck::
	lock
	faceplayer
	goto_if_set FLAG_TIM_INTRO, Zone2Shops_EventScript_Shop_General
	setflag FLAG_TIM_INTRO
	msgbox Zone2Shops_Text_Tim_Intro, MSGBOX_AUTOCLOSE
	goto Zone2Shops_EventScript_Shop_General
	release
	end

Zone2Shops_Text_Tim_Intro:
	.string "{COLOR BLUE}???{COLOR DARK_GREY}: New challenger, huh?\n"
	.string "The name's Tim Johnson.\p"
	.string "{COLOR BLUE}Tim{COLOR DARK_GREY}: I run this store, sponsored by\n"
	.string "Pokémart Incorporated.\l"
	.string "You can find all sorts of general\l"
	.string "supplies for your travels.$"

Zone2Shops_EventScript_Shop_General:
	message gText_Tim_Welcome
	waitmessage
	pokemart Zone2Shops_Shop_General
	msgbox gText_Tim_Leave, MSGBOX_DEFAULT
	release
	end

	.align 2
Zone2Shops_Shop_General:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE
	release
	end

Zone2Shops_EventScript_Shop_VarrickIntroCheck::
	lock
	faceplayer
	goto_if_set FLAG_VARRICK_INTRO, Zone2Shops_EventScript_Shop_Unique
	setflag FLAG_VARRICK_INTRO
	msgbox Zone2Shops_Text_Varrick_Intro, MSGBOX_AUTOCLOSE
	goto Zone2Shops_EventScript_Shop_Unique
	release
	end

Zone2Shops_Text_Varrick_Intro:
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

Zone2Shops_EventScript_Shop_Unique:
	message gText_Varrick_Welcome
	waitmessage
	pokemart Zone2Shops_Shop_Unique
	msgbox gText_Varrick_Leave, MSGBOX_DEFAULT
	release
	end

	.align 2
Zone2Shops_Shop_Unique:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE
	release
	end
