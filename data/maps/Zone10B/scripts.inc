Zone10B_MapScripts::
	.byte 0

Zone10B_EventScript_SideQuestLuckyEgg::
	lock
	faceplayer
	callnative GetNationalPokedexCount(FLAG_GET_CAUGHT)
	compare VAR_RESULT, 15
	goto_if_gt Zone10B_EventScript_GiveLuckyEgg @go to if greater than
	applymovement 3, Common_Movement_FaceRight
	waitmovement
	release
	end

Zone10B_EventScript_GiveLuckyEgg:
	giveitem ITEM_LUCKY_EGG, 1
	applymovement 3, Common_Movement_FaceRight
	waitmovement
	release
	end