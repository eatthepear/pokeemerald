Zone0A_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone0A_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, Zone0A_OnTransition
	.byte 0

Zone0A_OnFrame:
	map_script_2 VAR_ZONE0_WARPS, 0, Zone0A_EventScript_Intro
	.2byte 0

Zone0A_OnTransition: @ 81F3983
	call Zone0A_EventScript_TryMoveDayCareMan
	end

Zone0A_EventScript_TryMoveDayCareMan::
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Zone0A_EventScript_StopMoveDayCareMan
	setobjectxyperm 1, 22, 9
Zone0A_EventScript_StopMoveDayCareMan::
	return

Zone0A_EventScript_Intro:
	lockall
	call EventScript_MoveCameraUp
	applymovement 1, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	playse SE_PIN
	waitmovement 0
	waitse
	call EventScript_MoveCameraDown
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	applymovement 1, Common_Movement_WalkDown
	waitmovement 0
	msgbox Zone0A_Text_Intro, MSGBOX_AUTOCLOSE
	giveitem ITEM_WAILMER_PAIL
	msgbox Zone0A_Text_End, MSGBOX_AUTOCLOSE
	applymovement 1, Common_Movement_WalkUp
	waitmovement 0
	applymovement 1, Common_Movement_WalkUp
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	setvar VAR_ZONE0_WARPS, 1
	releaseall
	end

Zone0A_Text_Intro:
	.string "Hello, {PLAYER}.\n"
	.string "I'm the Day-Care Man.\p"
	.string "Welcome to my home.\p"
	.string "There are no trainers here, no\n"
	.string "challenges to face. Everything is\l"
	.string "meant to help you on your journey.\p"
	.string "Zone 0 has three main attractions:\n"
	.string "The {COLOR RED}Pokémon Day Care{COLOR DARK_GRAY}, which I run;\l"
	.string "the purple building, or the {COLOR RED}TPI{COLOR DARK_GRAY},\l"
	.string "which gives access to warp\l"
	.string "technology; and the {COLOR RED}Berry fields{COLOR DARK_GRAY}.\p"
	.string "For the Berry fields, you'll want\n"
	.string "to have this.$"

Zone0A_Text_End:
	.string "I definitely suggest exploring as\n"
	.string "this place was built to help\l"
	.string "Trainers such as yourself.$"

Zone0A_EventScript_DaycareMan::
	lock
	faceplayer
	special GetDaycareMonNicknames
	specialvar VAR_RESULT, GetDaycareState
	compare VAR_RESULT, DAYCARE_EGG_WAITING
	goto_if_eq Zone0A_EventScript_DaycareEggWaiting
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq Zone0A_EventScript_CheckOnOneMon
	compare VAR_RESULT, DAYCARE_TWO_MONS
	goto_if_eq Zone0A_EventScript_CheckOnTwoMons
	msgbox Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon, MSGBOX_DEFAULT
	release
	end

Zone0A_EventScript_DaycareEggWaiting:
	msgbox Zone0A_Text_DoYouWantEgg, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
	msgbox Zone0A_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
	msgbox Zone0A_Text_IllKeepIt, MSGBOX_DEFAULT
	clearflag FLAG_PENDING_DAYCARE_EGG
	special RejectEggFromDayCare
	release
	end

Zone0A_EventScript_DaycareAcceptEgg:
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ne Zone0A_EventScript_DaycareReceiveEgg
	msgbox Zone0A_Text_YouHaveNoRoomForIt, MSGBOX_DEFAULT
	release
	end

Zone0A_EventScript_DaycareReceiveEgg:
	message Zone0A_Text_ReceivedEgg
	playfanfare MUS_LEVEL_UP
	waitfanfare
	waitbuttonpress
	msgbox Zone0A_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
	special GiveEggFromDaycare
	clearflag FLAG_PENDING_DAYCARE_EGG
	release
	end

Zone0A_EventScript_CheckOnOneMon:
	special GetDaycareMonNicknames
	msgbox Zone0A_Text_YourMonIsDoingFine, MSGBOX_DEFAULT
	release
	end

Zone0A_EventScript_CheckOnTwoMons:
	special GetDaycareMonNicknames
	msgbox Zone0A_Text_YourMonsAreDoingFine, MSGBOX_DEFAULT
	special SetDaycareCompatibilityString
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	release
	end

Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon:
	.string "I'm the Day-Care Man.\p"
	.string "I help take care of the precious\n"
	.string "Pokémon of Trainers.\p"
	.string "If you'd like me to raise your Pokémon,\n"
	.string "have a word with my wife.$"

Zone0A_Text_DoYouWantEgg:
	.string "Ah, it's you!\p"
	.string "We were raising your Pokémon,\n"
	.string "and my goodness, were we surprised!\p"
	.string "Your Pokémon had an Egg!\p"
	.string "We don't know how it got there,\n"
	.string "but your Pokémon had it.\p"
	.string "You do want it, yes?$"

Zone0A_Text_YourMonIsDoingFine:
	.string "Ah, it's you! Good to see you.\n"
	.string "Your {STR_VAR_1}'s doing fine.$"

Zone0A_Text_IllKeepIt:
	.string "Well then, I'll keep it.\n"
	.string "Thanks!$"

Zone0A_Text_YouHaveNoRoomForIt:
	.string "You have no room for it…\n"
	.string "Come back when you've made room.$"

Zone0A_Text_ReceivedEgg:
	.string "{PLAYER} received the Egg from\n"
	.string "the Day-Care Man.$"

Zone0A_Text_TakeGoodCareOfIt:
	.string "Take good care of it.$"

Zone0A_Text_YourMonsAreDoingFine:
	.string "Ah, it's you! Your {STR_VAR_1} and\n"
	.string "{STR_VAR_2} are doing fine.$"

Zone0A_Text_IWillKeepDoYouWantIt:
	.string "I really will keep it.\n"
	.string "You do want this, yes?$"

Zone0A_EventScript_DayCareSign::
	msgbox Zone0A_Text_DayCareSign, MSGBOX_SIGN
	end

Zone0A_EventScript_TPISign::
	msgbox Zone0A_Text_TPISign, MSGBOX_SIGN
	end

Zone0A_Text_DayCareSign:
	.string "Pokémon Day Care\n"
	.string "8 Generations and counting!$"

Zone0A_Text_TPISign:
	.string "Teleport Institue\n"
	.string "Getting around, easy peasy.$"
