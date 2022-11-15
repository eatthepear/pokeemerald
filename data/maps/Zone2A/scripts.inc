Zone2A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone2A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone2A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE2A_ANTIDOTE, Zone2A_MapScripts_MAP_SCRIPT_ON_RESUME_1
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone2A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone2A_EventScript_ItemAntidote::
	lock
	goto_if_set FLAG_ITEM_ZONE2A_ANTIDOTE, Zone2A_EventScript_ItemAntidote_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE2A_ANTIDOTE
	addobject VAR_LAST_TALKED
	finditem ITEM_ANTIDOTE, 1
	release
	end

Zone2A_EventScript_ItemAntidote_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone2A_EventScript_Polly::
	trainerbattle_single TRAINER_POLLY, Zone2A_Text_PollyIntro, Zone2A_Text_PollyDefeat
	msgbox Zone2A_Text_PollyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone2A_Text_PollyIntro:
	.string "Don't you just love magic?$"

Zone2A_Text_PollyDefeat:
	.string "Absolutely magical!$"

Zone2A_Text_PollyPostBattle:
	.string "I'm glad I live in as magical a\n"
	.string "world as this one!$"

Zone2A_EventScript_Jeremiah::
	trainerbattle_single TRAINER_JEREMIAH, Zone2A_Text_JeremiahIntro, Zone2A_Text_JeremiahDefeat
	msgbox Zone2A_Text_JeremiahPostBattle, MSGBOX_AUTOCLOSE
	end

Zone2A_Text_JeremiahIntro:
	.string "The more legs, the better!$"

Zone2A_Text_JeremiahDefeat:
	.string "Oh… Come on!$"

Zone2A_Text_JeremiahPostBattle:
	.string "Just wait till my Bugs are all evolved!$"

Zone2A_EventScript_Sign::
	msgbox Zone2A_Text_Sign, MSGBOX_SIGN
	end

Zone2A_Text_Sign:
	.string "Trainer Tips!\p"
	.string "You may find hidden items by\n"
	.string "checking certain tiles with {A_BUTTON}.\p"
	.string "However, you won't find many hidden\n"
	.string "items on Brutal difficulty.$"
