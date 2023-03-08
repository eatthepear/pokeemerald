Zone5A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE5A_QUICK_BALL, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE5A_TM03, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_5
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST
	return

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
	return


Zone5A_EventScript_LeviathanBattle::
	lockall
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 31
	goto_if_eq Zone5A_EventScript_LeviathanBattle_2
	compare VAR_TEMP_0, 30
	goto_if_eq Zone5A_EventScript_LeviathanBattle_3
	compare VAR_TEMP_0, 29
	goto_if_eq Zone5A_EventScript_LeviathanBattle_4
	compare VAR_TEMP_0, 28
	goto_if_eq Zone5A_EventScript_LeviathanBattle_5
	compare VAR_TEMP_0, 27
	goto_if_eq Zone5A_EventScript_LeviathanBattle_6
Zone5A_EventScript_LeviathanBattle_1:
	setvar VAR_TEMP_0, 0
	setvar VAR_TEMP_1, 0
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone5A_EventScript_LeviathanBattle_13
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone5A_EventScript_LeviathanBattle_13
	msgbox Zone5A_EventScript_LeviathanBattle_Text_1, MSGBOX_YESNO
Zone5A_EventScript_LeviathanBattle_12:
	compare VAR_RESULT, NO
	goto_if_eq Zone5A_EventScript_LeviathanBattle_19
	msgbox Zone5A_EventScript_LeviathanBattle_Text_3
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	trainerbattle_no_intro TRAINER_KEVIN, Zone5A_EventScript_LeviathanBattle_Text_4
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	msgbox Zone5A_EventScript_LeviathanBattle_Text_5
	applymovement 2, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 2, Common_Movement_WalkDown
	waitmovement 0
	applymovement 2, Common_Movement_WalkDown
	waitmovement 0
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone5A_EventScript_LeviathanBattle_Text_6
	fadeoutbgm 1
	applymovement 2, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
	msgbox Zone5A_EventScript_LeviathanBattle_Text_7
	applymovement 2, Common_Movement_WalkDown
	waitmovement 0
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox Zone5A_EventScript_LeviathanBattle_Text_8
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone5A_EventScript_LeviathanBattle_23
Zone5A_EventScript_LeviathanBattle_21:
	setvar VAR_MUGSHOT_ID, MUGSHOT_DECLAN
	trainerbattle_no_intro TRAINER_DECLAN_LEVIATHAN_5, Zone5A_Text_Leviathan5Defeat
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	applymovement 1, Common_Movement_WalkRight
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	msgbox Zone5A_EventScript_LeviathanBattle_Text_9, MSGBOX_DEFAULT
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone5A_EventScript_LeviathanBattle_Text_10
	delay 64
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Zone5A_EventScript_LeviathanBattle_Text_11
	giveitem ITEM_TM04, 1
	closemessage
	msgbox Zone5A_EventScript_LeviathanBattle_Text_12, MSGBOX_DEFAULT
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	msgbox Zone5A_EventScript_LeviathanBattle_Text_13
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 1
	setflag FLAG_BEAT_LEVIATHAN_5
	removeobject 2
	fadescreenswapbuffers FADE_FROM_BLACK
	setvar VAR_ZONE_5_STATE, 1
	release
	end

Zone5A_EventScript_LeviathanBattle_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone5A_EventScript_LeviathanBattle_1

Zone5A_EventScript_LeviathanBattle_3:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone5A_EventScript_LeviathanBattle_1

Zone5A_EventScript_LeviathanBattle_4:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone5A_EventScript_LeviathanBattle_1

Zone5A_EventScript_LeviathanBattle_5:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone5A_EventScript_LeviathanBattle_1

Zone5A_EventScript_LeviathanBattle_6:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone5A_EventScript_LeviathanBattle_1

Zone5A_EventScript_LeviathanBattle_13:
	msgbox Zone5A_EventScript_LeviathanBattle_Text_0, MSGBOX_YESNO
	goto Zone5A_EventScript_LeviathanBattle_12

Zone5A_EventScript_LeviathanBattle_19:
	msgbox Zone5A_EventScript_LeviathanBattle_Text_2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkUp
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	releaseall
	end

Zone5A_EventScript_LeviathanBattle_22:
	special HealPlayerParty
	goto Zone5A_EventScript_LeviathanBattle_21

