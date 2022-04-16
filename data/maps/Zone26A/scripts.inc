Zone26A_MapScripts::
	.byte 0

Zone26A_EventScript_StopLeave::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	msgbox Zone26A_Text_CantLeave, MSGBOX_AUTOCLOSE
	releaseall
	end

Zone26A_Text_CantLeave:
	.string "A mysterious force pushes you away\n"
	.string "from the exit.$"

Zone26A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 26
	goto_if_gt EventScript_WarpZone0
	warp MAP_ZONE26SANCTUARY, 255, 22, 7
	releaseall
	end
