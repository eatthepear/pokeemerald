/**
 * Notes for documentation
 * 
 * Trainers are arranged in the order it is possible to battle them. There are Zone tags that divide up where the trainers are located.
 * 
 * Some trainers are battled in different ways, be it double battles, tag battles, gauntlets, or battles that start with certain conditions.
 * These are included in the comments next to each trainer.
 * 
 * Some trainers have different parties on Default and Brutal.
 * Some bosses are optional on Default and are commented as such. However, on Brutal, all trainers are mandatory.
 * 
 * Abilities are by default set to the first ability.
 * EVs are by default set to 0.
 * Natures are by default set to Serious.
 * Most trainers use level up movesets. Some trainers have tailored movesets which are documented in this file.
 * .iv determines the IVs of a given Pokemon. all IVs are set to the .iv value.
 * Some trainers have a .ivs value instead, which specifies their IVs in the order HP, Atk, Def, Spe, SpA, SpD. For Hidden Power purposes, this is commented next to their movesets.
 * 
 * Many trainers will randomly lead with one of their party Pokemon. This will be included in the comments next to the trainer.
 * 
 * You can ignore the .ball lines. These are just for setting what Pokeball each Pokemon is in, and is mainly for cosmetic purposes.
 * 
 * The trainer AI has been improved from vanilla Emerald, but it's not as smart as CFRU AI. 
 * On Brutal, the trainer AI knows your moveset. */

/* ------------------- Zone 1 ------------------- */

static const struct TrainerMon sParty_Nina[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_SENTRET,
    },
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_Mariam[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_SHINX,
    },
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_ABRA,
    },
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_LILLIPUP,
    }
};

static const struct TrainerMon sParty_Oscar[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_FLETCHLING,
    },
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_YAMPER,
    },
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON_GALARIAN,
    }
};

static const struct TrainerMon sParty_CoreyDefault[] = {//Leviathan, Default
    {
    .ball = ITEM_POKE_BALL,
    .iv = 20,
    .lvl = 7,
    .nature = NATURE_BRAVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Gluttony
    .species = SPECIES_SKWOVET,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_CoreyBrutal[] = {//Leviathan, Brutal
    {
    .ball = ITEM_POKE_BALL,
    .iv = 31,
    .lvl = 7,
    .nature = NATURE_BRAVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Cheek Pouch
    .species = SPECIES_SKWOVET,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_TACKLE, MOVE_BITE, MOVE_NONE, MOVE_NONE}
    }
};

/* ------------------- Zone 2 ------------------- */

static const struct TrainerMon sParty_Polly[] = {
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_CLEFFA,
    },
    {
    .lvl = 6,
    .species = SPECIES_AZURILL,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_MILCERY,
    }
};

static const struct TrainerMon sParty_Jeremiah[] = {
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_WEEDLE,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_CATERPIE,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_BLIPBUG,
    }
};

static const struct TrainerMon sParty_Harper[] = {
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_WOOPER,
    },
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_PIDGEY,
    },
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_BUNEARY,
    }
};

static const struct TrainerMon sParty_Arthur[] = {
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_PIKIPEK,
    },
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_BUDEW,
    },
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_WOOLOO,
    }
};

static const struct TrainerMon sParty_JoeyDefault[] = {//Leviathan, Default, optional
    {
    .ball = ITEM_POKE_BALL,
    .iv = 20,
    .lvl = 9,
    .nature = NATURE_LONELY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_HIDDEN, //Run Away
    .species = SPECIES_RATTATA,
    .heldItem = ITEM_SILK_SCARF,
    .moves = {MOVE_QUICK_ATTACK, MOVE_BITE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_JoeyBrutal[] = {//Leviathan, Brutal
    {
    .ball = ITEM_POKE_BALL,
    .iv = 31,
    .lvl = 9,
    .nature = NATURE_LONELY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Hustle
    .species = SPECIES_RATTATA,
    .heldItem = ITEM_SILK_SCARF,
    .moves = {MOVE_QUICK_ATTACK, MOVE_BITE, MOVE_HONE_CLAWS, MOVE_NONE}
    }
};

/* ------------------- Zone 3 ------------------- */

static const struct TrainerMon sParty_Jemma[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_GLAMEOW,
    }
};

static const struct TrainerMon sParty_Patrick[] = {//Uses level up movesets on Default difficulty
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_KAKUNA,
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_METAPOD,
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Boris[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_PICHU,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_PSYDUCK,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_EKANS,
    }
};

static const struct TrainerMon sParty_Annabelle[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_VULPIX,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_MANKEY,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_MAREEP,
    }
};

static const struct TrainerMon sParty_Richard[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_TEDDIURSA,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_PANCHAM,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_BUIZEL,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_IGGLYBUFF,
    }
};

static const struct TrainerMon sParty_PhillipaDefault[] = {//Leviathan, Default
    {
    .ball = ITEM_POKE_BALL,
    .iv = 20,
    .lvl = 10,
    .nature = NATURE_SASSY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Unaware
    .species = SPECIES_BIDOOF,
    .moves = {MOVE_ROLLOUT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .ball = ITEM_POKE_BALL,
    .iv = 20,
    .lvl = 10,
    .nature = NATURE_BRAVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Sturdy
    .species = SPECIES_PHANPY,
    .moves = {MOVE_ROLLOUT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .ball = ITEM_POKE_BALL,
    .iv = 20,
    .lvl = 11,
    .nature = NATURE_NAUGHTY,
    .ability = ABILITY_HIDDEN, //Aftermath
    .species = SPECIES_VOLTORB_HISUIAN,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ROLLOUT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_PhillipaBrutal[] = {//Leviathan, Brutal
    {
    .ball = ITEM_POKE_BALL,
    .iv = 31,
    .lvl = 10,
    .nature = NATURE_SASSY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Unaware
    .species = SPECIES_BIDOOF,
    .moves = {MOVE_ROLLOUT, MOVE_HEADBUTT, MOVE_GROWL, MOVE_DEFENSE_CURL}
    },
    {
    .ball = ITEM_POKE_BALL,
    .iv = 31,
    .lvl = 10,
    .nature = NATURE_BRAVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Sturdy
    .species = SPECIES_PHANPY,
    .moves = {MOVE_ROLLOUT, MOVE_HEADBUTT, MOVE_BULLDOZE, MOVE_DEFENSE_CURL}
    },
    {
    .ball = ITEM_POKE_BALL,
    .iv = 31,
    .lvl = 11,
    .nature = NATURE_NAUGHTY,
    .ability = ABILITY_HIDDEN, //Aftermath
    .species = SPECIES_VOLTORB_HISUIAN,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ICE_BALL, MOVE_ROLLOUT, MOVE_LEAFAGE, MOVE_THUNDER_SHOCK}
    },
    {
    .ball = ITEM_POKE_BALL,
    .iv = 31,
    .lvl = 11,
    .nature = NATURE_QUIET,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Thick Fat
    .species = SPECIES_SPHEAL,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ICE_BALL, MOVE_WATER_GUN, MOVE_DEFENSE_CURL, MOVE_ROLLOUT}
    }
};

/* ------------------- Zone 4 ------------------- */


static const struct TrainerMon sParty_Herman[] = {
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_BONSLY,
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_PETILIL,
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_HOUNDOUR,
    }
};

static const struct TrainerMon sParty_Ralph[] = {
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_STUNKY,
    .ability = ABILITY_SLOT_2, //Aftermath
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_PHANTUMP,
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_HOOTHOOT,
    }
};

static const struct TrainerMon sParty_Santiago[] = {
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_GRUBBIN,
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_SEWADDLE,
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_VENIPEDE,
    }
};

static const struct TrainerMon sParty_ChloeAndKaya[] = {//Double Battle
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_NIDORAN_F,
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_NIDORAN_M,
    }
};

static const struct TrainerMon sParty_Fred[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_SPEAROW,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_LITLEO,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_CRABRAWLER,
    }
};

static const struct TrainerMon sParty_Lucia[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_IMPIDIMP,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_HATENNA,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_SPRITZEE,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_SWIRLIX,
    }
};

