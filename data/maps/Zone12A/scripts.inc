Zone12A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE12A_TM24, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE12A_THUNDER_STONE, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	goto_if_set FLAG_ITEM_ZONE12A_FIRE_STONE, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_10
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
	goto_if_set FLAG_ITEM_ZONE12A_GRIP_CLAW, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_14
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
	goto_if_set FLAG_ITEM_ZONE12A_SUPER_POTION, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_17
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_14:
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_13

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_17:
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone12A_EventScript_StartGauntletBattleTop::
	lockall
	setobjectxyperm 14, 37, 13
	setobjectxyperm 15, 37, 14
	removeobject 14
	removeobject 15
	addobject 14
	addobject 15
	goto Zone12A_EventScript_InitiateRomulusJulieBattles
	return


Zone12A_EventScript_StartGauntletBattleBottom::
	lockall
	setobjectxyperm 14, 24, 27
	setobjectxyperm 15, 24, 28
	removeobject 14
	removeobject 15
	addobject 14
	addobject 15
	goto Zone12A_EventScript_InitiateRomulusJulieBattles
	return


Zone12A_EventScript_InitiateRomulusJulieBattles::
	applymovement 14, Zone12A_Movement_Left
	applymovement 15, Zone12A_Movement_Left
	waitmovement 0
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_0
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_1
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone12A_EventScript_InitiateRomulusJulieBattles_2
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_4
	trainerbattle_no_intro TRAINER_ROMULUS, Zone12A_EventScript_InitiateRomulusJulieBattles_Text_5
	goto_if_unset FLAG_BRUTAL_MODE_ON, Zone12A_EventScript_InitiateRomulusJulieBattles_5
Zone12A_EventScript_InitiateRomulusJulieBattles_4:
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_6
	trainerbattle_no_intro TRAINER_JULIE, Zone12A_EventScript_InitiateRomulusJulieBattles_Text_7
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_8
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_9
	giveitem ITEM_SCOPE_LENS
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_10
	applymovement 14, Zone12A_Movement_Right
	applymovement 15, Zone12A_Movement_Right
	waitmovement 0
	setflag FLAG_HIDE_ZONE12A_CAMPER_PICNICKER
	removeobject 14
	removeobject 15
	setvar VAR_ZONE_12_STATE, 1
	releaseall
	end

Zone12A_EventScript_InitiateRomulusJulieBattles_2:
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_3
	applymovement 14, Zone12A_Movement_Right
	applymovement 15, Zone12A_Movement_Right
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	releaseall
	end

Zone12A_EventScript_InitiateRomulusJulieBattles_5:
	special HealPlayerParty
	goto Zone12A_EventScript_InitiateRomulusJulieBattles_4


Zone12A_Movement_Left:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Zone12A_Movement_Right:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Zone12A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 12
	goto_if_gt Zone12A_EventScript_Exit_2
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone12A_EventScript_Exit_7
Zone12A_EventScript_Exit_5:
	clearflag FLAG_IN_ZONE_NOT_SANCTUARY
	warp MAP_ZONE12SANCTUARY, 255, 22, 7
Zone12A_EventScript_Exit_1:
	releaseall
	end

Zone12A_EventScript_Exit_2:
	clearflag FLAG_IN_ZONE_NOT_SANCTUARY
	setvar VAR_REVISITING_ZONE, 0
	warpteleport MAP_ZONE0D, 255, 19, 25
	waitstate
	goto Zone12A_EventScript_Exit_1

Zone12A_EventScript_Exit_6:
	goto EventScript_BrutalExitNotSatisfied
	goto Zone12A_EventScript_Exit_5

Zone12A_EventScript_Exit_7:
	checktrainerflag TRAINER_ESSENCE
	goto_if 0, Zone12A_EventScript_Exit_6
	checktrainerflag TRAINER_DOLORES
	goto_if 0, Zone12A_EventScript_Exit_6
	checktrainerflag TRAINER_TREVOR
	goto_if 0, Zone12A_EventScript_Exit_6
	checktrainerflag TRAINER_RANDOLPH
	goto_if 0, Zone12A_EventScript_Exit_6
	checktrainerflag TRAINER_FEDERICO
	goto_if 0, Zone12A_EventScript_Exit_6
	checktrainerflag TRAINER_GENIE
	goto_if 0, Zone12A_EventScript_Exit_6
	checktrainerflag TRAINER_HILDA
	goto_if 0, Zone12A_EventScript_Exit_6
	checktrainerflag TRAINER_KINLEY
	goto_if 0, Zone12A_EventScript_Exit_6
	goto Zone12A_EventScript_Exit_5


