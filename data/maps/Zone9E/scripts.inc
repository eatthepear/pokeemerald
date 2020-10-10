Zone9E_MapScripts::
	.byte 0

Zone9E_EventScript_Boy::
	lock
	faceplayer
	msgbox Zone9E_Text_Boy, MSGBOX_AUTOCLOSE
	release
	end

Zone9E_Text_Boy:
	.string "My philosophy is, there's no such\n"
	.string "thing as too much money.$"
