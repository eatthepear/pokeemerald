#ifndef GUARD_CONSTANTS_FLAGS_H
#define GUARD_CONSTANTS_FLAGS_H

#include "constants/opponents.h"

// Temporary Flags
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define TEMP_FLAGS_START 0x0
#define FLAG_TEMP_1      (TEMP_FLAGS_START + 0x1)
#define FLAG_TEMP_2      (TEMP_FLAGS_START + 0x2)
#define FLAG_TEMP_3      (TEMP_FLAGS_START + 0x3)
#define FLAG_TEMP_4      (TEMP_FLAGS_START + 0x4)
#define FLAG_TEMP_5      (TEMP_FLAGS_START + 0x5)
#define FLAG_TEMP_6      (TEMP_FLAGS_START + 0x6)
#define FLAG_TEMP_7      (TEMP_FLAGS_START + 0x7)
#define FLAG_TEMP_8      (TEMP_FLAGS_START + 0x8)
#define FLAG_TEMP_9      (TEMP_FLAGS_START + 0x9)
#define FLAG_TEMP_A      (TEMP_FLAGS_START + 0xA)
#define FLAG_TEMP_B      (TEMP_FLAGS_START + 0xB)
#define FLAG_TEMP_C      (TEMP_FLAGS_START + 0xC)
#define FLAG_TEMP_D      (TEMP_FLAGS_START + 0xD)
#define FLAG_TEMP_E      (TEMP_FLAGS_START + 0xE)
#define FLAG_TEMP_F      (TEMP_FLAGS_START + 0xF)
#define FLAG_TEMP_10     (TEMP_FLAGS_START + 0x10)
#define FLAG_TEMP_11     (TEMP_FLAGS_START + 0x11)
#define FLAG_TEMP_12     (TEMP_FLAGS_START + 0x12)
#define FLAG_TEMP_13     (TEMP_FLAGS_START + 0x13)
#define FLAG_TEMP_14     (TEMP_FLAGS_START + 0x14)
#define FLAG_TEMP_15     (TEMP_FLAGS_START + 0x15)
#define FLAG_TEMP_16     (TEMP_FLAGS_START + 0x16)
#define FLAG_TEMP_17     (TEMP_FLAGS_START + 0x17)
#define FLAG_TEMP_18     (TEMP_FLAGS_START + 0x18)
#define FLAG_TEMP_19     (TEMP_FLAGS_START + 0x19)
#define FLAG_TEMP_1A     (TEMP_FLAGS_START + 0x1A)
#define FLAG_TEMP_1B     (TEMP_FLAGS_START + 0x1B)
#define FLAG_TEMP_1C     (TEMP_FLAGS_START + 0x1C)
#define FLAG_TEMP_1D     (TEMP_FLAGS_START + 0x1D)
#define FLAG_TEMP_1E     (TEMP_FLAGS_START + 0x1E)
#define FLAG_TEMP_1F     (TEMP_FLAGS_START + 0x1F)
#define TEMP_FLAGS_END   FLAG_TEMP_1F

//Scripts
#define FLAG_TIM_INTRO                                    0x20
#define FLAG_VARRICK_INTRO                                0x21
#define FLAG_LELOUCH_INTRO                                0x22
#define FLAG_JOY_INTRO                                    0x23
#define FLAG_ZONE0C_SHOWN_POKEDEX_ENTRIES                 0x24
#define FLAG_ZONE0C_RECEIVED_EEVEE                        0x25
#define FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG                   0x26
#define FLAG_MAX_INTRO                                    0x27
#define FLAG_HIDE_ZONE3A_MAX                              0x28
#define FLAG_HIDE_ZONE3A_REMI                             0x29
#define FLAG_HIDE_ZONE3A_PHILLIPA                         0x2A
#define FLAG_ZONE4A_RECEIVED_GEM                          0x2B
#define FLAG_ZONE5A_NUZLOCKE_BOUGHT_PIKACLONE             0x2C
#define FLAG_LELOUCH_SHARDS_INTRO                         0x2D
#define FLAG_HIDE_ZONE6A_MAX                              0x2E
#define FLAG_ZONE7A_RECEIVED_WHIPPED_DREAM                0x2F
#define FLAG_ZONE7A_RECEIVED_SACHET                       0x30
#define FLAG_HIDE_ZONE7A_MAX                              0x31
#define FLAG_ZONE7B_HEAL_USED                             0x32
#define FLAG_HIDE_ZONE8D_WALLY                            0x33
#define FLAG_HIDE_ZONE9A_ARI_WINSTRATE                    0x34
#define FLAG_HIDE_ZONE9A_BERTHA_WINSTRATE                 0x35
#define FLAG_HIDE_ZONE9A_CASSANDRA_WINSTRATE              0x36
#define FLAG_HIDE_ZONE9A_DOMINIC_WINSTRATE                0x37
#define FLAG_HIDE_ZONE9A_ERICA_WINSTRATE                  0x38
#define FLAG_ZONE9D_RECEIVED_MYSTIC_WATER                 0x39
#define FLAG_ZONE9E_NUZLOCKE_BOUGHT_FARM_ANIMAL           0x3A
#define FLAG_ZONE10A_RECEIVED_SAFETY_GOGGLES              0x3B
#define FLAG_HIDE_ZONE10A_MAX                             0x3C
#define FLAG_ZONE10B_RECEIVED_TM21                        0x3D
#define FLAG_HIDE_ZONE10B_BERRYMAN                        0x3E
#define FLAG_ZONE10B_RECEIVED_LUCKY_EGG                   0x3F
#define FLAG_HIDE_ZONE12A_CAMPER_PICNICKER                0x40
#define FLAG_ZONE13A_RECEIVED_UTILITY_UMBRELLA            0x41
#define FLAG_ZONE13B_RECEIVED_FLASHLIGHT                  0x42
#define FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED             0x43
#define FLAG_ZONE13C_RECEIVED_ZOOM_LENS                   0x44
#define FLAG_ZONE13C_RECEIVED_APPLES                      0x45
#define FLAG_ZONE13C_RECEIVED_SWEETS                      0x46
#define FLAG_HIDE_ZONE17A_HEX_MANIAC                      0x47
#define FLAG_HIDE_ZONE18B_MAN                             0x48
#define FLAG_HIDE_ZONE18B_ODYSSEUS                        0x49
#define FLAG_HIDE_ZONE19D_PIRATES                         0x4A
#define FLAG_RECEIVED_ZONE21A_TM29                        0x4B
#define FLAG_RECEIVED_ZONE21C_HAPPINY                     0x4C
#define FLAG_HIDE_CAM_AND_PAM                             0x4D
#define FLAG_RECEIVED_ZONE23A_TM31                        0x4E
#define FLAG_RECEIVED_ZONE24A_TM34                        0x4F
#define FLAG_RECEIVED_ZONE24B_TM35                        0x50
#define FLAG_HIDE_ZONE25L_COLRESS                         0x51
#define FLAG_TIM_SUPER_POTION_INTRO                       0x52
#define FLAG_ZONE_B1_PORYGON_1                            0x53
#define FLAG_ZONE_B1_PORYGON_2                            0x54
#define FLAG_ZONE_B1_PORYGON_3                            0x55
#define FLAG_ZONE_B1_PORYGON_4                            0x56
#define FLAG_ZONE_B1_PORYGON_5                            0x57
#define FLAG_RECEIVED_PORYGON                             0x58
#define FLAG_UNUSEDLEVI3                                  0x59
#define FLAG_UNUSEDLEVI4                                  0x5A
#define FLAG_UNUSEDLEVI5                                  0x5B
#define FLAG_UNUSEDLEVI6                                  0x5C
#define FLAG_UNUSEDLEVI7                                  0x5D
#define FLAG_UNUSEDLEVI8                                  0x5E
#define FLAG_UNUSEDLEVI9                                  0x5F
#define FLAG_UNUSED_0x60                                  0x60
#define FLAG_UNUSED_0x61                                  0x61
#define FLAG_UNUSED_0x62                                  0x62
#define FLAG_UNUSED_0x63                                  0x63
#define FLAG_UNUSED_0x64                                  0x64
#define FLAG_UNUSED_0x65                                  0x65
#define FLAG_UNUSED_0x66                                  0x66
#define FLAG_UNUSED_0x67                                  0x67
#define FLAG_UNUSED_0x68                                  0x68
#define FLAG_UNUSED_0x69                                  0x69
#define FLAG_UNUSED_0x6A                                  0x6A
#define FLAG_UNUSED_0x6B                                  0x6B
#define FLAG_UNUSED_0x6C                                  0x6C
#define FLAG_UNUSED_0x6D                                  0x6D
#define FLAG_UNUSED_0x6E                                  0x6E
#define FLAG_UNUSED_0x6F                                  0x6F
#define FLAG_UNUSED_0x70                                  0x70
#define FLAG_UNUSED_0x71                                  0x71
#define FLAG_UNUSED_0x72                                  0x72


#define FLAG_RECEIVED_METEORITE              0x73
#define FLAG_ADVENTURE_STARTED               0x74 // RECEIVED Pokédex.
#define FLAG_DEFEATED_MAGMA_SPACE_CENTER     0x75 // Set when Team Magma is defeated at Mossdeep's Space Center.
#define FLAG_MET_HIDDEN_POWER_GIVER          0x76
#define FLAG_CANCEL_BATTLE_ROOM_CHALLENGE    0x77
#define FLAG_x78
#define FLAG_RECEIVED_TM31                   0x79
#define FLAG_RECEIVED_HM03                   0x7A
#define FLAG_RECEIVED_HM08                   0x7B
#define FLAG_REGISTER_RIVAL_POKENAV          0x7C
#define FLAG_DEFEATED_RIVAL_ROUTE_104        0x7D
#define FLAG_DEFEATED_WALLY_VICTORY_ROAD     0x7E
#define FLAG_MET_PRETTY_PETAL_SHOP_OWNER     0x7F
#define FLAG_ENABLE_ROXANNE_FIRST_CALL       0x80 // Set after defeating Brawly. This will activate a call with Roxanne in order to register her.
#define FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN  0x81
#define FLAG_DEFEATED_RIVAL_ROUTE103         0x82
#define FLAG_RECEIVED_DOLL_LANETTE           0x83
#define FLAG_RECEIVED_POTION_OLDALE          0x84
#define FLAG_RECEIVED_AMULET_COIN            0x85
#define FLAG_PENDING_DAYCARE_EGG             0x86
#define FLAG_THANKED_FOR_PLAYING_WITH_WALLY  0x87
#define FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL 0x88 // Set after defeating Wally outside Mauville Gym. Will activate a call later to register Wally.
#define FLAG_RECEIVED_HM01                   0x89
#define FLAG_SCOTT_CALL_FORTREE_GYM          0x8A // Triggers call from Scott after defeating Winona
#define FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY   0x8B
#define FLAG_RECEIVED_6_SODA_POP             0x8C
#define FLAG_DEFEATED_SEASHORE_HOUSE         0x8D
#define FLAG_DEVON_GOODS_STOLEN              0x8E
#define FLAG_RECOVERED_DEVON_GOODS           0x8F
#define FLAG_RETURNED_DEVON_GOODS            0x90
#define FLAG_CAUGHT_LUGIA                    0x91
#define FLAG_CAUGHT_HO_OH                    0x92
#define FLAG_MR_BRINEY_SAILING_INTRO         0x93
#define FLAG_DOCK_REJECTED_DEVON_GOODS       0x94
#define FLAG_DELIVERED_DEVON_GOODS           0x95
#define FLAG_UNUSED_0x96                     0x96
#define FLAG_UNUSED_0x97                     0x97
#define FLAG_RECEIVED_SUPER_ROD              0x98
#define FLAG_RUSTBORO_NPC_TRADE_COMPLETED    0x99
#define FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED  0x9A
#define FLAG_FORTREE_NPC_TRADE_COMPLETED     0x9B
#define FLAG_BATTLE_FRONTIER_TRADE_DONE      0x9C
#define FLAG_FORCE_MIRAGE_TOWER_VISIBLE      0x9D
#define FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE   0x9E
#define FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN 0x9F
#define FLAG_COOL_PAINTING_MADE              0xA0
#define FLAG_BEAUTY_PAINTING_MADE            0xA1
#define FLAG_CUTE_PAINTING_MADE              0xA2
#define FLAG_SMART_PAINTING_MADE             0xA3
#define FLAG_TOUGH_PAINTING_MADE             0xA4
#define FLAG_RECEIVED_TM39                   0xA5
#define FLAG_RECEIVED_TM08                   0xA6
#define FLAG_RECEIVED_TM34                   0xA7
#define FLAG_RECEIVED_TM50                   0xA8
#define FLAG_RECEIVED_TM42                   0xA9
#define FLAG_RECEIVED_TM40                   0xAA
#define FLAG_RECEIVED_TM04                   0xAB
#define FLAG_RECEIVED_TM03                   0xAC
#define FLAG_HIDE_SECRET_BASE_TRAINER        0xAD
#define FLAG_DECORATION_1                    0xAE
#define FLAG_DECORATION_2                    0xAF
#define FLAG_DECORATION_3                    0xB0
#define FLAG_DECORATION_4                    0xB1
#define FLAG_DECORATION_5                    0xB2
#define FLAG_DECORATION_6                    0xB3
#define FLAG_DECORATION_7                    0xB4
#define FLAG_DECORATION_8                    0xB5
#define FLAG_DECORATION_9                    0xB6
#define FLAG_DECORATION_10                   0xB7
#define FLAG_DECORATION_11                   0xB8
#define FLAG_DECORATION_12                   0xB9
#define FLAG_DECORATION_13                   0xBA
#define FLAG_DECORATION_14                   0xBB
#define FLAG_RECEIVED_POKENAV                0xBC
#define FLAG_DELIVERED_STEVEN_LETTER         0xBD
#define FLAG_DEFEATED_WALLY_MAUVILLE         0xBE
#define FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F  0xBF
#define FLAG_RECEIVED_SUN_STONE_MOSSDEEP     0xC0
#define FLAG_WALLY_SPEECH                    0xC1
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1   0xC2 // Leftover from the RS version of Puzzle Room 7, functionally unused
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2   0xC3 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3   0xC4 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4   0xC5 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5   0xC6 //
#define FLAG_RUSTURF_TUNNEL_OPENED           0xC7
#define FLAG_RECEIVED_RED_SCARF              0xC8
#define FLAG_RECEIVED_BLUE_SCARF             0xC9
#define FLAG_RECEIVED_PINK_SCARF             0xCA
#define FLAG_RECEIVED_GREEN_SCARF            0xCB
#define FLAG_RECEIVED_YELLOW_SCARF           0xCC
#define FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER    0xCD
#define FLAG_ENCOUNTERED_LATIAS_OR_LATIOS    0xCE
#define FLAG_MET_ARCHIE_METEOR_FALLS         0xCF
#define FLAG_GOT_BASEMENT_KEY_FROM_WATTSON   0xD0
#define FLAG_GOT_TM24_FROM_WATTSON           0xD1
#define FLAG_FAN_CLUB_STRENGTH_SHARED        0xD2 // Set when you rate the strength of another trainer in Lilycove's Trainer Fan Club.
#define FLAG_DEFEATED_RIVAL_RUSTBORO         0xD3
#define FLAG_RECEIVED_RED_OR_BLUE_ORB        0xD4
#define FLAG_RECEIVED_PREMIER_BALL_RUSTBORO  0xD5
#define FLAG_ENABLE_WALLY_MATCH_CALL         0xD6
#define FLAG_ENABLE_SCOTT_MATCH_CALL         0xD7
#define FLAG_ENABLE_MOM_MATCH_CALL           0xD8
#define FLAG_MET_DIVING_TREASURE_HUNTER      0xD9
#define FLAG_MET_WAILMER_TRAINER             0xDA
#define FLAG_EVIL_LEADER_PLEASE_STOP         0xDB

