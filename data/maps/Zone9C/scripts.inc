Zone9C_MapScripts::
	.byte 0


Zone9C_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone9C_EventScript_Man_2
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone9C_EventScript_Man_2
	message Zone9C_EventScript_Man_Text_1
	waitmessage
	pokemart Zone9C_Shop_Herbal
	msgbox Zone9C_EventScript_Man_Text_2, MSGBOX_DEFAULT
	release
	end

Zone9C_EventScript_Man_2:
	msgbox Zone9C_EventScript_Man_Text_0
	release
	end


	.align 2
Zone9C_Shop_Herbal:
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_NONE

Zone9C_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone9C_EventScript_Woman_2
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone9C_EventScript_Woman_2
	message Zone9C_EventScript_Woman_Text_1
	waitmessage
	pokemart Zone9C_Shop_Incense
	msgbox Zone9C_EventScript_Woman_Text_2, MSGBOX_DEFAULT
	release
	end

Zone9C_EventScript_Woman_2:
	msgbox Zone9C_EventScript_Woman_Text_0
	release
	end


	.align 2
Zone9C_Shop_Incense:
	.2byte ITEM_SEA_INCENSE
	.2byte ITEM_LAX_INCENSE
	.2byte ITEM_ODD_INCENSE
	.2byte ITEM_ROCK_INCENSE
	.2byte ITEM_FULL_INCENSE
	.2byte ITEM_WAVE_INCENSE
	.2byte ITEM_ROSE_INCENSE
	.2byte ITEM_LUCK_INCENSE
	.2byte ITEM_PURE_INCENSE
	.2byte ITEM_NONE

Zone9C_EventScript_Man_Text_0:
	.string "Welcome to my Herb shop.\p"
	.string "Unfortunately, we are out of stock of\n"
	.string "ingredients to make more herbs.$"

Zone9C_EventScript_Man_Text_1:
	.string "Welcome to my Herb shop.\nAll natural ingredients only.$"

Zone9C_EventScript_Man_Text_2:
	.string "Take it easy, now.$"

Zone9C_EventScript_Woman_Text_0:
	.string "The fragrance, the aroma…\p"
	.string "Unfortunately, my incense shop is\n"
	.string "lacking key ingredients and is not open\l"
	.string "at this time.$"

Zone9C_EventScript_Woman_Text_1:
	.string "The fragrance, the aroma…\nWelcome to my Incense shop.$"

Zone9C_EventScript_Woman_Text_2:
	.string "Rest easy, now.$"