static const struct TrainerMon sParty_RitaDefault[] = {//Leviathan, Double Battle, Default
    {
    .ball = ITEM_LUXURY_BALL,
    .iv = 20,
    .lvl = 12,
    .nature = NATURE_BRAVE,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Huge Power
    .species = SPECIES_MARILL,
    .moves = {MOVE_AQUA_JET, MOVE_HELPING_HAND, MOVE_NONE, MOVE_NONE}
    },
    {
    .ball = ITEM_LUXURY_BALL,
    .iv = 20,
    .lvl = 12,
    .nature = NATURE_RASH,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Static
    .species = SPECIES_PIKACHU,
    .moves = {MOVE_ELECTROWEB, MOVE_HELPING_HAND, MOVE_QUICK_ATTACK, MOVE_NONE}
    },
    {
    .ball = ITEM_LUXURY_BALL,
    .iv = 20,
    .lvl = 13,
    .nature = NATURE_HASTY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Poison Point
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_MEGA_DRAIN, MOVE_GROWTH, MOVE_POISON_STING, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_RitaBrutal[] = {//Leviathan, Double Battle, Brutal
    {
    .ball = ITEM_LUXURY_BALL,
    .ivs = {31, 31, 31, 31, 30, 30},
    .lvl = 12,
    .nature = NATURE_BRAVE,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Huge Power
    .species = SPECIES_MARILL,
    .moves = {MOVE_AQUA_JET, MOVE_HELPING_HAND, MOVE_HIDDEN_POWER, MOVE_NONE} // Hidden Power Ground
    },
    {
    .ball = ITEM_LUXURY_BALL,
    .ivs = {30, 31, 31, 31, 30, 31},
    .lvl = 12,
    .nature = NATURE_RASH,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Static
    .species = SPECIES_PIKACHU,
    .moves = {MOVE_ELECTROWEB, MOVE_HELPING_HAND, MOVE_QUICK_ATTACK, MOVE_HIDDEN_POWER} // Hidden Power Grass
    },
    {
    .ball = ITEM_LUXURY_BALL,
    .ivs = {31, 31, 30, 30, 31, 30},
    .lvl = 13,
    .nature = NATURE_HASTY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Poison Point
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_MEGA_DRAIN, MOVE_GROWTH, MOVE_POISON_STING, MOVE_HIDDEN_POWER} // Hidden Power Rock
    }
};


/* ------------------- Zone 5 ------------------- */

static const struct TrainerMon sParty_AnneAndJune[] = {// Double Battle
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_STARLY,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_SOLOSIS,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_GOTHITA,
    },
};

static const struct TrainerMon sParty_Gilbert[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_REMORAID,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_CHEWTLE,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_FINNEON,
    }
};

static const struct TrainerMon sParty_Rebecca[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_GROWLITHE,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_PONYTA_GALARIAN,
    }
};

static const struct TrainerMon sParty_Ryan[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_PAWNIARD,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_ROOKIDEE,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_MORELULL,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_AXEW,
    }
};

static const struct TrainerMon sParty_Caitlyn[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_ROCKRUFF,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_COTTONEE,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_SNUBBULL,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_PACHIRISU,
    }
};

// You fight Kevin then immediately fight Declan afterwards.
// On Default, your party is fully healed in between fights, while on Brutal your party is not
static const struct TrainerMon sParty_Kevin[] = {
    {
    .iv = 10,
    .lvl = 13,
    .species = SPECIES_COMBEE,
    },
    {
    .iv = 10,
    .lvl = 13,
    .species = SPECIES_KARRABLAST,
    },
    {
    .iv = 10,
    .lvl = 13,
    .species = SPECIES_SHELMET,
    },
    {
    .iv = 10,
    .lvl = 13,
    .species = SPECIES_SNOM,
    },
    {
    .iv = 10,
    .lvl = 13,
    .species = SPECIES_WIMPOD,
    }
};

static const struct TrainerMon sParty_Declan[] = {//Leviathan, Double Battle, Default and Brutal
    {
    .ball = ITEM_NET_BALL,
    .iv = 20,
    .lvl = 15,
    .nature = NATURE_NAIVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Swarm
    .species = SPECIES_BEEDRILL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BUG_BITE, MOVE_POISON_TAIL, MOVE_FURY_ATTACK, MOVE_FOCUS_ENERGY}
    },
    {
    .ball = ITEM_NET_BALL,
    .iv = 20,
    .lvl = 15,
    .nature = NATURE_HASTY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Compound Eyes
    .species = SPECIES_BUTTERFREE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_STRUGGLE_BUG, MOVE_GUST, MOVE_SLEEP_POWDER, MOVE_CONFUSION}
    }
};

/* ------------------- Zone 6 ------------------- */

static const struct TrainerMon sParty_Mina[] = {// Random lead
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_SLOWPOKE,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_SHELLOS,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_SHELLDER,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_BINACLE,
    }
};

static const struct TrainerMon sParty_Melanie[] = {// Random lead
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_HOPPIP,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_SLOWPOKE_GALARIAN,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_MEOWTH_GALARIAN,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_Constance[] = {// Random lead
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_STUFFUL,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_APPLIN,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_RALTS,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_TYNAMO,
    }
};

static const struct TrainerMon sParty_Frank[] = {// Random lead
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_SANDYGAST,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_SLAKOTH,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_GROWLITHE_HISUIAN,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_PINECO,
    }
};

static const struct TrainerMon sParty_Dudley[] = {// Random lead
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_HORSEA,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_CLAUNCHER,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_FEEBAS,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_KRABBY,
    }
};

static const struct TrainerMon sParty_Daisy[] = {// Random lead
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_MANTYKE,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_MUNCHLAX,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_RIOLU,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_HAPPINY,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_TOGEPI,
    }
};

static const struct TrainerMon sParty_ZackDefault[] = {//Leviathan, Default
    {
    .ball = ITEM_DIVE_BALL,
    .iv = 20,
    .lvl = 20,
    .nature = NATURE_SASSY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Schooling
    .species = SPECIES_WISHIWASHI,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_REST, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_ZackBrutal[] = {//Leviathan, Brutal
    {
    .ball = ITEM_DIVE_BALL,
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_SASSY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Schooling
    .species = SPECIES_WISHIWASHI,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_FEINT_ATTACK}
    }
};


/* ------------------- Zone 7 & 8 ------------------- */

static const struct TrainerMon sParty_Millie[] = {// Random lead
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_ELEKID,
    },
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_MAGBY,
    },
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_SMOOCHUM,
    },
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_TOXEL,
    },
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_TYROGUE,
    }
};

static const struct TrainerMon sParty_Paige[] = {// Random lead
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_FLABEBE,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_CUTIEFLY,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_WOOBAT,
    }
};

static const struct TrainerMon sParty_Seth[] = {// Random lead
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_GIBLE,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_BELDUM,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_LARVESTA,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_DEINO,
    }
};

static const struct TrainerMon sParty_Jamal[] = {// Random lead
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_INKAY,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_TYMPOLE,
    }
};

static const struct TrainerMon sParty_Connie[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_BettyDefault[] = {//Leviathan, Double Battle, Default
    {
    .ball = ITEM_LUXURY_BALL,
    .iv = 20,
    .lvl = 19,
    .nature = NATURE_QUIET,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Synchronize
    .species = SPECIES_INDEEDEE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_PSYBEAM, MOVE_DISARMING_VOICE, MOVE_NONE, MOVE_NONE}
    },
    {
    .ball = ITEM_LUXURY_BALL,
    .iv = 20,
    .lvl = 19,
    .nature = NATURE_QUIET,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Synchronize
    .species = SPECIES_INDEEDEE_FEMALE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_PSYBEAM, MOVE_DISARMING_VOICE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_BettyBrutal[] = {//Leviathan, Double Battle, Brutal
    {
    .ball = ITEM_LUXURY_BALL,
    .iv = 31,
    .lvl = 19,
    .nature = NATURE_QUIET,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Psychic Surge
    .species = SPECIES_INDEEDEE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_PSYBEAM, MOVE_DRAINING_KISS, MOVE_NONE, MOVE_NONE}
    },
    {
    .ball = ITEM_LUXURY_BALL,
    .iv = 31,
    .lvl = 19,
    .nature = NATURE_QUIET,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_HIDDEN, //Psychic Surge
    .species = SPECIES_INDEEDEE_FEMALE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_PSYBEAM, MOVE_DRAINING_KISS, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jimmy[] = {// Random lead
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_SANDSHREW_ALOLAN,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_GRIMER,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_GRIMER_ALOLAN,
    }
};

static const struct TrainerMon sParty_Emiliano[] = {// Random lead
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_ONIX,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_ARON,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_MIENFOO,
    }
};

static const struct TrainerMon sParty_Karen[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_EMOLGA,
    }
};

static const struct TrainerMon sParty_Jayden[] = {// Random lead
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_DRILBUR,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_ROLYCOLY,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_SWINUB,
    }
};

static const struct TrainerMon sParty_Neil[] = {// Random lead
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_BRONZOR,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_KLINK,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_FERROSEED,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_MAWILE,
    }
};

static const struct TrainerMon sParty_Tamara[] = {// Random lead
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_DRIFLOON,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_VULPIX_ALOLAN,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_JOLTIK,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_TIMBURR,
    }
};