Zone5A_EventScript_LeviathanBattle_23:
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone5A_EventScript_LeviathanBattle_22
	goto Zone5A_EventScript_LeviathanBattle_21


Zone5A_EventScript_BuyPikaClone::
	lock
	faceplayer
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone5A_EventScript_BuyPikaClone_4
Zone5A_EventScript_BuyPikaClone_3:
	showmoneybox 0, 0, 0
	msgbox Zone5A_EventScript_BuyPikaClone_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone5A_EventScript_BuyPikaClone_7
	checkmoney 3000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_10
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_14
	call EventScript_NuzlockeVerifyGift
	removemoney 3000
	updatemoneybox
	msgbox Zone5A_EventScript_BuyPikaClone_Text_5
	closemessage
	hidemoneybox
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone5A_EventScript_BuyPikaClone_17
	msgbox Zone5A_EventScript_BuyPikaClone_Text_7, MSGBOX_DEFAULT
	multichoice2 21, 0, Zone5A_Text_PikaCloneMultichoice, TRUE
	switch VAR_RESULT
	case 0, Zone5A_EventScript_BuyPikaClone_28
	case 1, Zone5A_EventScript_BuyPikaClone_29
	case 2, Zone5A_EventScript_BuyPikaClone_30
	case 3, Zone5A_EventScript_BuyPikaClone_31
Zone5A_EventScript_BuyPikaClone_16:
	givemon VAR_TEMP_1, 10, ITEM_NONE
	setmonmetlocation VAR_TEMP_2, 250
	bufferspeciesname 0, VAR_TEMP_1
	msgbox Zone5A_EventScript_BuyPikaClone_Text_8, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message Zone5A_EventScript_BuyPikaClone_Text_9
	waitmessage
	waitfanfare
	msgbox Zone5A_EventScript_BuyPikaClone_Text_10, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone5A_EventScript_BuyPikaClone_21
Zone5A_EventScript_BuyPikaClone_20:
	msgbox Zone5A_EventScript_BuyPikaClone_Text_11, MSGBOX_DEFAULT
Zone5A_EventScript_BuyPikaClone_1:
	release
	end

Zone5A_EventScript_BuyPikaClone_2:
	msgbox Zone5A_EventScript_BuyPikaClone_Text_0
	release
	end

Zone5A_EventScript_BuyPikaClone_4:
	goto_if_set FLAG_ZONE5A_NUZLOCKE_BOUGHT_PIKACLONE, Zone5A_EventScript_BuyPikaClone_2
	goto Zone5A_EventScript_BuyPikaClone_3

Zone5A_EventScript_BuyPikaClone_7:
	closemessage
	hidemoneybox
	msgbox Zone5A_EventScript_BuyPikaClone_Text_2
	goto Zone5A_EventScript_BuyPikaClone_1

Zone5A_EventScript_BuyPikaClone_10:
	msgbox Zone5A_EventScript_BuyPikaClone_Text_3
	hidemoneybox
	goto Zone5A_EventScript_BuyPikaClone_1

Zone5A_EventScript_BuyPikaClone_14:
	msgbox Zone5A_EventScript_BuyPikaClone_Text_4
	hidemoneybox
	release
	end

Zone5A_EventScript_BuyPikaClone_17:
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone5A_EventScript_BuyPikaClone_24
	setvar VAR_TEMP_3, 0
	checkspeciesclause SPECIES_DEDENNE
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_33
Zone5A_EventScript_BuyPikaClone_32:
	checkspeciesclause SPECIES_EMOLGA
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_36
Zone5A_EventScript_BuyPikaClone_35:
	checkspeciesclause SPECIES_MORPEKO
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_39
Zone5A_EventScript_BuyPikaClone_38:
	checkspeciesclause SPECIES_PACHIRISU
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_42
Zone5A_EventScript_BuyPikaClone_41:
	compare VAR_TEMP_3, 4
	goto_if_eq Zone5A_EventScript_BuyPikaClone_45
Zone5A_EventScript_BuyPikaClone_47:
	compare VAR_TEMP_1, 0
	goto_if_eq Zone5A_EventScript_BuyPikaClone_48
