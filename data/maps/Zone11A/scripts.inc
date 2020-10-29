Zone11A_MapScripts::
	.byte 0

Zone11A_EventScript_Exit::
	lockall
	warp MAP_ZONE11SANCTUARY, 255, 7, 7
	releaseall
	end

Zone11A_EventScript_LeviathanIntro::
	lockall
	applymovement 6, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 6, Common_Movement_WalkRight
	waitmovement 0
	applymovement 6, Common_Movement_WalkRight
	waitmovement 0
	applymovement 6, Common_Movement_WalkRight
	waitmovement 0
	msgbox Zone11A_Text_LeviathanWalkAway, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Zone11A_EventScript_BeginLeviathanBattle
	msgbox Zone11A_Text_LeviathanIThoughtSo, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	applymovement 6, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 6, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 6, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 6, Common_Movement_FaceRight
	waitmovement 0
	releaseall
	end

Zone11A_Text_LeviathanWalkAway:
	.string "{COLOR BLUE}Jake{COLOR DARK_GREY}: Walk away, kid.$"

Zone11A_Text_LeviathanIThoughtSo:
	.string "{COLOR BLUE}Jake{COLOR DARK_GREY}: That's what I thought.$"

Zone11A_EventScript_BeginLeviathanBattle:
	fadeoutbgm 1
	msgbox Zone11A_Text_LeviathanIntro, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_LEVIATHAN6, Zone11A_Text_Leviathan6Defeat
	goto Zone11A_EventScript_Leviathan6Defeated
	end

Zone11A_Text_LeviathanIntro:
	.string "{COLOR BLUE}Jake{COLOR DARK_GREY}: You dare tread in my woods?\p"
	.string "My Farfetch'd will cut you down\n"
	.string "before you even know it!$"

Zone11A_Text_Leviathan6Defeat:
	.string "Jake: If only I had a Stick...$"

Zone11A_EventScript_Leviathan6Defeated:
	setflag FLAG_BEATLEVIATHAN6
	msgbox Zone11A_Text_TakeIt, MSGBOX_AUTOCLOSE
	giveitem ITEM_MACHETE
	msgbox Zone11A_Text_Goodbye, MSGBOX_AUTOCLOSE
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 6
	setflag FLAG_HIDE_LEVIATHAN6
	fadescreenswapbuffers FADE_FROM_BLACK
	setvar VAR_ZONE11A_STATE, 1
	releaseall
	end

Zone11A_Text_TakeIt:
	.string "{COLOR BLUE}Jake{COLOR DARK_GREY}: ....\n"
	.string "Just take it.$"

Zone11A_Text_Goodbye:
	.string "{COLOR BLUE}Jake{COLOR DARK_GREY}: Small trees blocking the way\n"
	.string "will be distant memories.\p"
	.string "I'll be seeing you around.$"

Zone11A_EventScript_CelebiIntro::
	lockall
	goto_if_set FLAG_ZONE11A_CELEBI, Zone11A_EventScript_NoCelebi
	msgbox Zone11A_Text_WouldYouLikePray, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone11A_EventScript_InitiateCelebiBattle
	releaseall
	end

Zone11A_EventScript_NoCelebi:
	msgbox Zone11A_Text_SacredTree, MSGBOX_AUTOCLOSE
	releaseall
	end

Zone11A_Text_SacredTree:
	.string "This appears to be a sacred tree.$"

Zone11A_Text_WouldYouLikePray:
	.string "This appears to be a sacred tree.\p"
	.string "Would you like to respectfully\n"
	.string "kneel and pray?$"

Zone11A_EventScript_InitiateCelebiBattle:
	setflag FLAG_ZONE11A_CELEBI
	msgbox Zone11A_Text_PlayerPrayed, MSGBOX_DEFAULT
	delay 256
	fadeoutbgm 1
	msgbox Zone11A_Text_BrightLight, MSGBOX_DEFAULT
	playmoncry SPECIES_CELEBI, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_CELEBI, 20, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Zone11A_EventScript_DefeatedCelebi
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone11A_EventScript_RanFromCelebi
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone11A_EventScript_RanFromCelebi
	releaseall
	end

