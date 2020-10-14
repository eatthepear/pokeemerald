Zone10B_MapScripts::
	.byte 0

Zone10B_EventScript_SideQuestLuckyEgg::
	lock
	faceplayer
	callnative GetCaughtSpeciesCount
	compare VAR_RESULT, 14
	goto_if_gt Zone10B_EventScript_GiveLuckyEgg @go to if greater than
	giveitem ITEM_RARE_CANDY, 20
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
