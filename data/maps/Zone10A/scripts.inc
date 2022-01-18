Zone10A_MapScripts::
	.byte 0

Zone10A_EventScript_Adamina::
	lock
	faceplayer
	call_if_unset FLAG_ADAMINA_INTRO, Zone10A_EventScript_AdaminaIntro
	msgbox Zone10A_Text_Explain, MSGBOX_AUTOCLOSE
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD1, Zone10A_EventScript_AdaminaMissingShards
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD2, Zone10A_EventScript_AdaminaMissingShards
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD3, Zone10A_EventScript_AdaminaMissingShards
	goto Zone10A_EventScript_InitiateLeviathanBattle
	release
	end

Zone10A_EventScript_AdaminaIntro:
	msgbox Zone10A_Text_NoChance, MSGBOX_AUTOCLOSE
	setflag FLAG_ADAMINA_INTRO
	return

Zone10A_Text_NoChance:
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Nope.\n"
	.string "No chance you're getting in.\p"
	.string "Zero.\n"
	.string "Zip.\l"
	.string "Zilch.\l"
	.string "...\l"
	.string "...\l"
	.string "...\l"
	.string "Fine.$"

Zone10A_Text_Explain:
	.string "If you really want to get in,\n"
	.string "you have to earn your place.\p"
	.string "In the desert, there are 3 hidden\n"
	.string "Yellow Shards.\p"
	.string "Find them and bring them to me.\n"
	.string "Then we'll see.$"

Zone10A_EventScript_AdaminaMissingShards:
	release
	end

Zone10A_EventScript_InitiateLeviathanBattle:
	fadeoutbgm 1
	msgbox Zone10A_Text_FoundEm, MSGBOX_AUTOCLOSE
	delay 96
	msgbox Zone10A_Text_CrushYou, MSGBOX_AUTOCLOSE
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	setvar VAR_MUGSHOT_ID, MUGSHOT_ADAMINA
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone10A_EventScript_AdaminaBrutal
	trainerbattle_no_intro TRAINER_LEVIATHAN5, Zone10A_Text_Leviathan5Defeat
	goto Zone10A_EventScript_Leviathan5Defeated
	end

Zone10A_EventScript_AdaminaBrutal:
	trainerbattle_no_intro TRAINER_LEVIATHAN5_BRUTAL, Zone10A_Text_Leviathan5Defeat
	goto Zone10A_EventScript_Leviathan5Defeated
	end

Zone10A_Text_FoundEm:
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Oh, wow, you actually\n"
	.string "found them? What a surprise.$"

Zone10A_Text_CrushYou:
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Oh, were you expecting me\n"
	.string "to let you in just because you\l"
	.string "found some scraps? No way.\p"
	.string "You'll have to beat me in a battle\n"
	.string "to earn my respect!\l"
	.string "I'm gonna crush you!$"

Zone10A_Text_Leviathan5Defeat:
	.string "Adamina: Fine. A win is a win.$"

Zone10A_EventScript_Leviathan5Defeated:
	setflag FLAG_BEATLEVIATHAN5
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	msgbox Zone10A_Text_HeadInside, MSGBOX_AUTOCLOSE
	applymovement 6, Common_Movement_FaceUp
	waitmovement 0
	opendoor 47, 27
	waitdooranim
	applymovement 6, Common_Movement_WalkUp
	waitmovement 0
	removeobject VAR_LAST_TALKED
	setflag FLAG_HIDE_LEVIATHAN5
	closedoor 47, 27
	waitdooranim
	releaseall
	end

Zone10A_Text_HeadInside:
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Go on, head inside.\n"
	.string "I've got nothing for you.$"

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

Zone10A_EventScript_Kyle::
	trainerbattle_single TRAINER_KYLE, Zone10A_Text_KyleIntro, Zone10A_Text_KyleDefeat
	msgbox Zone10A_Text_KylePostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_KyleIntro:
	.string "I daydream a lot. It's a bad habit!$"

Zone10A_Text_KyleDefeat:
	.string "I dream of one day winning...$"

Zone10A_Text_KylePostBattle:
	.string "I'll be a champion some day, just you wait!$"

Zone10A_EventScript_Alana::
	trainerbattle_single TRAINER_ALANA, Zone10A_Text_AlanaIntro, Zone10A_Text_AlanaDefeat
	msgbox Zone10A_Text_AlanaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_AlanaIntro:
	.string "Conrad told me to come here for our date,\n"
	.string "but he's nowhere to be found!$"

Zone10A_Text_AlanaDefeat:
	.string "I wonder if I got stood up...$"

Zone10A_Text_AlanaPostBattle:
	.string "No way, a woman like me getting stood up?\n"
	.string "He probably just got lost.$"

Zone10A_EventScript_Dewey::
	trainerbattle_single TRAINER_DEWEY, Zone10A_Text_DeweyIntro, Zone10A_Text_DeweyDefeat
	msgbox Zone10A_Text_DeweyPostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_DeweyIntro:
	.string "My party is so worn down...\n"
	.string "Maybe they'll be reenergized after\l"
	.string "battle!$"

Zone10A_Text_DeweyDefeat:
	.string "Hmm...\n"
	.string "I don't think they gained any energy...$"

Zone10A_Text_DeweyPostBattle:
	.string "Maybe I need to rest instead.$"

Zone10A_EventScript_Conrad::
	trainerbattle_single TRAINER_CONRAD, Zone10A_Text_ConradIntro, Zone10A_Text_ConradDefeat
	msgbox Zone10A_Text_ConradPostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_ConradIntro:
	.string "I'm looking for my date.\n"
	.string "Have you seen her?$"

Zone10A_Text_ConradDefeat:
	.string "She probably thinks I stood her up...$"

Zone10A_Text_ConradPostBattle:
	.string "Not a great first impression,\n"
	.string "if I'm being honest.$"

Zone10A_EventScript_BlackGlasses::
	finditem ITEM_BLACK_GLASSES
	end

Zone10A_EventScript_BlackBelt::
	finditem ITEM_BLACK_BELT
	end

Zone10A_EventScript_TimerBall::
	finditem ITEM_TIMER_BALL
	end

Zone10A_EventScript_Charcoal::
	finditem ITEM_CHARCOAL
	end

Zone10A_EventScript_Ether::
	finditem ITEM_ETHER
	end

Zone10A_EventScript_SuperRepel::
	finditem ITEM_SUPER_REPEL
	end
