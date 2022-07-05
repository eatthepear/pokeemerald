Zone9C_MapScripts::
	.byte 0


Zone9C_EventScript_Man::
	lock
	faceplayer
	message Zone9C_EventScript_Man_Text_0
	waitmessage
	pokemart Zone9C_Shop_Herbal
	msgbox Zone9C_EventScript_Man_Text_1, MSGBOX_DEFAULT
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
	message Zone9C_EventScript_Woman_Text_0
	waitmessage
	pokemart Zone9C_Shop_Incense
	msgbox Zone9C_EventScript_Woman_Text_1, MSGBOX_DEFAULT
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
	.string "Welcome to my Herb shop.\nAll natural ingredients only.$"

Zone9C_EventScript_Man_Text_1:
	.string "Take it easy, now.$"

Zone9C_EventScript_Woman_Text_0:
	.string "The fragrance, the aroma…\nWelcome to my Incense shop.$"

Zone9C_EventScript_Woman_Text_1:
	.string "Rest easy, now.$"