Zone11A_EventScript_DefeatedCelebi::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	releaseall
	end

Zone11A_EventScript_RanFromCelebi::
	setvar VAR_0x8004, SPECIES_CELEBI
	goto Common_EventScript_LegendaryFlewAway
	end

Zone11A_Text_PlayerPrayed:
	.string "{PLAYER} knelt and prayed for good\n"
	.string "fortune.$"

Zone11A_Text_BrightLight:
	.string "...\p"
	.string "A bright light!$"

Zone11A_EventScript_Jeanette::
	trainerbattle_single TRAINER_JEANETTE, Zone11A_Text_JeanetteIntro, Zone11A_Text_JeanetteDefeat
	msgbox Zone11A_Text_JeanettePostBattle, MSGBOX_AUTOCLOSE
	end

Zone11A_Text_JeanetteIntro:
	.string "Ugh, another forest maze?\n"
	.string "At least this one doesn't have warps...$"

Zone11A_Text_JeanetteDefeat:
	.string "Another defeat?\n"
	.string "Luck is just not on my side today...$"

Zone11A_Text_JeanettePostBattle:
	.string "I'll see you another day.$"

Zone11A_EventScript_Reginald::
	trainerbattle_single TRAINER_REGINALD, Zone11A_Text_ReginaldIntro, Zone11A_Text_ReginaldDefeat
	msgbox Zone11A_Text_ReginaldPostBattle, MSGBOX_AUTOCLOSE
	end

Zone11A_Text_ReginaldIntro:
	.string "Do you hear the call?$"

Zone11A_Text_ReginaldDefeat:
	.string "The spirits... I can hear their voices!$"

Zone11A_Text_ReginaldPostBattle:
	.string "It might just be the wind whistling,\n"
	.string "but I'm sure the voices are from the\l"
	.string "beyond.$"

Zone11A_EventScript_EmmaandLeo::
	trainerbattle_double TRAINER_EMMA_AND_LEO, Zone11A_Text_EmmaandLeoIntro, Zone11A_Text_EmmaandLeoDefeat, gText_NotEnoughMons
	msgbox Zone11A_Text_EmmaandLeoPostBattle, MSGBOX_DEFAULT
	release
	end

Zone11A_Text_EmmaandLeoIntro:
	.string "Leo: I'm gonna show my girlfriend\n"
	.string "that I'm brave!\p"
	.string "Emma: Ugh. Enforcing gender norms,\n"
	.string "am I right?$"

Zone11A_Text_EmmaandLeoDefeat:
	.string "Leo: My toxic masculinity, ruined!\p"
	.string "Emma: Maybe I need a new SO...$"

Zone11A_Text_EmmaandLeoPostBattle:
	.string "Leo: Don't talk to my girlfriend!\p"
	.string "Emma: Pff.$"

Zone11A_EventScript_Joel::
	trainerbattle_single TRAINER_JOEL, Zone11A_Text_JoelIntro, Zone11A_Text_JoelDefeat
	msgbox Zone11A_Text_JoelPostBattle, MSGBOX_AUTOCLOSE
	end

Zone11A_Text_JoelIntro:
	.string "You snuck up on me!$"

Zone11A_Text_JoelDefeat:
	.string "What a shocker!$"

Zone11A_Text_JoelPostBattle:
	.string "You had the element of surprise.$"

Zone11A_EventScript_SpellTag::
	finditem ITEM_SPELL_TAG
	end

Zone11A_EventScript_WideLens::
	finditem ITEM_WIDE_LENS
	end

Zone11A_EventScript_SuperPotion::
	finditem ITEM_SUPER_POTION
	end

Zone11A_EventScript_FullHeal::
	finditem ITEM_FULL_HEAL
	end