#define FLAG_NEVER_SET_0x0DC                 0xDC // This flag is read, but never written to

#define FLAG_RECEIVED_GO_GOGGLES             0xDD
#define FLAG_WINGULL_SENT_ON_ERRAND          0xDE
#define FLAG_RECEIVED_MENTAL_HERB            0xDF
#define FLAG_WINGULL_DELIVERED_MAIL          0xE0
#define FLAG_RECEIVED_20_COINS               0xE1
#define FLAG_RECEIVED_STARTER_DOLL           0xE2
#define FLAG_RECEIVED_GOOD_ROD               0xE3
#define FLAG_REGI_DOORS_OPENED               0xE4
#define FLAG_RECEIVED_TM27                   0xE5
#define FLAG_RECEIVED_TM36                   0xE6
#define FLAG_RECEIVED_TM05                   0xE7
#define FLAG_RECEIVED_TM19                   0xE8

#define FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE 0xE9

#define FLAG_RECEIVED_TM44                   0xEA
#define FLAG_RECEIVED_TM45                   0xEB
#define FLAG_RECEIVED_GLASS_ORNAMENT         0xEC
#define FLAG_RECEIVED_SILVER_SHIELD          0xED
#define FLAG_RECEIVED_GOLD_SHIELD            0xEE
#define FLAG_USED_STORAGE_KEY                0xEF
#define FLAG_USED_ROOM_1_KEY                 0xF0
#define FLAG_USED_ROOM_2_KEY                 0xF1
#define FLAG_USED_ROOM_4_KEY                 0xF2
#define FLAG_USED_ROOM_6_KEY                 0xF3
#define FLAG_MET_PROF_COZMO                  0xF4
#define FLAG_RECEIVED_WAILMER_DOLL           0xF5
#define FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104 0xF6
#define FLAG_DEFEATED_SS_TIDAL_TRAINERS      0xF7
#define FLAG_RECEIVED_SPELON_BERRY           0xF8
#define FLAG_RECEIVED_PAMTRE_BERRY           0xF9
#define FLAG_RECEIVED_WATMEL_BERRY           0xFA
#define FLAG_RECEIVED_DURIN_BERRY            0xFB
#define FLAG_RECEIVED_BELUE_BERRY            0xFC
#define FLAG_ENABLE_RIVAL_MATCH_CALL         0xFD
#define FLAG_RECEIVED_CHARCOAL               0xFE
#define FLAG_LATIOS_OR_LATIAS_ROAMING        0xFF
#define FLAG_RECEIVED_REPEAT_BALL            0x100
#define FLAG_RECEIVED_OLD_ROD                0x101
#define FLAG_RECEIVED_COIN_CASE              0x102
#define FLAG_RETURNED_RED_OR_BLUE_ORB        0x103
#define FLAG_RECEIVED_TM49                   0x104
#define FLAG_RECEIVED_TM28                   0x105
#define FLAG_RECEIVED_TM09                   0x106
#define FLAG_ENTERED_ELITE_FOUR              0x107
#define FLAG_RECEIVED_TM10                   0x108
#define FLAG_RECEIVED_TM41                   0x109
#define FLAG_RECEIVED_LAVARIDGE_EGG          0x10A
#define FLAG_RECEIVED_REVIVED_FOSSIL_MON     0x10B
#define FLAG_SECRET_BASE_REGISTRY_ENABLED    0x10C
#define FLAG_RECEIVED_TM46                   0x10D
#define FLAG_CONTEST_SKETCH_CREATED          0x10E  // Set but never read
#define FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE   0x10F
#define FLAG_RECEIVED_EXP_SHARE              0x110
#define FLAG_POKERUS_EXPLAINED               0x111
#define FLAG_RECEIVED_RUNNING_SHOES          0x112
#define FLAG_RECEIVED_QUICK_CLAW             0x113
#define FLAG_RECEIVED_KINGS_ROCK             0x114
#define FLAG_RECEIVED_MACHO_BRACE            0x115
#define FLAG_RECEIVED_SOOTHE_BELL            0x116
#define FLAG_RECEIVED_WHITE_HERB             0x117
#define FLAG_RECEIVED_SOFT_SAND              0x118
#define FLAG_ENABLE_PROF_BIRCH_MATCH_CALL    0x119
#define FLAG_RECEIVED_CLEANSE_TAG            0x11A
#define FLAG_RECEIVED_FOCUS_BAND             0x11B
#define FLAG_DECLINED_WALLY_BATTLE_MAUVILLE  0x11C
#define FLAG_RECEIVED_DEVON_SCOPE            0x11D
#define FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE  0x11E
#define FLAG_MET_DEVON_EMPLOYEE              0x11F
#define FLAG_MET_RIVAL_RUSTBORO              0x120
#define FLAG_RECEIVED_SILK_SCARF             0x121
#define FLAG_NOT_READY_FOR_BATTLE_ROUTE_120  0x122
#define FLAG_RECEIVED_SS_TICKET              0x123
#define FLAG_MET_RIVAL_LILYCOVE              0x124
#define FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE 0x125
#define FLAG_EXCHANGED_SCANNER               0x126
#define FLAG_KECLEON_FLED_FORTREE            0x127
#define FLAG_PETALBURG_MART_EXPANDED_ITEMS   0x128
#define FLAG_RECEIVED_MIRACLE_SEED           0x129
#define FLAG_RECEIVED_BELDUM                 0x12A
#define FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK   0x12B
#define FLAG_MET_FANCLUB_YOUNGER_BROTHER     0x12C
#define FLAG_RIVAL_LEFT_FOR_ROUTE103         0x12D
#define FLAG_OMIT_DIVE_FROM_STEVEN_LETTER    0x12E
#define FLAG_HAS_MATCH_CALL                  0x12F
#define FLAG_ADDED_MATCH_CALL_TO_POKENAV     0x130
#define FLAG_REGISTERED_STEVEN_POKENAV       0x131
#define FLAG_ENABLE_NORMAN_MATCH_CALL        0x132
#define FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN 0x133 // Set after you follow Steven to the entrance of the Cave of Origin.
#define FLAG_MET_ARCHIE_SOOTOPOLIS           0x134
#define FLAG_MET_MAXIE_SOOTOPOLIS            0x135
#define FLAG_MET_SCOTT_RUSTBORO              0x136
#define FLAG_WALLACE_GOES_TO_SKY_PILLAR      0x137 // Set after speaking to Wallace within the Cave of Origin.
#define FLAG_RECEIVED_HM07                   0x138
#define FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS    0x139
#define FLAG_RECEIVED_AURORA_TICKET          0x13A
#define FLAG_RECEIVED_MYSTIC_TICKET          0x13B
#define FLAG_RECEIVED_OLD_SEA_MAP            0x13C
#define FLAG_RECEIVED_SECRET_POWER           0x13D
#define FLAG_MET_TEAM_AQUA_HARBOR            0x13E
#define FLAG_TV_EXPLAINED                    0x13F
#define FLAG_MAUVILLE_GYM_BARRIERS_STATE     0x140
#define FLAG_MOSSDEEP_GYM_SWITCH_1           0x141
#define FLAG_MOSSDEEP_GYM_SWITCH_2           0x142
#define FLAG_MOSSDEEP_GYM_SWITCH_3           0x143
#define FLAG_MOSSDEEP_GYM_SWITCH_4           0x144
#define FLAG_SCOTT_CALL_BATTLE_FRONTIER      0x145
#define FLAG_OCEANIC_MUSEUM_MET_REPORTER     0x146
#define FLAG_RECEIVED_HM04                   0x147
#define FLAG_RECEIVED_HM06                   0x148
#define FLAG_WHITEOUT_TO_LAVARIDGE           0x149
#define FLAG_RECEIVED_HM05                   0x14A
#define FLAG_RECEIVED_HM02                   0x14B
#define FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT  0x14C
#define FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE  0x14D

#define FLAG_MIRAGE_TOWER_VISIBLE            0x14E
#define FLAG_CHOSE_ROOT_FOSSIL               0x14F
#define FLAG_CHOSE_CLAW_FOSSIL               0x150
#define FLAG_RECEIVED_POWDER_JAR             0x151

#define FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER 0x152

#define FLAG_MET_BATTLE_FRONTIER_BREEDER     0x153
#define FLAG_MET_BATTLE_FRONTIER_MANIAC      0x154
#define FLAG_ENTERED_CONTEST                 0x155
#define FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN  0x156
#define FLAG_MET_BATTLE_FRONTIER_GAMBLER     0x157
#define FLAG_ENABLE_MR_STONE_POKENAV         0x158
#define FLAG_NURSE_MENTIONS_GOLD_CARD        0x159
#define FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR  0x15A
#define FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR 0x15B

// Trainer Rematch Flags
#define FLAG_MATCH_CALL_REGISTERED           0x15C
#define FLAG_REMATCH_ROSE                    0x15D
#define FLAG_REMATCH_ANDRES                  0x15E
#define FLAG_REMATCH_DUSTY                   0x15F
#define FLAG_REMATCH_LOLA                    0x160
#define FLAG_REMATCH_RICKY                   0x161
#define FLAG_REMATCH_LILA_AND_ROY            0x162
#define FLAG_REMATCH_CRISTIN                 0x163
#define FLAG_REMATCH_BROOKE                  0x164
#define FLAG_REMATCH_WILTON                  0x165
#define FLAG_REMATCH_VALERIE                 0x166
#define FLAG_REMATCH_CINDY                   0x167
#define FLAG_REMATCH_THALIA                  0x168
#define FLAG_REMATCH_JESSICA                 0x169
#define FLAG_REMATCH_WINSTON                 0x16A
#define FLAG_REMATCH_STEVE                   0x16B
#define FLAG_REMATCH_TONY                    0x16C
#define FLAG_REMATCH_NOB                     0x16D
#define FLAG_REMATCH_KOJI                    0x16E
#define FLAG_REMATCH_FERNANDO                0x16F
#define FLAG_REMATCH_DALTON                  0x170
#define FLAG_REMATCH_BERNIE                  0x171
#define FLAG_REMATCH_ETHAN                   0x172
#define FLAG_REMATCH_JOHN_AND_JAY            0x173
#define FLAG_REMATCH_JEFFREY                 0x174
#define FLAG_REMATCH_CAMERON                 0x175
#define FLAG_REMATCH_JACKI                   0x176
#define FLAG_REMATCH_WALTER                  0x177
#define FLAG_REMATCH_KAREN                   0x178
#define FLAG_REMATCH_JERRY                   0x179
#define FLAG_REMATCH_ANNA_AND_MEG            0x17A
#define FLAG_REMATCH_ISABEL                  0x17B
#define FLAG_REMATCH_MIGUEL                  0x17C
#define FLAG_REMATCH_TIMOTHY                 0x17D
#define FLAG_REMATCH_SHELBY                  0x17E
#define FLAG_REMATCH_CALVIN                  0x17F
#define FLAG_REMATCH_ELLIOT                  0x180
#define FLAG_REMATCH_ISAIAH                  0x181
#define FLAG_REMATCH_MARIA                   0x182
#define FLAG_REMATCH_ABIGAIL                 0x183
#define FLAG_REMATCH_DYLAN                   0x184
#define FLAG_REMATCH_KATELYN                 0x185
#define FLAG_REMATCH_BENJAMIN                0x186
#define FLAG_REMATCH_PABLO                   0x187
#define FLAG_REMATCH_NICOLAS                 0x188
#define FLAG_REMATCH_ROBERT                  0x189
#define FLAG_REMATCH_LAO                     0x18A
#define FLAG_REMATCH_CYNDY                   0x18B
#define FLAG_REMATCH_MADELINE                0x18C
#define FLAG_REMATCH_JENNY                   0x18D
#define FLAG_REMATCH_DIANA                   0x18E
#define FLAG_REMATCH_AMY_AND_LIV             0x18F
#define FLAG_REMATCH_ERNEST                  0x190
#define FLAG_REMATCH_CORY                    0x191
#define FLAG_REMATCH_EDWIN                   0x192
#define FLAG_REMATCH_LYDIA                   0x193
#define FLAG_REMATCH_ISAAC                   0x194
#define FLAG_REMATCH_GABRIELLE               0x195
#define FLAG_REMATCH_CATHERINE               0x196
#define FLAG_REMATCH_JACKSON                 0x197
#define FLAG_REMATCH_HALEY                   0x198
#define FLAG_REMATCH_JAMES                   0x199
#define FLAG_REMATCH_TRENT                   0x19A
#define FLAG_UNUSED_REMATCH_SAWYER           0x19B
#define FLAG_REMATCH_KIRA_AND_DAN            0x19C
#define FLAG_REMATCH_WALLY                   0x19D
#define FLAG_REMATCH_ROXANNE                 0x19E
#define FLAG_REMATCH_BRAWLY                  0x19F
#define FLAG_REMATCH_WATTSON                 0x1A0
#define FLAG_REMATCH_FLANNERY                0x1A1
#define FLAG_REMATCH_NORMAN                  0x1A2
#define FLAG_REMATCH_WINONA                  0x1A3
#define FLAG_REMATCH_TATE_AND_LIZA           0x1A4
// Note: FLAG_REMATCH_JUAN is handled by FLAG_ENABLE_JUAN_MATCH_CALL instead.
#define FLAG_REMATCH_SIDNEY                  0x1A5
#define FLAG_REMATCH_PHOEBE                  0x1A6
#define FLAG_REMATCH_GLACIA                  0x1A7
#define FLAG_REMATCH_DRAKE                   0x1A8
#define FLAG_REMATCH_WALLACE                 0x1A9

#define FLAG_UNUSED_0x1AA                    0x1AA // Unused Flag
#define FLAG_UNUSED_0x1AB                    0x1AB // Unused Flag

