EntranceShops_MapScripts::
	.byte 0

EntranceShops_DenyPC::
	lockall
	msgbox EntranceShops_Text_Joy_CantUse, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

EntranceShops_Text_Joy_CantUse:
	.string "{COLOR BLUE}Joy{COLOR DARK_GREY}: You have to pay to use the PC!$"