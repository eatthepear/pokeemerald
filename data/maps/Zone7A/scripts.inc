Zone7A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE7A_SHARP_BEAK, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE7A_TWISTED_SPOON, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	goto_if_set FLAG_ITEM_ZONE7A_POISON_BARB, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_10
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
	goto_if_set FLAG_ITEM_ZONE7A_SILVER_POWDER, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_14
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
	goto_if_set FLAG_ITEM_ZONE7A_BLACK_BELT, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_18
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_17:
	goto_if_set FLAG_ITEM_ZONE7A_SUPER_POTION, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_22
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_21:
	goto_if_set FLAG_ITEM_ZONE7A_GREAT_BALL_X2, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_25
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_14:
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_13

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_18:
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_17

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_22:
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_21

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_25:
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone7A_EventScript_Beauty::
	lock
	faceplayer
	goto_if_set FLAG_ZONE7A_RECEIVED_WHIPPED_DREAM, Zone7A_EventScript_Beauty_3
Zone7A_EventScript_Beauty_1:
	msgbox Zone7A_EventScript_Beauty_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone7A_EventScript_Beauty_7
Zone7A_EventScript_Beauty_6:
	release
	end

Zone7A_EventScript_Beauty_2:
	msgbox Zone7A_EventScript_Beauty_Text_0
	release
	end

Zone7A_EventScript_Beauty_3:
	goto_if_set FLAG_ZONE7A_RECEIVED_SACHET, Zone7A_EventScript_Beauty_2
	goto Zone7A_EventScript_Beauty_1

Zone7A_EventScript_Beauty_7:
	special ChoosePartyMon
	waitstate
	compare VAR_RESULT, 255
	goto_if_ne Zone7A_EventScript_Beauty_9
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_9:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	switch VAR_RESULT
	case SPECIES_SWIRLIX, Zone7A_EventScript_Beauty_12
	case SPECIES_SPRITZEE, Zone7A_EventScript_Beauty_13
	msgbox Zone7A_EventScript_Beauty_Text_5
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_12:
	goto_if_unset FLAG_ZONE7A_RECEIVED_WHIPPED_DREAM, Zone7A_EventScript_Beauty_15
	msgbox Zone7A_EventScript_Beauty_Text_3
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_13:
	goto_if_unset FLAG_ZONE7A_RECEIVED_SACHET, Zone7A_EventScript_Beauty_18
	msgbox Zone7A_EventScript_Beauty_Text_4
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_15:
	msgbox Zone7A_EventScript_Beauty_Text_2
	giveitem ITEM_WHIPPED_DREAM
	setflag FLAG_ZONE7A_RECEIVED_WHIPPED_DREAM
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_18:
	msgbox Zone7A_EventScript_Beauty_Text_2
	giveitem ITEM_SACHET
	setflag FLAG_ZONE7A_RECEIVED_SACHET
	goto Zone7A_EventScript_Beauty_6


Zone7A_EventScript_ItemSharpBeak::
	lock
	goto_if_set FLAG_ITEM_ZONE7A_SHARP_BEAK, Zone7A_EventScript_ItemSharpBeak_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE7A_SHARP_BEAK
	addobject VAR_LAST_TALKED
	finditem ITEM_SHARP_BEAK, 1
	release
	end

Zone7A_EventScript_ItemSharpBeak_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone7A_EventScript_ItemTwistedSpoon::
	lock
	goto_if_set FLAG_ITEM_ZONE7A_TWISTED_SPOON, Zone7A_EventScript_ItemTwistedSpoon_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE7A_TWISTED_SPOON
	addobject VAR_LAST_TALKED
	finditem ITEM_TWISTED_SPOON, 1
	release
	end

Zone7A_EventScript_ItemTwistedSpoon_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone7A_EventScript_ItemPoisonBarb::
	lock
	goto_if_set FLAG_ITEM_ZONE7A_POISON_BARB, Zone7A_EventScript_ItemPoisonBarb_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE7A_POISON_BARB
	addobject VAR_LAST_TALKED
	finditem ITEM_POISON_BARB, 1
	release
	end

Zone7A_EventScript_ItemPoisonBarb_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone7A_EventScript_ItemSilverPowder::
	lock
	goto_if_set FLAG_ITEM_ZONE7A_SILVER_POWDER, Zone7A_EventScript_ItemSilverPowder_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE7A_SILVER_POWDER
	addobject VAR_LAST_TALKED
	finditem ITEM_SILVER_POWDER, 1
	release
	end

Zone7A_EventScript_ItemSilverPowder_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone7A_EventScript_ItemBlackBelt::
	lock
	goto_if_set FLAG_ITEM_ZONE7A_BLACK_BELT, Zone7A_EventScript_ItemBlackBelt_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE7A_BLACK_BELT
	addobject VAR_LAST_TALKED
	finditem ITEM_BLACK_BELT, 1
	release
	end

