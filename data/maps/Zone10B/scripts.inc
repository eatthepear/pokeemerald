Zone10B_MapScripts::
	.byte 0

Zone10B_EventScript_SideQuestLuckyEgg::
	lock
	faceplayer
	specialvar VAR_RESULT, GetCaughtSpeciesCount
	compare VAR_RESULT, 14
	goto_if_eq EventScript_GiveLuckyEgg @go to if greater than
	giveitem ITEM_RARE_CANDY, 5
	compare VAR_RESULT, 14
	goto_if_gt EventScript_GiveLuckyEgg @go to if greater than
	applymovement 3, Common_Movement_FaceRight
	waitmovement 0
	release
	end

Zone10B_EventScript_GiveLuckyEgg:
	giveitem ITEM_LUCKY_EGG, 1
	applymovement 3, Common_Movement_FaceRight
	waitmovement 0
	release
	end
