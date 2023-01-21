Zone20A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE20A_HYPER_POTION, Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_1
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone20A_EventScript_HyperPotion::
	lock
	goto_if_set FLAG_ITEM_ZONE20A_HYPER_POTION, Zone20A_EventScript_HyperPotion_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE20A_HYPER_POTION
	addobject VAR_LAST_TALKED
	finditem ITEM_HYPER_POTION, 1
	release
	end

Zone20A_EventScript_HyperPotion_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone20A_EventScript_Shawn::
	trainerbattle_single TRAINER_SHAWN, Zone20A_Text_ShawnIntro, Zone20A_Text_ShawnDefeat
	msgbox Zone20A_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
	end

Zone20A_Text_ShawnIntro:
	.string "$"

Zone20A_Text_ShawnDefeat:
	.string "$"

Zone20A_Text_ShawnPostBattle:
	.string "$"

Zone20A_EventScript_Fernando::
	trainerbattle_single TRAINER_FERNANDO, Zone20A_Text_FernandoIntro, Zone20A_Text_FernandoDefeat
	msgbox Zone20A_Text_FernandoPostBattle, MSGBOX_AUTOCLOSE
	end

Zone20A_Text_FernandoIntro:
	.string "$"

Zone20A_Text_FernandoDefeat:
	.string "$"

Zone20A_Text_FernandoPostBattle:
	.string "$"

Zone20A_EventScript_Kane::
	trainerbattle_single TRAINER_KANE, Zone20A_Text_KaneIntro, Zone20A_Text_KaneDefeat
	msgbox Zone20A_Text_KanePostBattle, MSGBOX_AUTOCLOSE
	end

Zone20A_Text_KaneIntro:
	.string "$"

Zone20A_Text_KaneDefeat:
	.string "$"

Zone20A_Text_KanePostBattle:
	.string "$"

Zone20A_EventScript_Kirk::
	trainerbattle_single TRAINER_KIRK, Zone20A_Text_KirkIntro, Zone20A_Text_KirkDefeat
	msgbox Zone20A_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
	end

Zone20A_Text_KirkIntro:
	.string "$"

Zone20A_Text_KirkDefeat:
	.string "$"

Zone20A_Text_KirkPostBattle:
	.string "$"

Zone20A_EventScript_Dalton::
	trainerbattle_single TRAINER_DALTON, Zone20A_Text_DaltonIntro, Zone20A_Text_DaltonDefeat
	msgbox Zone20A_Text_DaltonPostBattle, MSGBOX_AUTOCLOSE
	end

Zone20A_Text_DaltonIntro:
	.string "$"

Zone20A_Text_DaltonDefeat:
	.string "$"

Zone20A_Text_DaltonPostBattle:
	.string "$"

Zone20A_EventScript_Lee::
	trainerbattle_single TRAINER_LEE, Zone20A_Text_LeeIntro, Zone20A_Text_LeeDefeat
	msgbox Zone20A_Text_LeePostBattle, MSGBOX_AUTOCLOSE
	end

Zone20A_Text_LeeIntro:
	.string "$"

Zone20A_Text_LeeDefeat:
	.string "$"

Zone20A_Text_LeePostBattle:
	.string "$"

Zone20A_EventScript_Blanche::
	trainerbattle_single TRAINER_BLANCHE, Zone20A_Text_BlancheIntro, Zone20A_Text_BlancheDefeat
	msgbox Zone20A_Text_BlanchePostBattle, MSGBOX_AUTOCLOSE
	end

Zone20A_Text_BlancheIntro:
	.string "$"

Zone20A_Text_BlancheDefeat:
	.string "$"

Zone20A_Text_BlanchePostBattle:
	.string "$"