Zone12A_EventScript_TM24::
	lock
	goto_if_set FLAG_ITEM_ZONE12A_TM24, Zone12A_EventScript_TM24_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE12A_TM24
	addobject VAR_LAST_TALKED
	finditem ITEM_TM24, 1
	release
	end

Zone12A_EventScript_TM24_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone12A_EventScript_ThunderStone::
	lock
	goto_if_set FLAG_ITEM_ZONE12A_THUNDER_STONE, Zone12A_EventScript_ThunderStone_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE12A_THUNDER_STONE
	addobject VAR_LAST_TALKED
	finditem ITEM_THUNDER_STONE, 1
	release
	end

Zone12A_EventScript_ThunderStone_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone12A_EventScript_FireStone::
	lock
	goto_if_set FLAG_ITEM_ZONE12A_FIRE_STONE, Zone12A_EventScript_FireStone_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE12A_FIRE_STONE
	addobject VAR_LAST_TALKED
	finditem ITEM_FIRE_STONE, 1
	release
	end

Zone12A_EventScript_FireStone_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone12A_EventScript_GripClaw::
	lock
	goto_if_set FLAG_ITEM_ZONE12A_GRIP_CLAW, Zone12A_EventScript_GripClaw_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE12A_GRIP_CLAW
	addobject VAR_LAST_TALKED
	finditem ITEM_GRIP_CLAW, 1
	release
	end

Zone12A_EventScript_GripClaw_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone12A_EventScript_SuperPotion::
	lock
	goto_if_set FLAG_ITEM_ZONE12A_SUPER_POTION, Zone12A_EventScript_SuperPotion_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE12A_SUPER_POTION
	addobject VAR_LAST_TALKED
	finditem ITEM_SUPER_POTION, 1
	release
	end

Zone12A_EventScript_SuperPotion_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone12A_EventScript_Waterfall::
	lockall
	msgbox Zone12A_Text_DontGoDown, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	releaseall
	end

Zone12A_Text_DontGoDown:
	.string "You don't want to go down the\n"
	.string "waterfall without a way back up!$"

Zone12A_EventScript_Essence::
	trainerbattle_single TRAINER_ESSENCE, Zone12A_Text_EssenceIntro, Zone12A_Text_EssenceDefeat
	msgbox Zone12A_Text_EssencePostBattle, MSGBOX_AUTOCLOSE
	end

Zone12A_Text_EssenceIntro:
	.string "I know I shouldn't be walking\n"
	.string "near a puddle like this…$"

Zone12A_Text_EssenceDefeat:
	.string "But I just love looking at my\n"
	.string "reflection too much!$"

Zone12A_Text_EssencePostBattle:
	.string "Sigh… I'm even more beautiful\n"
	.string "than Narcissus…$"

Zone12A_EventScript_Dolores::
	trainerbattle_single TRAINER_DOLORES, Zone12A_Text_DoloresIntro, Zone12A_Text_DoloresDefeat
	msgbox Zone12A_Text_DoloresPostBattle, MSGBOX_AUTOCLOSE
	end

Zone12A_Text_DoloresIntro:
	.string "You have to be prepared for bad\n"
	.string "weather at any moment!$"

Zone12A_Text_DoloresDefeat:
	.string "Wow! You blew me right off my feet!$"

Zone12A_Text_DoloresPostBattle:
	.string "Weather affects Pokémon battles\n"
	.string "just as much as it affects our\l"
	.string "lives, huh?$"

Zone12A_EventScript_Trevor::
	trainerbattle_single TRAINER_TREVOR, Zone12A_Text_TrevorIntro, Zone12A_Text_TrevorDefeat
	msgbox Zone12A_Text_TrevorPostBattle, MSGBOX_AUTOCLOSE
	end

Zone12A_Text_TrevorIntro:
	.string "Attack, my bird Pokémon!$"

Zone12A_Text_TrevorDefeat:
	.string "The shock of losing stings!$"

Zone12A_Text_TrevorPostBattle:
	.string "We'll get them next time,\n"
	.string "my feathered friends!$"