static const struct TrainerMon sParty_Zone8DMirage[] = {//Leviathan, fought in a 2v1 tag battle with Zone8DWally, Default
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Receiver
    .species = SPECIES_PASSIMIAN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_CAREFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Intimidate
    .species = SPECIES_QWILFISH,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_BOLD,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Prankster, turns into Magic Bounce after Mega Evolving
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_SABLENITE,
    .moves = {MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Zone8DMirageBrutal[] = {//Leviathan, fought in a 2v1 tag battle with Zone8DWally, Brutal
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Receiver
    .species = SPECIES_PASSIMIAN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_FACADE}
    },
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_CAREFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Intimidate
    .species = SPECIES_QWILFISH,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_FLIP_TURN, MOVE_AQUA_JET}
    },
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Berserk
    .species = SPECIES_DRAMPA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DRAGON_PULSE, MOVE_HYPER_VOICE, MOVE_HEAT_WAVE, MOVE_SLEEP_TALK}
    },
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_BOLD,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Prankster, turns into Magic Bounce after Mega Evolving
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_SABLENITE,
    .moves = {MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_RECOVER}
    }
};

static const struct TrainerMon sParty_Zone8DWally[] = {//Tag Partner
    {
    .iv = 20,
    .lvl = 20,
    .nature = NATURE_BOLD,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Trace
    .species = SPECIES_KIRLIA,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_PSYBEAM, MOVE_DRAINING_KISS, MOVE_LIFE_DEW, MOVE_GROWL}
    },
    {
    .iv = 20,
    .lvl = 20,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_SLOT_1, //Flame Body
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_FLETCHINDER,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_FLAME_CHARGE, MOVE_ROOST, MOVE_FEATHER_DANCE}
    },
    {
    .iv = 20,
    .lvl = 20,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Huge Power
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_COVET, MOVE_CHARM}
    }
};

/* ------------------- Zone 9 ------------------- */

static const struct TrainerMon sParty_Cooper[] = {// Random lead
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_CROAGUNK,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SALANDIT,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_KOFFING,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_TRUBBISH,
    }
};

static const struct TrainerMon sParty_Carmine[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_CHARMELEON,
    }
};

// You fight Ari, Bertha, Cassandra, Dominic, and Erica in a row without healing
static const struct TrainerMon sParty_Ari[] = {//Uses level up movesets on Default difficulty
    {
    .iv = 10,
    .lvl = 19,
    .species = SPECIES_ODDISH,
    .moves = {MOVE_SLEEP_POWDER, MOVE_MEGA_DRAIN, MOVE_VENOSHOCK, MOVE_STUN_SPORE}
    },
    {
    .iv = 10,
    .lvl = 19,
    .species = SPECIES_BELLSPROUT,
    .moves = {MOVE_SLEEP_POWDER, MOVE_MAGICAL_LEAF, MOVE_CLEAR_SMOG, MOVE_THIEF}
    }
};

static const struct TrainerMon sParty_Bertha[] = {//Uses level up movesets on Default difficulty
    {
    .iv = 10,
    .lvl = 19,
    .species = SPECIES_DEWPIDER,
    .moves = {MOVE_STICKY_WEB, MOVE_BUG_BITE, MOVE_BUBBLE_BEAM, MOVE_ICY_WIND}
    },
    {
    .iv = 10,
    .lvl = 19,
    .species = SPECIES_VANILLITE,
    .moves = {MOVE_ICY_WIND, MOVE_UPROAR, MOVE_ASTONISH, MOVE_WATER_PULSE}
    },
    {
    .iv = 10,
    .lvl = 19,
    .species = SPECIES_SHUPPET,
    .moves = {MOVE_NIGHT_SHADE, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_SCREECH}
    }
};

static const struct TrainerMon sParty_Cassandra[] = {//Uses level up movesets on Default difficulty
    {
    .iv = 10,
    .lvl = 20,
    .species = SPECIES_ARROKUDA,
    .moves = {MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_NIGHT_SLASH, MOVE_LASER_FOCUS}
    },
    {
    .iv = 10,
    .lvl = 20,
    .species = SPECIES_CUFANT,
    .moves = {MOVE_BULLDOZE, MOVE_IRON_HEAD, MOVE_ROCK_SMASH, MOVE_STOMP}
    },
    {
    .iv = 10,
    .lvl = 20,
    .species = SPECIES_NOIBAT,
    .moves = {MOVE_AIR_CUTTER, MOVE_ABSORB, MOVE_WATER_PULSE, MOVE_AGILITY}
    }
};

static const struct TrainerMon sParty_Dominic[] = {//Uses level up movesets on Default difficulty
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_CHATOT,
    .moves = {MOVE_CHATTER, MOVE_ROUND, MOVE_SLEEP_TALK, MOVE_ROOST}
    }
};

static const struct TrainerMon sParty_Erica[] = {//Uses level up movesets on Default difficulty
    {
    .iv = 10,
    .lvl = 20,
    .species = SPECIES_AIPOM,
    .moves = {MOVE_RETALIATE, MOVE_FAKE_OUT, MOVE_WATER_PULSE, MOVE_KNOCK_OFF}
    },
    {
    .iv = 10,
    .lvl = 20,
    .species = SPECIES_TRUMBEAK,
    .moves = {MOVE_RETALIATE, MOVE_AERIAL_ACE, MOVE_BULLET_SEED, MOVE_STEEL_WING}
    },
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_KOMALA,
    .moves = {MOVE_RETALIATE, MOVE_KNOCK_OFF, MOVE_LOW_SWEEP, MOVE_YAWN}
    }
};

/* ------------------- Zone 10 ------------------- */

static const struct TrainerMon sParty_Kyle[] = {// Random lead, Battle starts with permanent Sand
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_SPHEAL,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_HELIOPTILE,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_GLIGAR,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_LITWICK,
    }
};

static const struct TrainerMon sParty_Belle[] = {// Random lead, Battle starts with permanent Sand
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_FOONGUS,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_ZORUA,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_DUSKULL,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_DARUMAKA,
    }
};

static const struct TrainerMon sParty_Dewey[] = {// Random lead, Battle starts with permanent Sand
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_CORPHISH,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_SANDILE,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_LINOONE_GALARIAN,
    }
};

static const struct TrainerMon sParty_Pearlie[] = {// Battle starts with permanent Sand
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_CRAMORANT,
    }
};

static const struct TrainerMon sParty_Ernest[] = {// Random lead, Battle starts with permanent Sand
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_HIPPOPOTAS,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_SILICOBRA,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_TRAPINCH,
    }
};

static const struct TrainerMon sParty_Alana[] = {// Random lead, Battle starts with permanent Sand
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_MINCCINO,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_POLIWAG,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_SCRAGGY,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_SINISTEA,
    }
};

static const struct TrainerMon sParty_Susan[] = {// Battle starts with permanent Sand
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_MORPEKO,
    }
};

static const struct TrainerMon sParty_Conrad[] = {// Random lead, Battle starts with permanent Sand
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_ROGGENROLA,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_GEODUDE_ALOLAN,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_RHYHORN,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_CARBINK,
    }
};

static const struct TrainerMon sParty_AdaminaDefault[] = {//Leviathan, Battle starts with permanent Sand, Default
    {
    .iv = 20,
    .lvl = 22,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_SLOT_1, //Sturdy
    .gender = TRAINER_MON_MALE,
    .species = SPECIES_DWEBBLE,
    .moves = {MOVE_ROCK_BLAST, MOVE_BUG_BITE, MOVE_AERIAL_ACE, MOVE_STEALTH_ROCK}
    },
    {
    .ivs = {21, 21, 20, 20, 20, 20},
    .lvl = 22,
    .nature = NATURE_HASTY,
    .ability = ABILITY_HIDDEN, //Magic Guard
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_BRAIXEN,
    .moves = {MOVE_INCINERATE, MOVE_PSYBEAM, MOVE_SCORCHING_SANDS, MOVE_HIDDEN_POWER} // Hidden Power Fighting
    },
    {
    .ivs = {20, 21, 21, 21, 20, 21},
    .lvl = 22,
    .nature = NATURE_QUIET,
    .ability = ABILITY_SLOT_2, //Liquid Voice
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_BRIONNE,
    .moves = {MOVE_ROUND, MOVE_DRAINING_KISS, MOVE_ICY_WIND, MOVE_HIDDEN_POWER} // Hidden Power Grass
    },
    {
    .iv = 20,
    .lvl = 22,
    .nature = NATURE_CAREFUL,
    .ability = ABILITY_SLOT_1, //Overcoat
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_VULLABY,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_PLUCK, MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_ROOST}
    },
    {
    .iv = 20,
    .lvl = 23,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SLOT_1, //Fur Coat
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_FURRET,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RETALIATE, MOVE_SUCKER_PUNCH, MOVE_BRICK_BREAK, MOVE_COIL}
    }
};

