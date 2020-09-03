Zone6A_MapScripts::
	.byte 0

Zone6A_EventScript_Frank::
	trainerbattle_single TRAINER_FRANK, Zone6A_Text_FrankIntro, Zone6A_Text_FrankDefeat
	msgbox Zone6A_Text_FrankPostBattle, MSGBOX_AUTOCLOSE
	end

Zone6A_Text_FrankIntro:
	.string "I love it! I love it!$"

Zone6A_Text_FrankDefeat:
	.string "I love camping, of course!$"

Zone6A_Text_FrankPostBattle:
	.string "It's my favorite activity!$"

Zone6A_EventScript_Melanie::
	trainerbattle_single TRAINER_MELANIE, Zone6A_Text_MelanieIntro, Zone6A_Text_MelanieDefeat
	msgbox Zone6A_Text_MelaniePostBattle, MSGBOX_AUTOCLOSE
	end

Zone6A_Text_MelanieIntro:
	.string "Watch where you're going!$"

Zone6A_Text_MelanieDefeat:
	.string "Sorry I yelled at you...$"

Zone6A_Text_MelaniePostBattle:
	.string "I also need to be careful about where I'm going.$"

Zone6A_EventScript_Constance::
	trainerbattle_single TRAINER_CONSTANCE, Zone6A_Text_ConstanceIntro, Zone6A_Text_ConstanceDefeat
	msgbox Zone6A_Text_ConstancePostBattle, MSGBOX_AUTOCLOSE
	end

Zone6A_Text_ConstanceIntro:
	.string "Want to join my picnic?$"

Zone6A_Text_ConstanceDefeat:
	.string "Oops, I forgot to pack food!$"

Zone6A_Text_ConstancePostBattle:
	.string "I can look for some Berries or something...$"

Zone6A_EventScript_Ronan::
	trainerbattle_single TRAINER_RONAN, Zone6A_Text_RonanIntro, Zone6A_Text_RonanDefeat
	msgbox Zone6A_Text_RonanPostBattle, MSGBOX_AUTOCLOSE
	end

Zone6A_Text_RonanIntro:
	.string "Ah, a plebeian.\n"
	.string "Want to have a go?$"

Zone6A_Text_RonanDefeat:
	.string "My honor, tainted...$"

Zone6A_Text_RonanPostBattle:
	.string "Beaten by a mere commoner...$"

Zone6A_EventScript_ItemNetBall::
	finditem ITEM_NET_BALL
	end

Zone6A_EventScript_Item1000::
	lock
	playfanfare MUS_FANFA4 
	msgbox Zone6A_Text_Found1000, MSGBOX_DEFAULT
	waitfanfare
	setflag FLAG_ITEM_ZONE6A_1000
	removeobject 7
	release
	end

Zone6A_Text_Found1000:
	.string "Found ¥1000!$"

Zone6A_EventScript_ItemNestBall::
	finditem ITEM_NEST_BALL
	end