#define FLAG_DEFEATED_DEOXYS                 0x1AC
#define FLAG_BATTLED_DEOXYS                  0x1AD
#define FLAG_SHOWN_EON_TICKET                0x1AE
#define FLAG_SHOWN_AURORA_TICKET             0x1AF
#define FLAG_SHOWN_OLD_SEA_MAP               0x1B0
#define FLAG_MOVE_TUTOR_TAUGHT_SWAGGER       0x1B1
#define FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT       0x1B2
#define FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER   0x1B3
#define FLAG_MOVE_TUTOR_TAUGHT_MIMIC         0x1B4
#define FLAG_MOVE_TUTOR_TAUGHT_METRONOME     0x1B5
#define FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK    0x1B6
#define FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE    0x1B7
#define FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH  0x1B8
#define FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE   0x1B9
#define FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION     0x1BA
#define FLAG_DEFEATED_REGIROCK               0x1BB
#define FLAG_DEFEATED_REGICE                 0x1BC
#define FLAG_DEFEATED_REGISTEEL              0x1BD
#define FLAG_DEFEATED_KYOGRE                 0x1BE
#define FLAG_DEFEATED_GROUDON                0x1BF
#define FLAG_DEFEATED_RAYQUAZA               0x1C0
#define FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE 0x1C1
#define FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE 0x1C2
#define FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE 0x1C3
#define FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT 0x1C4
#define FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT 0x1C5
#define FLAG_DEFEATED_SUDOWOODO              0x1C6
#define FLAG_DEFEATED_MEW                    0x1C7
#define FLAG_DEFEATED_LATIAS_OR_LATIOS       0x1C8
#define FLAG_CAUGHT_LATIAS_OR_LATIOS         0x1C9
#define FLAG_CAUGHT_MEW                      0x1CA
#define FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE 0x1CB
#define FLAG_MET_SCOTT_IN_VERDANTURF         0x1CC
#define FLAG_MET_SCOTT_IN_FALLARBOR          0x1CD
#define FLAG_MET_SCOTT_IN_LILYCOVE           0x1CE
#define FLAG_MET_SCOTT_IN_EVERGRANDE         0x1CF
#define FLAG_MET_SCOTT_ON_SS_TIDAL           0x1D0
#define FLAG_SCOTT_GIVES_BATTLE_POINTS       0x1D1
#define FLAG_COLLECTED_ALL_GOLD_SYMBOLS      0x1D2
#define FLAG_ENABLE_ROXANNE_MATCH_CALL       0x1D3
#define FLAG_ENABLE_BRAWLY_MATCH_CALL        0x1D4
#define FLAG_ENABLE_WATTSON_MATCH_CALL       0x1D5
#define FLAG_ENABLE_FLANNERY_MATCH_CALL      0x1D6
#define FLAG_ENABLE_WINONA_MATCH_CALL        0x1D7
#define FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL 0x1D8
#define FLAG_ENABLE_JUAN_MATCH_CALL          0x1D9

#define FLAG_UNUSED_0x1DA                    0x1DA // Unused Flag

#define FLAG_SHOWN_MYSTIC_TICKET             0x1DB
#define FLAG_DEFEATED_HO_OH                  0x1DC
#define FLAG_DEFEATED_LUGIA                  0x1DD

#define FLAG_UNUSED_0x1DE                    0x1DE // Unused Flag
#define FLAG_UNUSED_0x1DF                    0x1DF // Unused Flag
#define FLAG_UNUSED_0x1E0                    0x1E0 // Unused Flag
#define FLAG_UNUSED_0x1E1                    0x1E1 // Unused Flag
#define FLAG_UNUSED_0x1E2                    0x1E2 // Unused Flag
#define FLAG_UNUSED_0x1E3                    0x1E3 // Unused Flag

// Mystery Gift Flags (Unknown)
#define FLAG_MYSTERY_GIFT_DONE               0x1E4
#define FLAG_MYSTERY_GIFT_1                  0x1E5
#define FLAG_MYSTERY_GIFT_2                  0x1E6
#define FLAG_MYSTERY_GIFT_3                  0x1E7
#define FLAG_MYSTERY_GIFT_4                  0x1E8
#define FLAG_MYSTERY_GIFT_5                  0x1E9
#define FLAG_MYSTERY_GIFT_6                  0x1EA
#define FLAG_MYSTERY_GIFT_7                  0x1EB
#define FLAG_MYSTERY_GIFT_8                  0x1EC
#define FLAG_MYSTERY_GIFT_9                  0x1ED
#define FLAG_MYSTERY_GIFT_10                 0x1EE
#define FLAG_MYSTERY_GIFT_11                 0x1EF
#define FLAG_MYSTERY_GIFT_12                 0x1F0
#define FLAG_MYSTERY_GIFT_13                 0x1F1
#define FLAG_MYSTERY_GIFT_14                 0x1F2
#define FLAG_MYSTERY_GIFT_15                 0x1F3

// Hidden Items
#define FLAG_HIDDEN_ITEMS_START                                                         0x1F4
#define FLAG_HIDDEN_ITEM_LAVARIDGE_TOWN_ICE_HEAL             (FLAG_HIDDEN_ITEMS_START + 0x00)
#define FLAG_HIDDEN_ITEM_TRICK_HOUSE_NUGGET                  (FLAG_HIDDEN_ITEMS_START + 0x01)
#define FLAG_HIDDEN_ITEM_ZONE2A_CHERI_BERRY	                 (FLAG_HIDDEN_ITEMS_START + 0x02)			
#define FLAG_HIDDEN_ITEM_ZONE2B_PECHA_BERRY	                 (FLAG_HIDDEN_ITEMS_START + 0x03)			
#define FLAG_HIDDEN_ITEM_ZONE2B_CHESTO_BERRY	             (FLAG_HIDDEN_ITEMS_START + 0x04)			
#define FLAG_HIDDEN_ITEM_ZONE3A_PECHA_BERRY	                 (FLAG_HIDDEN_ITEMS_START + 0x05)			
#define FLAG_HIDDEN_ITEM_ZONE3A_CHERI_BERRY	                 (FLAG_HIDDEN_ITEMS_START + 0x06)			
#define FLAG_HIDDEN_ITEM_ZONE4A_ORAN_BERRY  	             (FLAG_HIDDEN_ITEMS_START + 0x07)			
#define FLAG_HIDDEN_ITEM_ZONE4A_PECHA_BERRY	                 (FLAG_HIDDEN_ITEMS_START + 0x08)			
#define FLAG_HIDDEN_ITEM_ZONE4C_CHESTO_BERRY	             (FLAG_HIDDEN_ITEMS_START + 0x09)			
#define FLAG_HIDDEN_ITEM_ZONE4C_RAWST_BERRY	                 (FLAG_HIDDEN_ITEMS_START + 0x0A)			
#define FLAG_HIDDEN_ITEM_ZONE4E_CHERI_BERRY	                 (FLAG_HIDDEN_ITEMS_START + 0x0B)			
#define FLAG_HIDDEN_ITEM_ZONE5A_ORAN_BERRY	                 (FLAG_HIDDEN_ITEMS_START + 0x0C)			
#define FLAG_HIDDEN_ITEM_ZONE6A_RED_SHARD_1	                 (FLAG_HIDDEN_ITEMS_START + 0x0D)			
#define FLAG_HIDDEN_ITEM_ZONE6A_RED_SHARD_2	                 (FLAG_HIDDEN_ITEMS_START + 0x0E)			
#define FLAG_HIDDEN_ITEM_ZONE6A_RAWST_BERRY	                 (FLAG_HIDDEN_ITEMS_START + 0x0F)			
#define FLAG_HIDDEN_ITEM_ZONE6A_PERSIM_BERRY	             (FLAG_HIDDEN_ITEMS_START + 0x10)			
#define FLAG_HIDDEN_ITEM_ZONE6A_CHESTO_BERRY	             (FLAG_HIDDEN_ITEMS_START + 0x11)			
#define FLAG_HIDDEN_ITEM_ZONE7A_ASPEAR_BERRY	             (FLAG_HIDDEN_ITEMS_START + 0x12)			
#define FLAG_HIDDEN_ITEM_ZONE7A_PERSIM_BERRY	             (FLAG_HIDDEN_ITEMS_START + 0x13)			
#define FLAG_HIDDEN_ITEM_ZONE7A_RAWST_BERRY	                 (FLAG_HIDDEN_ITEMS_START + 0x14)			
#define FLAG_HIDDEN_ITEM_ZONE7A_SITRUS_BERRY	             (FLAG_HIDDEN_ITEMS_START + 0x15)			
#define FLAG_HIDDEN_ITEM_ZONE8A_RED_SHARD	                 (FLAG_HIDDEN_ITEMS_START + 0x16)			
#define FLAG_HIDDEN_ITEM_ZONE8B_RED_SHARD	                 (FLAG_HIDDEN_ITEMS_START + 0x17)			
#define FLAG_HIDDEN_ITEM_ZONE8C_RED_SHARD	                 (FLAG_HIDDEN_ITEMS_START + 0x18)			
#define FLAG_HIDDEN_ITEM_ZONE9A_LEPPA_BERRY	                 (FLAG_HIDDEN_ITEMS_START + 0x19)			
#define FLAG_HIDDEN_ITEM_ZONE9A_SITRUS_BERRY	             (FLAG_HIDDEN_ITEMS_START + 0x1A)			
#define FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD_1	             (FLAG_HIDDEN_ITEMS_START + 0x1B)			
#define FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD_2	             (FLAG_HIDDEN_ITEMS_START + 0x1C)			
#define FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD_3	             (FLAG_HIDDEN_ITEMS_START + 0x1D)			
#define FLAG_HIDDEN_ITEM_ZONE10A_RED_SHARD    	             (FLAG_HIDDEN_ITEMS_START + 0x1E)			
#define FLAG_HIDDEN_ITEM_ZONE11A_SITRUS_BERRY	             (FLAG_HIDDEN_ITEMS_START + 0x1F)			
#define FLAG_HIDDEN_ITEM_ZONE11A_CHERI_BERRY	             (FLAG_HIDDEN_ITEMS_START + 0x20)			
#define FLAG_HIDDEN_ITEM_ZONE11A_RAWST_BERRY	             (FLAG_HIDDEN_ITEMS_START + 0x21)			
#define FLAG_HIDDEN_ITEM_ZONE11A_PECHA_BERRY	             (FLAG_HIDDEN_ITEMS_START + 0x22)			
#define FLAG_HIDDEN_ITEM_ZONE12A_LEPPA_BERRY	             (FLAG_HIDDEN_ITEMS_START + 0x23)
#define FLAG_HIDDEN_ITEM_ZONE12A_LUM_BERRY	                 (FLAG_HIDDEN_ITEMS_START + 0x24)
#define FLAG_HIDDEN_ITEM_ZONE12A_RED_SHARD	                 (FLAG_HIDDEN_ITEMS_START + 0x25)
#define FLAG_HIDDEN_ITEM_ZONE12A_BLUE_SHARD	                 (FLAG_HIDDEN_ITEMS_START + 0x26)
#define FLAG_HIDDEN_ITEM_ZONE13A_LUM_BERRY	                 (FLAG_HIDDEN_ITEMS_START + 0x27)
#define FLAG_HIDDEN_ITEM_ZONE14A_RED_SHARD	                 (FLAG_HIDDEN_ITEMS_START + 0x28)
#define FLAG_HIDDEN_ITEM_ZONE14B_BLUE_SHARD	                 (FLAG_HIDDEN_ITEMS_START + 0x29)
#define FLAG_HIDDEN_ITEM_ZONE14B_YELLOW_SHARD	             (FLAG_HIDDEN_ITEMS_START + 0x2A)
#define FLAG_HIDDEN_ITEM_ZONE16A_RED_SHARD	                 (FLAG_HIDDEN_ITEMS_START + 0x2B)
#define FLAG_HIDDEN_ITEM_ZONE18A_SITRUS_BERRY	             (FLAG_HIDDEN_ITEMS_START + 0x2C)
#define FLAG_HIDDEN_ITEM_ZONE19B_BLUE_SHARD	                 (FLAG_HIDDEN_ITEMS_START + 0x2D)
#define FLAG_HIDDEN_ITEM_ZONE19B_STARDUST	                 (FLAG_HIDDEN_ITEMS_START + 0x2E)
#define FLAG_HIDDEN_ITEM_ZONE19B_PEARL	                     (FLAG_HIDDEN_ITEMS_START + 0x2F)
#define FLAG_HIDDEN_ITEM_ZONE19B_YELLOW_SHARD	             (FLAG_HIDDEN_ITEMS_START + 0x30)
#define FLAG_HIDDEN_ITEM_ZONE19B_BIG_PEARL	                 (FLAG_HIDDEN_ITEMS_START + 0x31)
#define FLAG_HIDDEN_ITEM_ZONE19B_RED_SHARD	                 (FLAG_HIDDEN_ITEMS_START + 0x32)
#define FLAG_HIDDEN_ITEM_ZONE19B_STAR_PIECE	                 (FLAG_HIDDEN_ITEMS_START + 0x33)
#define FLAG_HIDDEN_ITEM_ZONE20A_RED_SHARD	                 (FLAG_HIDDEN_ITEMS_START + 0x34)
#define FLAG_HIDDEN_ITEM_ZONE21A_RED_SHARD1	                 (FLAG_HIDDEN_ITEMS_START + 0x35)
#define FLAG_HIDDEN_ITEM_ZONE21B_RED_SHARD	                 (FLAG_HIDDEN_ITEMS_START + 0x36)
#define FLAG_HIDDEN_ITEM_ZONE21A_RED_SHARD2                  (FLAG_HIDDEN_ITEMS_START + 0x37)
#define FLAG_HIDDEN_ITEM_ZONE21A_LUM_BERRY                   (FLAG_HIDDEN_ITEMS_START + 0x38)
#define FLAG_HIDDEN_ITEM_ZONE21A_CHESTO_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x39)
#define FLAG_HIDDEN_ITEM_ZONE21A_SITRUS_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x3A)
#define FLAG_HIDDEN_ITEM_ZONE21A_CHILAN_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x3B)
#define FLAG_HIDDEN_ITEM_ZONE21A_OCCA_BERRY                  (FLAG_HIDDEN_ITEMS_START + 0x3C)
#define FLAG_HIDDEN_ITEM_ZONE21A_PASSHO_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x3D)
#define FLAG_HIDDEN_ITEM_ZONE21A_WACAN_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x3E)
#define FLAG_HIDDEN_ITEM_ZONE21A_RINDO_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x3F)
#define FLAG_HIDDEN_ITEM_ZONE21A_YACHE_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x40)
#define FLAG_HIDDEN_ITEM_ZONE21A_CHOPLE_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x41)
#define FLAG_HIDDEN_ITEM_ZONE21A_KEBIA_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x42)
#define FLAG_HIDDEN_ITEM_ZONE21A_SHUCA_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x43)
#define FLAG_HIDDEN_ITEM_ZONE21A_COBA_BERRY                  (FLAG_HIDDEN_ITEMS_START + 0x44)
#define FLAG_HIDDEN_ITEM_ZONE21A_PAYAPA_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x45)
#define FLAG_HIDDEN_ITEM_ZONE21A_TANGA_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x46)
#define FLAG_HIDDEN_ITEM_ZONE21A_CHARTI_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x47)
#define FLAG_HIDDEN_ITEM_ZONE21A_KASIB_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x48)
#define FLAG_HIDDEN_ITEM_ZONE21A_HABAN_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x49)
#define FLAG_HIDDEN_ITEM_ZONE21A_COLBUR_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x4A)
#define FLAG_HIDDEN_ITEM_ZONE21A_BABIRI_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x4B)
#define FLAG_HIDDEN_ITEM_ZONE21A_ROSELI_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x4C)
#define FLAG_HIDDEN_ITEM_ZONE22A_SITRUS_BERRY_1              (FLAG_HIDDEN_ITEMS_START + 0x4D)
#define FLAG_HIDDEN_ITEM_ZONE22A_SITRUS_BERRY_2              (FLAG_HIDDEN_ITEMS_START + 0x4E)
#define FLAG_HIDDEN_ITEM_ZONE22A_ASPEAR_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x4F)
#define FLAG_HIDDEN_ITEM_ZONE22A_LUM_BERRY                   (FLAG_HIDDEN_ITEMS_START + 0x50)
#define FLAG_HIDDEN_ITEM_ZONE22A_RED_SHARD_1                 (FLAG_HIDDEN_ITEMS_START + 0x51)
#define FLAG_HIDDEN_ITEM_ZONE22A_RED_SHARD_2                 (FLAG_HIDDEN_ITEMS_START + 0x52)
#define FLAG_HIDDEN_ITEM_ZONE22A_RED_SHARD_3                 (FLAG_HIDDEN_ITEMS_START + 0x53)
#define FLAG_HIDDEN_ITEM_ZONE22A_RED_SHARD_4                 (FLAG_HIDDEN_ITEMS_START + 0x54)
#define FLAG_HIDDEN_ITEM_ZONE22A_RED_SHARD_5                 (FLAG_HIDDEN_ITEMS_START + 0x55)
#define FLAG_HIDDEN_ITEM_ZONE22A_RED_SHARD_6                 (FLAG_HIDDEN_ITEMS_START + 0x56)
#define FLAG_HIDDEN_ITEM_ZONE23A_SITRUS_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x57)
#define FLAG_HIDDEN_ITEM_ZONE23A_CHESTO_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x58)
#define FLAG_HIDDEN_ITEM_ZONE23A_PERSIM_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x59)
#define FLAG_HIDDEN_ITEM_ZONE23A_LUM_BERRY                   (FLAG_HIDDEN_ITEMS_START + 0x5A)
#define FLAG_HIDDEN_ITEM_ZONE23A_CHERI_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x5B)
#define FLAG_HIDDEN_ITEM_ZONE23A_ASPEAR_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x5C)
#define FLAG_HIDDEN_ITEM_ZONE24A_RED_SHARD_1                 (FLAG_HIDDEN_ITEMS_START + 0x5D)
#define FLAG_HIDDEN_ITEM_ZONE24A_RED_SHARD_2                 (FLAG_HIDDEN_ITEMS_START + 0x5E)
#define FLAG_HIDDEN_ITEM_ZONE24A_RED_SHARD_3                 (FLAG_HIDDEN_ITEMS_START + 0x5F)
#define FLAG_HIDDEN_ITEM_ZONE24A_RED_SHARD_4                 (FLAG_HIDDEN_ITEMS_START + 0x60)
#define FLAG_HIDDEN_ITEM_ZONE24A_RED_SHARD_5                 (FLAG_HIDDEN_ITEMS_START + 0x61)
#define FLAG_HIDDEN_ITEM_ZONE24A_RED_SHARD_6                 (FLAG_HIDDEN_ITEMS_START + 0x62)
#define FLAG_HIDDEN_ITEM_ZONE24A_BLUE_SHARD                  (FLAG_HIDDEN_ITEMS_START + 0x63)
#define FLAG_HIDDEN_ITEM_ZONE24A_YELLOW_SHARD                (FLAG_HIDDEN_ITEMS_START + 0x64)
#define FLAG_HIDDEN_ITEM_NEXT44       (FLAG_HIDDEN_ITEMS_START + 0x65)
#define FLAG_HIDDEN_ITEM_NEXT55       (FLAG_HIDDEN_ITEMS_START + 0x66)
#define FLAG_HIDDEN_ITEM_NEXT66       (FLAG_HIDDEN_ITEMS_START + 0x67)
#define FLAG_HIDDEN_ITEM_NEXT88       (FLAG_HIDDEN_ITEMS_START + 0x68)
#define FLAG_HIDDEN_ITEM_NEXT99       (FLAG_HIDDEN_ITEMS_START + 0x69)
#define FLAG_HIDDEN_ITEM_NEXT23       (FLAG_HIDDEN_ITEMS_START + 0x6A)
#define FLAG_HIDDEN_ITEM_NEXT24       (FLAG_HIDDEN_ITEMS_START + 0x6B)
#define FLAG_HIDDEN_ITEM_NEXT25       (FLAG_HIDDEN_ITEMS_START + 0x6C)
#define FLAG_HIDDEN_ITEM_NEXT26       (FLAG_HIDDEN_ITEMS_START + 0x6D)
#define FLAG_HIDDEN_ITEM_NEXT27       (FLAG_HIDDEN_ITEMS_START + 0x6E)
#define FLAG_HIDDEN_ITEM_NEXT29       (FLAG_HIDDEN_ITEMS_START + 0x6F)