static const struct TrainerMon sParty_AdaminaBrutal[] = {//Leviathan, Battle starts with permanent Sand, Brutal
    {
    .iv = 31,
    .lvl = 22,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_SLOT_1, //Sturdy
    .gender = TRAINER_MON_MALE,
    .species = SPECIES_DWEBBLE,
    .moves = {MOVE_ROCK_BLAST, MOVE_BUG_BITE, MOVE_AERIAL_ACE, MOVE_STEALTH_ROCK}
    },
    {
    .ivs = {31, 31, 30, 30, 30, 30},
    .lvl = 22,
    .nature = NATURE_HASTY,
    .ability = ABILITY_HIDDEN, //Magic Guard
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_BRAIXEN,
    .moves = {MOVE_INCINERATE, MOVE_PSYBEAM, MOVE_SCORCHING_SANDS, MOVE_HIDDEN_POWER} // Hidden Power Fighting
    },
    {
    .ivs = {30, 31, 31, 31, 30, 31},
    .lvl = 22,
    .nature = NATURE_QUIET,
    .ability = ABILITY_SLOT_2, //Liquid Voice
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_BRIONNE,
    .moves = {MOVE_ROUND, MOVE_DRAINING_KISS, MOVE_ICY_WIND, MOVE_HIDDEN_POWER} // Hidden Power Grass
    },
    {
    .iv = 31,
    .lvl = 22,
    .nature = NATURE_CAREFUL,
    .ability = ABILITY_SLOT_1, //Overcoat
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_VULLABY,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_PLUCK, MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_ROOST}
    },
    {
    .iv = 31,
    .lvl = 23,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SLOT_1, //Fur Coat
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_FURRET,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RETALIATE, MOVE_SUCKER_PUNCH, MOVE_BRICK_BREAK, MOVE_COIL}
    },
    {
    .iv = 31,
    .lvl = 23,
    .nature = NATURE_RELAXED,
    .ability = ABILITY_SLOT_1, //Sturdy
    .gender = TRAINER_MON_MALE,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_ROCK_TOMB, MOVE_NEEDLE_ARM, MOVE_STOMPING_TANTRUM, MOVE_DRAIN_PUNCH}
    }
};

/* ------------------- Zone 11 ------------------- */

static const struct TrainerMon sParty_Jeanette[] = {// Random lead
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_BALTOY,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_NATU,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_GOTHITA,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_SOLOSIS,
    }
};

static const struct TrainerMon sParty_EmmaAndLeo[] = {//Double Battle
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_FLAAFFY,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_LUXIO,
    }
};

static const struct TrainerMon sParty_Regina[] = {// Random lead
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_HONEDGE,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_ZORUA_HISUIAN,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_MISDREAVUS,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_GASTLY,
    }
};

static const struct TrainerMon sParty_Joel[] = {// Random lead
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_EXEGGCUTE,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_MUNNA,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_ESPURR,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_DOTTLER,
    }
};

static const struct TrainerMon sParty_NewtonDefault[] = {//Leviathan, Double Battle, Default
    {
    .iv = 20,
    .lvl = 23,
    .nature = NATURE_BOLD,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Friend Guard
    .species = SPECIES_CLEFAIRY,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_GRAVITY, MOVE_SING, MOVE_DRAINING_KISS, MOVE_TELEPORT}
    },
    {
    .iv = 20,
    .lvl = 23,
    .nature = NATURE_HASTY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Intimidate
    .species = SPECIES_STANTLER,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_RETALIATE, MOVE_HYPNOSIS, MOVE_DOUBLE_KICK, MOVE_ZEN_HEADBUTT}
    },
    {
    .iv = 20,
    .lvl = 23,
    .nature = NATURE_NAUGHTY,
    .gender = TRAINER_MON_GENDERLESS,
    .ability = ABILITY_SLOT_1, //Iron Fist
    .species = SPECIES_GOLETT,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_GRAVITY, MOVE_SHADOW_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_POWER_UP_PUNCH}
    },
    {
    .iv = 20,
    .lvl = 24,
    .nature = NATURE_NAIVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Hustle
    .species = SPECIES_FLAPPLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_GRAV_APPLE, MOVE_DRAGON_RUSH, MOVE_DUAL_WINGBEAT, MOVE_STOMPING_TANTRUM}
    }
};

static const struct TrainerMon sParty_NewtonBrutal[] = {//Leviathan, Double Battle, Brutal
    {
    .iv = 31,
    .lvl = 23,
    .nature = NATURE_BOLD,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Friend Guard
    .species = SPECIES_CLEFAIRY,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_GRAVITY, MOVE_SING, MOVE_DRAINING_KISS, MOVE_TELEPORT}
    },
    {
    .iv = 31,
    .lvl = 23,
    .nature = NATURE_HASTY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Intimidate
    .species = SPECIES_STANTLER,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_RETALIATE, MOVE_HYPNOSIS, MOVE_DOUBLE_KICK, MOVE_ZEN_HEADBUTT}
    },
    {
    .iv = 31,
    .lvl = 23,
    .nature = NATURE_NAUGHTY,
    .gender = TRAINER_MON_GENDERLESS,
    .ability = ABILITY_SLOT_1, //Iron Fist
    .species = SPECIES_GOLETT,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_GRAVITY, MOVE_SHADOW_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_POWER_UP_PUNCH}
    },
    {
    .iv = 31,
    .lvl = 24,
    .nature = NATURE_NAIVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Hustle
    .species = SPECIES_FLAPPLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_GRAV_APPLE, MOVE_DRAGON_RUSH, MOVE_DUAL_WINGBEAT, MOVE_STOMPING_TANTRUM}
    },
    {
    .iv = 31,
    .lvl = 24,
    .nature = NATURE_LONELY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Intimidate
    .species = SPECIES_ARBOK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CRUNCH, MOVE_GUNK_SHOT, MOVE_FIRE_FANG, MOVE_THUNDER_FANG}
    }
};

/* ------------------- Zone 12 ------------------- */

static const struct TrainerMon sParty_Essence[] = {// Random lead
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_JIGGLYPUFF,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_CLAMPERL,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_EEVEE,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_SKIPLOOM,
    }
};

static const struct TrainerMon sParty_Dolores[] = {// Random lead
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_SNOVER,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_CUBCHOO,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_SNORUNT,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_DARUMAKA_GALARIAN,
    }
};


// You fight Romulus then immediately fight Julie afterwards.
// On Default, your party is fully healed in between fights, while on Brutal your party is not
static const struct TrainerMon sParty_Romulus[] = {
    {
    .ivs = {21, 21, 20, 20, 20, 20},
    .lvl = 24,
    .ability = ABILITY_SLOT_2, //Super Luck
    .species = SPECIES_MURKROW,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_AIR_CUTTER, MOVE_FEINT_ATTACK, MOVE_STEEL_WING, MOVE_HIDDEN_POWER} // Hidden Power Fighting
    },
    {
    .ivs = {21, 21, 21, 20, 21, 21},
    .lvl = 24,
    .ability = ABILITY_HIDDEN, //Sniper
    .species = SPECIES_DRIZZILE,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_WATER_PULSE, MOVE_MUD_SHOT, MOVE_FOCUS_ENERGY, MOVE_HIDDEN_POWER} // Hidden Power Ice
    },
    {
    .ivs = {21, 21, 21, 20, 21, 21},
    .lvl = 25,
    .ability = ABILITY_SLOT_2, //Steadfast
    .species = SPECIES_FARFETCHD_GALARIAN,
    .heldItem = ITEM_LEEK,
    .moves = {MOVE_NIGHT_SLASH, MOVE_BRICK_BREAK, MOVE_PLUCK, MOVE_QUICK_ATTACK}
    }
};

static const struct TrainerMon sParty_Julie[] = {// Random lead
    {
    .iv = 20,
    .lvl = 24,
    .ability = ABILITY_SLOT_2, //Battle Armor
    .species = SPECIES_CUBONE,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_BONEMERANG, MOVE_ROCK_TOMB, MOVE_THRASH, MOVE_IRON_DEFENSE}
    },
    {
    .iv = 20,
    .lvl = 24,
    .ability = ABILITY_SLOT_2, //Shell Armor
    .species = SPECIES_GROTLE,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_BULLET_SEED, MOVE_BULLDOZE, MOVE_SYNTHESIS, MOVE_BODY_SLAM}
    },
    {
    .ivs = {21, 21, 21, 21, 20, 21},
    .lvl = 25,
    .ability = ABILITY_SLOT_1, //Shell Armor
    .species = SPECIES_TURTONATOR,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_INCINERATE, MOVE_DRAGON_PULSE, MOVE_SCORCHING_SANDS, MOVE_HIDDEN_POWER} // Hidden Power Electric
    }
};

static const struct TrainerMon sParty_Trevor[] = {// Random lead
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_RUFFLET,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_DUCKLETT,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_STARAVIA,
    }
};

