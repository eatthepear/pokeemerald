Zone9A_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_ITEM_ZONE9A_BIG_ROOT, Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_2
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	goto_if_set FLAG_ITEM_ZONE9A_MIRACLE_SEED, Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
	goto_if_set FLAG_ITEM_ZONE9A_TM13, Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_9
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_TM_CHEST
	return

Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_TM_CHEST_OPEN
	return


Zone9A_EventScript_HerbalSign::
	msgbox Zone9A_EventScript_HerbalSign_Text_0, MSGBOX_SIGN
	end


Zone9A_EventScript_Man::
	lock
	faceplayer
	msgbox Zone9A_EventScript_Man_Text_0
	release
	end


Zone9A_EventScript_Ari::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 17
	goto_if_eq Zone9A_EventScript_Ari_2
	compare VAR_TEMP_0, 19
	goto_if_eq Zone9A_EventScript_Ari_3
Zone9A_EventScript_Ari_1:
	faceplayer
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_7
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_7
	msgbox Zone9A_EventScript_Ari_Text_1, MSGBOX_YESNO
Zone9A_EventScript_Ari_6:
	compare VAR_RESULT, NO
	goto_if_eq Zone9A_EventScript_Ari_12
	msgbox Zone9A_EventScript_Ari_Text_3, MSGBOX_DEFAULT
	setflag FLAG_FORCE_BATTLE_ANIM_ON
	trainerbattle_no_intro TRAINER_ARI, Zone9A_EventScript_Ari_Text_4
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_17
Zone9A_EventScript_Ari_15:
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox Zone9A_EventScript_Ari_Text_5, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Zone9A_Movement_WinstrateEnterHouse
	waitmovement 0
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
	waitmovement 0
	addobject 2
	applymovement 2, Common_Movement_WalkDown
	waitmovement 0
	msgbox Zone9A_EventScript_Ari_Text_6, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BERTHA, Zone9A_EventScript_Ari_Text_7
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_22
Zone9A_EventScript_Ari_20:
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox Zone9A_EventScript_Ari_Text_8, MSGBOX_DEFAULT
	closemessage
	applymovement 2, Zone9A_Movement_WinstrateEnterHouse
	waitmovement 0
	removeobject 2
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
	waitmovement 0
	addobject 3
	applymovement 3, Common_Movement_WalkDown
	waitmovement 0
	msgbox Zone9A_EventScript_Ari_Text_9, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CASSANDRA, Zone9A_EventScript_Ari_Text_10
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_27
Zone9A_EventScript_Ari_25:
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox Zone9A_EventScript_Ari_Text_11, MSGBOX_DEFAULT
	closemessage
	applymovement 3, Zone9A_Movement_WinstrateEnterHouse
	waitmovement 0
	removeobject 3
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
	waitmovement 0
	addobject 4
	applymovement 4, Common_Movement_WalkDown
	waitmovement 0
	msgbox Zone9A_EventScript_Ari_Text_12, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_DOMINIC, Zone9A_EventScript_Ari_Text_13
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_32
Zone9A_EventScript_Ari_30:
	msgbox Zone9A_EventScript_Ari_Text_14, MSGBOX_DEFAULT
	closemessage
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement 4, Zone9A_Movement_WinstrateEnterHouse
	waitmovement 0
	removeobject 4
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
	waitmovement 0
	addobject 5
	applymovement 5, Common_Movement_WalkDown
	waitmovement 0
	msgbox Zone9A_EventScript_Ari_Text_15
	trainerbattle_no_intro TRAINER_ERICA, Zone9A_Text_EricaDefeat
	msgbox Zone9A_EventScript_Ari_Text_16
	giveitem ITEM_TM14
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement 5, Zone9A_Movement_WinstrateEnterHouse
	waitmovement 0
	removeobject 5
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
	setflag FLAG_HIDE_ZONE9A_ARI_WINSTRATE
	setvar VAR_ZONE_9_STATE, 1
	release
	end

Zone9A_EventScript_Ari_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone9A_EventScript_Ari_1

