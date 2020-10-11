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
	.string "Listen?$"

Zone9D_Text_Man_Story:
	.string "Story time.$"

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
	.string "Waystone. I wonder what it does.$"