static const struct TrainerMon sParty_Randolph[] = {// Random lead
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_BERGMITE,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_LARVITAR,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_LICKITUNG,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_Federico[] = {// Random lead
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_MAREANIE,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Genie[] = {// Random lead
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_DODUO,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_DEERLING,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_PONYTA,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_BLITZLE,
    }
};

static const struct TrainerMon sParty_Hilda[] = {// Random lead
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_SKIDDO,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_MUDBRAY,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_HERDIER,
    }
};

static const struct TrainerMon sParty_Kinley[] = {// Random lead
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_DEDENNE,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_TANGELA,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_CROCONAW,
    }
};


/* ------------------- Zone 13 & 14 ------------------- */

static const struct TrainerMon sParty_Violet[] = {// Random lead
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_COMFEY,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_WEEPINBELL,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_GLOOM,
    }
};

static const struct TrainerMon sParty_Wanda[] = {// Random lead
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_BAYLEEF,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_PRINPLUP,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_AmberAndKim[] = {//Double Battle
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_SKRELP,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_YAMASK_GALARIAN,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_YAMASK,
    }
};

static const struct TrainerMon sParty_JanAndErin[] = {//Double Battle
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_FURFROU,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_FURFROU,
    }
};

static const struct TrainerMon sParty_Steve[] = {// Random lead
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_SIZZLIPEDE,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_YANMA,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_SKORUPI,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_WHIRLIPEDE,
    }
};

static const struct TrainerMon sParty_Gould[] = {// Random lead
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_CRANIDOS,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_TYRUNT,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_ANORITH,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_TIRTOUGA,
    }
};

static const struct TrainerMon sParty_Mendel[] = {// Random lead
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_SHIELDON,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_LILEEP,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_AMAURA,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_ARCHEN,
    }
};

static const struct TrainerMon sParty_Darwin[] = {// Random lead
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_DARTRIX,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_DEWOTT,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_QUILAVA,
    }
};

static const struct TrainerMon sParty_JennyDefault[] = {//Leviathan, Default
    {
    .iv = 20,
    .lvl = 30,
    .nature = NATURE_LONELY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Sheer Force
    .species = SPECIES_FERALIGATR,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_SUPERPOWER, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_JennyBrutal[] = {//Leviathan, Brutal
    {
    .iv = 31,
    .lvl = 30,
    .nature = NATURE_LONELY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Sheer Force
    .species = SPECIES_FERALIGATR,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_SUPERPOWER, MOVE_DRAGON_DANCE}
    }
};

static const struct TrainerMon sParty_Bart[] = {// Random lead
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_TORRACAT,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_QUILLADIN,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_WARTORTLE,
    }
};

static const struct TrainerMon sParty_Nigel[] = {// Random lead
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_SNEASEL,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_GOLBAT,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_IVYSAUR,
    }
};

static const struct TrainerMon sParty_Lola[] = {// Fought in a double battle with Charlie
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_NIDORINA,
    }
};

static const struct TrainerMon sParty_Charlie[] = {//Fought in a double battle with Lola
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_NIDORINO,
    }
};

static const struct TrainerMon sParty_Todd[] = {// Random lead
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_CARKOL,
    }
};

static const struct TrainerMon sParty_Russell[] = {// Random lead
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_CLOBBOPUS,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_SNEASEL_HISUIAN,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_MONFERNO,
    }
};

static const struct TrainerMon sParty_Otis[] = {// Random lead
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_JANGMO_O,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_GOOMY,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_DRATINI,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_BAGON,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_DREEPY,
    }
};

static const struct TrainerMon sParty_MiguelDefault[] = {//Leviathan, Default,
    {
    .iv = 20,
    .lvl = 29,
    .nature = NATURE_LONELY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Iron Barbs
    .species = SPECIES_TOGEDEMARU,
    .heldItem = ITEM_SHUCA_BERRY,
    .moves = {MOVE_ZING_ZAP, MOVE_SPIKY_SHIELD, MOVE_FAKE_OUT, MOVE_FELL_STINGER}
    },
    {
    .iv = 20,
    .lvl = 29,
    .nature = NATURE_BRAVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Unaware
    .species = SPECIES_QUAGSIRE,
    .heldItem = ITEM_RINDO_BERRY,
    .moves = {MOVE_BULLDOZE, MOVE_YAWN, MOVE_WATER_PULSE, MOVE_RECOVER}
    },
    {
    .iv = 20,
    .lvl = 29,
    .nature = NATURE_SASSY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Intimidate
    .species = SPECIES_VESPIQUEN,
    .heldItem = ITEM_CHARTI_BERRY,
    .moves = {MOVE_ATTACK_ORDER, MOVE_DEFEND_ORDER, MOVE_HEAL_ORDER, MOVE_AIR_CUTTER}
    },
    {
    .iv = 20,
    .lvl = 29,
    .nature = NATURE_HASTY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Iron Fist
    .species = SPECIES_PANGORO,
    .heldItem = ITEM_ROSELI_BERRY,
    .moves = {MOVE_CRUNCH, MOVE_VITAL_THROW, MOVE_FAKE_OUT, MOVE_BULLET_PUNCH}
    },
    {
    .iv = 20,
    .lvl = 29,
    .nature = NATURE_QUIET,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Levitate
    .species = SPECIES_PROBOPASS,
    .heldItem = ITEM_CHOPLE_BERRY,
    .moves = {MOVE_POWER_GEM, MOVE_BODY_PRESS, MOVE_THUNDER_WAVE, MOVE_MIRROR_SHOT}
    }
};

static const struct TrainerMon sParty_MiguelBrutal[] = {//Leviathan, Brutal
    {
    .iv = 31,
    .lvl = 29,
    .nature = NATURE_LONELY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Iron Barbs
    .species = SPECIES_TOGEDEMARU,
    .heldItem = ITEM_SHUCA_BERRY,
    .moves = {MOVE_ZING_ZAP, MOVE_SPIKY_SHIELD, MOVE_FAKE_OUT, MOVE_FELL_STINGER}
    },
    {
    .iv = 31,
    .lvl = 29,
    .nature = NATURE_BRAVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Unaware
    .species = SPECIES_QUAGSIRE,
    .heldItem = ITEM_RINDO_BERRY,
    .moves = {MOVE_BULLDOZE, MOVE_YAWN, MOVE_WATER_PULSE, MOVE_RECOVER}
    },
    {
    .iv = 31,
    .lvl = 29,
    .nature = NATURE_SASSY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Intimidate
    .species = SPECIES_VESPIQUEN,
    .heldItem = ITEM_CHARTI_BERRY,
    .moves = {MOVE_ATTACK_ORDER, MOVE_DEFEND_ORDER, MOVE_HEAL_ORDER, MOVE_AIR_CUTTER}
    },
    {
    .iv = 31,
    .lvl = 29,
    .nature = NATURE_HASTY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Iron Fist
    .species = SPECIES_PANGORO,
    .heldItem = ITEM_ROSELI_BERRY,
    .moves = {MOVE_CRUNCH, MOVE_VITAL_THROW, MOVE_FAKE_OUT, MOVE_BULLET_PUNCH}
    },
    {
    .iv = 31,
    .lvl = 29,
    .nature = NATURE_QUIET,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Levitate
    .species = SPECIES_PROBOPASS,
    .heldItem = ITEM_CHOPLE_BERRY,
    .moves = {MOVE_POWER_GEM, MOVE_BODY_PRESS, MOVE_THUNDER_WAVE, MOVE_MIRROR_SHOT}
    },
    {
    .iv = 31,
    .lvl = 29,
    .nature = NATURE_MILD,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Infiltrator
    .species = SPECIES_JUMPLUFF,
    .heldItem = ITEM_YACHE_BERRY,
    .moves = {MOVE_MEGA_DRAIN, MOVE_AIR_CUTTER, MOVE_SLEEP_POWDER, MOVE_SYNTHESIS}
    }
};


/* ------------------- Zone 15 ------------------- */

static const struct TrainerMon sParty_Zone15BMirageDefault[] = {//Leviathan, Default
    {
    .iv = 31,
    .lvl = 30,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_HIDDEN, //Drought
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_OVERHEAT, MOVE_SCORCHING_SANDS, MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER}
    },
    {
    .iv = 31,
    .lvl = 30,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Chlorophyll
    .species = SPECIES_VICTREEBEL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_GROWTH}
    },
    {
    .ivs = {31, 31, 31, 30, 31, 31},
    .lvl = 30,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_HIDDEN, //Solar Power
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDERBOLT, MOVE_HYPER_VOICE, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER} //Hidden Power Ice
    },
    {
    .iv = 31,
    .lvl = 30,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Intimidate, turns into Solar Power after Mega Evolving
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_HOUNDOOMINITE,
    .moves = {MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_SCORCHING_SANDS, MOVE_NASTY_PLOT}
    }
};

