Zone6A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE6A_NET_BALL, Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE6A_TM07, Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	goto_if_set FLAG_ITEM_ZONE6A_NEST_BALL, Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_9
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone6A_EventScript_LeviathanBattle::
	lock
	faceplayer
	goto_if_set FLAG_BEAT_LEVIATHAN_6, Zone6A_EventScript_LeviathanBattle_2
	msgbox Zone6A_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
	msgbox Zone6A_EventScript_LeviathanBattle_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone6A_EventScript_LeviathanBattle_5
	fadeoutbgm 1
	msgbox Zone6A_EventScript_LeviathanBattle_Text_3, MSGBOX_DEFAULT
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone6A_EventScript_LeviathanBattle_8
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone6A_EventScript_LeviathanBattle_8
Zone6A_EventScript_LeviathanBattle_7:
	setvar VAR_MUGSHOT_ID, MUGSHOT_MINA
	trainerbattle_no_intro TRAINER_MINA_LEVIATHAN_6, Zone6A_EventScript_LeviathanBattle_Text_5
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone6A_EventScript_LeviathanBattle_13
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone6A_EventScript_LeviathanBattle_13
Zone6A_EventScript_LeviathanBattle_12:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone6A_EventScript_LeviathanBattle_Text_6, MSGBOX_DEFAULT
	giveitem ITEM_TM08
	msgbox Zone6A_Text_Mina_PostBattle
	closemessage
	setflag FLAG_BEAT_LEVIATHAN_6
	release
	end

Zone6A_EventScript_LeviathanBattle_2:
	msgbox Zone6A_Text_Mina_PostBattle
	closemessage
	release
	end

Zone6A_EventScript_LeviathanBattle_5:
	msgbox Zone6A_EventScript_LeviathanBattle_Text_2
	release
	end

Zone6A_EventScript_LeviathanBattle_8:
	setweather WEATHER_RAIN
	doweather
	msgbox Zone6A_EventScript_LeviathanBattle_Text_4
	goto Zone6A_EventScript_LeviathanBattle_7

Zone6A_EventScript_LeviathanBattle_13:
	resetweather
	doweather
	goto Zone6A_EventScript_LeviathanBattle_12


Zone6A_EventScript_ItemNetBall::
	lock
	goto_if_set FLAG_ITEM_ZONE6A_NET_BALL, Zone6A_EventScript_ItemNetBall_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE6A_NET_BALL
	addobject VAR_LAST_TALKED
	finditem ITEM_NET_BALL, 1
	release
	end

Zone6A_EventScript_ItemNetBall_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone6A_EventScript_ItemTM07::
	lock
	goto_if_set FLAG_ITEM_ZONE6A_TM07, Zone6A_EventScript_ItemTM07_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE6A_TM07
	addobject VAR_LAST_TALKED
	finditem ITEM_TM07
	release
	end

Zone6A_EventScript_ItemTM07_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone6A_EventScript_ItemNestBall::
	lock
	goto_if_set FLAG_ITEM_ZONE6A_NEST_BALL, Zone6A_EventScript_ItemNestBall_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE6A_NEST_BALL
	addobject VAR_LAST_TALKED
	finditem ITEM_NEST_BALL, 1
	release
	end

Zone6A_EventScript_ItemNestBall_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone6A_EventScript_Zack::
	trainerbattle_single TRAINER_ZACK, Zone6A_Text_ZackIntro, Zone6A_Text_ZackDefeat
	msgbox Zone6A_Text_ZackPostBattle, MSGBOX_AUTOCLOSE
	end

Zone6A_Text_ZackIntro:
	.string "My twin sister Mina loves tubing\n"
	.string "just as much as I do!$"

Zone6A_Text_ZackDefeat:
	.string "She just won't admit it!$"

Zone6A_Text_ZackPostBattle:
	.string "Our family really loves tubing!$"

Zone6A_EventScript_Melanie::
	trainerbattle_single TRAINER_MELANIE, Zone6A_Text_MelanieIntro, Zone6A_Text_MelanieDefeat
	msgbox Zone6A_Text_MelaniePostBattle, MSGBOX_AUTOCLOSE
	end