Zone12A_EventScript_Randolph::
	trainerbattle_single TRAINER_RANDOLPH, Zone12A_Text_RandolphIntro, Zone12A_Text_RandolphDefeat
	msgbox Zone12A_Text_RandolphPostBattle, MSGBOX_AUTOCLOSE
	end

Zone12A_Text_RandolphIntro:
	.string "You distracted me from my search!$"

Zone12A_Text_RandolphDefeat:
	.string "The search for cool Pokémon!$"

Zone12A_Text_RandolphPostBattle:
	.string "I guess you have some cool Pokémon.$"

Zone12A_EventScript_Federico::
	trainerbattle_single TRAINER_FEDERICO, Zone12A_Text_FedericoIntro, Zone12A_Text_FedericoDefeat
	msgbox Zone12A_Text_FedericoPostBattle, MSGBOX_AUTOCLOSE
	end

Zone12A_Text_FedericoIntro:
	.string "Argh… I wish I had a Surfboard…$"

Zone12A_Text_FedericoDefeat:
	.string "Then I could ride the waves,\n"
	.string "searching for bigger fish!$"

Zone12A_Text_FedericoPostBattle:
	.string "Sounds like a catch, am I right?$"

Zone12A_EventScript_Genie::
	trainerbattle_single TRAINER_GENIE, Zone12A_Text_GenieIntro, Zone12A_Text_GenieDefeat
	msgbox Zone12A_Text_GeniePostBattle, MSGBOX_AUTOCLOSE
	end

Zone12A_Text_GenieIntro:
	.string "Running trains the mind and the soul!$"

Zone12A_Text_GenieDefeat:
	.string "But it does not train your Pokémon!$"

Zone12A_Text_GeniePostBattle:
	.string "Huff… I need a break…$"

Zone12A_EventScript_Hilda::
	trainerbattle_single TRAINER_HILDA, Zone12A_Text_HildaIntro, Zone12A_Text_HildaDefeat
	msgbox Zone12A_Text_HildaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone12A_Text_HildaIntro:
	.string "Hi, I'm a fan!$"

Zone12A_Text_HildaDefeat:
	.string "A fan of sneaking up on people!$"

Zone12A_Text_HildaPostBattle:
	.string "Okay, I admit, it's a weird hobby.$"

Zone12A_EventScript_Kinley::
	trainerbattle_single TRAINER_KINLEY, Zone12A_Text_KinleyIntro, Zone12A_Text_KinleyDefeat
	msgbox Zone12A_Text_KinleyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone12A_Text_KinleyIntro:
	.string "This grass is far too tall\n"
	.string "for someone of my stature!$"

Zone12A_Text_KinleyDefeat:
	.string "I meant financial stature!\n"
	.string "I'm not short!$"

Zone12A_Text_KinleyPostBattle:
	.string "Errr… Never mind.$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_0:
	.string "{COLOR BLUE}Julie{COLOR DARK_GRAY}: Well, well well. Look what we have\n"
	.string "here!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_1:
	.string "{COLOR BLUE}Romulus{COLOR DARK_GRAY}: A trainer! Trying to cross the\n"
	.string "river!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_2:
	.string "{COLOR BLUE}Julie{COLOR DARK_GRAY}: Well, trainer, would you like to\n"
	.string "face our trial? You'll have to beat the\l"
	.string "two of us in a row!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_3:
	.string "{COLOR BLUE}Romulus{COLOR DARK_GRAY}: Oh! How cowardly.$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_4:
	.string "{COLOR BLUE}Romulus{COLOR DARK_GRAY}: Well then, I'm up first! Better\n"
	.string "hope luck is on your side!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_5:
	.string "Romulus: The critical hits didn't come\n"
	.string "through!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_6:
	.string "{COLOR BLUE}Julie{COLOR DARK_GRAY}: Next up is me! I won't need any\n"
	.string "crits to beat you!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_7:
	.string "Julie: You won even without landing a\n"
	.string "critical hit!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_8:
	.string "{COLOR BLUE}Romulus{COLOR DARK_GRAY}: You got us! We'll let you cross\n"
	.string "the river.$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_9:
	.string "{COLOR BLUE}Julie{COLOR DARK_GRAY}: We'll even give you this item, too!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_10:
	.string "{COLOR BLUE}Romulus{COLOR DARK_GRAY}: Au revoir!$"
