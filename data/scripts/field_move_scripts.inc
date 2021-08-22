@ Interact with cuttable tree
EventScript_CutTree::
	lockall
	checkitem ITEM_MACHETE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CheckTreeCantCut
	msgbox Text_WantToCut, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CancelCut
	setitemarg ITEM_MACHETE
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

@ Use cut from party menu
EventScript_UseCut::
	lockall
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

EventScript_CutTreeDown::
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
	waitmovement 0
	removeobject VAR_LAST_TALKED
	releaseall
	end

Movement_CutTreeDown:
	cut_tree
	step_end

EventScript_CheckTreeCantCut::
	msgbox Text_CantCut, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelCut::
	closemessage
	releaseall
	end

Text_WantToCut:
	.string "This shrub is blocking the way.\n"
	.string "Use the Machete to remove it?$"

Text_MonUsedFieldMove:
	.string "{STR_VAR_1} used {STR_VAR_2}!$"

Text_CantCut:
	.string "This shrub is blocking the way.$"

@ Interact with smashable rock
EventScript_RockSmash::
	lockall
	checkitem ITEM_SLEDGEHAMMER, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CantSmashRock
	msgbox Text_WantToSmash, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_EndSmash
	setitemarg ITEM_SLEDGEHAMMER
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

@ Use rock smash from party menu
EventScript_UseRockSmash::
	lockall
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

EventScript_SmashRock::
	applymovement VAR_LAST_TALKED, Movement_SmashRock
	waitmovement 0
	removeobject VAR_LAST_TALKED
	call EventScript_SmashItems
	special RockSmashWildEncounter
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_EndSmash
	waitstate
	releaseall
	end

EventScript_EndSmash::
	releaseall
	end

EventScript_SmashItems:
	random 100
	compare VAR_RESULT, 0
	call_if_eq EventScript_SmashBUGGem
	compare VAR_RESULT, 1
	call_if_eq EventScript_SmashDARKGem
	compare VAR_RESULT, 2
	call_if_eq EventScript_SmashDRAGONGem
	compare VAR_RESULT, 3
	call_if_eq EventScript_SmashELECTRICGem
	compare VAR_RESULT, 4
	call_if_eq EventScript_SmashFAIRYGem
	compare VAR_RESULT, 5
	call_if_eq EventScript_SmashFIGHTINGGem
	compare VAR_RESULT, 6
	call_if_eq EventScript_SmashFIREGem
	compare VAR_RESULT, 7
	call_if_eq EventScript_SmashFLYINGGem
	compare VAR_RESULT, 8
	call_if_eq EventScript_SmashGHOSTGem
	compare VAR_RESULT, 9
	call_if_eq EventScript_SmashGRASSGem
	compare VAR_RESULT, 10
	call_if_eq EventScript_SmashGROUNDGem
	compare VAR_RESULT, 11
	call_if_eq EventScript_SmashICEGem
	compare VAR_RESULT, 12
	call_if_eq EventScript_SmashNORMALGem
	compare VAR_RESULT, 13
	call_if_eq EventScript_SmashPOISONGem
	compare VAR_RESULT, 14
	call_if_eq EventScript_SmashPSYCHICGem
	compare VAR_RESULT, 15
	call_if_eq EventScript_SmashROCKGem
	compare VAR_RESULT, 16
	call_if_eq EventScript_SmashSTEELGem
	compare VAR_RESULT, 17
	call_if_eq EventScript_SmashWATERGem
	compare VAR_RESULT, 18
	call_if_eq EventScript_SmashREDShard
	compare VAR_RESULT, 19
	call_if_eq EventScript_SmashREDShard
	compare VAR_RESULT, 20
	call_if_eq EventScript_SmashREDShard
	compare VAR_RESULT, 21
	call_if_eq EventScript_SmashREDShard
	compare VAR_RESULT, 22
	call_if_eq EventScript_SmashREDShard
	compare VAR_RESULT, 23
	call_if_eq EventScript_SmashREDShard
	compare VAR_RESULT, 24
	call_if_eq EventScript_SmashREDShard
	compare VAR_RESULT, 25
	call_if_eq EventScript_SmashREDShard
	compare VAR_RESULT, 26
	call_if_eq EventScript_SmashREDShard
	compare VAR_RESULT, 27
	call_if_eq EventScript_SmashREDShard
	compare VAR_RESULT, 28
	call_if_eq EventScript_SmashBLUEShard
	compare VAR_RESULT, 29
	call_if_eq EventScript_SmashBLUEShard
	compare VAR_RESULT, 30
	call_if_eq EventScript_SmashBLUEShard
	compare VAR_RESULT, 31
	call_if_eq EventScript_SmashBLUEShard
	compare VAR_RESULT, 32
	call_if_eq EventScript_SmashBLUEShard
	compare VAR_RESULT, 33
	call_if_eq EventScript_SmashBLUEShard
	compare VAR_RESULT, 34
	call_if_eq EventScript_SmashGREENShard
	compare VAR_RESULT, 35
	call_if_eq EventScript_SmashGREENShard
	compare VAR_RESULT, 36
	call_if_eq EventScript_SmashGREENShard
	compare VAR_RESULT, 37
	call_if_eq EventScript_SmashGREENShard
	compare VAR_RESULT, 38
	call_if_eq EventScript_SmashYELLOWShard
	compare VAR_RESULT, 39
	call_if_eq EventScript_SmashYELLOWShard
	return
	
