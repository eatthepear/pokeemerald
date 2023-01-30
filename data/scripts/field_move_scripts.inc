EventScript_Headbutt::
	lockall
	msgbox EventScript_Headbutt_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Headbutt_2
	msgbox EventScript_Headbutt_Text_1, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	playse SE_M_BIND
	waitstate
	waitse
	special HeadbuttWildEncounter
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Headbutt_5
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Headbutt_7
EventScript_Headbutt_4:
	releaseall
	end

EventScript_Headbutt_2:
	closemessage
	releaseall
	end

EventScript_Headbutt_5:
	waitstate
	goto EventScript_Headbutt_4

EventScript_Headbutt_6:
	random 100
	switch VAR_RESULT
	case 0, EventScript_Headbutt_12
	case 1, EventScript_Headbutt_12
	case 2, EventScript_Headbutt_12
	case 3, EventScript_Headbutt_12
	case 4, EventScript_Headbutt_12
	case 5, EventScript_Headbutt_12
	case 6, EventScript_Headbutt_12
	case 7, EventScript_Headbutt_12
	case 8, EventScript_Headbutt_12
	case 9, EventScript_Headbutt_12
	case 10, EventScript_Headbutt_12
	case 11, EventScript_Headbutt_12
	case 12, EventScript_Headbutt_12
	case 13, EventScript_Headbutt_12
	case 14, EventScript_Headbutt_12
	case 15, EventScript_Headbutt_12
	case 16, EventScript_Headbutt_12
	case 17, EventScript_Headbutt_12
	case 18, EventScript_Headbutt_12
	case 19, EventScript_Headbutt_12
	case 20, EventScript_Headbutt_12
	case 21, EventScript_Headbutt_12
	case 22, EventScript_Headbutt_12
	case 23, EventScript_Headbutt_12
	case 24, EventScript_Headbutt_12
	case 25, EventScript_Headbutt_13
	case 26, EventScript_Headbutt_13
	case 27, EventScript_Headbutt_13
	case 28, EventScript_Headbutt_13
	case 29, EventScript_Headbutt_14
	case 30, EventScript_Headbutt_14
	case 31, EventScript_Headbutt_14
	case 32, EventScript_Headbutt_14
	case 33, EventScript_Headbutt_15
	case 34, EventScript_Headbutt_15
	case 35, EventScript_Headbutt_15
	case 36, EventScript_Headbutt_15
	case 37, EventScript_Headbutt_16
	case 38, EventScript_Headbutt_16
	case 39, EventScript_Headbutt_16
	case 40, EventScript_Headbutt_16
	case 41, EventScript_Headbutt_17
	case 42, EventScript_Headbutt_17
	case 43, EventScript_Headbutt_17
	case 44, EventScript_Headbutt_17
	case 45, EventScript_Headbutt_18
	case 46, EventScript_Headbutt_18
	case 47, EventScript_Headbutt_18
	case 48, EventScript_Headbutt_18
	case 49, EventScript_Headbutt_19
	goto EventScript_Headbutt_4

EventScript_Headbutt_7:
	goto_if_unset FLAG_SETTINGS_RED_THUMB, EventScript_Headbutt_6
	goto EventScript_Headbutt_4

EventScript_Headbutt_12:
	msgbox EventScript_Headbutt_Text_2
	finditem ITEM_ORAN_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_13:
	compare VAR_ZONE, 8
	goto_if_gt EventScript_Headbutt_20
	goto EventScript_Headbutt_4

EventScript_Headbutt_14:
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Headbutt_22
	goto EventScript_Headbutt_4

EventScript_Headbutt_15:
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Headbutt_24
	goto EventScript_Headbutt_4

EventScript_Headbutt_16:
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Headbutt_26
	goto EventScript_Headbutt_4

EventScript_Headbutt_17:
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Headbutt_28
	goto EventScript_Headbutt_4

EventScript_Headbutt_18:
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Headbutt_30
	goto EventScript_Headbutt_4

EventScript_Headbutt_19:
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Headbutt_32
	goto EventScript_Headbutt_4

EventScript_Headbutt_20:
	msgbox EventScript_Headbutt_Text_2
	finditem ITEM_SITRUS_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_22:
	msgbox EventScript_Headbutt_Text_2
	finditem ITEM_CHERI_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_24:
	msgbox EventScript_Headbutt_Text_2
	finditem ITEM_CHESTO_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_26:
	msgbox EventScript_Headbutt_Text_2
	finditem ITEM_PECHA_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_28:
	msgbox EventScript_Headbutt_Text_2
	finditem ITEM_ASPEAR_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_30:
	msgbox EventScript_Headbutt_Text_2
	finditem ITEM_PERSIM_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_32:
	msgbox EventScript_Headbutt_Text_2
	finditem ITEM_LUM_BERRY, 1
	goto EventScript_Headbutt_4


