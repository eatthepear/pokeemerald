Zone10A_MapScripts::
	.byte 0


Zone10A_EventScript_Adamina::
	lock
	faceplayer
	goto_if_unset FLAG_ADAMINA_INTRO, Zone10A_EventScript_Adamina_2
Zone10A_EventScript_Adamina_1:
	msgbox Zone10A_Text_Explain
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD1, Zone10A_EventScript_Adamina_5
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD2, Zone10A_EventScript_Adamina_5
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD3, Zone10A_EventScript_Adamina_5
	fadeoutbgm 1
	msgbox Zone10A_Text_FoundEm
	delay 96
	msgbox Zone10A_Text_CrushYou
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	setvar VAR_MUGSHOT_ID, MUGSHOT_ADAMINA
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone10A_EventScript_Adamina_12
	trainerbattle_no_intro TRAINER_ADAMINA_LEVIATHAN_10, Zone10A_Text_Leviathan5Defeat
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
	setflag FLAG_BEAT_LEVIATHAN_5
	closedoor 47, 27
	waitdooranim
	release
	end

Zone10A_EventScript_Adamina_2:
	msgbox Zone10A_Text_NoChance
	setflag FLAG_ADAMINA_INTRO
	goto Zone10A_EventScript_Adamina_1

Zone10A_EventScript_Adamina_5:
	release
	end

Zone10A_EventScript_Adamina_12:
	trainerbattle_no_intro TRAINER_ADAMINA_LEVIATHAN_10_BRUTAL, Zone10A_Text_Leviathan5Defeat
	goto Zone10A_EventScript_Adamina_11


Zone10A_EventScript_Kyle::
	trainerbattle_single TRAINER_KYLE, Zone10A_Text_KyleIntro, Zone10A_Text_KyleDefeat
	msgbox Zone10A_Text_KylePostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_KyleIntro:
	.string "I daydream a lot. It's a bad habit!$"

Zone10A_Text_KyleDefeat:
	.string "I dream of one day winning…$"

Zone10A_Text_KylePostBattle:
	.string "I'll be a champion some day, just you wait!$"

Zone10A_EventScript_Crystal::
	trainerbattle_single TRAINER_CRYSTAL, Zone10A_Text_CrystalIntro, Zone10A_Text_CrystalDefeat
	msgbox Zone10A_Text_CrystalPostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_CrystalIntro:
	.string "I see… I see the future…$"

Zone10A_Text_CrystalDefeat:
	.string "I see myself wallowing in defeat…$"

Zone10A_Text_CrystalPostBattle:
	.string "I see you reaching great heights!$"

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
	
Zone10A_EventScript_Raphael::
	trainerbattle_single TRAINER_RAPHAEL, Zone10A_Text_RaphaelIntro, Zone10A_Text_RaphaelDefeat
	msgbox Zone10A_Text_RaphaelPostBattle, MSGBOX_AUTOCLOSE
	end

Zone10A_Text_RaphaelIntro:
	.string "Have you ever faced the might of\n"
	.string "dragons?$"

Zone10A_Text_RaphaelDefeat:
	.string "What?\n"
	.string "You bested the might of dragons?$"

Zone10A_Text_RaphaelPostBattle:
	.string "Argh!\n"
	.string "If only Fairy-types didn't exist!$"

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

Zone10A_EventScript_SuperPotion::
	finditem ITEM_SUPER_POTION
	end

Zone10A_EventScript_SuperRepel::
	finditem ITEM_SUPER_REPEL
	end

Zone10A_Text_NoChance::
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Nope.\n"
	.string "No chance you're getting in.\p"
	.string "Zero.\n"
	.string "Zip.\l"
	.string "Zilch.\l"
	.string "...\l"
	.string "...\l"
	.string "...\l"
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

Zone10A_Text_Leviathan5Defeat::
	.string "Adamina: Fine. A win is a win.$"

Zone10A_Text_HeadInside::
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Go on, head inside.\n"
	.string "I've got nothing for you.$"