EventScript_SmashYELLOWShard:
	goto_if_unset FLAG_BEATLEVIATHAN4, EventScript_EndSmash
	finditem ITEM_YELLOW_SHARD, 1
	return
	
EventScript_SmashGREENShard:
	goto_if_unset FLAG_BEATLEVIATHAN4, EventScript_EndSmash
	finditem ITEM_GREEN_SHARD, 1
	return
	
EventScript_SmashBLUEShard:
	goto_if_unset FLAG_BEATLEVIATHAN4, EventScript_EndSmash
	finditem ITEM_BLUE_SHARD, 1
	return
	
EventScript_SmashREDShard:
	finditem ITEM_RED_SHARD, 1
	return
	
EventScript_SmashWATERGem:
	finditem ITEM_WATER_GEM, 1
	return
	
EventScript_SmashSTEELGem:
	finditem ITEM_STEEL_GEM, 1
	return
	
EventScript_SmashROCKGem:
	finditem ITEM_ROCK_GEM, 1
	return
	
EventScript_SmashPSYCHICGem:
	finditem ITEM_PSYCHIC_GEM, 1
	return
	
EventScript_SmashPOISONGem:
	finditem ITEM_POISON_GEM, 1
	return
	
EventScript_SmashNORMALGem:
	finditem ITEM_NORMAL_GEM, 1
	return
	
EventScript_SmashICEGem:
	finditem ITEM_ICE_GEM, 1
	return
	
EventScript_SmashGROUNDGem:
	finditem ITEM_GROUND_GEM, 1
	return
	
EventScript_SmashGRASSGem:
	finditem ITEM_GRASS_GEM, 1
	return
	
EventScript_SmashGHOSTGem:
	finditem ITEM_GHOST_GEM, 1
	return
	
EventScript_SmashFLYINGGem:
	finditem ITEM_FLYING_GEM, 1
	return
	
EventScript_SmashFIREGem:
	finditem ITEM_FIRE_GEM, 1
	return
	
EventScript_SmashFIGHTINGGem:
	finditem ITEM_FIGHTING_GEM, 1
	return
	
EventScript_SmashFAIRYGem:
	finditem ITEM_FAIRY_GEM, 1
	return
	
EventScript_SmashELECTRICGem:
	finditem ITEM_ELECTRIC_GEM, 1
	return
	
EventScript_SmashDRAGONGem:
	finditem ITEM_DRAGON_GEM, 1
	return
	
EventScript_SmashDARKGem:
	finditem ITEM_DARK_GEM, 1
	return
	
EventScript_SmashBUGGem:
	finditem ITEM_BUG_GEM, 1
	return

Movement_SmashRock: @ 829082B
	rock_smash_break
	step_end

EventScript_CantSmashRock::
	msgbox Text_CantSmash, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelSmash::
	closemessage
	releaseall
	end

Text_WantToSmash:
	.string "This rock appears to be breakable.\n"
	.string "Use the Sledgehammer to smash it?$"

Text_CantSmash:
	.string "It's a rugged rock.$"

EventScript_StrengthBoulder::
	lockall
	goto_if_unset FLAG_BADGE04_GET, EventScript_CantStrength
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder
	checkpartymove MOVE_STRENGTH
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq EventScript_CantStrength
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToStrength, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CancelStrength
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
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq EventScript_CantWaterfall
	bufferpartymonnick 0, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_EndWaterfall
	msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_WATERFALL
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

EventScript_UseDive::
	checkitem ITEM_DIVING_GEAR, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CantDive
	msgbox Text_WantToDive, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_EndDive
	setitemarg ITEM_DIVING_GEAR
	setfieldeffectargument 1, 1
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndDive
	end

EventScript_CantDive::
	msgbox Text_CantDive, MSGBOX_DEFAULT
	releaseall
	end

EventScript_EndDive::
	releaseall
	end

EventScript_UseDiveUnderwater::
	lockall
	checkitem ITEM_DIVING_GEAR, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CantSurface
	msgbox Text_WantToSurface, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_EndSurface
	setitemarg ITEM_DIVING_GEAR
	setfieldeffectargument 1, 1
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndSurface
	end	

EventScript_CantSurface::
	lockall
	msgbox Text_CantSurface, MSGBOX_DEFAULT
	goto EventScript_EndSurface
	end

EventScript_EndSurface::
	releaseall
	end

Text_CantDive:
	.string "The sea is deep here.$"

Text_WantToDive:
	.string "The sea is deep here.\n"
	.string "Use the Diving Gear?$"

Text_MonUsedDive:
	.string "{PLAYER} used the Diving Gear.$"

Text_CantSurface:
	.string "Light is filtering down from above.\n"
	.string "You may be able to surface..$"

Text_WantToSurface:
	.string "Light is filtering down from above.\n"
	.string "Would you like to surface?$"

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
