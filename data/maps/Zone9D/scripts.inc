Zone9D_MapScripts::
	.byte 0

Zone9D_EventScript_Man:
	lock
	faceplayer
	msgbox Zone9D_Text_Man, MSGBOX_AUTOCLOSE
	release
	end

Zone9D_Text_Man:
	.string "In the Sinnoh region, where I'm\n"
	.string "from, we give Gracidea flowers as a\l"
	.string "gesture of gratitude.$"

Zone9D_EventScript_Girl:
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
