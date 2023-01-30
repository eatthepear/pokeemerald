Zone10A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE10A_SUN_STONE, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE10A_SOFT_SAND, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	goto_if_set FLAG_ITEM_ZONE10A_DRAGON_FANG, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_10
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
	goto_if_set FLAG_ITEM_ZONE10A_METAL_COAT, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_14
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
	goto_if_set FLAG_ITEM_ZONE10A_TM16, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_18
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_17:
	goto_if_set FLAG_ITEM_ZONE10A_HEAVY_DUTY_BOOTS, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_21
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_14:
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_13

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_18:
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_17

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_21:
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone10A_EventScript_Adamina::
	lock
	faceplayer
	compare VAR_ZONE_10_STATE, 0
	goto_if_eq Zone10A_EventScript_Adamina_2
Zone10A_EventScript_Adamina_1:
	msgbox Zone10A_Text_Explain
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD_1, Zone10A_EventScript_Adamina_5
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD_2, Zone10A_EventScript_Adamina_5
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD_3, Zone10A_EventScript_Adamina_5
	fadeoutbgm 1
	msgbox Zone10A_Text_FoundEm
	delay 96
	msgbox Zone10A_Text_CrushYou
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	setvar VAR_MUGSHOT_ID, MUGSHOT_ADAMINA
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone10A_EventScript_Adamina_12
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone10A_EventScript_Adamina_12
	trainerbattle_no_intro TRAINER_ADAMINA_LEVIATHAN_9, Zone10A_Text_Leviathan9Defeat
Zone10A_EventScript_Adamina_11:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone10A_Text_HeadInside
	applymovement 6, Common_Movement_FaceUp
	waitmovement 0
	opendoor 47, 27
	waitdooranim
	applymovement 6, Common_Movement_WalkUp
	waitmovement 0
	removeobject VAR_LAST_TALKED
	setflag FLAG_BEAT_LEVIATHAN_9
	closedoor 47, 27
	waitdooranim
	release
	end

Zone10A_EventScript_Adamina_2:
	msgbox Zone10A_Text_NoChance
	setvar VAR_ZONE_10_STATE, 1
	goto Zone10A_EventScript_Adamina_1

Zone10A_EventScript_Adamina_5:
	release
	end

Zone10A_EventScript_Adamina_12:
	trainerbattle_no_intro TRAINER_ADAMINA_LEVIATHAN_9_BRUTAL, Zone10A_Text_Leviathan9Defeat
	goto Zone10A_EventScript_Adamina_11


Zone10A_EventScript_SunStone::
	lock
	goto_if_set FLAG_ITEM_ZONE10A_SUN_STONE, Zone10A_EventScript_SunStone_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE10A_SUN_STONE
	addobject VAR_LAST_TALKED
	finditem ITEM_SUN_STONE, 1
	release
	end

Zone10A_EventScript_SunStone_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone10A_EventScript_SoftSand::
	lock
	goto_if_set FLAG_ITEM_ZONE10A_SOFT_SAND, Zone10A_EventScript_SoftSand_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE10A_SOFT_SAND
	addobject VAR_LAST_TALKED
	finditem ITEM_SOFT_SAND, 1
	release
	end

Zone10A_EventScript_SoftSand_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone10A_EventScript_DragonFang::
	lock
	goto_if_set FLAG_ITEM_ZONE10A_DRAGON_FANG, Zone10A_EventScript_DragonFang_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE10A_DRAGON_FANG
	addobject VAR_LAST_TALKED
	finditem ITEM_DRAGON_FANG, 1
	release
	end

Zone10A_EventScript_DragonFang_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone10A_EventScript_MetalCoat::
	lock
	goto_if_set FLAG_ITEM_ZONE10A_METAL_COAT, Zone10A_EventScript_MetalCoat_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE10A_METAL_COAT
	addobject VAR_LAST_TALKED
	finditem ITEM_METAL_COAT, 1
	release
	end

Zone10A_EventScript_MetalCoat_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone10A_EventScript_TM16::
	lock
	goto_if_set FLAG_ITEM_ZONE10A_TM16, Zone10A_EventScript_TM16_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE10A_TM16
	addobject VAR_LAST_TALKED
	finditem ITEM_TM16, 1
	release
	end

Zone10A_EventScript_TM16_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone10A_EventScript_HeavyDutyBoots::
	lock
	goto_if_set FLAG_ITEM_ZONE10A_HEAVY_DUTY_BOOTS, Zone10A_EventScript_HeavyDutyBoots_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE10A_HEAVY_DUTY_BOOTS
	addobject VAR_LAST_TALKED
	finditem ITEM_HEAVY_DUTY_BOOTS, 1
	release
	end

Zone10A_EventScript_HeavyDutyBoots_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone10A_EventScript_Ranger::
	lock
	faceplayer
	goto_if_unset FLAG_ZONE10A_RECEIVED_SAFETY_GOGGLES, Zone10A_EventScript_Ranger_2
Zone10A_EventScript_Ranger_1:
	msgbox Zone10A_EventScript_Ranger_Text_1
	release
	end

Zone10A_EventScript_Ranger_2:
	msgbox Zone10A_EventScript_Ranger_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_SAFETY_GOGGLES
	setflag FLAG_ZONE10A_RECEIVED_SAFETY_GOGGLES
	goto Zone10A_EventScript_Ranger_1


Zone10A_EventScript_Kyle::
	trainerbattle_single TRAINER_KYLE, Zone10A_Text_KyleIntro, Zone10A_Text_KyleDefeat
	msgbox Zone10A_Text_KylePostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_KyleIntro:
	.string "I daydream a lot. It's a bad habit!$"

Zone10A_Text_KyleDefeat:
	.string "I dream of one day winning…$"