EventScript_CutTree::
	lockall
	checkitem ITEM_MACHETE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CutTree_2
	msgbox Text_WantToCut, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CutTree_5
	setitemarg ITEM_MACHETE
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
	waitmovement 0
	removeobject VAR_LAST_TALKED
	releaseall
	return

EventScript_CutTree_2:
	msgbox Text_CantCut, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CutTree_5:
	closemessage
	releaseall
	end


EventScript_RockSmash::
	lockall
	checkitem ITEM_SLEDGEHAMMER, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_RockSmash_2
	msgbox Text_WantToSmash, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_RockSmash_5
	setitemarg ITEM_SLEDGEHAMMER
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	applymovement VAR_LAST_TALKED, Movement_SmashRock
	waitmovement 0
	removeobject VAR_LAST_TALKED
	special RockSmashWildEncounter
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RockSmash_8
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_RockSmash_11
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_RockSmash_11
	random 100
	switch VAR_RESULT
	case 0, EventScript_RockSmash_17
	case 1, EventScript_RockSmash_17
	case 2, EventScript_RockSmash_17
	case 3, EventScript_RockSmash_17
	case 4, EventScript_RockSmash_17
	case 5, EventScript_RockSmash_17
	case 6, EventScript_RockSmash_17
	case 7, EventScript_RockSmash_17
	case 8, EventScript_RockSmash_17
	case 9, EventScript_RockSmash_17
	case 10, EventScript_RockSmash_17
	case 11, EventScript_RockSmash_17
	case 12, EventScript_RockSmash_17
	case 13, EventScript_RockSmash_17
	case 14, EventScript_RockSmash_17
	case 15, EventScript_RockSmash_17
	case 16, EventScript_RockSmash_17
	case 17, EventScript_RockSmash_17
	case 18, EventScript_RockSmash_17
	case 19, EventScript_RockSmash_17
	case 20, EventScript_RockSmash_17
	case 21, EventScript_RockSmash_17
	case 22, EventScript_RockSmash_18
	case 23, EventScript_RockSmash_18
	case 24, EventScript_RockSmash_18
	case 25, EventScript_RockSmash_18
	case 26, EventScript_RockSmash_18
	case 27, EventScript_RockSmash_18
	case 28, EventScript_RockSmash_18
	case 29, EventScript_RockSmash_18
	case 30, EventScript_RockSmash_18
	case 31, EventScript_RockSmash_18
	case 32, EventScript_RockSmash_18
	case 33, EventScript_RockSmash_18
	case 34, EventScript_RockSmash_18
	case 35, EventScript_RockSmash_18
	case 36, EventScript_RockSmash_18
	case 37, EventScript_RockSmash_19
	case 38, EventScript_RockSmash_19
	case 39, EventScript_RockSmash_19
	case 40, EventScript_RockSmash_19
	case 41, EventScript_RockSmash_19
	case 42, EventScript_RockSmash_19
	case 43, EventScript_RockSmash_19
	case 44, EventScript_RockSmash_19
	case 45, EventScript_RockSmash_19
	case 46, EventScript_RockSmash_19
	case 47, EventScript_RockSmash_20
	case 48, EventScript_RockSmash_20
	case 49, EventScript_RockSmash_20
	case 50, EventScript_RockSmash_20
	case 51, EventScript_RockSmash_20
	case 52, EventScript_RockSmash_21
	case 53, EventScript_RockSmash_22
	case 54, EventScript_RockSmash_23
	case 55, EventScript_RockSmash_24
	case 56, EventScript_RockSmash_25
	case 57, EventScript_RockSmash_26
	case 58, EventScript_RockSmash_27
	case 59, EventScript_RockSmash_28
	case 60, EventScript_RockSmash_29
	case 61, EventScript_RockSmash_30
	case 62, EventScript_RockSmash_31
	case 63, EventScript_RockSmash_32
	case 64, EventScript_RockSmash_33
	case 65, EventScript_RockSmash_34
	case 66, EventScript_RockSmash_35
	case 67, EventScript_RockSmash_36
	case 68, EventScript_RockSmash_37
	case 69, EventScript_RockSmash_38
EventScript_RockSmash_15:
	releaseall
	end

EventScript_RockSmash_2:
	msgbox Text_CantSmash, MSGBOX_DEFAULT
	releaseall
	end

EventScript_RockSmash_5:
	releaseall
	end

EventScript_RockSmash_8:
	waitstate
	releaseall
	end

EventScript_RockSmash_11:
	releaseall
	end