#define FLAG_UNUSED_0x264  0x264 // Unused Flag
#define FLAG_UNUSED_0x265  0x265 // Unused Flag
#define FLAG_UNUSED_0x266  0x266 // Unused Flag
#define FLAG_UNUSED_0x267  0x267 // Unused Flag
#define FLAG_UNUSED_0x268  0x268 // Unused Flag
#define FLAG_UNUSED_0x269  0x269 // Unused Flag
#define FLAG_UNUSED_0x26A  0x26A // Unused Flag
#define FLAG_UNUSED_0x26B  0x26B // Unused Flag
#define FLAG_UNUSED_0x26C  0x26C // Unused Flag
#define FLAG_UNUSED_0x26D  0x26D // Unused Flag
#define FLAG_UNUSED_0x26E  0x26E // Unused Flag
#define FLAG_UNUSED_0x26F  0x26F // Unused Flag
#define FLAG_UNUSED_0x270  0x270 // Unused Flag
#define FLAG_UNUSED_0x271  0x271 // Unused Flag
#define FLAG_UNUSED_0x272  0x272 // Unused Flag
#define FLAG_UNUSED_0x273  0x273 // Unused Flag
#define FLAG_UNUSED_0x274  0x274 // Unused Flag
#define FLAG_UNUSED_0x275  0x275 // Unused Flag
#define FLAG_UNUSED_0x276  0x276 // Unused Flag
#define FLAG_UNUSED_0x277  0x277 // Unused Flag
#define FLAG_UNUSED_0x278  0x278 // Unused Flag
#define FLAG_UNUSED_0x279  0x279 // Unused Flag
#define FLAG_UNUSED_0x27A  0x27A // Unused Flag
#define FLAG_UNUSED_0x27B  0x27B // Unused Flag
#define FLAG_UNUSED_0x27C  0x27C // Unused Flag
#define FLAG_UNUSED_0x27D  0x27D // Unused Flag
#define FLAG_UNUSED_0x27E  0x27E // Unused Flag
#define FLAG_UNUSED_0x27F  0x27F // Unused Flag
#define FLAG_UNUSED_0x280  0x280 // Unused Flag
#define FLAG_UNUSED_0x281  0x281 // Unused Flag
#define FLAG_UNUSED_0x282  0x282 // Unused Flag
#define FLAG_UNUSED_0x283  0x283 // Unused Flag
#define FLAG_UNUSED_0x284  0x284 // Unused Flag
#define FLAG_UNUSED_0x285  0x285 // Unused Flag
#define FLAG_UNUSED_0x286  0x286 // Unused Flag
#define FLAG_UNUSED_0x287  0x287 // Unused Flag
#define FLAG_UNUSED_0x288  0x288 // Unused Flag
#define FLAG_UNUSED_0x289  0x289 // Unused Flag
#define FLAG_UNUSED_0x28A  0x28A // Unused Flag
#define FLAG_UNUSED_0x28B  0x28B // Unused Flag
#define FLAG_UNUSED_0x28C  0x28C // Unused Flag
#define FLAG_UNUSED_0x28D  0x28D // Unused Flag
#define FLAG_UNUSED_0x28E  0x28E // Unused Flag
#define FLAG_UNUSED_0x28F  0x28F // Unused Flag
#define FLAG_UNUSED_0x290  0x290 // Unused Flag
#define FLAG_UNUSED_0x291  0x291 // Unused Flag
#define FLAG_UNUSED_0x292  0x292 // Unused Flag
#define FLAG_UNUSED_0x293  0x293 // Unused Flag
#define FLAG_UNUSED_0x294  0x294 // Unused Flag
#define FLAG_UNUSED_0x295  0x295 // Unused Flag
#define FLAG_UNUSED_0x296  0x296 // Unused Flag
#define FLAG_UNUSED_0x297  0x297 // Unused Flag
#define FLAG_UNUSED_0x298  0x298 // Unused Flag
#define FLAG_UNUSED_0x299  0x299 // Unused Flag
#define FLAG_UNUSED_0x29A  0x29A // Unused Flag
#define FLAG_UNUSED_0x29B  0x29B // Unused Flag
#define FLAG_UNUSED_0x29C  0x29C // Unused Flag
#define FLAG_UNUSED_0x29D  0x29D // Unused Flag
#define FLAG_UNUSED_0x29E  0x29E // Unused Flag
#define FLAG_UNUSED_0x29F  0x29F // Unused Flag
#define FLAG_UNUSED_0x2A0  0x2A0 // Unused Flag
#define FLAG_UNUSED_0x2A1  0x2A1 // Unused Flag
#define FLAG_UNUSED_0x2A2  0x2A2 // Unused Flag
#define FLAG_UNUSED_0x2A3  0x2A3 // Unused Flag
#define FLAG_UNUSED_0x2A4  0x2A4 // Unused Flag
#define FLAG_UNUSED_0x2A5  0x2A5 // Unused Flag
#define FLAG_UNUSED_0x2A6  0x2A6 // Unused Flag
#define FLAG_UNUSED_0x2A7  0x2A7 // Unused Flag
#define FLAG_UNUSED_0x2A8  0x2A8 // Unused Flag
#define FLAG_UNUSED_0x2A9  0x2A9 // Unused Flag
#define FLAG_UNUSED_0x2AA  0x2AA // Unused Flag
#define FLAG_UNUSED_0x2AB  0x2AB // Unused Flag
#define FLAG_UNUSED_0x2AC  0x2AC // Unused Flag
#define FLAG_UNUSED_0x2AD  0x2AD // Unused Flag
#define FLAG_UNUSED_0x2AE  0x2AE // Unused Flag
#define FLAG_UNUSED_0x2AF  0x2AF // Unused Flag
#define FLAG_UNUSED_0x2B0  0x2B0 // Unused Flag
#define FLAG_UNUSED_0x2B1  0x2B1 // Unused Flag
#define FLAG_UNUSED_0x2B2  0x2B2 // Unused Flag
#define FLAG_UNUSED_0x2B3  0x2B3 // Unused Flag
#define FLAG_UNUSED_0x2B4  0x2B4 // Unused Flag
#define FLAG_UNUSED_0x2B5  0x2B5 // Unused Flag
#define FLAG_UNUSED_0x2B6  0x2B6 // Unused Flag
#define FLAG_UNUSED_0x2B7  0x2B7 // Unused Flag
#define FLAG_UNUSED_0x2B8  0x2B8 // Unused Flag
#define FLAG_UNUSED_0x2B9  0x2B9 // Unused Flag
#define FLAG_UNUSED_0x2BA  0x2BA // Unused Flag
#define FLAG_UNUSED_0x2BB  0x2BB // Unused Flag

// Event Flags
#define FLAG_HIDE_UNUSED_0x2BC                                      0x2BC
#define FLAG_HIDE_UNUSED_0x2BD                                      0x2BD
#define FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN                0x2BE
#define FLAG_HIDE_UNION_ROOM_PLAYER_1                               0x2BF
#define FLAG_HIDE_UNION_ROOM_PLAYER_2                               0x2C0
#define FLAG_HIDE_UNION_ROOM_PLAYER_3                               0x2C1
#define FLAG_HIDE_UNION_ROOM_PLAYER_4                               0x2C2
#define FLAG_HIDE_UNION_ROOM_PLAYER_5                               0x2C3
#define FLAG_HIDE_UNION_ROOM_PLAYER_6                               0x2C4
#define FLAG_HIDE_UNION_ROOM_PLAYER_7                               0x2C5
#define FLAG_HIDE_UNION_ROOM_PLAYER_8                               0x2C6
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1               0x2C7
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2               0x2C8
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3               0x2C9
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4               0x2CA
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5               0x2CB
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6               0x2CC
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS            0x2CD
#define FLAG_HIDE_MEW                                               0x2CE
#define FLAG_HIDE_ROUTE_104_RIVAL                                   0x2CF
#define FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE                  0x2D0
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH                  0x2D1
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM          0x2D2
#define FLAG_HIDE_ROUTE_103_RIVAL                                   0x2D3
#define FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE                    0x2D4
#define FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT                        0x2D5
#define FLAG_HIDE_PETALBURG_CITY_WALLY                              0x2D6
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY   0x2D7
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM                         0x2D8

#define FLAG_UNUSED_0x2D9                                           0x2D9 // Unused Flag