static const struct TrainerMon sParty_Zone15BMirageBrutal[] = {//Leviathan, Random Lead, Battle starts with permanent Sun, Brutal
    {
    .iv = 31,
    .lvl = 30,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_HIDDEN, //Drought
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_OVERHEAT, MOVE_SCORCHING_SANDS, MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER}
    },
    {
    .iv = 31,
    .lvl = 30,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Chlorophyll
    .species = SPECIES_VICTREEBEL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_GROWTH}
    },
    {
    .ivs = {31, 31, 31, 30, 31, 31},
    .lvl = 30,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_HIDDEN, //Solar Power
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDERBOLT, MOVE_HYPER_VOICE, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER} //Hidden Power Ice
    },
    {
    .iv = 31,
    .lvl = 30,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Intimidate, turns into Solar Power after Mega Evolving
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_HOUNDOOMINITE,
    .moves = {MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_SCORCHING_SANDS, MOVE_NASTY_PLOT}
    }
};

/* ------------------- Zone 16 ------------------- */

static const struct TrainerMon sParty_Angus[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_MAREANIE,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_CLAUNCHER,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_PRINPLUP,
    }
};

static const struct TrainerMon sParty_Iona[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_OMANYTE,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_KABUTO,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_TIRTOUGA,
    }
};

static const struct TrainerMon sParty_Tanisha[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_PYUKUMUKU,
    }
};

static const struct TrainerMon sParty_Rafael[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_PINCURCHIN,
    }
};

static const struct TrainerMon sParty_Berke[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_SEEL,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_CORSOLA_GALARIAN,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_ALOMOMOLA,
    }
};

static const struct TrainerMon sParty_Georgina[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_SPHEAL,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_HORSEA,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_Sophia[] = {//Leviathan 10, Default
    {
    .iv = 31,
    .lvl = 29,
    .nature = NATURE_NAIVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Torrent
    .species = SPECIES_DRIZZILE,
    .heldItem = ITEM_WACAN_BERRY,
    .moves = {MOVE_SCALD, MOVE_U_TURN, MOVE_MUD_SHOT, MOVE_AIR_SLASH}
    },
    {
    .iv = 31,
    .lvl = 29,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Strong Jaw
    .species = SPECIES_CROCONAW,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
    {
    .ivs = {31, 31, 31, 30, 30, 30},
    .lvl = 29,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Swift Swim
    .species = SPECIES_PALPITOAD,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_MUDDY_WATER, MOVE_MUD_SHOT, MOVE_HIDDEN_POWER, MOVE_RAIN_DANCE} //Hidden Power Flying
    },
    {
    .iv = 31,
    .lvl = 30,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Shell Armor
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_SPARKLING_ARIA, MOVE_FREEZE_DRY, MOVE_BODY_PRESS, MOVE_REST}
    }
};

/* ------------------- Zone 18 & 19 ------------------- */

static const struct TrainerMon sParty_Marion[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_KRABBY,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_CRAMORANT,
    }
};

static const struct TrainerMon sParty_Clinton[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_MANTYKE,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_CLAMPERL,
    }
};

static const struct TrainerMon sParty_Kenneth[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_CLOBBOPUS,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_TYNAMO,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_WIMPOD,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_SHELLDER,
    }
};

static const struct TrainerMon sParty_Jay[] = {//Zone 18 Cool Room
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_GOOMY,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_BAGON,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_DEINO,
    }
};

static const struct TrainerMon sParty_Blanche[] = {//Zone 18 Cute Room
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_SNOM,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_SMOOCHUM,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_VULPIX_ALOLAN,
    }
};

static const struct TrainerMon sParty_Terrence[] = {//Zone 18 Stall Room
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_DUSKULL,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_KLEFKI,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_COMFEY,
    }
};

static const struct TrainerMon sParty_Marty[] = {//Zone 18 Balance Room
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_YAMASK,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_SWINUB,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_GROTLE,
    }
};

static const struct TrainerMon sParty_Kari[] = {//Zone 18 Offense Room
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_LITWICK,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_ANORITH,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_AERODACTYL,
    }
};

static const struct TrainerMon sParty_Abraham[] = {//Zone 18 Switch Room
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_PIKACHU,
    .moves = {MOVE_VOLT_SWITCH, MOVE_DRAINING_KISS, MOVE_NUZZLE, MOVE_ELECTRO_BALL}
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_YANMA,
    .moves = {MOVE_U_TURN, MOVE_SILVER_WIND, MOVE_AIR_CUTTER, MOVE_HYPNOSIS}
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_THWACKEY,
    .moves = {MOVE_U_TURN, MOVE_GRASSY_GLIDE, MOVE_GROWTH, MOVE_KNOCK_OFF}
    }
};

static const struct TrainerMon sParty_Rex[] = {//Zone 18 Hazard Room
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_BRONZOR,
    .moves = {MOVE_STEALTH_ROCK, MOVE_METAL_SOUND, MOVE_FUTURE_SIGHT, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_PINECO,
    .moves = {MOVE_TOXIC_SPIKES, MOVE_SPIKES, MOVE_PIN_MISSILE, MOVE_DRILL_RUN}
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_TRUBBISH,
    .moves = {MOVE_SPIKES, MOVE_TAKE_DOWN, MOVE_STOCKPILE, MOVE_SLUDGE}
    }
};

static const struct TrainerMon sParty_Emilio[] = {//Zone 18 Setup Room
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_KIRLIA,
    .moves = {MOVE_CALM_MIND, MOVE_PSYBEAM, MOVE_DRAINING_KISS, MOVE_CHARM}
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_LILEEP,
    .moves = {MOVE_CURSE, MOVE_ROCK_TOMB, MOVE_GIGA_DRAIN, MOVE_RECOVER}
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_ABSOL,
    .moves = {MOVE_SWORDS_DANCE, MOVE_NIGHT_SLASH, MOVE_SLASH, MOVE_LEER}
    }
};

static const struct TrainerMon sParty_Melinda[] = {//Zone 18 Hail Room
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_AMAURA,
    .ability = ABILITY_SLOT_2, //Snow Warning
    .heldItem = ITEM_ICY_ROCK,
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_SANDSHREW_ALOLAN,
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_VANILLITE,
    }
};

static const struct TrainerMon sParty_Louis[] = {//Zone 18 Buff Room, Double Battle
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_TRANQUILL,
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_CHARJABUG,
    }
};

static const struct TrainerMon sParty_Desiree[] = {//Zone 18 Speed Room, Double Battle
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_PIGNITE,
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_BIBAREL,
    }
};

static const struct TrainerMon sParty_Anita[] = {//Zone 18 Support Room, Double Battle
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_SNEASEL,
    .moves = {MOVE_FAKE_OUT, MOVE_HONE_CLAWS, MOVE_BITE, MOVE_CRUSH_CLAW}
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    .moves = {MOVE_FAKE_OUT, MOVE_BUBBLE_BEAM, MOVE_MEGA_DRAIN, MOVE_RAIN_DANCE}
    }
};

static const struct TrainerMon sParty_Willie[] = {//Zone 18 Stats Room
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_MUNCHLAX,
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_DURALUDON,
    }
};

static const struct TrainerMon sParty_Doris[] = {//Zone 18 Ability Room
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_TYRUNT,
    .ability = ABILITY_SLOT_1, //Strong Jaw
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_ARCHEN,
    .ability = ABILITY_SLOT_1, //Defeatist
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_FROGADIER,
    .ability = ABILITY_HIDDEN, //Protean
    }
};

//You fight each of these pirates in the order 4, 3, 2, 1 in a row without healing
static const struct TrainerMon sParty_Pirate1[] = {//Default
    {
    .iv = 31,
    .lvl = 30,
    .species = SPECIES_BARRASKEWDA,
    },
    {
    .iv = 31,
    .lvl = 30,
    .species = SPECIES_PERRSERKER,
    }
};

static const struct TrainerMon sParty_Pirate2[] = {//Default
    {
    .iv = 31,
    .lvl = 30,
    .species = SPECIES_CRABOMINABLE,
    },
    {
    .iv = 31,
    .lvl = 30,
    .species = SPECIES_KINGLER,
    }
};

static const struct TrainerMon sParty_Pirate3[] = {//Default
    {
    .iv = 31,
    .lvl = 30,
    .species = SPECIES_DHELMISE,
    },
    {
    .iv = 31,
    .lvl = 30,
    .species = SPECIES_DREDNAW,
    }
};

static const struct TrainerMon sParty_Pirate4[] = {//Default
    {
    .iv = 31,
    .lvl = 30,
    .species = SPECIES_OCTILLERY,
    },
    {
    .iv = 31,
    .lvl = 30,
    .species = SPECIES_CHATOT,
    }
};