EventScript_RockSmash_17:
	finditem ITEM_RED_SHARD, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_18:
	compare VAR_ZONE, 8
	goto_if_gt EventScript_RockSmash_39
	goto EventScript_RockSmash_15

EventScript_RockSmash_19:
	compare VAR_ZONE, 10
	goto_if_gt EventScript_RockSmash_41
	goto EventScript_RockSmash_15

EventScript_RockSmash_20:
	compare VAR_ZONE, 25
	goto_if_gt EventScript_RockSmash_43
	goto EventScript_RockSmash_15

EventScript_RockSmash_21:
	finditem ITEM_NORMAL_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_22:
	finditem ITEM_FIRE_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_23:
	finditem ITEM_WATER_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_24:
	finditem ITEM_ELECTRIC_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_25:
	finditem ITEM_GRASS_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_26:
	finditem ITEM_ICE_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_27:
	finditem ITEM_FIGHTING_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_28:
	finditem ITEM_POISON_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_29:
	finditem ITEM_GROUND_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_30:
	finditem ITEM_FLYING_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_31:
	finditem ITEM_PSYCHIC_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_32:
	finditem ITEM_BUG_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_33:
	finditem ITEM_ROCK_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_34:
	finditem ITEM_GHOST_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_35:
	finditem ITEM_DRAGON_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_36:
	finditem ITEM_DARK_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_37:
	finditem ITEM_STEEL_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_38:
	finditem ITEM_FAIRY_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_39:
	finditem ITEM_BLUE_SHARD, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_41:
	finditem ITEM_YELLOW_SHARD, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_43:
	finditem ITEM_GREEN_SHARD, 1
	goto EventScript_RockSmash_15


EventScript_UseDive::
	lockall
	checkitem ITEM_DIVING_GEAR, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_UseDive_2
	msgbox EventScript_UseDive_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_UseDive_5
	setitemarg ITEM_DIVING_GEAR
	setfieldeffectargument 1, 1
	dofieldeffect FLDEFF_USE_DIVE
	releaseall
	end

EventScript_UseDive_2:
	msgbox EventScript_UseDive_Text_0, MSGBOX_DEFAULT
	releaseall
	end

EventScript_UseDive_5:
	releaseall
	end


EventScript_UseDiveUnderwater::
	lockall
	checkitem ITEM_DIVING_GEAR, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_UseDiveUnderwater_2
	msgbox EventScript_UseDiveUnderwater_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_UseDiveUnderwater_5
	setitemarg ITEM_DIVING_GEAR
	setfieldeffectargument 1, 1
	dofieldeffect FLDEFF_USE_DIVE
	releaseall
	end

EventScript_UseDiveUnderwater_2:
	msgbox EventScript_UseDiveUnderwater_Text_0, MSGBOX_DEFAULT
	releaseall
	end

EventScript_UseDiveUnderwater_5:
	releaseall
	end


@ Use rock smash from party menu
EventScript_UseRockSmash::
	lockall
	releaseall
	end

Movement_SmashRock: @ 829082B
	rock_smash_break
	step_end

Text_WantToSmash:
	.string "This rock appears to be breakable.\n"
	.string "Use the Sledgehammer to smash it?$"

Text_CantSmash:
	.string "It's a rugged rock.$"

Movement_CutTreeDown:
	cut_tree
	step_end

Text_WantToCut:
	.string "This shrub is blocking the way.\n"
	.string "Use the Machete to remove it?$"

Text_MonUsedFieldMove:
	.string "{STR_VAR_1} used {STR_VAR_2}!$"

Text_CantCut:
	.string "This shrub is blocking the way.$"

EventScript_StrengthBoulder::
	lockall
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder
	checkpartymove MOVE_STRENGTH
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantStrength
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToStrength, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelStrength
	closemessage
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_ActivateStrength
	end

EventScript_UseStrength::
	lockall
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_ActivateStrength
	end

EventScript_ActivateStrength::
	setflag FLAG_SYS_USE_STRENGTH
	msgbox Text_MonUsedStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CantStrength::
	msgbox Text_CantStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CheckActivatedBoulder::
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelStrength::
	closemessage
	releaseall
	end

Text_WantToStrength:
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.\p"
	.string "Would you like to use STRENGTH?$"

Text_MonUsedStrength:
	.string "{STR_VAR_1} used STRENGTH!\p"
	.string "{STR_VAR_1}'s STRENGTH made it\n"
	.string "possible to move boulders around!$"

Text_CantStrength:
	.string "It's a big boulder.$"

Text_StrengthActivated:
	.string "STRENGTH made it possible to move\n"
	.string "boulders around.$"