#define FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER                     0x2DA
#define FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT                          0x2DB
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1                    0x2DC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP              0x2DD
#define FLAG_HIDE_PLAYERS_HOUSE_DAD                                 0x2DE
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING      0x2DF
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING          0x2E0
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE             0x2E1
#define FLAG_HIDE_ROUTE_104_MR_BRINEY                               0x2E2
#define FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY                           0x2E3
#define FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN                            0x2E4
#define FLAG_HIDE_ROUTE_109_MR_BRINEY                               0x2E5
#define FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT                          0x2E6
#define FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN                       0x2E7
#define FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT                          0x2E8
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN            0x2E9
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY                    0x2EA
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION                  0x2EB
#define FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER                0x2EC
#define FLAG_HIDE_SLATEPORT_CITY_SCOTT                              0x2ED
#define FLAG_HIDE_ROUTE_101_ZIGZAGOON                               0x2EE
#define FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY                           0x2EF
#define FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE                       0x2F0
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN              0x2F1
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1          0x2F2
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2          0x2F3
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA          0x2F4
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM               0x2F5
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM                0x2F6
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM                    0x2F7
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM      0x2F8
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK              0x2F9
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK                  0x2FA
#define FLAG_HIDE_DEOXYS                                            0x2FB
#define FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE                      0x2FC
#define FLAG_HIDE_MAUVILLE_CITY_SCOTT                               0x2FD
#define FLAG_HIDE_VERDANTURF_TOWN_SCOTT                             0x2FE
#define FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT                  0x2FF
#define FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE                        0x300
#define FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE                      0x301
#define FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE                          0x302
#define FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE                         0x303
#define FLAG_HIDE_PETALBURG_GYM_NORMAN                              0x304
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA                           0x305
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_1         0x306
#define FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR                           0x307
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1                          0x308
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2                          0x309
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3                          0x30A
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4                          0x30B
#define FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS                          0x30C
#define FLAG_HIDE_PETALBURG_GYM_GREETER                             0x30D
#define FLAG_HIDE_MARINE_CAVE_KYOGRE                                0x30E
#define FLAG_HIDE_TERRA_CAVE_GROUDON                                0x30F
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM          0x310
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM              0x311
#define FLAG_HIDE_ROUTE_119_SCOTT                                   0x312
#define FLAG_HIDE_LILYCOVE_MOTEL_SCOTT                              0x313
#define FLAG_HIDE_MOSSDEEP_CITY_SCOTT                               0x314
#define FLAG_HIDE_FANCLUB_OLD_LADY                                  0x315
#define FLAG_HIDE_FANCLUB_BOY                                       0x316
#define FLAG_HIDE_FANCLUB_LITTLE_BOY                                0x317
#define FLAG_HIDE_FANCLUB_LADY                                      0x318
#define FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT               0x319
#define FLAG_HIDE_LITTLEROOT_TOWN_RIVAL                             0x31A
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCH                             0x31B
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1                          0x31C
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1                          0x31D
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1                          0x31E
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3                          0x31F
#define FLAG_HIDE_LUGIA                                             0x320
#define FLAG_HIDE_HO_OH                                             0x321
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER                    0x322
#define FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER                   0x323
#define FLAG_HIDE_MAUVILLE_CITY_WALLY                               0x324
#define FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE                        0x325
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY                0x326
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND                   0x327
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND     0x328
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE         0x329
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT                           0x32A
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL     0x32B
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_TOTODILE      0x32C
#define FLAG_HIDE_ROUTE_116_DROPPED_GLASSES_MAN                     0x32D
#define FLAG_HIDE_RUSTBORO_CITY_RIVAL                               0x32E
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL     0x32F
#define FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE                           0x330
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL       0x331
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL           0x332
#define FLAG_HIDE_ROUTE_112_TEAM_MAGMA                              0x333
#define FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE                        0x334
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE         0x335
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE         0x336
#define FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA                          0x337
#define FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD                          0x338
#define FLAG_HIDE_LEGEND_MON_CAVE_OF_ORIGIN                         0x339 // Unused, leftover from R/S
#define FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE                            0x33A
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE                             0x33B
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE                     0x33C
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE                      0x33D
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD                         0x33E
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS               0x33F
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER                0x340
#define FLAG_HIDE_GRANITE_CAVE_STEVEN                               0x341
#define FLAG_HIDE_ROUTE_128_STEVEN                                  0x342
#define FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY                       0x343
#define FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT              0x344
#define FLAG_HIDE_ROUTE_110_BIRCH                                   0x345
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA     0x346
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1                             0x347
#define FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN                      0x348
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN               0x349
#define FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO                         0x34A
#define FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY                      0x34B
#define FLAG_HIDE_RUSTBORO_CITY_SCIENTIST                           0x34C
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT                  0x34D
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE                      0x34E
#define FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD                           0x34F
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW            0x350
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL          0x351
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP                   0x352
#define FLAG_HIDE_ROUTE_119_RIVAL                                   0x353
#define FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS                         0x354
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON                          0x355
#define FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS                         0x356
#define FLAG_HIDE_SKY_PILLAR_WALLACE                                0x357
#define FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE                              0x358
#define FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS                              0x359
#define FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY                       0x35A
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE                     0x35B
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL                    0x35C
#define FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL                           0x35D
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA          0x35E
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN              0x35F
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1           0x360
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2           0x361
#define FLAG_HIDE_PETALBURG_GYM_WALLY                               0x362
#define FLAG_UNKNOWN_0x363                                          0x363 // Set, however has no purpose.
#define FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN                           0x364
#define FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY          0x365
#define FLAG_HIDE_LANETTES_HOUSE_LANETTE                            0x366
#define FLAG_HIDE_FALLORBOR_POKEMON_CENTER_LANETTE                  0x367
#define FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN                          0x368
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT    0x369
#define FLAG_HIDE_DESERT_UNDERPASS_FOSSIL                           0x36A
#define FLAG_HIDE_ROUTE_111_PLAYER_DESCENT                          0x36B
#define FLAG_HIDE_ROUTE_111_DESERT_FOSSIL                           0x36C
#define FLAG_HIDE_MT_CHIMNEY_TRAINERS                               0x36D
#define FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT                         0x36E
#define FLAG_HIDE_RUSTURF_TUNNEL_BRINEY                             0x36F
#define FLAG_HIDE_RUSTURF_TUNNEL_PEEKO                              0x370
#define FLAG_HIDE_BRINEYS_HOUSE_PEEKO                               0x371
#define FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA                          0x372
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS         0x373
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1     0x374
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2     0x375
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE           0x376
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN    0x377
#define FLAG_HIDE_BATTLE_TOWER_OPPONENT                             0x378
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL                  0x379
#define FLAG_HIDE_ROUTE_119_TEAM_AQUA                               0x37A
#define FLAG_HIDE_ROUTE_116_MR_BRINEY                               0x37B
#define FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS                      0x37C
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS                      0x37D
#define FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND                        0x37E
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2         0x37F
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380          0x380
#define FLAG_HIDE_ROUTE_101_BIRCH                                   0x381
#define FLAG_HIDE_ROUTE_103_BIRCH                                   0x382
#define FLAG_HIDE_TRICK_HOUSE_END_MAN                               0x383
#define FLAG_HIDE_ROUTE_110_TEAM_AQUA                               0x384
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2                          0x385
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2                          0x386
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2                          0x387
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3                          0x388
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS                     0x389
#define FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST                      0x38A
#define FLAG_HIDE_FALLARBOR_AZURILL                                 0x38B
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_ATTENDANT                   0x38C
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR                      0x38D
#define FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE                         0x38E
#define FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON              0x38F
#define FLAG_HIDE_MAUVILLE_CITY_WATTSON                             0x390
#define FLAG_HIDE_MAUVILLE_GYM_WATTSON                              0x391
#define FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS                        0x392
#define FLAG_UNKNOWN_0x393                                          0x393 // Set, however has no purpose.
#define FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE                             0x394
#define FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA                          0x395
#define FLAG_HIDE_BATTLE_TOWER_REPORTER                             0x396
#define FLAG_HIDE_ROUTE_110_RIVAL                                   0x397
#define FLAG_HIDE_CHAMPIONS_ROOM_RIVAL                              0x398
#define FLAG_HIDE_CHAMPIONS_ROOM_BIRCH                              0x399
#define FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE                           0x39A
#define FLAG_HIDE_ROUTE_119_RIVAL_ON_BIKE                           0x39B
#define FLAG_HIDE_AQUA_HIDEOUT_GRUNTS                               0x39C
#define FLAG_HIDE_LILYCOVE_MOTEL_GAME_DESIGNERS                     0x39D
#define FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA                              0x39E
#define FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA                             0x39F
#define FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO                        0x3A0
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL                              0x3A1
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_ON_BIKE                      0x3A2
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_1                             0x3A3
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_2                             0x3A4
#define FLAG_HIDE_FORTREE_CITY_HOUSE_4_WINGULL                      0x3A5
#define FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL                     0x3A6
#define FLAG_HIDE_REGIROCK                                          0x3A7
#define FLAG_HIDE_REGICE                                            0x3A8
#define FLAG_HIDE_REGISTEEL                                         0x3A9
#define FLAG_HIDE_METEOR_FALLS_TEAM_AQUA                            0x3AA
#define FLAG_HIDE_METEOR_FALLS_TEAM_MAGMA                           0x3AB
#define FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN                      0x3AC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT               0x3AD
#define FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO                          0x3AE
#define FLAG_HIDE_AQUA_HIDEOUT_B2F_SUBMARINE_SHADOW                 0x3AF
#define FLAG_HIDE_ROUTE_128_ARCHIE                                  0x3B0
#define FLAG_HIDE_ROUTE_128_MAXIE                                   0x3B1
#define FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS                       0x3B2
#define FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE                          0x3B3
#define FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN                        0x3B4
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE              0x3B5
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY                       0x3B6
#define FLAG_HIDE_SS_TIDAL_ROOMS_SNATCH_GIVER                       0x3B7
#define FLAG_RECEIVED_SHOAL_SALT_1                                  0x3B8
#define FLAG_RECEIVED_SHOAL_SALT_2                                  0x3B9
#define FLAG_RECEIVED_SHOAL_SALT_3                                  0x3BA
#define FLAG_RECEIVED_SHOAL_SALT_4                                  0x3BB
#define FLAG_RECEIVED_SHOAL_SHELL_1                                 0x3BC
#define FLAG_RECEIVED_SHOAL_SHELL_2                                 0x3BD
#define FLAG_RECEIVED_SHOAL_SHELL_3                                 0x3BE
#define FLAG_RECEIVED_SHOAL_SHELL_4                                 0x3BF
#define FLAG_HIDE_ROUTE_111_SECRET_POWER_MAN                        0x3C0
#define FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION                       0x3C1
#define FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN      0x3C2
#define FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL                          0x3C3
#define FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL                          0x3C4
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT 0x3C5
#define FLAG_HIDE_ROUTE_118_STEVEN                                  0x3C6
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN                0x3C7
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL       0x3C8
#define FLAG_HIDE_FORTREE_CITY_KECLEON                              0x3C9
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE                          0x3CA
#define FLAG_HIDE_LILYCOVE_CITY_RIVAL                               0x3CB
#define FLAG_HIDE_ROUTE_120_STEVEN                                  0x3CC
#define FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN                            0x3CD
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1                            0x3CE
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2                            0x3CF
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3                            0x3D0
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1                      0x3D1
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2                      0x3D2
#define FLAG_HIDE_OLDALE_TOWN_RIVAL                                 0x3D3
#define FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE      0x3D4
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE_SHADOW                   0x3D5
#define FLAG_HIDE_ROUTE_120_KECLEON_1                               0x3D6
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDA                              0x3D7
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA                0x3D8
#define FLAG_HIDE_ROUTE_120_KECLEON_2                               0x3D9
#define FLAG_HIDE_ROUTE_120_KECLEON_3                               0x3DA
#define FLAG_HIDE_ROUTE_120_KECLEON_4                               0x3DB
#define FLAG_HIDE_ROUTE_120_KECLEON_5                               0x3DC
#define FLAG_HIDE_ROUTE_119_KECLEON_1                               0x3DD
#define FLAG_HIDE_ROUTE_119_KECLEON_2                               0x3DE
#define FLAG_HIDE_ROUTE_101_BOY                                     0x3DF
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M                 0x3E0
#define FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON          0x3E1
#define FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY                       0x3E2
#define FLAG_HIDE_PETALBURG_CITY_SCOTT                              0x3E3
#define FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA                          0x3E4
#define FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE                            0x3E5
#define FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON                           0x3E6
#define FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT                0x3E7

