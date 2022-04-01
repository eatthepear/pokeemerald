Zone4A_MapScripts::
	.byte 0

Zone4A_EventScript_Sign::
	msgbox Zone4A_Text_Sign, MSGBOX_SIGN
	end

Zone4A_EventScript_ItemBurnHeal::
	finditem ITEM_BURN_HEAL
	end

Zone4A_Text_Sign:
	.string "These woods are enchanted...\n"
	.string "Don't get lost!$"