static const struct TrainerMon sParty_Odysseus[] = {//Leviathan 11, Battle starts with permanent Rain, Double Battle, optional, Default
    {
    .iv = 31,
    .lvl = 33,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_SLOT_1, //Water Veil
    .species = SPECIES_HUNTAIL,
    .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_SLEEP_TALK}
    },
    {
    .iv = 31,
    .lvl = 33,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_FEMALE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_SLOT_1, //Hydration
    .species = SPECIES_GOREBYSS,
    .moves = {MOVE_BRINE, MOVE_PSYCHIC, MOVE_ICY_WIND, MOVE_REST}
    }
};

/* ------------------- Zone 20 ------------------- */


/* ------------------- Zone 21 ------------------- */

static const struct TrainerMon sParty_Howard[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_HONEDGE,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_JANGMO_O,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Eloise[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_SLOWPOKE_GALARIAN,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_TRAPINCH,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_EXEGGCUTE,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_DARUMAKA_GALARIAN,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_PORYGON,
    }
};

static const struct TrainerMon sParty_AllyAndEmmy[] = {//Double Battle
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_SNORUNT,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_CUBCHOO,
    },
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_GOLETT,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_SANDYGAST,
    }
};

static const struct TrainerMon sParty_Amir[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_TAUROS,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_MILTANK,
    }
};

static const struct TrainerMon sParty_Gethin[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_SHUPPET,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_YAMASK_GALARIAN,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_SINISTEA,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_FRILLISH,
    }
};

static const struct TrainerMon sParty_Bernard[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_VANILLISH,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_HATTREM,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_Ellie[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_SALANDIT,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_SNOVER,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_KARRABLAST,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_SHELMET,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_RUFFLET,
    }
};

static const struct TrainerMon sParty_Rusty[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_RABOOT,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_CARKOL,
    }
};

/* ------------------- Zone 22 ------------------- */

static const struct TrainerMon sParty_Cody[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_PIDGEOTTO,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_BOUFFALANT,
    }
};

static const struct TrainerMon sParty_Lewis[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_BUTTERFREE,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_ARAQUANID,
    }
};

static const struct TrainerMon sParty_Cornelius[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_BOLDORE,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_HAUNTER,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_PILOSWINE,
    }
};

static const struct TrainerMon sParty_InezAndEmma[] = {//Double Battle
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_CHARMELEON,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_QUILAVA,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_TOGETIC,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_FLOETTE,
    }
};

static const struct TrainerMon sParty_Helen[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_WARTORTLE,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_IVYSAUR,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_DUBWOOL,
    }
};

static const struct TrainerMon sParty_Wesley[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_TURTONATOR,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_GRAVELER_ALOLAN,
    }
};

static const struct TrainerMon sParty_Alfredo[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_COMBUSKEN,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_HERACROSS,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_DEWOTT,
    }
};

static const struct TrainerMon sParty_Ian[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_LINOONE_GALARIAN,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_TANGELA,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_MR_MIME_GALARIAN,
    }
};

static const struct TrainerMon sParty_Audrey[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_GRANBULL,
    }
};

static const struct TrainerMon sParty_CamAndPam[] = {//Leviathan 13, Battle starts with permanent Hail, Double Battle, Default
    {
    .iv = 31,
    .lvl = 37,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Ice Scales
    .species = SPECIES_FROSMOTH,
    .moves = {MOVE_BLIZZARD, MOVE_BUG_BUZZ, MOVE_ROOST, MOVE_AURORA_VEIL}
    },
    {
    .iv = 31,
    .lvl = 38,
    .nature = NATURE_BOLD,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Competitive
    .species = SPECIES_MILOTIC,
    .moves = {MOVE_SURF, MOVE_DAZZLING_GLEAM, MOVE_RECOVER, MOVE_MIRROR_COAT}
    },
    {
    .iv = 31,
    .lvl = 38,
    .nature = NATURE_RASH,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Dry Skin
    .species = SPECIES_JYNX,
    .moves = {MOVE_FROST_BREATH, MOVE_PSYCHIC, MOVE_LOVELY_KISS, MOVE_NASTY_PLOT}
    },
    {
    .iv = 31,
    .lvl = 37,
    .nature = NATURE_MILD,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Slush Rush
    .species = SPECIES_EMPOLEON,
    .moves = {MOVE_SURF, MOVE_FLASH_CANNON, MOVE_GRASS_KNOT, MOVE_ROOST}
    }
};

/* ------------------- Zone 23 ------------------- */

static const struct TrainerMon sParty_Edgardo[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_INDEEDEE,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_INDEEDEE_FEMALE,
    }
};

static const struct TrainerMon sParty_Jean[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_SCYTHER,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_DURANT,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Rose[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_LOPUNNY,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_STUNFISK_GALARIAN,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_SEALEO,
    }
};

static const struct TrainerMon sParty_Jennifer[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_DOUBLADE,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_SPIRITOMB,
    }
};

static const struct TrainerMon sParty_Matthew[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_PUPITAR,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_TOGEDEMARU,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_DRAGONAIR,
    }
};

static const struct TrainerMon sParty_Kerry[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_KLANG,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_CORVISQUIRE,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_DRAMPA,
    }
};

static const struct TrainerMon sParty_Annie[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_KROKOROK,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_CRYOGONAL,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_GREEDENT,
    }
};

/* ------------------- Zone 24 & 25 ------------------- */

static const struct TrainerMon sParty_Christi[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_FALINKS,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_HAWLUCHA,
    }
};

static const struct TrainerMon sParty_Spencer[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_RHYHORN,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_VIBRAVA,
    }
};

static const struct TrainerMon sParty_Haywood[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_HITMONCHAN,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_HITMONLEE,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_HITMONTOP,
    }
};

static const struct TrainerMon sParty_Monroe[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_ARCTOZOLT,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_DRACOZOLT,
    }
};

static const struct TrainerMon sParty_David[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_SLIGGOO,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_SEADRA,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_KANGASKHAN,
    }
};

static const struct TrainerMon sParty_Dominik[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_TORKOAL,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_MAGMAR,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_LAMPENT,
    }
};

static const struct TrainerMon sParty_Douglas[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_HAKAMO_O,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_ELECTABUZZ,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_TOXTRICITY,
    }
};

static const struct TrainerMon sParty_Nadine[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_SHELGON,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_EELEKTRIK,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_CHANSEY,
    }
};

static const struct TrainerMon sParty_Sandy[] = {
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_MORGREM,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_SIGILYPH,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_DUOSION,
    }
};

static const struct TrainerMon sParty_Sheldon[] = {
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_DUSCLOPS,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_METANG,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_GOTHORITA,
    }
};

static const struct TrainerMon sParty_Zone25LMirages[] = {//Leviathan 14, Double Battle, Default
    {
    .iv = 31,
    .lvl = 42,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Sheer Force
    .species = SPECIES_NIDOKING,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_ICE_BEAM}
    },
    {
    .iv = 31,
    .lvl = 42,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Disguise
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_HONE_CLAWS, MOVE_SHADOW_SNEAK}
    },
    {
    .iv = 31,
    .lvl = 42,
    .nature = NATURE_RASH,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_HIDDEN, //Protean
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE, MOVE_EXTRASENSORY}
    },
    {
    .iv = 31,
    .lvl = 42,
    .nature = NATURE_NAIVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Iron Fist
    .species = SPECIES_ELECTIVIRE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDERBOLT, MOVE_HAMMER_ARM, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH}
    },
    {
    .ivs = {31, 31, 30, 30, 30, 30},
    .lvl = 42,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Levitate
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT, MOVE_HIDDEN_POWER} // Hidden Power Fighting
    },
    {
    .iv = 31,
    .lvl = 42,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Moxie
    .species = SPECIES_PINSIR,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_X_SCISSOR, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE, MOVE_HIGH_HORSEPOWER}
    }
};

/* ------------------- Lelouch Training ------------------- */

static const struct TrainerMon sParty_LelouchExp4[] = {
    {
    .iv = 0,
    .lvl = 40,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 40,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_KaizenBulkUpBrutal[] = {//Leviathan 7, Brutal
    {
    .iv = 31,
    .lvl = 27,
    .nature = NATURE_JOLLY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Vital Spirit
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BULK_UP, MOVE_RETURN, MOVE_ENCORE, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 31,
    .lvl = 27,
    .nature = NATURE_CAREFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Overgrow
    .species = SPECIES_QUILLADIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BULK_UP, MOVE_SEED_BOMB, MOVE_LEECH_SEED, MOVE_SPIKES}
    },
    {
    .iv = 31,
    .lvl = 28,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Guts
    .species = SPECIES_GURDURR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BULK_UP, MOVE_WAKE_UP_SLAP, MOVE_KNOCK_OFF, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMon sParty_KaizenCalmMindBrutal[] = {//Leviathan 8, Brutal
    {
    .iv = 31,
    .lvl = 27,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Magic Guard
    .species = SPECIES_CLEFAIRY,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CALM_MIND, MOVE_DRAINING_KISS, MOVE_STORED_POWER, MOVE_ICY_WIND}
    },
    {
    .iv = 31,
    .lvl = 27,
    .nature = NATURE_BOLD,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Levitate
    .species = SPECIES_MISDREAVUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CALM_MIND, MOVE_HEX, MOVE_DRAINING_KISS, MOVE_PAIN_SPLIT}
    },
    {
    .ivs = {31, 31, 30, 30, 30, 30},
    .lvl = 28,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Magic Guard
    .species = SPECIES_KADABRA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CALM_MIND, MOVE_PSYBEAM, MOVE_HIDDEN_POWER, MOVE_ENCORE} //Hidden Power Fighting
    }
};

