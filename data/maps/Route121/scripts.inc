.set LOCALID_GRUNT_1, 12
.set LOCALID_GRUNT_2, 13
.set LOCALID_GRUNT_3, 14

Route121_MapScripts::
	.byte 0

Route121_EventScript_Woman::
	msgbox Route121_Text_AheadLoomsMtPyre, MSGBOX_NPC
	end

Route121_EventScript_MtPyrePierSign::
	msgbox Route121_Text_MtPyrePierSign, MSGBOX_SIGN
	end

Route121_EventScript_SafariZoneSign::
	msgbox Route121_Text_SafariZoneSign, MSGBOX_SIGN
	end

Route121_EventScript_AquaGruntsMoveOut::
	lockall
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_1, Route121_Movement_Grunt1Exit
	applymovement LOCALID_GRUNT_2, Route121_Movement_Grunt2Exit
	applymovement LOCALID_GRUNT_3, Route121_Movement_Grunt3Exit
	waitmovement 0
	fadedefaultbgm
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	releaseall
	end

Route121_Movement_Grunt1Exit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route121_Movement_Grunt2Exit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route121_Movement_Grunt3Exit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route121_Text_OkayMoveOutToMtPyre:
	.string "Okay!\n"
	.string "We're to move out to MT. PYRE!$"

Route121_Text_AheadLoomsMtPyre:
	.string "Ahead looms MT. PYRE…\p"
	.string "It is a natural monument to the spirits \n"
	.string "of departed POKéMON…$"

Route121_Text_MtPyrePierSign:
	.string "MT. PYRE PIER\p"
	.string "…The sign is old and worn out.\n"
	.string "The words are barely legible…$"

Route121_Text_SafariZoneSign:
	.string "“Filled with rare POKéMON!”\n"
	.string "SAFARI ZONE$"