Zone5A_EventScript_BuyPikaClone_23:
	setflag FLAG_ZONE5A_NUZLOCKE_BOUGHT_PIKACLONE
	goto Zone5A_EventScript_BuyPikaClone_16

Zone5A_EventScript_BuyPikaClone_21:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Zone5A_EventScript_BuyPikaClone_20

Zone5A_EventScript_BuyPikaClone_24:
	setvar VAR_TEMP_1, SPECIES_DEDENNE
	goto Zone5A_EventScript_BuyPikaClone_23

Zone5A_EventScript_BuyPikaClone_28:
	setvar VAR_TEMP_1, SPECIES_DEDENNE
	goto Zone5A_EventScript_BuyPikaClone_16

Zone5A_EventScript_BuyPikaClone_29:
	setvar VAR_TEMP_1, SPECIES_EMOLGA
	goto Zone5A_EventScript_BuyPikaClone_16

Zone5A_EventScript_BuyPikaClone_30:
	setvar VAR_TEMP_1, SPECIES_MORPEKO
	goto Zone5A_EventScript_BuyPikaClone_16

Zone5A_EventScript_BuyPikaClone_31:
	setvar VAR_TEMP_1, SPECIES_PACHIRISU
	goto Zone5A_EventScript_BuyPikaClone_16

Zone5A_EventScript_BuyPikaClone_33:
	addvar VAR_TEMP_3, 1
	goto Zone5A_EventScript_BuyPikaClone_32

Zone5A_EventScript_BuyPikaClone_36:
	addvar VAR_TEMP_3, 1
	goto Zone5A_EventScript_BuyPikaClone_35

Zone5A_EventScript_BuyPikaClone_39:
	addvar VAR_TEMP_3, 1
	goto Zone5A_EventScript_BuyPikaClone_38

Zone5A_EventScript_BuyPikaClone_42:
	addvar VAR_TEMP_3, 1
	goto Zone5A_EventScript_BuyPikaClone_41

Zone5A_EventScript_BuyPikaClone_45:
	msgbox Zone5A_EventScript_BuyPikaClone_Text_6
	addmoney 3000
	release
	end

Zone5A_EventScript_BuyPikaClone_48:
	random 4
	switch VAR_RESULT
	case 0, Zone5A_EventScript_BuyPikaClone_51
	case 1, Zone5A_EventScript_BuyPikaClone_52
	case 2, Zone5A_EventScript_BuyPikaClone_53
	case 3, Zone5A_EventScript_BuyPikaClone_54
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_51:
	checkspeciesclause SPECIES_DEDENNE
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_56
	setvar VAR_TEMP_1, SPECIES_DEDENNE
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_52:
	checkspeciesclause SPECIES_EMOLGA
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_59
	setvar VAR_TEMP_1, SPECIES_EMOLGA
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_53:
	checkspeciesclause SPECIES_MORPEKO
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_62
	setvar VAR_TEMP_1, SPECIES_MORPEKO
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_54:
	checkspeciesclause SPECIES_PACHIRISU
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_65
	setvar VAR_TEMP_1, SPECIES_PACHIRISU
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_56:
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_59:
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_62:
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_65:
	goto Zone5A_EventScript_BuyPikaClone_47


Zone5A_EventScript_ItemQuickBall::
	lock
	goto_if_set FLAG_ITEM_ZONE5A_QUICK_BALL, Zone5A_EventScript_ItemQuickBall_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE5A_QUICK_BALL
	addobject VAR_LAST_TALKED
	finditem ITEM_QUICK_BALL, 1
	release
	end

Zone5A_EventScript_ItemQuickBall_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone5A_EventScript_ItemTM03::
	lock
	goto_if_set FLAG_ITEM_ZONE5A_TM03, Zone5A_EventScript_ItemTM03_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE5A_TM03
	addobject VAR_LAST_TALKED
	finditem ITEM_TM03
	release
	end

Zone5A_EventScript_ItemTM03_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone5A_Text_PikaCloneMultichoice:
    .string "Dedenne$"
    .string "Emolga$"
    .string "Morpeko$"
    .string "Pachirisu$"
    .string "$"

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
	.string "Anne: I guess you were right…\p"
	.string "June: We still lost though…$"

Zone5A_Text_AnneAndJunePostBattle:
	.string "Anne: Maybe we needed better…\p"
	.string "June: Coordination?\p"
	.string "Anne: Yeah, exactly that!$"