static const struct TrainerMon sParty_Zone14CMirageBrutal[] = {//Leviathan 9, Double Battle, Brutal
    {
    .iv = 31,
    .lvl = 27,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_HIDDEN, //Drought
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_INCINERATE, MOVE_DAZZLING_GLEAM, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY}
    },
    {
    .iv = 31,
    .lvl = 27,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Chlorophyll
    .species = SPECIES_WEEPINBELL,
    .heldItem = ITEM_MIRACLE_SEED,
    .moves = {MOVE_GIGA_DRAIN, MOVE_VENOSHOCK, MOVE_KNOCK_OFF, MOVE_GROWTH}
    },
    {
    .ivs = {31, 31, 31, 30, 31, 31},
    .lvl = 27,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Solar Power
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_MAGNET,
    .moves = {MOVE_SHOCK_WAVE, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE} //Hidden Power Ice
    },
    {
    .iv = 31,
    .lvl = 27,
    .nature = NATURE_BOLD,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Telepathy
    .species = SPECIES_MUSHARNA,
    .heldItem = ITEM_TWISTED_SPOON,
    .moves = {MOVE_EXTRASENSORY, MOVE_CALM_MIND, MOVE_MOONLIGHT, MOVE_MOONBLAST}
    },
    {
    .iv = 31,
    .lvl = 27,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Drought
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_LAVA_PLUME, MOVE_SCORCHING_SANDS, MOVE_REST, MOVE_SOLAR_BEAM}
    },
    {
    .iv = 31,
    .lvl = 28,
    .nature = NATURE_HASTY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Intimidate
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAMETHROWER, MOVE_FEINT_ATTACK, MOVE_THUNDER_FANG, MOVE_SCORCHING_SANDS}
    }
};

static const struct TrainerMon sParty_SophiaBrutal[] = {//Leviathan 10, Brutal
    {
    .iv = 31,
    .lvl = 29,
    .nature = NATURE_NAIVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Torrent
    .species = SPECIES_DRIZZILE,
    .heldItem = ITEM_WACAN_BERRY,
    .moves = {MOVE_SCALD, MOVE_U_TURN, MOVE_MUD_SHOT, MOVE_AIR_SLASH}
    },
    {
    .iv = 31,
    .lvl = 29,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Strong Jaw
    .species = SPECIES_CROCONAW,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
    {
    .ivs = {31, 31, 31, 30, 30, 30},
    .lvl = 29,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Swift Swim
    .species = SPECIES_PALPITOAD,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_MUDDY_WATER, MOVE_MUD_SHOT, MOVE_HIDDEN_POWER, MOVE_RAIN_DANCE} //Hidden Power Flying
    },
    {
    .iv = 31,
    .lvl = 30,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Shell Armor
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_SPARKLING_ARIA, MOVE_FREEZE_DRY, MOVE_BODY_PRESS, MOVE_REST}
    },
    {
    .iv = 31,
    .lvl = 30,
    .nature = NATURE_JOLLY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Moxie
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_POWER_HERB,
    .moves = {MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_BULLDOZE, MOVE_BOUNCE}
    }
};

static const struct TrainerMon sParty_OdysseusBrutal[] = {//Leviathan 11, Battle starts with permanent Rain, Double Battle, Brutal
    {
    .iv = 31,
    .lvl = 33,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_HIDDEN, //Swift Swim
    .species = SPECIES_HUNTAIL, //Starts with aura +1 Attack
    .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_SLEEP_TALK}
    },
    {
    .iv = 31,
    .lvl = 33,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_FEMALE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_HIDDEN, //Swift Swim
    .species = SPECIES_GOREBYSS, //Starts with aura +1 Special Attack
    .moves = {MOVE_BRINE, MOVE_PSYCHIC, MOVE_ICY_WIND, MOVE_REST}
    }
};

static const struct TrainerMon sParty_JulieBrutal[] = {//Leviathan 12, Brutal
    {
    .iv = 31,
    .lvl = 34,
    .nature = NATURE_IMPISH,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Sturdy
    .species = SPECIES_RELICANTH,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_WATERFALL, MOVE_STEALTH_ROCK, MOVE_ROCK_SLIDE, MOVE_YAWN}
    },
    {
    .iv = 31,
    .lvl = 34,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Serene Grace
    .species = SPECIES_SWOOBAT,
    .heldItem = ITEM_SHARP_BEAK,
    .moves = {MOVE_NASTY_PLOT, MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_GIGA_DRAIN}
    },
    {
    .iv = 31,
    .lvl = 34,
    .nature = NATURE_JOLLY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Strong Jaw
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_BLACK_GLASSES,
    .moves = {MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_THUNDER_FANG, MOVE_FIRE_FANG}
    },
    {
    .iv = 31,
    .lvl = 34,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Effect Spore
    .species = SPECIES_SHIINOTIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_STRENGTH_SAP, MOVE_DAZZLING_GLEAM, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER}
    },
    {
    .iv = 31,
    .lvl = 34,
    .nature = NATURE_MILD,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Tough Claws
    .species = SPECIES_HEATMOR,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_CLAW, MOVE_THUNDER_PUNCH, MOVE_GIGA_DRAIN}
    },
    {
    .iv = 31,
    .lvl = 34,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Sheer Force
    .species = SPECIES_DRUDDIGON,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_DRAGON_CLAW, MOVE_REVENGE, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH}
    }
};

static const struct TrainerMon sParty_CamAndPamBrutal[] = {//Leviathan 13, Battle starts with permanent Hail, Double Battle, Brutal
    {
    .iv = 31,
    .lvl = 38,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Ice Scales
    .species = SPECIES_FROSMOTH,
    .heldItem = ITEM_CHARTI_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_BUG_BUZZ, MOVE_ROOST, MOVE_AURORA_VEIL}
    },
    {
    .iv = 31,
    .lvl = 38,
    .nature = NATURE_BOLD,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Competitive
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_WACAN_BERRY,
    .moves = {MOVE_SURF, MOVE_DAZZLING_GLEAM, MOVE_RECOVER, MOVE_MIRROR_COAT}
    },
    {
    .iv = 31,
    .lvl = 38,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Dry Skin
    .species = SPECIES_JYNX,
    .heldItem = ITEM_COLBUR_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_PSYCHIC, MOVE_LOVELY_KISS, MOVE_NASTY_PLOT}
    },
    {
    .iv = 31,
    .lvl = 38,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_HIDDEN, //Slush Rush
    .species = SPECIES_EMPOLEON,
    .heldItem = ITEM_CHOPLE_BERRY,
    .moves = {MOVE_SURF, MOVE_FLASH_CANNON, MOVE_GRASS_KNOT, MOVE_ROOST}
    }
};

static const struct TrainerMon sParty_Zone25LMiragesBrutal[] = {//Leviathan 14, Double Battle, Brutal. Note they can Mega Evolve both Gengar and Pinsir
    {
    .iv = 31,
    .lvl = 42,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Sheer Force
    .species = SPECIES_NIDOKING,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_ICE_BEAM}
    },
    {
    .iv = 31,
    .lvl = 42,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Disguise
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK}
    },
    {
    .iv = 31,
    .lvl = 42,
    .nature = NATURE_RASH,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_HIDDEN, //Protean
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_DARK_PULSE}
    },
    {
    .iv = 31,
    .lvl = 42,
    .nature = NATURE_NAIVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Iron Fist
    .species = SPECIES_ELECTIVIRE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_THUNDERBOLT, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH}
    },
    {
    .iv = 31,
    .lvl = 42,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Levitate, turns into Shadow Tag after Mega Evolving
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_GENGARITE,
    .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT, MOVE_AURA_SPHERE}
    },
    {
    .iv = 31,
    .lvl = 42,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Hyper Cutter, turns into Aerilate after Mega Evolving
    .species = SPECIES_PINSIR,
    .heldItem = ITEM_PINSIRITE,
    .moves = {MOVE_RETURN, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE, MOVE_HIGH_HORSEPOWER}
    }
};

static const struct TrainerMon sParty_Unused[] = {
    {
    .iv = 0,
    .lvl = 1,
    .species = SPECIES_BULBASAUR,
    }
};
