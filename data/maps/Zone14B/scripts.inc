Zone14B_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone14B_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_TRANSITION, Zone14B_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Zone14B_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE14B_HYPER_POTION, Zone14B_MapScripts_MAP_SCRIPT_ON_RESUME_1
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone14B_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return

Zone14B_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflashlevel 4
	return


Zone14B_EventScript_LeviathanBattle::
	lock
	faceplayer
	fadeoutbgm 1
	msgbox Zone14B_Text_Leviathan12Intro
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone14B_EventScript_LeviathanBattle_2
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone14B_EventScript_LeviathanBattle_2
	setvar VAR_MUGSHOT_ID, MUGSHOT_MIGUEL
	trainerbattle_no_intro TRAINER_MIGUEL_LEVIATHAN_12, Zone14B_Text_Leviathan12Defeat
Zone14B_EventScript_LeviathanBattle_1:
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone14B_EventScript_LeviathanBattle_Text_0
	additem ITEM_CHILAN_BERRY
	additem ITEM_OCCA_BERRY
	additem ITEM_PASSHO_BERRY
	additem ITEM_WACAN_BERRY
	additem ITEM_RINDO_BERRY
	additem ITEM_YACHE_BERRY
	additem ITEM_CHOPLE_BERRY
	additem ITEM_KEBIA_BERRY
	additem ITEM_SHUCA_BERRY
	additem ITEM_COBA_BERRY
	additem ITEM_PAYAPA_BERRY
	additem ITEM_TANGA_BERRY
	additem ITEM_CHARTI_BERRY
	additem ITEM_KASIB_BERRY
	additem ITEM_HABAN_BERRY
	additem ITEM_COLBUR_BERRY
	additem ITEM_BABIRI_BERRY
	additem ITEM_ROSELI_BERRY
	playfanfare MUS_OBTAIN_ITEM
	msgbox Zone14B_EventScript_LeviathanBattle_Text_1, MSGBOX_DEFAULT
	waitfanfare
	msgbox Zone14B_EventScript_LeviathanBattle_Text_2
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 4
	setflag FLAG_BEAT_LEVIATHAN_12
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

Zone14B_EventScript_LeviathanBattle_2:
	setvar VAR_MUGSHOT_ID, MUGSHOT_MIGUEL
	trainerbattle_no_intro TRAINER_MIGUEL_LEVIATHAN_12_BRUTAL, Zone14B_Text_Leviathan12Defeat
	goto Zone14B_EventScript_LeviathanBattle_1


Zone14B_EventScript_HyperPotion::
	lock
	goto_if_set FLAG_ITEM_ZONE14B_HYPER_POTION, Zone14B_EventScript_HyperPotion_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE14B_HYPER_POTION
	addobject VAR_LAST_TALKED
	finditem ITEM_HYPER_POTION, 1
	release
	end

Zone14B_EventScript_HyperPotion_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone14B_EventScript_Randolph::
	trainerbattle_single TRAINER_RANDOLPH, Zone14B_Text_RandolphIntro, Zone14B_Text_RandolphDefeat
	msgbox Zone14B_Text_RandolphPostBattle, MSGBOX_AUTOCLOSE
	end

Zone14B_Text_RandolphIntro:
	.string "You distracted me from my search!$"

Zone14B_Text_RandolphDefeat:
	.string "The search for cool Pokémon!$"

Zone14B_Text_RandolphPostBattle:
	.string "I guess you have some cool Pokémon.$"

Zone14B_EventScript_Todd::
	trainerbattle_single TRAINER_TODD, Zone14B_Text_ToddIntro, Zone14B_Text_ToddDefeat
	msgbox Zone14B_Text_ToddPostBattle, MSGBOX_AUTOCLOSE
	end

Zone14B_Text_ToddIntro:
	.string "Hohoho!\n"
	.string "What a great place to work!$"

Zone14B_Text_ToddDefeat:
	.string "Hohoho!\n"
	.string "What a terrible place to lose!$"

Zone14B_Text_ToddPostBattle:
	.string "Hohoho!$"

Zone14B_EventScript_Russell::
	trainerbattle_single TRAINER_RUSSELL, Zone14B_Text_RussellIntro, Zone14B_Text_RussellDefeat
	msgbox Zone14B_Text_RussellPostBattle, MSGBOX_AUTOCLOSE
	end

Zone14B_Text_RussellIntro:
	.string "In this old, abandoned mine,\n"
	.string "training is the best thing I can do\l"
	.string "for me and my Pokémon!$"

Zone14B_Text_RussellDefeat:
	.string "I'm sorry, my Pokémon!$"

Zone14B_Text_RussellPostBattle:
	.string "We'll just have to train harder for\n"
	.string "next time!$"

Zone14B_EventScript_Otis::
	trainerbattle_single TRAINER_OTIS, Zone14B_Text_OtisIntro, Zone14B_Text_OtisDefeat
	msgbox Zone14B_Text_OtisPostBattle, MSGBOX_AUTOCLOSE
	end

Zone14B_Text_OtisIntro:
	.string "It takes extreme patience to raise\n"
	.string "Dragons.$"

Zone14B_Text_OtisDefeat:
	.string "Do you have what it takes?$"

Zone14B_Text_OtisPostBattle:
	.string "These little ones are quite the\n"
	.string "handful. Just wait until they\l"
	.string "evolve!$"

Zone14B_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Miguel{COLOR DARK_GRAY}: Oh… You're not here to cause\n"
	.string "trouble?\p"
	.string "You're just passing through?\p"
	.string "Well, I'm sorry about that! I get really\n"
	.string "riled up about protecting spaces for\l"
	.string "wild Pokémon.\p"
	.string "Here, as an apology, take these.$"

Zone14B_EventScript_LeviathanBattle_Text_1:
	.string "Obtained type-resisting Berries!$"

Zone14B_EventScript_LeviathanBattle_Text_2:
	.string "{COLOR BLUE}Miguel{COLOR DARK_GRAY}: Those Berries are especially\n"
	.string "useful if your Pokémon has a 4x\l"
	.string "weakness to a particular type.\p"
	.string "Alrighty, I'm going to check on other\n"
	.string "sections of the mine, to see if I can go\l"
	.string "catch the delinquents.\p"
	.string "You're free to pass through, so long as\n"
	.string "you don't disturb the wildlife.$"

Zone14B_Text_Leviathan12Intro::
	.string "{COLOR BLUE}Miguel{COLOR DARK_GRAY}: Hey you! You must be one of\n"
	.string "those delinquents causing trouble in\l"
	.string "this old mine!\p"
	.string "I've told you kids a hundred times, this\n"
	.string "area is off limits because it's a\l"
	.string "protected wild Pokémon habitat.\p"
	.string "All right, here's a lesson that'll teach\n"
	.string "you to stay out of places you aren't\l"
	.string "supposed to be!$"

Zone14B_Text_Leviathan12Defeat::
	.string "Wait, you're not a delinquent?$"
