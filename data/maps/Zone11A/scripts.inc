Zone11A_MapScripts::
	.byte 0

Zone11A_EventScript_Exit::
	lockall
	compare VAR_ZONE, 11
	goto_if_gt EventScript_WarpZone0
	warp MAP_ZONE11SANCTUARY, 255, 22, 7
	releaseall
	end

Zone11A_EventScript_LeviathanIntro::
	lockall
	applymovement 6, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	waitse
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
	.string "{COLOR BLUE}Jake{COLOR DARK_GRAY}: You should not be here.\n"
	.string "Walk away.$"

Zone11A_Text_LeviathanIThoughtSo:
	.string "{COLOR BLUE}Jake{COLOR DARK_GRAY}: Don't come back.$"

Zone11A_EventScript_BeginLeviathanBattle:
	fadeoutbgm 1
	msgbox Zone11A_Text_LeviathanIntro, MSGBOX_AUTOCLOSE
	setvar VAR_MUGSHOT_ID, MUGSHOT_JAKE
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone11A_EventScript_JakeBrutal
	totemboost_speed2 B_POSITION_OPPONENT_LEFT
	trainerbattle_no_intro TRAINER_LEVIATHAN6, Zone11A_Text_Leviathan6Defeat
	goto Zone11A_EventScript_Leviathan6Defeated
	end

Zone11A_EventScript_JakeBrutal:
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 0, 2, 0, 0
	trainerbattle_no_intro TRAINER_LEVIATHAN6_BRUTAL, Zone11A_Text_Leviathan6Defeat
	goto Zone11A_EventScript_Leviathan6Defeated
	end

Zone11A_Text_LeviathanIntro:
	.string "{COLOR BLUE}Jake{COLOR DARK_GRAY}: You dare tread in my woods?\p"
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
	.string "{COLOR BLUE}Jake{COLOR DARK_GRAY}: ....\n"
	.string "Just take it.$"

Zone11A_Text_Goodbye:
	.string "{COLOR BLUE}Jake{COLOR DARK_GRAY}: Small trees blocking the way\n"
	.string "will be distant memories.\p"
	.string "Goodbye.$"

Zone11A_EventScript_CelebiIntro::
	lockall
	goto Zone11A_EventScript_NoCelebi
	releaseall
	end

Zone11A_EventScript_NoCelebi:
	msgbox Zone11A_Text_SacredTree, MSGBOX_AUTOCLOSE
	releaseall
	end

Zone11A_Text_SacredTree:
	.string "This appears to be a sacred tree.$"

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

Zone11A_EventScript_Regina::
	trainerbattle_single TRAINER_REGINA, Zone11A_Text_ReginaIntro, Zone11A_Text_ReginaDefeat
	msgbox Zone11A_Text_ReginaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone11A_Text_ReginaIntro:
	.string "Do you hear the call?$"

Zone11A_Text_ReginaDefeat:
	.string "The spirits... I can hear their voices!$"

Zone11A_Text_ReginaPostBattle:
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

Zone11A_EventScript_TM09::
	finditem ITEM_TM09
	end

Zone11A_EventScript_TM10::
	finditem ITEM_TM10
	end