// Item Ball Flags
#define FLAG_ITEM_ZONE1A_POTION                                     0x3E8
#define FLAG_ITEM_ZONE1A_QUICK_CLAW                                 0x3E9
#define FLAG_ITEM_ZONE2A_ANTIDOTE                                   0x3EA
#define FLAG_ITEM_ZONE2B_POTION_X2                                  0x3EB
#define FLAG_ITEM_ZONE3A_SUPER_POTION                               0x3EC
#define FLAG_ITEM_ZONE3A_REPEL                                      0x3ED
#define FLAG_ITEM_ZONE3A_PARALYZE_HEAL                              0x3EE
#define FLAG_ITEM_ZONE3A_HYPER_POTION                               0x3EF
#define FLAG_ITEM_ZONE4A_BURN_HEAL                                  0x3F0
#define FLAG_ITEM_ZONE4B_AWAKENING                                  0x3F1
#define FLAG_ITEM_ZONE4C_MUSCLE_BAND                                0x3F2
#define FLAG_ITEM_ZONE4D_WISE_GLASSES                               0x3F3
#define FLAG_ITEM_ZONE4D_BEEDRILLITE                                0x3F4
#define FLAG_ITEM_ZONE4E_SUPER_POTION                               0x3F5
#define FLAG_ITEM_ZONE5A_QUICK_BALL                                 0x3F6
#define FLAG_ITEM_ZONE5A_TM03                                       0x3F7
#define FLAG_ITEM_ZONE6A_TM07                                       0x3F8
#define FLAG_ITEM_ZONE6A_NET_BALL                                   0x3F9
#define FLAG_ITEM_ZONE6A_NEST_BALL                                  0x3FA
#define FLAG_ITEM_ZONE7A_SHARP_BEAK                                 0x3FB
#define FLAG_ITEM_ZONE7A_TWISTED_SPOON                              0x3FC
#define FLAG_ITEM_ZONE7A_POISON_BARB                                0x3FD
#define FLAG_ITEM_ZONE7A_SILVER_POWDER                              0x3FE
#define FLAG_ITEM_ZONE7A_BLACK_BELT                                 0x3FF
#define FLAG_ITEM_ZONE7A_SUPER_POTION                               0x400
#define FLAG_ITEM_ZONE7A_GREAT_BALL_X2                              0x401
#define FLAG_ITEM_ZONE8A_MAGNET                                     0x402
#define FLAG_ITEM_ZONE8A_SPELL_TAG                                  0x403
#define FLAG_ITEM_ZONE8A_BLACK_GLASSES                              0x404
#define FLAG_ITEM_ZONE8B_HARD_STONE                                 0x405
#define FLAG_ITEM_ZONE8B_DUSK_BALL                                  0x406
#define FLAG_ITEM_ZONE8B_SUPER_POTION                               0x407
#define FLAG_ITEM_ZONE8C_NEVER_MELT_ICE                             0x408
#define FLAG_ITEM_ZONE8C_FULL_HEAL                                  0x409
#define FLAG_ITEM_ZONE8C_SUPER_REPEL                                0x40A
#define FLAG_ITEM_ZONE9A_MIRACLE_SEED                               0x40B
#define FLAG_ITEM_ZONE9A_BIG_ROOT                                   0x40C
#define FLAG_ITEM_ZONE9A_TM13                                       0x40D
#define FLAG_ITEM_ZONE9G_CHARCOAL                                   0x40E
#define FLAG_ITEM_ZONE10A_TM16                                      0x40F
#define FLAG_ITEM_ZONE10A_SUN_STONE                                 0x410
#define FLAG_ITEM_ZONE10A_SOFT_SAND                                 0x411
#define FLAG_ITEM_ZONE10A_DRAGON_FANG                               0x412
#define FLAG_ITEM_ZONE10A_METAL_COAT                                0x413
#define FLAG_ITEM_ZONE10A_HEAVY_DUTY_BOOTS                          0x414
#define FLAG_ITEM_ZONE11A_TM22                                      0x415
#define FLAG_ITEM_ZONE11A_MOON_STONE                                0x416
#define FLAG_ITEM_ZONE11A_TIMER_BALL                                0x417
#define FLAG_ITEM_ZONE12A_TM24                                      0x418
#define FLAG_ITEM_ZONE12A_THUNDER_STONE                             0x419
#define FLAG_ITEM_ZONE12A_FIRE_STONE                                0x41A
#define FLAG_ITEM_ZONE12A_MACHO_BRACE                               0x41B
#define FLAG_ITEM_ZONE12A_METRONOME                                 0x41C
#define FLAG_ITEM_ZONE13A_LEAF_STONE                                0x41D
#define FLAG_ITEM_ZONE13A_SHINY_STONE                               0x41E
#define FLAG_ITEM_ZONE14A_FULL_HEAL                                 0x41F
#define FLAG_ITEM_ZONE14B_HYPER_POTION                              0x420
#define FLAG_ITEM_ZONE14B_DUSK_STONE                                0x421
#define FLAG_ITEM_ZONE15A_DUSK_BALL                                 0x422
#define FLAG_ITEM_ZONE15A_TIMER_BALL                                0x423
#define FLAG_ITEM_ZONE15A_ICE_STONE                                 0x424
#define FLAG_ITEM_ZONE15A_QUICK_BALL                                0x425
#define FLAG_ITEM_ZONE15A_REVIVE                                    0x426
#define FLAG_ITEM_ZONE15A_DAWN_STONE                                0x427
#define FLAG_ITEM_ZONE15A_TM26                                      0x428
#define FLAG_ITEM_ZONE15A_GLALITITE                                 0x429
#define FLAG_ITEM_ZONE16A_TM27                                      0x42A
#define FLAG_ITEM_ZONE16A_WATER_STONE                               0x42B
#define FLAG_ITEM_ZONE16A_DIVE_BALL                                 0x42C
#define FLAG_ITEM_ZONE16A_TIMER_BALL                                0x42D
#define FLAG_ITEM_ZONE18A_EXPERT_BELT                               0x42E
#define FLAG_ITEM_ZONE18A_TM23                                      0x42F
#define FLAG_ITEM_ZONE20A_HYPER_POTION                              0x430
#define FLAG_ITEM_ZONE21A_QUICK_BALL                                0x431
#define FLAG_ITEM_ZONE21A_ULTRA_BALL                                0x432
#define FLAG_ITEM_ZONE21A_HEAT_ROCK                                 0x433
#define FLAG_ITEM_ZONE21A_SUPER_REPEL                               0x434
#define FLAG_ITEM_ZONE21A_EVERSTONE                                 0x435
#define FLAG_ITEM_ZONE21A_TM28                                      0x436
#define FLAG_ITEM_ZONE21B_SABLENITE                                 0x437
#define FLAG_ITEM_ZONE22A_ETHER                                     0x438
#define FLAG_ITEM_ZONE22A_ICY_ROCK                                  0x439
#define FLAG_ITEM_ZONE22A_METAL_COAT                                0x43A
#define FLAG_ITEM_ZONE22A_DESTINY_KNOT                              0x43B
#define FLAG_ITEM_ZONE22A_3000                                      0x43C
#define FLAG_ITEM_ZONE23A_LEAF_STONE                                0x43D
#define FLAG_ITEM_ZONE23A_HYPER_POTION                              0x43E
#define FLAG_ITEM_ZONE23A_SUPER_REPEL                               0x43F
#define FLAG_ITEM_ZONE23A_QUICK_BALL                                0x440
#define FLAG_ITEM_ZONE23A_TIMER_BALL                                0x441
#define FLAG_ITEM_ZONE23A_DUSK_BALL                                 0x442
#define FLAG_ITEM_ZONE24A_FIRE_STONE                                0x443
#define FLAG_ITEM_ZONE24A_SUN_STONE                                 0x444
#define FLAG_ITEM_ZONE24A_DRAGON_FANG                               0x445
#define FLAG_ITEM_ZONE24A_SMOOTH_ROCK                               0x446
#define FLAG_ITEM_ZONE24A_ULTRA_BALL                                0x447
#define FLAG_ITEM_ZONE24A_HYPER_POTION                              0x448
#define FLAG_ITEM_ZONE25B_DUSK_BALL                                 0x449
#define FLAG_ITEM_ZONE25C_TM36                                      0x44A
#define FLAG_ITEM_ZONE25E_FULL_HEAL                                 0x44B
#define FLAG_ITEM_ZONE25F_SHINY_STONE                               0x44C
#define FLAG_ITEM_ZONE25G_KINGS_ROCK                                0x44D
#define FLAG_ITEM_ZONE25G_4000                                      0x44E
#define FLAG_ITEM_ZONE25I_DAWN_STONE                                0x44F
#define FLAG_ITEM_ZONE25J_DUSK_STONE                                0x450
#define FLAG_ITEM_ZONE25K_TM37                                      0x451
#define FLAG_ITEM_ZONE26A_BANETTITE                                 0x452
#define FLAG_UNUSED_0x453                                           0x453
#define FLAG_UNUSED_0x454                                           0x454
#define FLAG_UNUSED_0x455                                           0x455
#define FLAG_UNUSED_0x456                                           0x456
#define FLAG_UNUSED_0x457                                           0x457
#define FLAG_UNUSED_0x458                                           0x458
#define FLAG_UNUSED_0x459                                           0x459
#define FLAG_UNUSED_0x45A                                           0x45A
#define FLAG_UNUSED_0x45B                                           0x45B
#define FLAG_UNUSED_0x45C                                           0x45C
#define FLAG_UNUSED_0x45D                                           0x45D
#define FLAG_UNUSED_0x45E                                           0x45E
#define FLAG_UNUSED_0x45F                                           0x45F
#define FLAG_UNUSED_0x460                                           0x460
#define FLAG_UNUSED_0x461                                           0x461
#define FLAG_UNUSED_0x462                                           0x462
#define FLAG_UNUSED_0x463                                           0x463
#define FLAG_UNUSED_0x464                                           0x464
#define FLAG_UNUSED_0x465                                           0x465 
#define FLAG_UNUSED_0x466                                           0x466 
#define FLAG_UNUSED_0x467                                           0x467 
#define FLAG_UNUSED_0x468                                           0x468 
#define FLAG_UNUSED_0x469                                           0x469
#define FLAG_UNUSED_0x46A                                           0x46A
#define FLAG_UNUSED_0x46B                                           0x46B
#define FLAG_UNUSED_0x46C                                           0x46C
#define FLAG_UNUSED_0x46D                                           0x46D 
#define FLAG_UNUSED_0x46E                                           0x46E
#define FLAG_UNUSED_0x46F                                           0x46F
#define FLAG_UNUSED_0x470                                           0x470 
#define FLAG_UNUSED_0x471                                           0x471
#define FLAG_UNUSED_0x472                                           0x472 
#define FLAG_UNUSED_0x473                                           0x473
#define FLAG_UNUSED_0x474                                           0x474
#define FLAG_UNUSED_0x475                                           0x475
#define FLAG_UNUSED_0x476                                           0x476
#define FLAG_UNUSED_0x477                                           0x477
#define FLAG_UNUSED_0x478                                           0x478
#define FLAG_UNUSED_0x479                                           0x479 
#define FLAG_UNUSED_0x47A                                           0x47A
#define FLAG_UNUSED_0x47B                                           0x47B
#define FLAG_UNUSED_0x47C                                           0x47C
#define FLAG_UNUSED_0x47D                                           0x47D
#define FLAG_UNUSED_0x47E                                           0x47E
#define FLAG_UNUSED_0x47F                                           0x47F
#define FLAG_UNUSED_0x480                                           0x480
#define FLAG_UNUSED_0x481                                           0x481
#define FLAG_UNUSED_0x482                                           0x482
#define FLAG_UNUSED_0x483                                           0x483
#define FLAG_UNUSED_0x484                                           0x484
#define FLAG_UNUSED_0x485                                           0x485
#define FLAG_UNUSED_0x486                                           0x486
#define FLAG_UNUSED_0x487                                           0x487
#define FLAG_UNUSED_0x488                                           0x488
#define FLAG_UNUSED_0x489                                           0x489
#define FLAG_UNUSED_0x48A                                           0x48A
#define FLAG_UNUSED_0x48B                                           0x48B
#define FLAG_UNUSED_0x48C                                           0x48C
#define FLAG_UNUSED_0x48D                                           0x48D
#define FLAG_UNUSED_0x48E                                           0x48E
#define FLAG_UNUSED_0x48F                                           0x48F
#define FLAG_UNUSED_0x490                                           0x490
#define FLAG_UNUSED_0x491                                           0x491
#define FLAG_UNUSED_0x492                                           0x492
#define FLAG_UNUSED_0x493                                           0x493 
#define FLAG_UNUSED_0x494                                           0x494 
#define FLAG_UNUSED_0x495                                           0x495 
#define FLAG_UNUSED_0x496                                           0x496 
#define FLAG_UNUSED_0x497                                           0x497 
#define FLAG_UNUSED_0x498                                           0x498 
#define FLAG_UNUSED_0x499                                           0x499 
#define FLAG_UNUSED_0x49A                                           0x49A 
#define FLAG_UNUSED_0x49B                                           0x49B 
#define FLAG_UNUSED_0x49C                                           0x49C 
#define FLAG_UNUSED_0x49D                                           0x49D 
#define FLAG_UNUSED_0x49E                                           0x49E 
#define FLAG_UNUSED_0x49F                                           0x49F 
#define FLAG_UNUSED_0x4A0                                           0x4A0 
#define FLAG_UNUSED_0x4A1                                           0x4A1 
#define FLAG_UNUSED_0x4A2                                           0x4A2 
#define FLAG_UNUSED_0x4A3                                           0x4A3 
#define FLAG_UNUSED_0x4A4                                           0x4A4 
#define FLAG_UNUSED_0x4A5                                           0x4A5 
#define FLAG_UNUSED_0x4A6                                           0x4A6 
#define FLAG_UNUSED_0x4A7                                           0x4A7 
#define FLAG_UNUSED_0x4A8                                           0x4A8 
#define FLAG_UNUSED_0x4A9                                           0x4A9 
#define FLAG_UNUSED_0x4AA                                           0x4AA 
#define FLAG_UNUSED_0x4AB                                           0x4AB 
#define FLAG_UNUSED_0x4AC                                           0x4AC 
#define FLAG_UNUSED_0x4AD                                           0x4AD 
#define FLAG_UNUSED_0x4AE                                           0x4AE 
#define FLAG_UNUSED_0x4AF                                           0x4AF 
#define FLAG_UNUSED_0x4B0                                           0x4B0 
#define FLAG_UNUSED_0x4B1                                           0x4B1 
#define FLAG_UNUSED_0x4B2                                           0x4B2 
#define FLAG_UNUSED_0x4B3                                           0x4B3 
#define FLAG_UNUSED_0x4B4                                           0x4B4 
#define FLAG_UNUSED_0x4B5                                           0x4B5 
#define FLAG_UNUSED_0x4B6                                           0x4B6 
#define FLAG_UNUSED_0x4B7                                           0x4B7 
#define FLAG_UNUSED_0x4B8                                           0x4B8 
#define FLAG_UNUSED_0x4B9                                           0x4B9 
#define FLAG_UNUSED_0x4BA                                           0x4BA 
#define FLAG_UNUSED_0x4BB                                           0x4BB 
#define FLAG_UNUSED_0x4BC                                           0x4BC 
#define FLAG_UNUSED_0x4BD                                           0x4BD 
#define FLAG_UNUSED_0x4BE                                           0x4BE 
#define FLAG_UNUSED_0x4BF                                           0x4BF 
#define FLAG_UNUSED_0x4C0                                           0x4C0 
#define FLAG_UNUSED_0x4C1                                           0x4C1 
#define FLAG_UNUSED_0x4C2                                           0x4C2 
#define FLAG_UNUSED_0x4C3                                           0x4C3 
#define FLAG_UNUSED_0x4C4                                           0x4C4 
#define FLAG_UNUSED_0x4C5                                           0x4C5 
#define FLAG_UNUSED_0x4C6                                           0x4C6 
#define FLAG_UNUSED_0x4C7                                           0x4C7 
#define FLAG_UNUSED_0x4C8                                           0x4C8 
#define FLAG_UNUSED_0x4C9                                           0x4C9 
#define FLAG_UNUSED_0x4CA                                           0x4CA 
#define FLAG_UNUSED_0x4CB                                           0x4CB 
#define FLAG_UNUSED_0x4CC                                           0x4CC 
#define FLAG_UNUSED_0x4CD                                           0x4CD 
#define FLAG_UNUSED_0x4CE                                           0x4CE 
#define FLAG_UNUSED_0x4CF                                           0x4CF 
#define FLAG_UNUSED_0x4D0                                           0x4D0 
#define FLAG_UNUSED_0x4D1                                           0x4D1 
#define FLAG_UNUSED_0x4D2                                           0x4D2 
#define FLAG_UNUSED_0x4D3                                           0x4D3 
#define FLAG_UNUSED_0x4D4                                           0x4D4 
#define FLAG_UNUSED_0x4D5                                           0x4D5 
#define FLAG_UNUSED_0x4D6                                           0x4D6 
#define FLAG_UNUSED_0x4D7                                           0x4D7 
#define FLAG_UNUSED_0x4D8                                           0x4D8 
#define FLAG_UNUSED_0x4D9                                           0x4D9 
#define FLAG_UNUSED_0x4DA                                           0x4DA 
#define FLAG_UNUSED_0x4DB                                           0x4DB 
#define FLAG_UNUSED_0x4DC                                           0x4DC 
#define FLAG_UNUSED_0x4DD                                           0x4DD 
#define FLAG_UNUSED_0x4DE                                           0x4DE 
#define FLAG_UNUSED_0x4DF                                           0x4DF 
#define FLAG_UNUSED_0x4E0                                           0x4E0 
#define FLAG_UNUSED_0x4E1                                           0x4E1 
#define FLAG_UNUSED_0x4E2                                           0x4E2 
#define FLAG_UNUSED_0x4E3                                           0x4E3 
#define FLAG_UNUSED_0x4E4                                           0x4E4 
#define FLAG_UNUSED_0x4E5                                           0x4E5 
#define FLAG_UNUSED_0x4E6                                           0x4E6 
#define FLAG_UNUSED_0x4E7                                           0x4E7 
#define FLAG_UNUSED_0x4E8                                           0x4E8 
#define FLAG_UNUSED_0x4E9                                           0x4E9 
#define FLAG_UNUSED_0x4EA                                           0x4EA 
#define FLAG_UNUSED_0x4EB                                           0x4EB 
#define FLAG_UNUSED_0x4EC                                           0x4EC 
#define FLAG_UNUSED_0x4ED                                           0x4ED 
#define FLAG_UNUSED_0x4EE                                           0x4EE 
#define FLAG_UNUSED_0x4EF                                           0x4EF 
#define FLAG_UNUSED_0x4F0                                           0x4F0
#define FLAG_UNUSED_0x4F1                                           0x4F1
#define FLAG_UNUSED_0x4F2                                           0x4F2
#define FLAG_UNUSED_0x4F3                                           0x4F3
#define FLAG_UNUSED_0x4F4                                           0x4F4
#define FLAG_UNUSED_0x4F5                                           0x4F5
#define FLAG_UNUSED_0x4F6                                           0x4F6
#define FLAG_UNUSED_0x4F7                                           0x4F7
#define FLAG_UNUSED_0x4F8                                           0x4F8
#define FLAG_UNUSED_0x4F9                                           0x4F9
#define FLAG_UNUSED_0x4FA                                           0x4FA
#define FLAG_UNUSED_0x4FB                                           0x4FB
#define FLAG_UNUSED_0x4FC                                           0x4FC
#define FLAG_UNUSED_0x4FD                                           0x4FD
#define FLAG_UNUSED_0x4FE                                           0x4FE
#define FLAG_UNUSED_0x4FF                                           0x4FF

