Zone5A_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Zone5A_OnTransition
	.byte 0

Zone5A_OnTransition:
	goto_if_set FLAG_BEATLEVIATHAN2 Zone5A_EventScript_MoveLeviathan
	end

Zone5A_EventScript_MoveLeviathan:
	setobjectxyperm 4, 28, 9
	end

Zone5A_EventScript_AnneAndJune::
	trainerbattle_double TRAINER_ANNE_AND_JUNE, Zone5A_Text_AnneAndJuneIntro, Zone5A_Text_AnneAndJuneDefeat, gText_NotEnoughMons
	msgbox Zone5A_Text_AnneAndJunePostBattle, MSGBOX_DEFAULT
	release
	end

Zone5A_Text_AnneAndJuneIntro:
	.string "Anne: We're teammates!\p"
	.string "June: No, I'm the Senior and\n"
	.string "you're the Junior!$"

Zone5A_Text_AnneAndJuneDefeat:
	.string "Anne: I guess you were right...\p"
	.string "June: We still lost though...$"

Zone5A_Text_AnneAndJunePostBattle:
	.string "Anne: Maybe we needed better...\p"
	.string "June: Coordination?\p"
	.string "Anne: Yeah, exactly that!$"

Zone5A_EventScript_Rebecca::
	trainerbattle_single TRAINER_REBECCA, Zone5A_Text_RebeccaIntro, Zone5A_Text_RebeccaDefeat
	msgbox Zone5A_Text_RebeccaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone5A_Text_RebeccaIntro:
	.string "In order to pass, you have to beat\n"
	.string "the Fearsome Foursome!$"

Zone5A_Text_RebeccaDefeat:
	.string "First of the Fearsome Foursome down!$"

Zone5A_Text_RebeccaPostBattle:
	.string "Defeat leaves me in disgrace...$"

Zone5A_EventScript_Caitlyn::
	trainerbattle_single TRAINER_CAITLYN, Zone5A_Text_CaitlynIntro, Zone5A_Text_CaitlynDefeat
	msgbox Zone5A_Text_CaitlynPostBattle, MSGBOX_AUTOCLOSE
	end

Zone5A_Text_CaitlynIntro:
	.string "The second of the Fearsome Foursome!\n"
	.string "That's me!$"

Zone5A_Text_CaitlynDefeat:
	.string "Second of the Fearsome Foursome down!$"

Zone5A_Text_CaitlynPostBattle:
	.string "They say second is the best...$"

Zone5A_EventScript_Ryan::
	trainerbattle_single TRAINER_RYAN, Zone5A_Text_RyanIntro, Zone5A_Text_RyanDefeat
	msgbox Zone5A_Text_RyanPostBattle, MSGBOX_AUTOCLOSE
	end

Zone5A_Text_RyanIntro:
	.string "Fearsome Foursome, number three!\n"
	.string "Be careful, I'm strong!$"

Zone5A_Text_RyanDefeat:
	.string "Third of the Fearsome Foursome down!$"

Zone5A_Text_RyanPostBattle:
	.string "There's only one left. Don't be afraid!$"

Zone5A_EventScript_InitiateLeviathanBattle::
	lock
	goto_if_set FLAG_BEATLEVIATHAN2, Zone5A_EventScript_DontTalk
	fadeoutbgm 1
	msgbox Zone5A_Text_Leviathan2Intro1, MSGBOX_AUTOCLOSE
	applymovement 4, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	faceplayer
	msgbox Zone5A_Text_Leviathan2Intro2, MSGBOX_AUTOCLOSE
	totemboost_def1 B_POSITION_OPPONENT_LEFT
	trainerbattle_no_intro TRAINER_LEVIATHAN2, Zone5A_Text_Leviathan2Defeat
	goto Zone5A_EventScript_Leviathan2Defeated
	end

Zone5A_EventScript_Leviathan2Defeated:
	setflag FLAG_BEATLEVIATHAN2
	msgbox Zone5A_Text_Leviathan2Reward, MSGBOX_AUTOCLOSE
	giveitem ITEM_RED_SHARD, 5
	closemessage
	applymovement 4, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 4, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	warp MAP_ZONE5SANCTUARY, 255, 7, 7
	releaseall
	end

Zone5A_EventScript_DontTalk:
	msgbox Zone5A_Text_Leviathan2Defeated, MSGBOX_AUTOCLOSE
	release
	end

Zone5A_Text_Leviathan2Defeated:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Don't talk to me!\n"
	.string "I'm brooding.$"

Zone5A_Text_Leviathan2Intro1:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: ...\n"
	.string "...\l"
	.string "Stupid kids...\l"
	.string "...\l"
	.string "I don't want to be part of that\l"
	.string "nonsense Fearsome Foursome club...\l"
	.string "...\l"
	.string "My club is the only club for me...$"

Zone5A_Text_Leviathan2Intro2:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Hey you! Want to join my\n"
	.string "club? The name: The Bug Maniacs!\p"
	.string "... You don't?!\p"
	.string "You'll change your mind after\n"
	.string "{COLOR BLUE}Leviathan Declan{COLOR DARK_GRAY} beats you with his\l"
	.string "fabulous Bug Pokémon!$"

Zone5A_Text_Leviathan2Defeat:
	.string "Declan: But how?! My Bugs!$"

Zone5A_Text_Leviathan2Reward:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Fine. You got me. You don't\n"
	.string "have to join my club. \p"
	.string "A reward?\n"
	.string "...\l"
	.string "Look, I don't go around giving out\l"
	.string "sweet rewards to non-club members.\l"
	.string "...\l"
	.string "...\p"
	.string "You can have these Shards I found.\n"
	.string "They're no use for my fabulous\l"
	.string "Bug Pokémon anyways.$"

Zone5A_EventScript_ItemQuickBall::
	finditem ITEM_QUICK_BALL
	end

Zone5A_EventScript_Item1000::
	lock
	showmoneybox 0, 0, 0
	addmoney 1000, 0
	playfanfare MUS_OBTAIN_ITEM
	msgbox Zone5A_Text_Found1000, MSGBOX_DEFAULT
	updatemoneybox 0, 0
	waitfanfare
	hidemoneybox
	setflag FLAG_ITEM_ZONE5A_1000
	removeobject 6
	release
	end

Zone5A_Text_Found1000:
	.string "Found ¥1000!$"

Zone5A_EventScript_ItemFullHeal::
	finditem ITEM_FULL_HEAL
	end