EventScript_UseWaterfall::
	lockall
	checkpartymove MOVE_WATERFALL
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantWaterfall
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
	msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
    call FollowerIntoPlayerScript
    callnative HideFollower
	dofieldeffect FLDEFF_USE_WATERFALL
    callnative FollowMe_WarpSetEnd
	goto EventScript_EndWaterfall

EventScript_CannotUseWaterfall::
	lockall

EventScript_CantWaterfall::
	msgbox Text_CantWaterfall, MSGBOX_DEFAULT

EventScript_EndWaterfall::
	releaseall
	end

Text_CantWaterfall:
	.string "A wall of water is crashing down with\n"
	.string "a mighty roar.$"

Text_WantToWaterfall:
	.string "It's a large waterfall.\n"
	.string "Would you like to use WATERFALL?$"

Text_MonUsedWaterfall:
	.string "{STR_VAR_1} used WATERFALL.$"

EventScript_FailSweetScent::
	msgbox Text_FailSweetScent, MSGBOX_SIGN
	end

Text_FailSweetScent:
	.string "Looks like there's nothing here…$"

EventScript_DisableAutoRun::
	msgbox AutoRunDisabled MSGBOX_SIGN
	end

AutoRunDisabled:
	.string "Auto Run {COLOR RED}Disabled{COLOR DARK_GRAY}.$"
    
EventScript_EnableAutoRun::
	msgbox AutoRunEnabled MSGBOX_SIGN
	end

AutoRunEnabled:
	.string "Auto Run {COLOR GREEN}Enabled{COLOR DARK_GRAY}.$"
	
EventScript_UseRockClimb::
	lockall
	checkpartymove MOVE_ROCK_CLIMB
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq EventScript_CantRockClimb
	bufferpartymonnick 0, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToRockClimb, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_EndRockClimb
	msgbox Text_MonUsedRockClimb, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_ROCK_CLIMB
	waitstate
	goto EventScript_EndRockClimb
	
EventScript_CantRockClimb::
	msgbox Text_CantRockClimb, MSGBOX_DEFAULT
	
EventScript_EndRockClimb::
	releaseall
	end
	
Text_WantToRockClimb:
    .string "The cliff is steep.\n"
    .string "Would you like to use Rock Climb?$"
    
Text_MonUsedRockClimb:
    .string "{STR_VAR_1} used Rock Climb!$"
    
Text_CantRockClimb:
    .string "The cliff is steep.\n"
    .string "A Pokémon may be able to climb it.$"

FollowerPositionFixScript::
	setvar 0x8000 0x0
	callnative FollowerTrainerSightingPositionFix
	compare VAR_RESULT 0xFFFF
	goto_if_eq FollowerPositionFixScriptReturn
	call WalkCall
	setvar 0x8000 0x1
	callnative FollowerTrainerSightingPositionFix
FollowerPositionFixScriptReturn:
	return
    
FollowerIntoPlayerScript::
	setvar 0x8000 0x0
	callnative FollowerIntoPlayer
	compare VAR_RESULT 0xFFFF
	goto_if_eq FollowerPositionFixScriptReturn
	setvar 0x8005 0xFE  @ follower
	call WalkCall
	setvar 0x8000 0x1
	callnative FollowerIntoPlayer
	return
    
WalkCall:
	compare VAR_RESULT 0x0
	call_if_eq WalkDownCall
	compare VAR_RESULT 0x1
	call_if_eq WalkUpCall
	compare VAR_RESULT 0x2
	call_if_eq WalkLeftCall
	compare VAR_RESULT 0x3
	call_if_eq WalkRightCall
	waitmovement 0x8005
	return
	
WalkDownCall:
	applymovement 0x8005 WalkDown
	return

WalkUpCall:
	applymovement 0x8005 WalkUp
	return

WalkLeftCall:
	applymovement 0x8005 WalkLeft
	return

WalkRightCall:
	applymovement 0x8005 WalkRight
	return
    
WalkDown:
    walk_down
    step_end 

WalkUp:
    walk_up
    step_end

WalkLeft:
    walk_left
    step_end

WalkRight:
    walk_right
    step_end

EventScript_Headbutt_Text_0:
	.string "There's a sweet aroma in the air…\nWould you like to shake the tree?$"

EventScript_Headbutt_Text_1:
	.string "{PLAYER} shook the tree!$"

EventScript_Headbutt_Text_2:
	.string "A Berry fell from the tree!$"

EventScript_UseDive_Text_0:
	.string "The sea is deep here.$"

EventScript_UseDive_Text_1:
	.string "The sea is deep here.\nUse the Diving Gear?$"

EventScript_UseDiveUnderwater_Text_0:
	.string "Light is filtering down from above.\nYou may be able to surface…$"

EventScript_UseDiveUnderwater_Text_1:
	.string "Light is filtering down from above.\nWould you like to surface?$"