Zone5A_EventScript_Gilbert::
	trainerbattle_single TRAINER_GILBERT, Zone5A_Text_GilbertIntro, Zone5A_Text_GilbertDefeat
	msgbox Zone5A_Text_GilbertPostBattle, MSGBOX_AUTOCLOSE
	end

Zone5A_Text_GilbertIntro:
	.string "I've fished up a wild Trainer!$"

Zone5A_Text_GilbertDefeat:
	.string "You're too tough to take down!$"

Zone5A_Text_GilbertPostBattle:
	.string "I can't seem to catch a break!\p"
	.string "Get it? Catch?$"

Zone5A_EventScript_Clinton::
	trainerbattle_single TRAINER_CLINTON, Zone5A_Text_ClintonIntro, Zone5A_Text_ClintonDefeat
	msgbox Zone5A_Text_ClintonPostBattle, MSGBOX_AUTOCLOSE
	end

Zone5A_Text_ClintonIntro:
	.string "Supposedly, item chests that are\n"
	.string "tinted yellow hold special items.$"

Zone5A_Text_ClintonDefeat:
	.string "I don't bother checking them\n"
	.string "though!$"

Zone5A_Text_ClintonPostBattle:
	.string "I can buy all the TMs I want!\n"
	.string "I don't need any item chests!$"

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
	.string "Defeat leaves me in disgrace…$"

Zone5A_EventScript_Ryan::
	trainerbattle_single TRAINER_RYAN, Zone5A_Text_RyanIntro, Zone5A_Text_RyanDefeat
	msgbox Zone5A_Text_RyanPostBattle, MSGBOX_AUTOCLOSE
	end

Zone5A_Text_RyanIntro:
	.string "The second of the Fearsome Foursome!\n"
	.string "That's me!$"

Zone5A_Text_RyanDefeat:
	.string "Second of the Fearsome Foursome down!$"

Zone5A_Text_RyanPostBattle:
	.string "They say second is the best…$"

Zone5A_EventScript_Sign::
	msgbox Zone5A_Text_Sign, MSGBOX_SIGN
	end

Zone5A_EventScript_Caitlyn::
	trainerbattle_single TRAINER_CAITLYN, Zone5A_Text_CaitlynIntro, Zone5A_Text_CaitlynDefeat
	msgbox Zone5A_Text_CaitlynPostBattle, MSGBOX_AUTOCLOSE
	end

Zone5A_Text_CaitlynIntro:
	.string "Fearsome Foursome, number three!\n"
	.string "Be careful, I'm strong!$"

Zone5A_Text_CaitlynDefeat:
	.string "Third of the Fearsome Foursome down!$"

Zone5A_Text_CaitlynPostBattle:
	.string "There's only one left. Don't be afraid!$"

Zone5A_EventScript_Kenneth::
	trainerbattle_single TRAINER_KENNETH, Zone5A_Text_KennethIntro, Zone5A_Text_KennethDefeat
	msgbox Zone5A_Text_KennethPostBattle, MSGBOX_AUTOCLOSE
	end

Zone5A_Text_KennethIntro:
	.string "Heyo, it's me!\n"
	.string "The last Fearsome Foursome!\p"
	.string "Face me in battle!$"

Zone5A_Text_KennethDefeat:
	.string "You've bested the best of us!$"

Zone5A_Text_KennethPostBattle:
	.string "You're the bestest!$"

Zone5A_EventScript_LeviathanBattle_Text_0:
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: So… you beat all the Fearsome\n"
	.string "Foursome.\p"
	.string "Well then. Would you like to face our\n"
	.string "club in battle? You'll have to beat\l"
	.string "both of us in a row, and you won't be\l"
	.string "healed in between battles!$"

Zone5A_EventScript_LeviathanBattle_Text_1:
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: So… you beat all the Fearsome\n"
	.string "Foursome.\p"
	.string "Well then. Would you like to face our\n"
	.string "club in battle? You'll have to beat\l"
	.string "both of us in a row, and you'll be healed\l"
	.string "in between battles!$"

Zone5A_EventScript_LeviathanBattle_Text_2:
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Oh, I see how it is. Scared, huh?$"

