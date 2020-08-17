

EventScript_GeneralSign::
	msgbox gText_GeneralSign, MSGBOX_SIGN
	end

EventScript_ItemSign::
	msgbox gText_ItemSign, MSGBOX_SIGN
	end

EventScript_ServicesSign::
	msgbox gText_ServicesSign, MSGBOX_SIGN
	end

EventScript_HealingSign::
	msgbox gText_HealingSign, MSGBOX_SIGN
	end


EventScript_Shop_LelouchIntroCheck::
	lock
	goto_if_set FLAG_LELOUCH_INTRO, EntranceShops_EventScript_Shop_ServicesDenied
	setflag FLAG_LELOUCH_INTRO
	msgbox EntranceShops_Text_Lelouch_Intro1, MSGBOX_AUTOCLOSE
	delay 96
	msgbox EntranceShops_Text_Lelouch_Intro2, MSGBOX_AUTOCLOSE
	goto EntranceShops_EventScript_Shop_ServicesDenied
	end

EventScript_Shop_ServicesDenied:
	msgbox EntranceShops_Text_Lelouch_NoPoints, MSGBOX_AUTOCLOSE
	release
	end

EventScript_Joy_DenyPC::
	lockall
	applymovement 4, Common_Movement_FaceRight
	msgbox gText_Joy_CantUse, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement 4, Common_Movement_FaceDown
	waitmovement 0
	releaseall
	end

EventScript_Shop_JoyIntroCheck::
	lock
	faceplayer
	goto_if_set FLAG_JOY_INTRO, EventScript_Joy_Welcome
	setflag FLAG_JOY_INTRO
	msgbox gText_Joy_Intro, MSGBOX_AUTOCLOSE
	goto EventScript_Joy_Welcome
	release
	end

EventScript_Joy_Welcome:
	lockall
	msgbox gText_Joy_Welcome, MSGBOX_AUTOCLOSE
	call_if_set FLAG_NUZLOCKE_ON, EventScript_Joy_Nuzlocke
	showmoneybox 0, 0, 0
	msgbox gText_Joy_WouldYouLikeToHeal, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EventScript_Joy_CheckMoney
	closemessage
	hidemoneybox
	msgbox gText_Joy_WonderfulDay, MSGBOX_AUTOCLOSE
	releaseall
	end

EventScript_Joy_Nuzlocke:
	msgbox gText_Joy_Nuzlocke, MSGBOX_AUTOCLOSE
	return

EventScript_Joy_CheckMoney:
	checkmoney 500, 0
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Joy_NotEnough
	goto EventScript_Joy_Heal
	end

EventScript_Joy_NotEnough:
	msgbox gText_Joy_NotEnough, MSGBOX_AUTOCLOSE
	hidemoneybox
	msgbox gText_Joy_WonderfulDay, MSGBOX_AUTOCLOSE
	releaseall
	end

EventScript_Joy_Heal:
	removemoney 500, 0
	updatemoneybox 0, 0
	msgbox gText_Joy_ThankYou, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	playfanfare MUS_ME_ASA
	waitfanfare
	special HealPlayerParty
	fadescreen FADE_FROM_BLACK
	setvar VAR_HEAL_SHOP_USED, 1
	msgbox gText_Joy_PartyHealed, MSGBOX_AUTOCLOSE
	closemessage
	hidemoneybox
	msgbox gText_Joy_WonderfulDay, MSGBOX_AUTOCLOSE
	releaseall
	end