// Trainer Flags
// Trainer flags occupy 0x500 - 0x85F, the last 9 of which are unused
// See constants/opponents.h. The values there + FLAG_TRAINER_FLAG_START are the flag IDs

#define TRAINER_FLAGS_START                                         0x500
#define TRAINER_FLAGS_END                                           (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1) // 0x85F

// System Flags

#define SYSTEM_FLAGS                                   (TRAINER_FLAGS_END + 1) // 0x860

#define FLAG_IS_DEBUGGING_SAVEFILE                     (SYSTEM_FLAGS + 0x0) // FLAG_0x860

// Beat Leviathan Flags
#define FLAG_BEAT_LEVIATHAN_1                          (SYSTEM_FLAGS + 0x1)
#define FLAG_BEAT_LEVIATHAN_2                          (SYSTEM_FLAGS + 0x2)
#define FLAG_BEAT_LEVIATHAN_3                          (SYSTEM_FLAGS + 0x3)
#define FLAG_BEAT_LEVIATHAN_4                          (SYSTEM_FLAGS + 0x4)
#define FLAG_BEAT_LEVIATHAN_5                          (SYSTEM_FLAGS + 0x5) // FLAG_0x865
#define FLAG_BEAT_LEVIATHAN_6                          (SYSTEM_FLAGS + 0x6)
#define FLAG_BEAT_LEVIATHAN_7                          (SYSTEM_FLAGS + 0x7) 
#define FLAG_BEAT_LEVIATHAN_8                          (SYSTEM_FLAGS + 0x8) 
#define FLAG_BEAT_LEVIATHAN_9                          (SYSTEM_FLAGS + 0x9) 
#define FLAG_BEAT_LEVIATHAN_10                         (SYSTEM_FLAGS + 0xA) 
#define FLAG_BEAT_LEVIATHAN_11                         (SYSTEM_FLAGS + 0xB) 
#define FLAG_BEAT_LEVIATHAN_12                         (SYSTEM_FLAGS + 0xC) 
#define FLAG_BEAT_LEVIATHAN_13                         (SYSTEM_FLAGS + 0xD) 
#define FLAG_BEAT_LEVIATHAN_14                         (SYSTEM_FLAGS + 0xE) 
#define FLAG_BEAT_LEVIATHAN_15                         (SYSTEM_FLAGS + 0xF) 
#define FLAG_BEAT_LEVIATHAN_16                         (SYSTEM_FLAGS + 0x10) // FLAG_0x870
#define FLAG_BEAT_LEVIATHAN_17                         (SYSTEM_FLAGS + 0x11)
#define FLAG_BEAT_LEVIATHAN_18                         (SYSTEM_FLAGS + 0x12)
#define FLAG_BEAT_LEVIATHAN_19                         (SYSTEM_FLAGS + 0x13)
#define FLAG_BEAT_LEVIATHAN_20                         (SYSTEM_FLAGS + 0x14)
#define FLAG_BEAT_LEVIATHAN_21                         (SYSTEM_FLAGS + 0x15)
#define FLAG_BEAT_LEVIATHAN_22                         (SYSTEM_FLAGS + 0x16)
#define FLAG_BEAT_LEVIATHAN_23                         (SYSTEM_FLAGS + 0x17)
#define FLAG_BEAT_LEVIATHAN_24                         (SYSTEM_FLAGS + 0x18)
#define FLAG_BEAT_LEVIATHAN_25                         (SYSTEM_FLAGS + 0x19)
#define FLAG_BEAT_LEVIATHAN_26                         (SYSTEM_FLAGS + 0x1A)
#define FLAG_BEAT_LEVIATHAN_27                         (SYSTEM_FLAGS + 0x1B)
#define FLAG_BEAT_LEVIATHAN_28                         (SYSTEM_FLAGS + 0x1C)
#define FLAG_BEAT_LEVIATHAN_29                         (SYSTEM_FLAGS + 0x1D)
#define FLAG_BEAT_LEVIATHAN_30                         (SYSTEM_FLAGS + 0x1E)
#define FLAG_BEAT_LEVIATHAN_31                         (SYSTEM_FLAGS + 0x1F)
#define FLAG_BEAT_LEVIATHAN_32                         (SYSTEM_FLAGS + 0x20)
#define FLAG_BEAT_LEVIATHAN_33                         (SYSTEM_FLAGS + 0x21)
#define FLAG_BEAT_LEVIATHAN_34                         (SYSTEM_FLAGS + 0x22)
#define FLAG_BEAT_LEVIATHAN_35                         (SYSTEM_FLAGS + 0x23)
#define FLAG_BEAT_LEVIATHAN_36                         (SYSTEM_FLAGS + 0x24)
#define FLAG_BEAT_LEVIATHAN_37                         (SYSTEM_FLAGS + 0x25)
#define FLAG_BEAT_LEVIATHAN_38                         (SYSTEM_FLAGS + 0x26)
#define FLAG_BEAT_LEVIATHAN_39                         (SYSTEM_FLAGS + 0x27)
#define FLAG_BEAT_LEVIATHAN_40                         (SYSTEM_FLAGS + 0x28)
#define FLAG_BEAT_LEVIATHAN_41                         (SYSTEM_FLAGS + 0x29)
#define FLAG_BEAT_LEVIATHAN_42                         (SYSTEM_FLAGS + 0x2A)
#define FLAG_BEAT_LEVIATHAN_43                         (SYSTEM_FLAGS + 0x2B)
#define FLAG_BEAT_LEVIATHAN_44                         (SYSTEM_FLAGS + 0x2C)
#define FLAG_BEAT_LEVIATHAN_45                         (SYSTEM_FLAGS + 0x2D)
#define FLAG_BEAT_LEVIATHAN_46                         (SYSTEM_FLAGS + 0x2E)
#define FLAG_BEAT_LEVIATHAN_47                         (SYSTEM_FLAGS + 0x2F)
#define FLAG_BEAT_LEVIATHAN_48                         (SYSTEM_FLAGS + 0x30)
#define FLAG_BEAT_LEVIATHAN_49                         (SYSTEM_FLAGS + 0x31)
#define FLAG_BEAT_LEVIATHAN_50                         (SYSTEM_FLAGS + 0x32)
#define FLAG_BEAT_LEVIATHAN_51                         (SYSTEM_FLAGS + 0x33)
#define FLAG_BEAT_LEVIATHAN_52                         (SYSTEM_FLAGS + 0x34)
#define FLAG_BEAT_LEVIATHAN_53                         (SYSTEM_FLAGS + 0x35)
#define FLAG_BEAT_LEVIATHAN_54                         (SYSTEM_FLAGS + 0x36)
#define FLAG_BEAT_LEVIATHAN_55                         (SYSTEM_FLAGS + 0x37)
#define FLAG_BEAT_LEVIATHAN_56                         (SYSTEM_FLAGS + 0x38)
#define FLAG_BEAT_LEVIATHAN_57                         (SYSTEM_FLAGS + 0x39)
#define FLAG_BEAT_LEVIATHAN_58                         (SYSTEM_FLAGS + 0x3A)
#define FLAG_BEAT_LEVIATHAN_59                         (SYSTEM_FLAGS + 0x3B)
#define FLAG_BEAT_LEVIATHAN_60                         (SYSTEM_FLAGS + 0x3C)
#define FLAG_BEAT_LEVIATHAN_61                         (SYSTEM_FLAGS + 0x3D)
#define FLAG_BEAT_LEVIATHAN_62                         (SYSTEM_FLAGS + 0x3E)
#define FLAG_BEAT_LEVIATHAN_63                         (SYSTEM_FLAGS + 0x3F)
#define FLAG_BEAT_LEVIATHAN_64                         (SYSTEM_FLAGS + 0x40)
#define FLAG_BEAT_LEVIATHAN_65                         (SYSTEM_FLAGS + 0x41)
#define FLAG_BEAT_LEVIATHAN_66                         (SYSTEM_FLAGS + 0x42)
#define FLAG_BEAT_LEVIATHAN_67                         (SYSTEM_FLAGS + 0x43)
#define FLAG_BEAT_LEVIATHAN_68                         (SYSTEM_FLAGS + 0x44)
#define FLAG_BEAT_LEVIATHAN_69                         (SYSTEM_FLAGS + 0x45)
#define FLAG_BEAT_LEVIATHAN_70                         (SYSTEM_FLAGS + 0x46)

#define FLAG_SYS_POKEMON_GET                        (SYSTEM_FLAGS + 0x47)
#define FLAG_SYS_POKEDEX_GET                        (SYSTEM_FLAGS + 0x48)
#define FLAG_SYS_POKENAV_GET                        (SYSTEM_FLAGS + 0x49)
#define FLAG_SYS_GAME_CLEAR                         (SYSTEM_FLAGS + 0x4A)
#define FLAG_SYS_PC_LANETTE                         (SYSTEM_FLAGS + 0x4B)
#define FLAG_SYS_MYSTERY_EVENT_ENABLE               (SYSTEM_FLAGS + 0x4C)
#define FLAG_SYS_ENC_UP_ITEM                        (SYSTEM_FLAGS + 0x4D)
#define FLAG_SYS_ENC_DOWN_ITEM                      (SYSTEM_FLAGS + 0x4E)
#define FLAG_SYS_BRAILLE_DIG                        (SYSTEM_FLAGS + 0x4F)
#define FLAG_SYS_REGIROCK_PUZZLE_COMPLETED          (SYSTEM_FLAGS + 0x50)
#define FLAG_SYS_BRAILLE_REGICE_COMPLETED           (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED         (SYSTEM_FLAGS + 0x52)
#define FLAG_ENABLE_SHIP_SOUTHERN_ISLAND            (SYSTEM_FLAGS + 0x53)
#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x54)
#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x55)
#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x56)
#define FLAG_SYS_CYCLING_ROAD                       (SYSTEM_FLAGS + 0x57)
#define FLAG_SYS_SAFARI_MODE                        (SYSTEM_FLAGS + 0x58)
#define FLAG_SYS_CRUISE_MODE                        (SYSTEM_FLAGS + 0x59)
#define FLAG_SYS_RIBBON_GET                         (SYSTEM_FLAGS + 0x5A)
#define FLAG_SYS_SHOAL_TIDE                         (SYSTEM_FLAGS + 0x5B)
#define FLAG_SYS_NATIONAL_DEX                       (SYSTEM_FLAGS + 0x5C)
#define FLAG_SYS_TV_LATIAS_LATIOS                   (SYSTEM_FLAGS + 0x5D)
#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x5E)
#define FLAG_SYS_SHOAL_ITEM                         (SYSTEM_FLAGS + 0x5F)
#define FLAG_SYS_B_DASH                             (SYSTEM_FLAGS + 0x60)
#define FLAG_SYS_CTRL_OBJ_DELETE                    (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESET_RTC_ENABLE                   (SYSTEM_FLAGS + 0x62)
#define FLAG_SYS_MIX_RECORD                         (SYSTEM_FLAGS + 0x63)
#define FLAG_SYS_TOWER_SILVER                       (SYSTEM_FLAGS + 0x64)
#define FLAG_SYS_TOWER_GOLD                         (SYSTEM_FLAGS + 0x65)
#define FLAG_SYS_DOME_SILVER                        (SYSTEM_FLAGS + 0x66)
#define FLAG_SYS_DOME_GOLD                          (SYSTEM_FLAGS + 0x67)
#define FLAG_SYS_PALACE_SILVER                      (SYSTEM_FLAGS + 0x68)
#define FLAG_SYS_PALACE_GOLD                        (SYSTEM_FLAGS + 0x69)
#define FLAG_SYS_ARENA_SILVER                       (SYSTEM_FLAGS + 0x6A)
#define FLAG_SYS_ARENA_GOLD                         (SYSTEM_FLAGS + 0x6B)
#define FLAG_SYS_FACTORY_SILVER                     (SYSTEM_FLAGS + 0x6C)
#define FLAG_SYS_FACTORY_GOLD                       (SYSTEM_FLAGS + 0x6D)
#define FLAG_SYS_PIKE_SILVER                        (SYSTEM_FLAGS + 0x6E)
#define FLAG_SYS_PIKE_GOLD                          (SYSTEM_FLAGS + 0x6F)
#define FLAG_SYS_PYRAMID_SILVER                     (SYSTEM_FLAGS + 0x70)
#define FLAG_SYS_PYRAMID_GOLD                       (SYSTEM_FLAGS + 0x71)
#define FLAG_SYS_FRONTIER_PASS                      (SYSTEM_FLAGS + 0x72)
#define FLAG_MAP_SCRIPT_CHECKED_DEOXYS              (SYSTEM_FLAGS + 0x73)
#define FLAG_DEOXYS_ROCK_COMPLETE                   (SYSTEM_FLAGS + 0x74)
#define FLAG_ENABLE_SHIP_BIRTH_ISLAND               (SYSTEM_FLAGS + 0x75)
#define FLAG_ENABLE_SHIP_FARAWAY_ISLAND             (SYSTEM_FLAGS + 0x76)
#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE             (SYSTEM_FLAGS + 0x77)
#define FLAG_ARRIVED_ON_FARAWAY_ISLAND              (SYSTEM_FLAGS + 0x78)
#define FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT     (SYSTEM_FLAGS + 0x79)
#define FLAG_ARRIVED_AT_TERRA_CAVE_ENTRANCE         (SYSTEM_FLAGS + 0x7A)
#define FLAG_SYS_MYSTERY_GIFT_ENABLE                (SYSTEM_FLAGS + 0x7B)
#define FLAG_ENTERED_MIRAGE_TOWER                   (SYSTEM_FLAGS + 0x7C)
#define FLAG_SYS_CHANGED_DEWFORD_TREND              (SYSTEM_FLAGS + 0x7D)
#define FLAG_SYS_TV_START                           (SYSTEM_FLAGS + 0x7E)
#define FLAG_SYS_TV_WATCH                           (SYSTEM_FLAGS + 0x7F)
#define FLAG_ENABLE_SHIP_NAVEL_ROCK                 (SYSTEM_FLAGS + 0x80)
#define FLAG_ARRIVED_AT_NAVEL_ROCK                  (SYSTEM_FLAGS + 0x81)
#define FLAG_SYS_TV_HOME                            (SYSTEM_FLAGS + 0x82)
#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x83)
#define FLAG_RECEIVED_POKEDEX_FROM_BIRCH            (SYSTEM_FLAGS + 0x84)

