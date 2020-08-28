Zone4D_MapScripts::
	.byte 0

Zone4D_EventScript_Lucia::
	trainerbattle_single TRAINER_LUCIA, Zone4D_Text_LuciaIntro, Zone4D_Text_LuciaDefeat
	msgbox Zone4D_Text_LuciaPostBattle, MSGBOX_AUTOCLOSE
	end

Zone4D_Text_LuciaIntro:
	.string "I swear, the exit is near here...$"

Zone4D_Text_LuciaDefeat:
	.string "Oh?$"

Zone4D_Text_LuciaPostBattle:
	.string "I think I see the exit!$"

Zone4D_EventScript_Fred::
	trainerbattle_single TRAINER_FRED, Zone4D_Text_FredIntro, Zone4D_Text_FredDefeat
	msgbox Zone4D_Text_FredPostBattle, MSGBOX_AUTOCLOSE
	end

Zone4D_Text_FredIntro:
	.string "Just... One... More... Level...$"

Zone4D_Text_FredDefeat:
	.string "Oh... Come on!$"

Zone4D_Text_FredPostBattle:
	.string "Just wait till my Bugs are all evolved!$"

Zone4D_EventScript_ItemRepel::
	finditem ITEM_REPEL
	end
