Zone9B_MapScripts::
	.byte 0

Zone9B_EventScript_Woman::
	lock
	faceplayer
	msgbox Zone9B_Text_Woman, MSGBOX_AUTOCLOSE
	release
	end

Zone9B_Text_Woman:
	.string "In the Sinnoh region, where I'm\n"
	.string "from, we give Gracidea flowers as a\l"
	.string "gesture of gratitude.$"