Zone7A_EventScript_ItemBlackBelt_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone7A_EventScript_ItemSuperPotion::
	lock
	goto_if_set FLAG_ITEM_ZONE7A_SUPER_POTION, Zone7A_EventScript_ItemSuperPotion_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE7A_SUPER_POTION
	addobject VAR_LAST_TALKED
	finditem ITEM_SUPER_POTION, 1
	release
	end

Zone7A_EventScript_ItemSuperPotion_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone7A_EventScript_ItemGreatBall::
	lock
	goto_if_set FLAG_ITEM_ZONE7A_GREAT_BALL_X2, Zone7A_EventScript_ItemGreatBall_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE7A_GREAT_BALL_X2
	addobject VAR_LAST_TALKED
	finditem ITEM_GREAT_BALL, 2
	release
	end

Zone7A_EventScript_ItemGreatBall_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone7A_EventScript_Millie::
	trainerbattle_single TRAINER_MILLIE, Zone7A_Text_MillieIntro, Zone7A_Text_MillieDefeat
	msgbox Zone7A_Text_MilliePostBattle, MSGBOX_AUTOCLOSE
	end

Zone7A_Text_MillieIntro:
	.string "At the base of this mountain,\n"
	.string "is a perfect spot for battle!$"

Zone7A_Text_MillieDefeat:
	.string "This spot is now tainted, by\n"
	.string "my defeat!$"

Zone7A_Text_MilliePostBattle:
	.string "It's a good spot for camping, too!$"

Zone7A_EventScript_Jamal::
	trainerbattle_single TRAINER_JAMAL, Zone7A_Text_JamalIntro, Zone7A_Text_JamalDefeat
	msgbox Zone7A_Text_JamalPostBattle, MSGBOX_AUTOCLOSE
	end

Zone7A_Text_JamalIntro:
	.string "Valleys like these are simply,\n"
	.string "succintly, superb!$"

Zone7A_Text_JamalDefeat:
	.string "I don't like this valley anymore!$"

Zone7A_Text_JamalPostBattle:
	.string "How can I like a place that I've\n"
	.string "lost at?$"

Zone7A_EventScript_Paige::
	trainerbattle_single TRAINER_PAIGE, Zone7A_Text_PaigeIntro, Zone7A_Text_PaigeDefeat
	msgbox Zone7A_Text_PaigePostBattle, MSGBOX_AUTOCLOSE
	end

Zone7A_Text_PaigeIntro:
	.string "My son ran up the steps so fast!$"

Zone7A_Text_PaigeDefeat:
	.string "I just can't keep up!$"

Zone7A_Text_PaigePostBattle:
	.string "Maybe I'll rest in the rest house…$"

Zone7A_EventScript_Seth::
	trainerbattle_single TRAINER_SETH, Zone7A_Text_SethIntro, Zone7A_Text_SethDefeat
	msgbox Zone7A_Text_SethPostBattle, MSGBOX_AUTOCLOSE
	end

Zone7A_Text_SethIntro:
	.string "Momma! You're too slow!$"

Zone7A_Text_SethDefeat:
	.string "I wasn't fast enough!$"

Zone7A_Text_SethPostBattle:
	.string "I'm all out of energy…\n"
	.string "Snack time!$"

Zone7A_EventScript_Connie::
	trainerbattle_single TRAINER_CONNIE, Zone7A_Text_ConnieIntro, Zone7A_Text_ConnieDefeat
	msgbox Zone7A_Text_ConniePostBattle, MSGBOX_AUTOCLOSE
	end

Zone7A_Text_ConnieIntro:
	.string "Another traveler!\n"
	.string "Tropius, it's time for battle!$"

Zone7A_Text_ConnieDefeat:
	.string "It's hard winning with only one\n"
	.string "Pokémon!$"

Zone7A_Text_ConniePostBattle:
	.string "Backpacking is all about packing\n"
	.string "light!$"

Zone7A_EventScript_HealSign::
	msgbox Zone7A_Text_HealSign, MSGBOX_SIGN
	end

Zone7A_Text_HealSign:
	.string "A stop for weary travelers.$"

Zone7A_EventScript_Beauty_Text_0:
	.string "I already gave you all the evolution\n"
	.string "items I have!$"

Zone7A_EventScript_Beauty_Text_1:
	.string "Beautiful, Fairy-type Pokémon…\p"
	.string "I'll give you the corresponding\n"
	.string "evolution item if you show me a Swirlix\l"
	.string "or a Spritzee.$"

Zone7A_EventScript_Beauty_Text_2:
	.string "That Pokémon is absolutely stunning…\n"
	.string "Take this, as promised.$"

Zone7A_EventScript_Beauty_Text_3:
	.string "I already gave you all the Swirlix\n"
	.string "evolution items I have!$"

Zone7A_EventScript_Beauty_Text_4:
	.string "I already gave you all the Spritzee\n"
	.string "evolution items I have!$"

Zone7A_EventScript_Beauty_Text_5:
	.string "That's not a Swirlix nor a Spritzee!$"