Zone5A_EventScript_LeviathanBattle_Text_3:
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Finally! My Bugs are writhing\n"
	.string "with excitement!$"

Zone5A_EventScript_LeviathanBattle_Text_4:
	.string "It can't be!$"

Zone5A_EventScript_LeviathanBattle_Text_5:
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Declan, bro, he beat me!\p"
	.string "It's your turn to show off the power of\n"
	.string "the Bug Enjoyers Club!$"

Zone5A_EventScript_LeviathanBattle_Text_6:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: …\n"
	.string "…\l"
	.string "I told you already, Kevin.\p"
	.string "The club name has to be\n"
	.string "The Bug Maniacs, not\l"
	.string "The Bug Enjoyers.$"

Zone5A_EventScript_LeviathanBattle_Text_7:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Huh? Oh!$"

Zone5A_EventScript_LeviathanBattle_Text_8:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Want to join our club? The\n"
	.string "name: The Bug Maniacs!\p"
	.string "…\n"
	.string "…\l"
	.string "You don't?!\p"
	.string "You'll change your mind after I beat you\n"
	.string "with my fabulous Bug Pokémon!$"

Zone5A_EventScript_LeviathanBattle_Text_9:
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Look, Declan, it's just a name.\p"
	.string "Maybe it doesn't have the right ring or\n"
	.string "something.\p"
	.string "But at least let's train more together.\n"
	.string "Maybe we can beat this trainer next\l"
	.string "time.$"

Zone5A_EventScript_LeviathanBattle_Text_10:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Fine. You're right, you're right.$"

Zone5A_EventScript_LeviathanBattle_Text_11:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Oh! Right. I forgot you're here.\p"
	.string "…\n"
	.string "…\l"
	.string "…\l"
	.string "A reward?\l"
	.string "…\l"
	.string "Look, I don't go around giving out sweet\l"
	.string "rewards to non-club members.\l"
	.string "…\l"
	.string "…\p"
	.string "All right, fine. Take this TM and leave\n"
	.string "me alone!$"

Zone5A_EventScript_LeviathanBattle_Text_12:
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Sheesh. Harsh, much?$"

Zone5A_EventScript_LeviathanBattle_Text_13:
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Oh, shut it. Let's just get out\n"
	.string "of here.$"

Zone5A_EventScript_BuyPikaClone_Text_0:
	.string "Sorry! I'm all out of Pikachu clones for\n"
	.string "sale right now.$"

Zone5A_EventScript_BuyPikaClone_Text_1:
	.string "You seem like the type that would like\n"
	.string "Pikachu!\p"
	.string "Now, I don't have Pikachu for sale, but I\n"
	.string "do have Pachirisu, Emolga, Dedenne, or\l"
	.string "Morpeko, each for only ¥3000!$"

Zone5A_EventScript_BuyPikaClone_Text_2:
	.string "Alrighty, well, you just come on back if\n"
	.string "you change your mind.$"

Zone5A_EventScript_BuyPikaClone_Text_3:
	.string "You don't have enough money.$"

Zone5A_EventScript_BuyPikaClone_Text_4:
	.string "Your party is full. Clear a party slot,\n"
	.string "then come back.$"

Zone5A_EventScript_BuyPikaClone_Text_5:
	.string "I appreciate it!$"

Zone5A_EventScript_BuyPikaClone_Text_6:
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone5A_EventScript_BuyPikaClone_Text_7:
	.string "Choose which Pikachu clone you would\n"
	.string "like.$"

Zone5A_EventScript_BuyPikaClone_Text_8:
	.string "Here's your {STR_VAR_1}.$"

Zone5A_EventScript_BuyPikaClone_Text_9:
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone5A_EventScript_BuyPikaClone_Text_10:
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone5A_EventScript_BuyPikaClone_Text_11:
	.string "Take good care of your new\n"
	.string "Electric-type, small mammal-like\l"
	.string "Pokémon!$"

Zone5A_Text_Leviathan5Defeat::
	.string "But how?! My Bugs!$"

Zone5A_Text_Sign::
	.string "Trainer Tips!\p"
	.string "You can view the current level cap as\n"
	.string "well as the number of remaining foes\l"
	.string "and items in an area by looking at your\l"
	.string "Trainer Card.\p"
	.string "This information changes accordingly\n"
	.string "based on which Zone you are in.$"
