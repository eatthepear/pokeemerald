Zone10A_MapScripts::
	.byte 0

Zone10A_EventScript_Adamina::
	lock
	faceplayer
	msgbox Zone10A_Text_NoChance, MSGBOX_AUTOCLOSE
	release
	end

Zone10A_Text_NoChance:
	.string "{COLOR BLUE}Adamina{COLOR DARK_GREY}: Nope.\n"
	.string "No chance you're getting in.\p"
	.string "Zero.\n"
	.string "Zip.\l"
	.string "Zilch.\l"
	.string "...\l"
	.string "...\l"
	.string "...\l"
	.string "Fine.\p"
	.string "If you really want to get in,\n"
	.string "you have to earn your place.\p"
	.string "In the desert, there are 3 hidden\n"
	.string "Yellow Shards.\p"
	.string "Find them and bring them to me.\n"
	.string "Then we'll see.$"

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
	.string "Maybe they'll be reenergized after battle!$"

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