Zone9A_EventScript_Ari_3:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto Zone9A_EventScript_Ari_1

Zone9A_EventScript_Ari_7:
	msgbox Zone9A_EventScript_Ari_Text_0, MSGBOX_YESNO
	goto Zone9A_EventScript_Ari_6

Zone9A_EventScript_Ari_12:
	msgbox Zone9A_EventScript_Ari_Text_2, MSGBOX_DEFAULT
	release
	end

Zone9A_EventScript_Ari_16:
	special HealPlayerParty
	goto Zone9A_EventScript_Ari_15

Zone9A_EventScript_Ari_17:
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_16
	goto Zone9A_EventScript_Ari_15

Zone9A_EventScript_Ari_21:
	special HealPlayerParty
	goto Zone9A_EventScript_Ari_20

Zone9A_EventScript_Ari_22:
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_21
	goto Zone9A_EventScript_Ari_20

Zone9A_EventScript_Ari_26:
	special HealPlayerParty
	goto Zone9A_EventScript_Ari_25

Zone9A_EventScript_Ari_27:
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_26
	goto Zone9A_EventScript_Ari_25

Zone9A_EventScript_Ari_31:
	special HealPlayerParty
	goto Zone9A_EventScript_Ari_30

Zone9A_EventScript_Ari_32:
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_31
	goto Zone9A_EventScript_Ari_30


Zone9A_Movement_WinstrateEnterHouse:
	walk_in_place_faster_up
	walk_up
	step_end

Zone9A_Movement_WaitForNextWinstrate:
	delay_16
	delay_16
	delay_16
	step_end

Zone9A_EventScript_ItemBigRoot::
	lock
	goto_if_set FLAG_ITEM_ZONE9A_BIG_ROOT, Zone9A_EventScript_ItemBigRoot_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE9A_BIG_ROOT
	addobject VAR_LAST_TALKED
	finditem ITEM_BIG_ROOT, 1
	release
	end

Zone9A_EventScript_ItemBigRoot_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone9A_EventScript_ItemMiracleSeed::
	lock
	goto_if_set FLAG_ITEM_ZONE9A_MIRACLE_SEED, Zone9A_EventScript_ItemMiracleSeed_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE9A_MIRACLE_SEED
	addobject VAR_LAST_TALKED
	finditem ITEM_MIRACLE_SEED, 1
	release
	end

Zone9A_EventScript_ItemMiracleSeed_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone9A_EventScript_ItemTM13::
	lock
	goto_if_set FLAG_ITEM_ZONE9A_TM13, Zone9A_EventScript_ItemTM13_2
	waitse
	removeobject VAR_LAST_TALKED
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_TM_CHEST_OPEN
	setflag FLAG_ITEM_ZONE9A_TM13
	addobject VAR_LAST_TALKED
	finditem ITEM_TM13, 1
	release
	end

Zone9A_EventScript_ItemTM13_2:
	msgbox gText_ItemChestIsEmpty
	release
	end


Zone9A_EventScript_Cooper::
       trainerbattle_single TRAINER_COOPER, Zone9A_Text_CooperIntro, Zone9A_Text_CooperDefeat
       msgbox Zone9A_Text_CooperPostBattle, MSGBOX_AUTOCLOSE
       end

Zone9A_Text_CooperIntro:
	.string "Bet you didn't expect me!$"

Zone9A_Text_CooperDefeat:
	.string "I didn't expect you, either!$"

Zone9A_Text_CooperPostBattle:
	.string "I just pop out occasionally in\n"
	.string "case someone is there.$"

Zone9A_EventScript_Carmine::
       trainerbattle_single TRAINER_CARMINE, Zone9A_Text_CarmineIntro, Zone9A_Text_CarmineDefeat
       msgbox Zone9A_Text_CarminePostBattle, MSGBOX_AUTOCLOSE
       end

Zone9A_Text_CarmineIntro:
	.string "Whew, it's hot in the jungle!$"

Zone9A_Text_CarmineDefeat:
	.string "I think the humidity is the worst\n"
	.string "part!$"

