Zone3B_MapScripts::
	.byte 0


Zone3B_EventScript_Phillipa::
	lock
	msgbox Zone3B_EventScript_Phillipa_Text_0
	release
	end


Zone3B_EventScript_Remi::
	lock
	msgbox Zone3B_EventScript_Remi_Text_0
	release
	end


Zone3B_EventScript_Phillipa_Text_0:
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: This food is so tasty!$"

Zone3B_EventScript_Remi_Text_0:
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: I'm glad you like the food, kiddo.$"
