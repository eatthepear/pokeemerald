Route124_DivingTreasureHuntersHouse_MapScripts:: @ 8270A28
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_DivingTreasureHuntersHouse_OnTransition
	.byte 0

Route124_DivingTreasureHuntersHouse_OnTransition: @ 8270A2E
	setflag FLAG_LANDMARK_HUNTERS_HOUSE
	end