Zone9A_Text_CarminePostBattle:
	.string "I hope there's AC in the village.$"

Zone9A_EventScript_Sign::
	msgbox Zone9A_Text_Sign, MSGBOX_SIGN
	end

Zone9A_Text_Sign:
	.string "Trainer Tips!\p"
	.string "While you are on the Pokémon stats\n"
	.string "screen, you can press {A_BUTTON} to switch\l"
	.string "between stats, IVs, or EVs.$"

Zone9A_EventScript_HerbalSign_Text_0:
	.string "Herbal and Incense Shop$"

Zone9A_EventScript_Man_Text_0:
	.string "Hey there, champ!\p"
	.string "In our modest village, there is a family\n"
	.string "of strong Trainers.\p"
	.string "Why don't you go spar with them?$"

Zone9A_EventScript_Ari_Text_0:
	.string "{COLOR BLUE}Ari{COLOR DARK_GRAY}: Howzit goin?\pOh, you're a traveler!\nYou might be strong enough…\pI bet you can't defeat the five\nmembers of my family in a row,\lwithout being healed in between\lbattles.\pWhat do you say to my little wager?$"

Zone9A_EventScript_Ari_Text_1:
	.string "{COLOR BLUE}Ari{COLOR DARK_GRAY}: Howzit goin?\pOh, you're a traveler!\nYou might be strong enough…\pI bet you can't defeat the five\nmembers of my family in a row.\pYou'll be fully healed in between\nbattles.\pWhat do you say to my little wager?$"

Zone9A_EventScript_Ari_Text_2:
	.string "Ah, so you're a chicken. Well, if\nyou change your mind, I'll be here.$"

Zone9A_EventScript_Ari_Text_3:
	.string "Alright, well, best of luck!$"

Zone9A_EventScript_Ari_Text_4:
	.string "What!? How!?\nYou're tougher than I thought!$"

Zone9A_EventScript_Ari_Text_5:
	.string "{COLOR BLUE}Ari{COLOR DARK_GRAY}: Hey, everyone!\nI've found a pretty strong Trainer!$"

Zone9A_EventScript_Ari_Text_6:
	.string "{COLOR BLUE}Bertha{COLOR DARK_GRAY}: You beat my brother?\nUgh. Such a brat.\pLet's just get this over with.$"

Zone9A_EventScript_Ari_Text_7:
	.string "Sigh…\nI thought this would happen…$"

Zone9A_EventScript_Ari_Text_8:
	.string "{COLOR BLUE}Bertha{COLOR DARK_GRAY}: Mom! It's your turn!$"

Zone9A_EventScript_Ari_Text_9:
	.string "{COLOR BLUE}Cassandra{COLOR DARK_GRAY}: Oh! I am so excited!\pFinally, a challenger who got past\nboth of my children!\pIt's Momma's time to shine!$"

Zone9A_EventScript_Ari_Text_10:
	.string "It was you who shined instead!$"

Zone9A_EventScript_Ari_Text_11:
	.string "{COLOR BLUE}Cassandra{COLOR DARK_GRAY}: It's all you, baby!$"

Zone9A_EventScript_Ari_Text_12:
	.string "{COLOR BLUE}Dominic{COLOR DARK_GRAY}: Guess what time it is?\nIt's time to take out the trash!$"

Zone9A_EventScript_Ari_Text_13:
	.string "Sorry, sorry!\nI didn't realize you were so strong!$"

Zone9A_EventScript_Ari_Text_14:
	.string "{COLOR BLUE}Dominic{COLOR DARK_GRAY}: Kids!\nWake your grandma up!$"

Zone9A_EventScript_Ari_Text_15:
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: Who dares disturb me from my\n"
	.string "slumber?$"

Zone9A_EventScript_Ari_Text_16:
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: Good, good.\pWell done, young one.\pHere is a little reward for you\ncompleting my family's trial.$"

Zone9A_Text_EricaDefeat::
	.string "Oh… You are the one…$"