// My System Flags
#define FLAG_SYS_NO_COLLISION                       (SYSTEM_FLAGS + 0x85)
#define FLAG_SYS_NO_ENCOUNTER                       (SYSTEM_FLAGS + 0x86)
#define FLAG_SYS_NO_TRAINER_SEE                     (SYSTEM_FLAGS + 0x87)
#define FLAG_SYS_NO_BAG_USE                         (SYSTEM_FLAGS + 0x88)
#define FLAG_SYS_NO_CATCHING                        (SYSTEM_FLAGS + 0x89)
#define FLAG_SYS_PC_FROM_DEBUG_MENU                 (SYSTEM_FLAGS + 0x8A)
#define FLAG_UNUSED_0x8EB                           (SYSTEM_FLAGS + 0x8B)
#define FLAG_UNUSED_0x8EC                           (SYSTEM_FLAGS + 0x8C)
#define FLAG_UNUSED_0x8ED                           (SYSTEM_FLAGS + 0x8D)
#define FLAG_UNUSED_0x8EE                           (SYSTEM_FLAGS + 0x8E)
#define FLAG_UNUSED_0x8EF                           (SYSTEM_FLAGS + 0x8F)
#define FLAG_UNUSED_0x8F0                           (SYSTEM_FLAGS + 0x90)
#define FLAG_UNUSED_0x8F1                           (SYSTEM_FLAGS + 0x91)
#define FLAG_UNUSED_0x8F2                           (SYSTEM_FLAGS + 0x92)
#define FLAG_UNUSED_0x8F3                           (SYSTEM_FLAGS + 0x93)
#define FLAG_UNUSED_0x8F4                           (SYSTEM_FLAGS + 0x94)
#define FLAG_UNUSED_0x8F5                           (SYSTEM_FLAGS + 0x95)
#define FLAG_UNUSED_0x8F6                           (SYSTEM_FLAGS + 0x96)
#define FLAG_UNUSED_0x8F7                           (SYSTEM_FLAGS + 0x97)
#define FLAG_UNUSED_0x8F8                           (SYSTEM_FLAGS + 0x98)
#define FLAG_UNUSED_0x8F9                           (SYSTEM_FLAGS + 0x99)
#define FLAG_UNUSED_0x8FA                           (SYSTEM_FLAGS + 0x9A)
#define FLAG_UNUSED_0x8FB                           (SYSTEM_FLAGS + 0x9B)
#define FLAG_UNUSED_0x8FC                           (SYSTEM_FLAGS + 0x9C)
#define FLAG_UNUSED_0x8FD                           (SYSTEM_FLAGS + 0x9D)
#define FLAG_UNUSED_0x8FE                           (SYSTEM_FLAGS + 0x9E)
#define FLAG_UNUSED_0x8FF                           (SYSTEM_FLAGS + 0x9F)
#define FLAG_UNUSED_0x900                           (SYSTEM_FLAGS + 0xA0)
#define FLAG_UNUSED_0x901                           (SYSTEM_FLAGS + 0xA1)
#define FLAG_UNUSED_0x902                           (SYSTEM_FLAGS + 0xA2)
#define FLAG_UNUSED_0x903                           (SYSTEM_FLAGS + 0xA3)
#define FLAG_UNUSED_0x904                           (SYSTEM_FLAGS + 0xA4)
#define FLAG_UNUSED_0x905                           (SYSTEM_FLAGS + 0xA5)
#define FLAG_UNUSED_0x906                           (SYSTEM_FLAGS + 0xA6)
#define FLAG_UNUSED_0x907                           (SYSTEM_FLAGS + 0xA7)
#define FLAG_UNUSED_0x908                           (SYSTEM_FLAGS + 0xA8)
#define FLAG_UNUSED_0x909                           (SYSTEM_FLAGS + 0xA9)
#define FLAG_SHOULD_CHECK_SPECIES_CLAUSE            (SYSTEM_FLAGS + 0xAA)
#define FLAG_DISABLE_PREVIEW                        (SYSTEM_FLAGS + 0xAB)
#define FLAG_SYS_DETECTOR_MODE                      (SYSTEM_FLAGS + 0xAC)
#define FLAG_SYS_DEXNAV_GET                         (SYSTEM_FLAGS + 0xAD)
#define FLAG_SHINY_CREATION                         (SYSTEM_FLAGS + 0xAE)
#define FLAG_SYS_DEXNAV_SEARCH                      (SYSTEM_FLAGS + 0xAF)
#define FLAG_FORCE_BATTLE_ANIM_ON                   (SYSTEM_FLAGS + 0xB0)
#define FLAG_FORCE_BATTLE_ANIM_OFF                  (SYSTEM_FLAGS + 0xB1)
#define FLAG_IS_REVISITING_ZONE                     (SYSTEM_FLAGS + 0xB2) // Currently revisiting a Zone
#define FLAG_IN_NEW_ZONE                            (SYSTEM_FLAGS + 0xB3) // In new Zone, not a Sanctuary
#define FLAG_FULL_PREVIEW_ON                        (SYSTEM_FLAGS + 0xB4)
#define FLAG_EXP_ALL_ON                             (SYSTEM_FLAGS + 0xB5)
#define FLAG_DOING_TRAINING                         (SYSTEM_FLAGS + 0xB6)
#define FLAG_SMART_WILD_AI_ON                       (SYSTEM_FLAGS + 0xB7)
#define FLAG_DISABLE_CATCHING                       (SYSTEM_FLAGS + 0xB8)
#define FLAG_DISABLE_BAG                            (SYSTEM_FLAGS + 0xB9)
#define FLAG_FORCE_DOUBLE_WILD                      (SYSTEM_FLAGS + 0xBA)
#define FLAG_BOOSTED_IVS                            (SYSTEM_FLAGS + 0xBB)
#define FLAG_NUZLOCKE_ON                            (SYSTEM_FLAGS + 0xBC)
#define FLAG_RANDOMIZER_ON                          (SYSTEM_FLAGS + 0xBD)
#define FLAG_BRUTAL_MODE_ON                         (SYSTEM_FLAGS + 0xBE)
#define FLAG_UNUSED_0x91F                           (SYSTEM_FLAGS + 0xBF) // Don't remove - needed in other files

// Daily Flags
// These flags are cleared once per day
// The start and end are byte-aligned because the flags are cleared in byte increments
#define DAILY_FLAGS_START                           (FLAG_UNUSED_0x91F + (8 - FLAG_UNUSED_0x91F % 8))
#define FLAG_DAILY_FOSSIL_RECEIVED                  (DAILY_FLAGS_START + 0x0)
#define FLAG_DAILY_ZONE13B_POKEBALL_RECEIVED        (DAILY_FLAGS_START + 0x1)
#define FLAG_UNUSED_0x922                           (DAILY_FLAGS_START + 0x2)
#define FLAG_UNUSED_0x923                           (DAILY_FLAGS_START + 0x3)
#define FLAG_UNUSED_0x924                           (DAILY_FLAGS_START + 0x4)
#define FLAG_UNUSED_0x925                           (DAILY_FLAGS_START + 0x5)
#define FLAG_UNUSED_0x926                           (DAILY_FLAGS_START + 0x6)
#define FLAG_UNUSED_0x927                           (DAILY_FLAGS_START + 0x7)
#define FLAG_UNUSED_0x928                           (DAILY_FLAGS_START + 0x8)
#define FLAG_UNUSED_0x929                           (DAILY_FLAGS_START + 0x9)
#define FLAG_UNUSED_0x92A                           (DAILY_FLAGS_START + 0xA)
#define FLAG_UNUSED_0x92B                           (DAILY_FLAGS_START + 0xB)
#define FLAG_UNUSED_0x92C                           (DAILY_FLAGS_START + 0xC)
#define FLAG_UNUSED_0x92D                           (DAILY_FLAGS_START + 0xD)
#define FLAG_UNUSED_0x92E                           (DAILY_FLAGS_START + 0xE)
#define FLAG_UNUSED_0x92F                           (DAILY_FLAGS_START + 0xF)
#define FLAG_UNUSED_0x930                           (DAILY_FLAGS_START + 0x10)
#define FLAG_UNUSED_0x931                           (DAILY_FLAGS_START + 0x11)
#define FLAG_UNUSED_0x932                           (DAILY_FLAGS_START + 0x12)
#define FLAG_UNUSED_0x933                           (DAILY_FLAGS_START + 0x13)
#define FLAG_UNUSED_0x934                           (DAILY_FLAGS_START + 0x14)
#define FLAG_UNUSED_0x935                           (DAILY_FLAGS_START + 0x15)
#define FLAG_UNUSED_0x936                           (DAILY_FLAGS_START + 0x16)
#define FLAG_UNUSED_0x937                           (DAILY_FLAGS_START + 0x17)
#define FLAG_UNUSED_0x938                           (DAILY_FLAGS_START + 0x18)
#define FLAG_UNUSED_0x939                           (DAILY_FLAGS_START + 0x19)
#define FLAG_UNUSED_0x93A                           (DAILY_FLAGS_START + 0x1A)
#define FLAG_UNUSED_0x93B                           (DAILY_FLAGS_START + 0x1B)
#define FLAG_UNUSED_0x93C                           (DAILY_FLAGS_START + 0x1C)
#define FLAG_UNUSED_0x93D                           (DAILY_FLAGS_START + 0x1D)
#define FLAG_UNUSED_0x93E                           (DAILY_FLAGS_START + 0x1E)
#define FLAG_UNUSED_0x93F                           (DAILY_FLAGS_START + 0x1F)
#define FLAG_UNUSED_0x940                           (DAILY_FLAGS_START + 0x20)
#define FLAG_UNUSED_0x941                           (DAILY_FLAGS_START + 0x21)
#define FLAG_UNUSED_0x942                           (DAILY_FLAGS_START + 0x22)
#define FLAG_UNUSED_0x943                           (DAILY_FLAGS_START + 0x23)
#define FLAG_UNUSED_0x944                           (DAILY_FLAGS_START + 0x24)
#define FLAG_UNUSED_0x945                           (DAILY_FLAGS_START + 0x25)
#define FLAG_UNUSED_0x946                           (DAILY_FLAGS_START + 0x26)
#define FLAG_UNUSED_0x947                           (DAILY_FLAGS_START + 0x27)
#define FLAG_UNUSED_0x948                           (DAILY_FLAGS_START + 0x28)
#define FLAG_UNUSED_0x949                           (DAILY_FLAGS_START + 0x29)
#define FLAG_UNUSED_0x94A                           (DAILY_FLAGS_START + 0x2A)
#define FLAG_UNUSED_0x94B                           (DAILY_FLAGS_START + 0x2B)
#define FLAG_UNUSED_0x94C                           (DAILY_FLAGS_START + 0x2C)
#define FLAG_UNUSED_0x94D                           (DAILY_FLAGS_START + 0x2D)
#define FLAG_UNUSED_0x94E                           (DAILY_FLAGS_START + 0x2E)
#define FLAG_UNUSED_0x94F                           (DAILY_FLAGS_START + 0x2F)
#define FLAG_UNUSED_0x950                           (DAILY_FLAGS_START + 0x30)
#define FLAG_UNUSED_0x951                           (DAILY_FLAGS_START + 0x31)
#define FLAG_UNUSED_0x952                           (DAILY_FLAGS_START + 0x32)
#define FLAG_DAILY_APPRENTICE_LEAVES                (DAILY_FLAGS_START + 0x33)
#define FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY     (DAILY_FLAGS_START + 0x34)
#define FLAG_DAILY_SECRET_BASE                      (DAILY_FLAGS_START + 0x35)
#define FLAG_DAILY_PICKED_LOTO_TICKET               (DAILY_FLAGS_START + 0x36)
#define FLAG_DAILY_ROUTE_114_RECEIVED_BERRY         (DAILY_FLAGS_START + 0x37)
#define FLAG_DAILY_ROUTE_111_RECEIVED_BERRY         (DAILY_FLAGS_START + 0x38)
#define FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY      (DAILY_FLAGS_START + 0x39)
#define FLAG_DAILY_ROUTE_120_RECEIVED_BERRY         (DAILY_FLAGS_START + 0x3A)
#define FLAG_DAILY_LILYCOVE_RECEIVED_BERRY          (DAILY_FLAGS_START + 0x3B)
#define FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY       (DAILY_FLAGS_START + 0x3C)
#define FLAG_DAILY_BERRY_MASTERS_WIFE               (DAILY_FLAGS_START + 0x3D)
#define FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY        (DAILY_FLAGS_START + 0x3E)
#define FLAG_UNUSED_0x95F                           (DAILY_FLAGS_START + 0x3F) // Don't remove - needed in other files
#define DAILY_FLAGS_END                             (FLAG_UNUSED_0x95F + (7 - FLAG_UNUSED_0x95F % 8))

#define FLAGS_COUNT (DAILY_FLAGS_END + 1)

// Special Flags (Stored in EWRAM (sSpecialFlags), not in the SaveBlock)
#define SPECIAL_FLAGS_START                     0x4000
#define FLAG_HIDE_MAP_NAME_POPUP                (SPECIAL_FLAGS_START + 0x0)
#define FLAG_DONT_TRANSITION_MUSIC              (SPECIAL_FLAGS_START + 0x1)
#define FLAG_ENABLE_MULTI_CORRIDOR_DOOR         (SPECIAL_FLAGS_START + 0x2)
#define FLAG_SPECIAL_FLAG_UNUSED_0x4003         (SPECIAL_FLAGS_START + 0x3)
#define FLAG_STORING_ITEMS_IN_PYRAMID_BAG       (SPECIAL_FLAGS_START + 0x4)
// FLAG_SPECIAL_FLAG_0x4005 - 0x407F also exist and are unused
#define SPECIAL_FLAGS_END                       (SPECIAL_FLAGS_START + 0x7F)

#endif // GUARD_CONSTANTS_FLAGS_H
