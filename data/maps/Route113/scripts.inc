Route113_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route113_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_OnTransition
	.byte 0

Route113_OnResume:
	setstepcallback STEP_CB_ASH
	end

Route113_OnTransition:
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	call Route113_EventScript_CheckSetAshWeather
	end

Route113_EventScript_CheckSetAshWeather::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_lt VAR_TEMP_0, 19, Route113_EventScript_DontSetAshWeather
	goto_if_gt VAR_TEMP_0, 84, Route113_EventScript_DontSetAshWeather
	setweather WEATHER_VOLCANIC_ASH
	return

Route113_EventScript_DontSetAshWeather::
	return

Route113_EventScript_Gentleman::
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
	end

Route113_EventScript_NinjaBoy::
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
	end

Route113_EventScript_RouteSign111::
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
	end

Route113_EventScript_RouteSignFallarbor::
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
	end

Route113_EventScript_GlassWorkshopSign::
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
	end

Route113_EventScript_TrainerTipsRegisterKeyItems::
	msgbox Route113_Text_TrainerTipsRegisterKeyItems, MSGBOX_SIGN
	end

Route113_Text_AshCanBeFashionedIntoGlass:
	.string "Wahahaha! Today's technology is a\n"
	.string "wondrous thing!\p"
	.string "Take this volcanic ash here.\n"
	.string "It can be fashioned into glass.$"

Route113_Text_FunWalkingThroughAsh:
	.string "It's fun walking through the volcano's\n"
	.string "ashes on the ground and grass.\p"
	.string "You can see where you walked--it's\n"
	.string "really neat!$"

Route113_Text_RouteSign111:
	.string "ROUTE 113\n"
	.string "{RIGHT_ARROW} ROUTE 111$"

Route113_Text_RouteSignFallarbor:
	.string "ROUTE 113\n"
	.string "{LEFT_ARROW} FALLARBOR TOWN$"

Route113_Text_TrainerTipsRegisterKeyItems:
	.string "TRAINER TIPS\p"
	.string "You may register one of the KEY ITEMS\n"
	.string "in your BAG as SELECT.\p"
	.string "Simply press SELECT to use\n"
	.string "the registered item conveniently.$"

Route113_Text_GlassWorkshopSign:
	.string "GLASS WORKSHOP\n"
	.string "“Turning Volcanic Ash into Glass Items”$"

