Zone7B_MapScripts::
	.byte 0

Zone7B_EventScript_Lady::
	lock
	faceplayer
	goto_if_set FLAG_BRUTAL_MODE_ON, Zone7B_EventScript_AlreadyHealed
	goto_if_set FLAG_ZONE7_HEAL_USED, Zone7B_EventScript_AlreadyHealed
	msgbox Zone7B_Text_WantToHeal, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Zone7B_EventScript_Heal
	msgbox Zone7B_Text_ComeBack, MSGBOX_AUTOCLOSE
	release
	end

Zone7B_EventScript_AlreadyHealed:
	msgbox Zone7B_Text_GoodLuck, MSGBOX_AUTOCLOSE
	release
	end

Zone7B_EventScript_Heal:
	msgbox Zone7B_Text_RestWell, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	fadescreen FADE_FROM_BLACK
	setflag FLAG_ZONE7_HEAL_USED
	goto Zone7B_EventScript_AlreadyHealed
	end

Zone7B_Text_WantToHeal:
	.string "Greetings, child.\n"
	.string "To ease your journey, you may rest\l"
	.string "at my humble home.\p"
	.string "I only have enough medicine to\n"
	.string "heal your Pokémon once though.\p"
	.string "Would you like to rest, child?$"

Zone7B_Text_RestWell:
	.string "Rest well, child.$"

Zone7B_Text_GoodLuck:
	.string "Best of luck on your journey, child.$"

Zone7B_Text_ComeBack:
	.string "Come back when you need to rest, child.$"