Zone6A_Text_MelanieIntro:
	.string "Watch where you're going!$"

Zone6A_Text_MelanieDefeat:
	.string "Sorry I yelled at you…$"

Zone6A_Text_MelaniePostBattle:
	.string "I also need to be careful about\n"
	.string "where I'm going.$"

Zone6A_EventScript_Constance::
	trainerbattle_single TRAINER_CONSTANCE, Zone6A_Text_ConstanceIntro, Zone6A_Text_ConstanceDefeat
	msgbox Zone6A_Text_ConstancePostBattle, MSGBOX_AUTOCLOSE
	end

Zone6A_Text_ConstanceIntro:
	.string "Want to join my picnic?$"

Zone6A_Text_ConstanceDefeat:
	.string "Oops, I forgot to pack food!$"

Zone6A_Text_ConstancePostBattle:
	.string "I can look for some Berries or\n"
	.string "something…$"

Zone6A_EventScript_Frank::
	trainerbattle_single TRAINER_FRANK, Zone6A_Text_FrankIntro, Zone6A_Text_FrankDefeat
	msgbox Zone6A_Text_FrankPostBattle, MSGBOX_AUTOCLOSE
	end

Zone6A_Text_FrankIntro:
	.string "The beach is full of surprises!$"

Zone6A_Text_FrankDefeat:
	.string "This time, I was surprised by you!$"

Zone6A_Text_FrankPostBattle:
	.string "Your skills are astounding!$"

Zone6A_EventScript_Dudley::
	trainerbattle_single TRAINER_DUDLEY, Zone6A_Text_DudleyIntro, Zone6A_Text_DudleyDefeat
	msgbox Zone6A_Text_DudleyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone6A_Text_DudleyIntro:
	.string "You made me miss my catch!$"

Zone6A_Text_DudleyDefeat:
	.string "Argh, there was no catch!\n"
	.string "I'm just frustrated!$"

Zone6A_Text_DudleyPostBattle:
	.string "Sorry for taking out my fishing\n"
	.string "frustration out on you.$"

Zone6A_EventScript_Daisy::
	trainerbattle_single TRAINER_DAISY, Zone6A_Text_DaisyIntro, Zone6A_Text_DaisyDefeat
	msgbox Zone6A_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone6A_Text_DaisyIntro:
	.string "Baby Pokémon are just so cute!$"

Zone6A_Text_DaisyDefeat:
	.string "They're not too great in battle,\n"
	.string "though.$"

Zone6A_Text_DaisyPostBattle:
	.string "I guess these little ones need more\n"
	.string "time to get stronger and evolve!$"

Zone6A_EventScript_Sign::
	msgbox Zone6A_Text_Sign, MSGBOX_SIGN
	end

Zone6A_Text_Sign:
	.string "Trainer Tips!\p"
	.string "You can sort items in the Bag\n"
	.string "using {START_BUTTON}.$"

Zone6A_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: Woah!$"

Zone6A_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: Hey you! You think you're better\n"
	.string "than me or something?$"

Zone6A_EventScript_LeviathanBattle_Text_2:
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: That's what I thought!$"

Zone6A_EventScript_LeviathanBattle_Text_3:
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: Who do you think you are?\p"
	.string "I'm a {COLOR BLUE}Leviathan{COLOR DARK_GRAY}, you know!$"

Zone6A_EventScript_LeviathanBattle_Text_4:
	.string "It suddenly began to rain!$"

Zone6A_EventScript_LeviathanBattle_Text_5:
	.string "Rain, rain, go away…$"

Zone6A_EventScript_LeviathanBattle_Text_6:
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: Woah!\p"
	.string "You're pretty good!\p"
	.string "Here, take this!$"

Zone6A_Text_Mina_PostBattle::
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: I love leaving footprints in the\n"
	.string "sand.\p"
	.string "And tubing! That too.$"
