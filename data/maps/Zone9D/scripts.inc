Zone9D_MapScripts::
	.byte 0

Zone9D_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_ITEM_ZONE9D_MYSTIC_WATER, Zone9D_EventScript_ManFarewell
	msgbox Zone9D_Text_Man_Listen, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone9D_EventScript_ManFarewell
	msgbox Zone9D_Text_Man_Story, MSGBOX_AUTOCLOSE
	delay 96
	msgbox Zone9D_Text_Man_HereGift, MSGBOX_AUTOCLOSE
	giveitem ITEM_MYSTIC_WATER, 1
	setflag FLAG_ITEM_ZONE9D_MYSTIC_WATER
	goto Zone9D_EventScript_ManFarewell
	release
	end

Zone9D_EventScript_ManFarewell:
	msgbox Zone9D_Text_Man_Farewell, MSGBOX_AUTOCLOSE
	release
	end

Zone9D_Text_Man_Listen:
	.string "Hello, traveler. Will you take some\n"
	.string "time to listen to this poor man's story?$"

Zone9D_Text_Man_Story:
	.string "When I was seventeen years old,\n"
	.string "I was lost in the desert. I was\l"
	.string "sure I would die of thirst or\l"
	.string "hunger, but I was saved by a\l"
	.string "beautiful girl riding a Ponyta.\p"
	.string "She would go on to become my wife\n"
	.string "and mother of my daughter.\p"
	.string "Last year, she passed away after\n"
	.string "battling cancer for several months.\p"
	.string "Now, when I look around my home,\n"
	.string "it just feels sad and empty\l"
	.string "without her.$"

Zone9D_Text_Man_HereGift:
	.string "Thank you for listening to me.\n"
	.string "Your kindness inspires me to give\l"
	.string "you this.$"

Zone9D_Text_Man_Farewell:
	.string "Farewell.$"

Zone9D_EventScript_Girl::
	lock
	faceplayer
	msgbox Zone9D_Text_Girl, MSGBOX_AUTOCLOSE
	release
	end

Zone9D_Text_Girl:
	.string "Before Momma left, she gave me a\n"
	.string "special necklace.\p"
	.string "She called the stone inside a\n"
	.string "Mega Stone.\p"
	.string "I wonder what it does.$"