Zone10A_Text_KylePostBattle:
	.string "I'll be a champion some day,\n"
	.string "just you wait!$"

Zone10A_EventScript_Belle::
	trainerbattle_single TRAINER_BELLE, Zone10A_Text_BelleIntro, Zone10A_Text_BelleDefeat
	msgbox Zone10A_Text_BellePostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_BelleIntro:
	.string "Pfft!$"

Zone10A_Text_BelleDefeat:
	.string "Sorry, I didn't mean to be rude!$"

Zone10A_Text_BellePostBattle:
	.string "Some sand flew into my mouth so I\n"
	.string "had to get it out!$"

Zone10A_EventScript_Dewey::
	trainerbattle_single TRAINER_DEWEY, Zone10A_Text_DeweyIntro, Zone10A_Text_DeweyDefeat
	msgbox Zone10A_Text_DeweyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_DeweyIntro:
	.string "My party is so worn down…\n"
	.string "Maybe they'll be reenergized after\l"
	.string "battle!$"

Zone10A_Text_DeweyDefeat:
	.string "Hmm…\n"
	.string "I don't think they gained any energy…$"

Zone10A_Text_DeweyPostBattle:
	.string "Maybe I need to rest instead.$"

Zone10A_EventScript_Pearlie::
	trainerbattle_single TRAINER_PEARLIE, Zone10A_Text_PearlieIntro, Zone10A_Text_PearlieDefeat
	msgbox Zone10A_Text_PearliePostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_PearlieIntro:
	.string "Sand keeps getting in my lunch,\n"
	.string "so I'll take out my frustration on you!$"

Zone10A_Text_PearlieDefeat:
	.string "Ugh! Now there's sand everywhere!$"

Zone10A_Text_PearliePostBattle:
	.string "I don't like sand.\n"
	.string "It's coarse and rough and irritating and\l"
	.string "it gets everywhere.$"

Zone10A_EventScript_Ernest::
	trainerbattle_single TRAINER_ERNEST, Zone10A_Text_ErnestIntro, Zone10A_Text_ErnestDefeat
	msgbox Zone10A_Text_ErnestPostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_ErnestIntro:
	.string "I came prepared the wrath of the\n"
	.string "desert!$"

Zone10A_Text_ErnestDefeat:
	.string "But I was not prepared for you!$"

Zone10A_Text_ErnestPostBattle:
	.string "Preparations are important, be it\n"
	.string "for hiking or battling!$"

Zone10A_EventScript_Alana::
	trainerbattle_single TRAINER_ALANA, Zone10A_Text_AlanaIntro, Zone10A_Text_AlanaDefeat
	msgbox Zone10A_Text_AlanaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_AlanaIntro:
	.string "Conrad told me to come here for our date,\n"
	.string "but he's nowhere to be found!$"

Zone10A_Text_AlanaDefeat:
	.string "I wonder if I got stood up…$"

Zone10A_Text_AlanaPostBattle:
	.string "No way, a woman like me getting stood up?\n"
	.string "He probably just got lost.$"

Zone10A_EventScript_Susan::
	trainerbattle_single TRAINER_SUSAN, Zone10A_Text_SusanIntro, Zone10A_Text_SusanDefeat
	msgbox Zone10A_Text_SusanPostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_SusanIntro:
	.string "ARGH! YOU STUPID, LITTLE… ARGH!$"

Zone10A_Text_SusanDefeat:
	.string "UGH!$"

Zone10A_Text_SusanPostBattle:
	.string "Crunch, crunch, crunch…\n"
	.string "…\p"
	.string "Sorry about earlier.\n"
	.string "I was feeling a little bit hangry.$"

Zone10A_EventScript_Conrad::
	trainerbattle_single TRAINER_CONRAD, Zone10A_Text_ConradIntro, Zone10A_Text_ConradDefeat
	msgbox Zone10A_Text_ConradPostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_ConradIntro:
	.string "I'm looking for my date.\n"
	.string "Have you seen her?$"

Zone10A_Text_ConradDefeat:
	.string "She probably thinks I stood her up…$"

Zone10A_Text_ConradPostBattle:
	.string "Not a great first impression,\n"
	.string "if I'm being honest.$"

Zone10A_EventScript_Ranger_Text_0:
	.string "Excuse me! I'm a member of the Pokémon\n"
	.string "Ranger Corps, working to protect both\l"
	.string "people and Pokémon.\p"
	.string "It's not safe to be out in the\n"
	.string "sandstorm for long periods of time, so\l"
	.string "take this!$"

Zone10A_EventScript_Ranger_Text_1:
	.string "Remember kids, safety first!$"

Zone10A_Text_NoChance::
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Nope.\n"
	.string "No chance you're getting in.\p"
	.string "Zero.\n"
	.string "Zip.\l"
	.string "Zilch.\l"
	.string "…\l"
	.string "…\l"
	.string "…\l"
	.string "Fine.$"

Zone10A_Text_Explain::
	.string "If you really want to get in,\n"
	.string "you have to earn your place.\p"
	.string "In the desert, there are 3 hidden\n"
	.string "Yellow Shards.\p"
	.string "Find them and bring them to me.\n"
	.string "Then we'll see.$"

Zone10A_Text_FoundEm::
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Oh, wow, you actually\n"
	.string "found them? What a surprise.$"

Zone10A_Text_CrushYou::
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Oh, were you expecting me\n"
	.string "to let you in just because you\l"
	.string "found some scraps? No way.\p"
	.string "You'll have to beat me in a battle\n"
	.string "to earn my respect!\l"
	.string "I'm gonna crush you!$"

Zone10A_Text_Leviathan9Defeat::
	.string "Adamina: Fine. A win is a win.$"

Zone10A_Text_HeadInside::
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Go on, head inside.\n"
	.string "I've got nothing for you.$"
