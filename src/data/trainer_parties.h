/**
 * Notes for documentation
 * 
 * Trainers are arranged in the order it is possible to battle them.
 * 
 * Some trainers are battled in different ways, be it aura boosts or tag battles or 2 on 1 battles.
 * These are included in the comments next to each trainer.
 * 
 * Some trainers have different parties on Default and Brutal.
 * You can CTRL+F for them in the document (just search for the word Default or Brutal)
 * Some bosses are optional on Default and are commented as such. However, on Brutal, all trainers are mandatory.
 * 
 * If a Pokemon does not have a specified parameter (for example the nature) then it is usually determined randomly.
 * Abilities are by default set to the first ability.
 * EVs are by default set to 0.
 * 
 * .iv determines the IVs of a given Pokemon. all IVs are set to the .iv value.
 * Some trainers have a .ivs value instead, which specifies their IVs in the order HP, Atk, Def, Spe, SpA, SpD. For Hidden Power purposes, this is commented next to their movesets.
 * On Brutal, all non-Leviathan trainers have +11 to their .iv value. So for example, if a Pokemon has .iv = 20, it actually has the max IVs of 31.
 * 
 * The trainer AI has been improved from vanilla Emerald, but it's not as smart as CFRU AI. */

static const struct TrainerMon sParty_Corey[] = {
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_SENTRET,
    },
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_RATTATA,
    }
};

static const struct TrainerMon sParty_Mariam[] = {
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_STARLY,
    },
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_AZURILL,
    }
};

static const struct TrainerMon sParty_Oscar[] = {
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_MAREEP,
    },
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_LILLIPUP,
    },
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_FLETCHLING,
    }
};

static const struct TrainerMon sParty_Harper[] = {
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_SKWOVET,
    },
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_PETILIL,
    },
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_NIDORAN_F,
    }
};

static const struct TrainerMon sParty_Dexter[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_PIDGEY,
    },
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BUNEARY,
    },
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_NIDORAN_M,
    },
};

static const struct TrainerMon sParty_Jeremiah[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_SCATTERBUG,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_BLIPBUG,
    }
};

static const struct TrainerMon sParty_Arthur[] = {
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_ROCKRUFF,
    }
};

static const struct TrainerMon sParty_Jemma[] = {
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_BIDOOF,
    },
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_BUDEW,
    }
};

static const struct TrainerMon sParty_Boris[] = {
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_SLAKOTH,
    },
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_PACHIRISU,
    .ability = ABILITY_SLOT_2, //Volt Absorb
    }
};

static const struct TrainerMon sParty_Annabelle[] = {
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_PIDOVE,
    },
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_COTTONEE,
    },
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_MANKEY,
    },
};

static const struct TrainerMon sParty_Remi[] = {//Leviathan 1, Default
    {
    .iv = 31,
    .lvl = 11,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Huge Power
    .species = SPECIES_MARILL,
    .moves = {MOVE_AQUA_JET, MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_TAIL_WHIP}
    }
};

static const struct TrainerMon sParty_Ralph[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_BONSLY,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_FOONGUS,
    }
};

static const struct TrainerMon sParty_Patrick[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_WEEDLE,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_SEWADDLE,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_VENIPEDE,
    }
};

static const struct TrainerMon sParty_ChloeAndKaya[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_SWIRLIX,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_SPRITZEE,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_FEEBAS,
    }
};

static const struct TrainerMon sParty_Lucia[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_PICHU,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_HOUNDOUR,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_HATENNA,
    }
};

static const struct TrainerMon sParty_Fred[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_PURRLOIN,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_EMOLGA,
    }
};

static const struct TrainerMon sParty_AnneAndJune[] = {
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_PANCHAM,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_CRABRAWLER,
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_GOTHITA,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_SOLOSIS,
    },
};

static const struct TrainerMon sParty_Rebecca[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_ZIGZAGOON_GALARIAN,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_WOOPER,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_SNUBBULL,
    }
};

static const struct TrainerMon sParty_Caitlyn[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_SLOWPOKE,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_LITLEO,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_WOOLOO,
    }
};

static const struct TrainerMon sParty_Ryan[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_SHINX,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_BUIZEL,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_PONYTA_GALARIAN,
    }
};

static const struct TrainerMon sParty_Declan[] = {//Leviathan 2, Default
    {
    .ivs = {31, 31, 30, 30, 31, 30},
    .lvl = 15,
    .nature = NATURE_BOLD,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Shield Dust
    .species = SPECIES_DUSTOX, //Starts with aura +1 Defense
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_STRUGGLE_BUG, MOVE_POISON_POWDER, MOVE_CONFUSION, MOVE_HIDDEN_POWER} //Hidden Power Rock
    }
};

static const struct TrainerMon sParty_LelouchExp1[] = {
    {
    .iv = 0,
    .lvl = 10,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 10,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 10,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 10,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Frank[] = {
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_COMBEE,
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_POLIWAG,
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_ROOKIDEE,
    }
};

static const struct TrainerMon sParty_Melanie[] = {
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_DEERLING,
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_CUTIEFLY,
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_COMFEY,
    }
};

static const struct TrainerMon sParty_Constance[] = {
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_DEWPIDER,
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_FLABEBE,
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_HOPPIP,
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_MILCERY,
    }
};

static const struct TrainerMon sParty_Ronan[] = {
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_CORPHISH,
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_AXEW,
    .moves = {MOVE_SCRATCH, MOVE_LEER, MOVE_ASSURANCE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Rita[] = {//Leviathan 3, optional, Default
    {
    .iv = 31,
    .lvl = 15,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Poison Point
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MEGA_DRAIN, MOVE_STUN_SPORE, MOVE_GROWTH, MOVE_LEECH_SEED}
    },
    {
    .iv = 31,
    .lvl = 15,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Cloud Nine
    .species = SPECIES_PSYDUCK,
    .moves = {MOVE_WATER_PULSE, MOVE_CONFUSION, MOVE_TAIL_WHIP, MOVE_FURY_SWIPES}
    },
    {
    .iv = 31,
    .lvl = 16,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Adamant
    .species = SPECIES_HERDIER,
    .moves = {MOVE_RETURN, MOVE_BITE, MOVE_HOWL, MOVE_LEER}
    }
};

static const struct TrainerMon sParty_Millie[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_STUFFUL,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_DRIFLOON,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_EKANS,
    },
};

static const struct TrainerMon sParty_Paige[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_SKIDDO,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_ORICORIO,
    }
};

static const struct TrainerMon sParty_Jamal[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_APPLIN,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_VOLBEAT,
    }
};

static const struct TrainerMon sParty_Emiliano[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_ONIX,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_BELDUM,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Marcus[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_VULLABY,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Jayden[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_ARON,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_PHANPY,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_THROH,
    }
};

static const struct TrainerMon sParty_Anita[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_PAWNIARD,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_JOLTIK,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Neil[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_SIZZLIPEDE,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_WOOBAT,
    }
};

static const struct TrainerMon sParty_Zone8DMirage[] = {//Leviathan 4, fought in a 2v1 tag battle with Zone8DWally, Default
    {
    .iv = 31,
    .lvl = 18,
    .nature = NATURE_JOLLY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Intimidate
    .species = SPECIES_STARAVIA, //Starts with aura +1 Speed
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RETURN, MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_ENDEAVOR}
    },
    {
    .iv = 31,
    .lvl = 18,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Intimidate
    .species = SPECIES_MAWILE, //Starts with aura +1 Attack
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_METAL_CLAW, MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_FIRE_FANG}
    }
};

static const struct TrainerMon sParty_Zone8DWally[] = {//Tag Partner
    {
    .iv = 20,
    .lvl = 18,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SLOT_1, //Gale Wings
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_FLETCHINDER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_EMBER, MOVE_GROWL}
    },
    {
    .iv = 20,
    .lvl = 18,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Huge Power
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_AQUA_JET, MOVE_HELPING_HAND, MOVE_TAIL_WHIP, MOVE_COVET}
    },
    {
    .iv = 20,
    .lvl = 18,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Trace
    .species = SPECIES_RALTS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_CONFUSION, MOVE_DRAINING_KISS, MOVE_GROWL, MOVE_WILL_O_WISP}
    }
};

//You fight Ari, Bertha, Cassandra, Dominic, and Erica in a row without healing
static const struct TrainerMon sParty_Ari[] = {
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_ODDISH,
    },
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_REMORAID,
    }
};

static const struct TrainerMon sParty_Bertha[] = {
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_PIKIPEK,
    },
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_BOUNSWEET,
    },
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_LITTEN,
    }
};

static const struct TrainerMon sParty_Cassandra[] = {
    {
    .iv = 10,
    .lvl = 18,
    .species = SPECIES_AIPOM,
    },
    {
    .iv = 10,
    .lvl = 18,
    .species = SPECIES_GROOKEY,
    },
    {
    .iv = 10,
    .lvl = 18,
    .species = SPECIES_CUFANT,
    },
};

static const struct TrainerMon sParty_Dominic[] = {
    {
    .iv = 10,
    .lvl = 19,
    .species = SPECIES_CROAGUNK,
    },
    {
    .iv = 10,
    .lvl = 19,
    .species = SPECIES_ORANGURU,
    }
};

static const struct TrainerMon sParty_Erica[] = {
    {
    .iv = 10,
    .lvl = 19,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = 10,
    .lvl = 19,
    .species = SPECIES_BAGON,
    },
    {
    .iv = 10,
    .lvl = 19,
    .species = SPECIES_PASSIMIAN,
    }
};

static const struct TrainerMon sParty_Pearlie[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_GRUBBIN,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SCRAGGY,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_FENNEKIN,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_KOMALA,
    }
};

static const struct TrainerMon sParty_Kyle[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SANDILE,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_TYROGUE,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_CACNEA,
    }
};

static const struct TrainerMon sParty_Alana[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SILICOBRA,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_CLEFFA,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_MAGBY,
    }
};

static const struct TrainerMon sParty_Dewey[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_HELIOPTILE,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_HIPPOPOTAS,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_STANTLER,
    }
};

static const struct TrainerMon sParty_Conrad[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_DARUMAKA,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_NATU,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_CHEWTLE,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_ELEKID,
    }
};

static const struct TrainerMon sParty_Adamina[] = {//Leviathan 5, Battle starts with permanent Sand, Default
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_SLOT_1, //Sturdy
    .gender = TRAINER_MON_MALE,
    .species = SPECIES_DWEBBLE,
    .moves = {MOVE_ROCK_BLAST, MOVE_BUG_BITE, MOVE_FEINT_ATTACK, MOVE_STEALTH_ROCK}
    },
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_MODEST,
    .ability = ABILITY_SLOT_2, //Magic Guard
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_BRAIXEN,
    .moves = {MOVE_INCINERATE, MOVE_PSYBEAM, MOVE_FIRE_SPIN, MOVE_FLAME_CHARGE}
    },
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_CAREFUL,
    .ability = ABILITY_SLOT_2, //Mold Breaker
    .gender = TRAINER_MON_MALE,
    .species = SPECIES_SAWK,
    .moves = {MOVE_LOW_SWEEP, MOVE_COUNTER, MOVE_POWER_UP_PUNCH, MOVE_ROCK_TOMB}
    },
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SLOT_2, //Guts
    .gender = TRAINER_MON_MALE,
    .species = SPECIES_LUXIO,
    .moves = {MOVE_SPARK, MOVE_BITE, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK}
    },
    {
    .iv = 31,
    .lvl = 22,
    .nature = NATURE_JOLLY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Fur Coat
    .species = SPECIES_FURRET,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RETALIATE, MOVE_COVET, MOVE_COIL, MOVE_THIEF}
    }
};

static const struct TrainerMon sParty_Jeanette[] = {
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_IMPIDIMP,
    },
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_ROWLET,
    },
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_LARVITAR,
    }
};

static const struct TrainerMon sParty_Regina[] = {
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_MUNNA,
    },
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_LITWICK,
    },
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_MISDREAVUS,
    }
};

static const struct TrainerMon sParty_EmmaAndLeo[] = {
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_PHANTUMP,
    },
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_PUMPKABOO,
    },
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_NIDORINO,
    },
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_NIDORINA,
    }
};

static const struct TrainerMon sParty_Joel[] = {
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_MORELULL,
    },
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_NOIBAT,
    },
    {
    .iv = 10,
    .lvl = 21,
    .species = SPECIES_ABRA,
    }
};

static const struct TrainerMon sParty_Jake[] = {//Leviathan 6, Default
    {
    .iv = 31,
    .lvl = 24,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Scrappy
    .species = SPECIES_FARFETCHD_GALARIAN, //Starts with aura +2 Speed
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_BRICK_BREAK, MOVE_KNOCK_OFF, MOVE_RETURN, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_Dolores[] = {
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_TORCHIC,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_CHESPIN,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_SNIVY,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_EEVEE,
    }
};

static const struct TrainerMon sParty_Essence[] = {
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_MIENFOO,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_MURKROW,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_FLAAFFY,
    }
};

static const struct TrainerMon sParty_Randolph[] = {
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_BLITZLE,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_ARROKUDA,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_HAWLUCHA,
    }
};

static const struct TrainerMon sParty_Hilda[] = {
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_DUCKLETT,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_MUDBRAY,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_PONYTA,
    }
};

static const struct TrainerMon sParty_Genie[] = {
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_DODUO,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_TYMPOLE,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_CLEFAIRY,
    }
};

static const struct TrainerMon sParty_Kinley[] = {
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_TRUMBEAK,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_JanAndErin[] = {
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_FURFROU,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_FURFROU,
    }
};

static const struct TrainerMon sParty_AmberAndKim[] = {
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_ROGGENROLA,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_ROLYCOLY,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_SNIVY,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_CHIKORITA,
    }
};

static const struct TrainerMon sParty_KaizenBulkUp[] = {//Leviathan 7, optional, Default
    {
    .iv = 31,
    .lvl = 26,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Guts
    .species = SPECIES_TIMBURR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BULK_UP, MOVE_WAKE_UP_SLAP, MOVE_KNOCK_OFF, MOVE_ROCK_TOMB}
    },
    {
    .iv = 31,
    .lvl = 26,
    .nature = NATURE_CAREFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Overgrow
    .species = SPECIES_QUILLADIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BULK_UP, MOVE_SEED_BOMB, MOVE_LEECH_SEED, MOVE_SPIKES}
    },
    {
    .iv = 31,
    .lvl = 26,
    .nature = NATURE_JOLLY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Vital Spirit
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BULK_UP, MOVE_SLASH, MOVE_ENCORE, MOVE_FURY_SWIPES}
    }
};

static const struct TrainerMon sParty_KaizenCalmMind[] = {//Leviathan 8, optional, Default
    {
    .iv = 31,
    .lvl = 26,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Illusion
    .species = SPECIES_ZORUA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CALM_MIND, MOVE_SNARL, MOVE_FOUL_PLAY, MOVE_TAUNT}
    },
    {
    .iv = 31,
    .lvl = 26,
    .nature = NATURE_HASTY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Lightning Rod
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CALM_MIND, MOVE_ELECTRO_BALL, MOVE_NUZZLE, MOVE_DOUBLE_KICK}
    },
    {
    .ivs = {31, 31, 30, 30, 30, 30},
    .lvl = 26,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Magic Guard
    .species = SPECIES_KADABRA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CALM_MIND, MOVE_PSYBEAM, MOVE_HIDDEN_POWER, MOVE_ENCORE} //Hidden Power Fighting
    }
};

static const struct TrainerMon sParty_Bart[] = {
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_GIBLE,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_TEPIG,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_DEDENNE,
    }
};

static const struct TrainerMon sParty_Lola[] = {
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_ESPURR,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_TOXEL,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_GRIMER,
    }
};

static const struct TrainerMon sParty_Todd[] = {
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_GEODUDE_ALOLAN,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_FERROSEED,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_DRILBUR,
    }
};

static const struct TrainerMon sParty_Charlie[] = {
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_WISHIWASHI,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_MINCCINO,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_KLINK,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_YAMPER,
    }
};

static const struct TrainerMon sParty_Zone14CMirage[] = {//Leviathan 9, Double Battle, Default
    {
    .iv = 31,
    .lvl = 27,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Drought
    .species = SPECIES_VULPIX,
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_INCINERATE, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY}
    },
    {
    .iv = 31,
    .lvl = 27,
    .nature = NATURE_RASH,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Chlorophyll
    .species = SPECIES_GLOOM,
    .heldItem = ITEM_MIRACLE_SEED,
    .moves = {MOVE_MEGA_DRAIN, MOVE_VENOSHOCK, MOVE_MOONLIGHT, MOVE_GROWTH}
    },
    {
    .ivs = {31, 31, 31, 30, 31, 31},
    .lvl = 27,
    .nature = NATURE_NAIVE,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Solar Power
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_MAGNET,
    .moves = {MOVE_SHOCK_WAVE, MOVE_HIDDEN_POWER, MOVE_BULLDOZE, MOVE_THUNDER_WAVE} //Hidden Power Ice
    },
    {
    .iv = 31,
    .lvl = 27,
    .nature = NATURE_BOLD,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Telepathy
    .species = SPECIES_MUSHARNA,
    .heldItem = ITEM_TWISTED_SPOON,
    .moves = {MOVE_EXTRASENSORY, MOVE_CALM_MIND, MOVE_MOONLIGHT, MOVE_YAWN}
    },
    {
    .iv = 31,
    .lvl = 28,
    .nature = NATURE_HASTY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Unnerve
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAME_BURST, MOVE_FEINT_ATTACK, MOVE_THUNDER_FANG, MOVE_SNARL}
    }
};

static const struct TrainerMon sParty_LelouchExp2[] = {
    {
    .iv = 0,
    .lvl = 20,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 20,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 20,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 20,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

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
    .species = SPECIES_ARCTOVISH,
    }
};

static const struct TrainerMon sParty_Homer[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_QWILFISH,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_EISCUE,
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
    .lvl = 26,
    .species = SPECIES_PIPLUP,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_SOBBLE,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_TOTODILE,
    }
};

static const struct TrainerMon sParty_Rafael[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_MUDKIP,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_FROAKIE,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_SQUIRTLE,
    }
};

static const struct TrainerMon sParty_Otis[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_ALOMOMOLA,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_BRUXISH,
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
    .species = SPECIES_CLOBBOPUS,
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
    .species = SPECIES_PYUKUMUKU,
    }
};

static const struct TrainerMon sParty_Russell[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_PINCURCHIN,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_POLIWHIRL,
    }
};

static const struct TrainerMon sParty_Sophia[] = {//Leviathan 10, Default
    {
    .iv = 31,
    .lvl = 29,
    .nature = NATURE_NAIVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Torrent
    .species = SPECIES_DRIZZILE,
    .heldItem = ITEM_GROUND_GEM,
    .moves = {MOVE_SCALD, MOVE_U_TURN, MOVE_MUD_SHOT, MOVE_AIR_SLASH}
    },
    {
    .iv = 31,
    .lvl = 29,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Strong Jaw
    .species = SPECIES_CROCONAW,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
    {
    .ivs = {31, 31, 31, 30, 30, 30},
    .lvl = 29,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Swift Swim
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
    .species = SPECIES_BASCULIN,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_BASCULIN_BLUE_STRIPED,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_MANTYKE,
    }
};

static const struct TrainerMon sParty_Kenneth[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_TYNAMO,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_OSHAWOTT,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_POPPLIO,
    }
};

static const struct TrainerMon sParty_Jay[] = {//Zone 18 Cool Room
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_DRATINI,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_DREEPY,
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
    .species = SPECIES_BAYLEEF,
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
    .species = SPECIES_EXEGGCUTE,
    },
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_PRINPLUP,
    }
};

static const struct TrainerMon sParty_Kari[] = {//Zone 18 Offense Room
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_GASTLY,
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
    .species = SPECIES_MAGNEMITE,
    .moves = {MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON, MOVE_ELECTRO_BALL, MOVE_METAL_SOUND}
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_MEOWTH_GALARIAN,
    .moves = {MOVE_U_TURN, MOVE_SLASH, MOVE_SNATCH, MOVE_FURY_SWIPES}
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
    .species = SPECIES_TENTACOOL,
    .moves = {MOVE_TOXIC_SPIKES, MOVE_BRINE, MOVE_POISON_JAB, MOVE_BARRIER}
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
    .species = SPECIES_GRIMER_ALOLAN,
    .moves = {MOVE_MINIMIZE, MOVE_KNOCK_OFF, MOVE_PURSUIT, MOVE_POWER_UP_PUNCH}
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
    .species = SPECIES_TORRACAT,
    .moves = {MOVE_BULK_UP, MOVE_REVENGE, MOVE_FAKE_OUT, MOVE_FLAME_CHARGE}
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
    .species = SPECIES_ABSOL,
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_STONJOURNER,
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

static const struct TrainerMon sParty_Pam[] = {//Zone 18 Support Room, Double Battle
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
    .species = SPECIES_GROWLITHE,
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
    .ability = ABILITY_SLOT_1, //Protean
    }
};

//You fight each of these pirates in the order 4, 3, 2, 1 in a row without healing
static const struct TrainerMon sParty_Pirate1[] = {//Default
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_BARRASKEWDA,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_PERRSERKER,
    }
};

static const struct TrainerMon sParty_Pirate2[] = {//Default
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_CRABOMINABLE,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_KINGLER,
    }
};

static const struct TrainerMon sParty_Pirate3[] = {//Default
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_DHELMISE,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_DREDNAW,
    }
};

static const struct TrainerMon sParty_Pirate4[] = {//Default
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_OCTILLERY,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_CHATOT,
    }
};

static const struct TrainerMon sParty_Odysseus[] = {//Leviathan 11, optional, Default
    {
    .iv = 31,
    .lvl = 34,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SLOT_1, //Speed Boost
    .species = SPECIES_SHARPEDO, //Starts with aura +2 Attack
    .moves = {MOVE_WATERFALL, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS}
    },
};

static const struct TrainerMon sParty_Julie[] = {//Leviathan 12, Default
    {
    .iv = 31,
    .lvl = 32,
    .nature = NATURE_IMPISH,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Sturdy
    .species = SPECIES_RELICANTH,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_WATERFALL, MOVE_STEALTH_ROCK, MOVE_ROCK_TOMB, MOVE_YAWN}
    },
    {
    .iv = 31,
    .lvl = 32,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Serene Grace
    .species = SPECIES_SWOOBAT,
    .heldItem = ITEM_SHARP_BEAK,
    .moves = {MOVE_NASTY_PLOT, MOVE_AIR_SLASH, MOVE_PSYBEAM, MOVE_GIGA_DRAIN}
    },
    {
    .iv = 31,
    .lvl = 32,
    .nature = NATURE_JOLLY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Strong Jaw
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_BLACK_GLASSES,
    .moves = {MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_THUNDER_FANG, MOVE_FIRE_FANG}
    },
    {
    .iv = 31,
    .lvl = 32,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Effect Spore
    .species = SPECIES_SHIINOTIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_STRENGTH_SAP, MOVE_DAZZLING_GLEAM, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER}
    },
    {
    .iv = 31,
    .lvl = 32,
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

static const struct TrainerMon sParty_LelouchExp3[] = {
    {
    .iv = 0,
    .lvl = 30,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 30,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 30,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 30,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_LelouchEVHP[] = {
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_NIDOQUEEN,
    .moves = {MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_NIDOQUEEN,
    .moves = {MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_NIDOQUEEN,
    .moves = {MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_NIDOQUEEN,
    .moves = {MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_LelouchEVAttack[] = {
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_NIDOKING,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_NIDOKING,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_NIDOKING,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_NIDOKING,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_LelouchEVDefense[] = {
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_POLIWRATH,
    .moves = {MOVE_MIND_READER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_POLIWRATH,
    .moves = {MOVE_MIND_READER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_POLIWRATH,
    .moves = {MOVE_MIND_READER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_POLIWRATH,
    .moves = {MOVE_MIND_READER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_LelouchEVSpecialAttack[] = {
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_BEAUTIFLY,
    .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_BEAUTIFLY,
    .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_BEAUTIFLY,
    .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_BEAUTIFLY,
    .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_LelouchEVSpecialDefense[] = {
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_DUSTOX,
    .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_DUSTOX,
    .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_DUSTOX,
    .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_DUSTOX,
    .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_LelouchEVSpeed[] = {
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_RAICHU,
    .moves = {MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_RAICHU,
    .moves = {MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_RAICHU,
    .moves = {MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 1,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1,
    .species = SPECIES_RAICHU,
    .moves = {MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Howard[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_HONEDGE,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_WIMPOD,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_LARVESTA,
    }
};

static const struct TrainerMon sParty_Eloise[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_SNORUNT,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_CUBONE,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_KOFFING,
    }
};

static const struct TrainerMon sParty_AllyAndEmmy[] = {
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_CLAMPERL,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_SHELLDER,
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
    .species = SPECIES_INKAY,
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
    }
};

static const struct TrainerMon sParty_Bernard[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_SLOWPOKE_GALARIAN,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_BERGMITE,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_SHELLOS,
    }
};

static const struct TrainerMon sParty_Ellie[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_SKRELP,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_SWINUB,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_INDEEDEE,
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
    .species = SPECIES_SALANDIT,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_TORKOAL,
    }
};

static const struct TrainerMon sParty_Cody[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_TEDDIURSA,
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
    .species = SPECIES_KAKUNA,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_SILCOON,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_CASCOON,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_SPEWPA,
    }
};

static const struct TrainerMon sParty_Cornelius[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_CUBCHOO,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_FRILLISH,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_DOTTLER,
    }
};

static const struct TrainerMon sParty_InezAndEmma[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_CHARMANDER,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_CYNDAQUIL,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_CHIMCHAR,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_SCORBUNNY,
    }
};

static const struct TrainerMon sParty_Helen[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_SNOVER,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_SKIPLOOM,
    }
};

static const struct TrainerMon sParty_Wesley[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_DURANT,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_TURTONATOR,
    }
};

static const struct TrainerMon sParty_Alfredo[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_PINSIR,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_HERACROSS,
    }
};

static const struct TrainerMon sParty_Ian[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_MUNCHLAX,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_SHUPPET,
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
    .species = SPECIES_DARUMAKA_GALARIAN,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_BINACLE,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_MORPEKO,
    }
};

static const struct TrainerMon sParty_CamAndPam[] = {//Leviathan 13, Double Battle, Default
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
    .moves = {MOVE_SURF, MOVE_ICY_WIND, MOVE_RECOVER, MOVE_MIRROR_COAT}
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
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Water Absorb
    .species = SPECIES_QUAGSIRE,
    .moves = {MOVE_WATERFALL, MOVE_MUD_BOMB, MOVE_BRICK_BREAK, MOVE_YAWN}
    }
};

static const struct TrainerMon sParty_Edgardo[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_HAPPINY,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_TOGEPI,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_TURTWIG,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_BULBASAUR,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_Jean[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_YANMA,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_KARRABLAST,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_SHELMET,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_PINECO,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_SKORUPI,
    }
};

static const struct TrainerMon sParty_Rose[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_GOOMY,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_STUNFISK_GALARIAN,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_WARTORTLE,
    }
};

static const struct TrainerMon sParty_Jennifer[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_HAUNTER,
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
    .species = SPECIES_HATTREM,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_TOGEDEMARU,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_SERVINE,
    }
};

static const struct TrainerMon sParty_Kerry[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_RUFFLET,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_FLOETTE,
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
    .species = SPECIES_TANGELA,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_CRYOGONAL,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_SCYTHER,
    }
};

static const struct TrainerMon sParty_Christi[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_FALINKS,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_GURDURR,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_COMBUSKEN,
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
    .species = SPECIES_GLIGAR,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_BOLDORE,
    }
};

static const struct TrainerMon sParty_Haywood[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_RIOLU,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_MONFERNO,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_DEWOTT,
    }
};

static const struct TrainerMon sParty_Monroe[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_TRAPINCH,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_GRAVELER_ALOLAN,
    }
};

static const struct TrainerMon sParty_David[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_STEENEE,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_TRANQUILL,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_MORGREM,
    }
};

static const struct TrainerMon sParty_Dominik[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_CARKOL,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_CHARMELEON,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_QUILAVA,
    }
};

static const struct TrainerMon sParty_Douglas[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_JANGMO_O,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_ELECTABUZZ,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_Nadine[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_LINOONE_GALARIAN,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_DARTRIX,
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
    .lvl = 38,
    .species = SPECIES_BALTOY,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_SIGILYPH,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_DUOSION,
    }
};

static const struct TrainerMon sParty_Sheldon[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_ELGYEM,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_GOTHORITA,
    }
};

static const struct TrainerMon sParty_Zone25LMirages[] = {//Leviathan 14, Double Battle, Default
    {
    .ivs = {31, 31, 31, 31, 30, 31},
    .lvl = 43,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Unburden
    .species = SPECIES_ACCELGOR,
    .heldItem = ITEM_BUG_GEM,
    .moves = {MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER} // Hidden Power Electric
    },
    {
    .iv = 31,
    .lvl = 43,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Disguise
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_HONE_CLAWS, MOVE_SHADOW_SNEAK}
    },
    {
    .iv = 31,
    .lvl = 43,
    .nature = NATURE_RASH,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Protean
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE, MOVE_EXTRASENSORY}
    },
    {
    .iv = 31,
    .lvl = 43,
    .nature = NATURE_NAIVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Vital Spirit
    .species = SPECIES_ELECTIVIRE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDERBOLT, MOVE_HAMMER_ARM, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH}
    },
    {
    .ivs = {31, 31, 30, 30, 30, 30},
    .lvl = 43,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Levitate
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT, MOVE_HIDDEN_POWER} // Hidden Power Fighting
    },
    {
    .iv = 31,
    .lvl = 43,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Scrappy
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_HAMMER_ARM, MOVE_FAKE_OUT}
    }
};

static const struct TrainerMon sParty_LelouchExp4[] = {
    {
    .iv = 0,
    .lvl = 40,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 40,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 40,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 40,
    .nature = NATURE_BASHFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_ENTRAINMENT, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_RemiBrutal[] = {//Leviathan 1, Brutal
    {
    .iv = 31,
    .lvl = 11,
    .nature = NATURE_BRAVE,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Thick Fat
    .species = SPECIES_SPHEAL,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ICE_BALL, MOVE_WATER_GUN, MOVE_ROLLOUT, MOVE_DEFENSE_CURL}
    },
    {
    .iv = 31,
    .lvl = 11,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Huge Power
    .species = SPECIES_MARILL,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_AQUA_JET, MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_TAIL_WHIP}
    }
};

static const struct TrainerMon sParty_DeclanBrutal[] = {//Leviathan 2, Double Battle, Brutal
    {
    .ivs = {31, 31, 30, 30, 31, 30},
    .lvl = 15,
    .nature = NATURE_BOLD,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Shield Dust
    .species = SPECIES_DUSTOX, //Starts with aura +1 Defense
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_STRUGGLE_BUG, MOVE_POISON_POWDER, MOVE_CONFUSION, MOVE_HIDDEN_POWER} //Hidden Power Rock
    },
    {
    .iv = 31,
    .lvl = 15,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Berserk
    .species = SPECIES_BEAUTIFLY, //Starts with aura +1 Defense
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SILVER_WIND, MOVE_GUST, MOVE_ABSORB, MOVE_STUN_SPORE}
    }
};

static const struct TrainerMon sParty_RitaBrutal[] = {//Leviathan 3, Brutal
    {
    .iv = 31,
    .lvl = 16,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Poison Point
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_MEGA_DRAIN, MOVE_STUN_SPORE, MOVE_GROWTH, MOVE_LEECH_SEED}
    },
    {
    .iv = 31,
    .lvl = 16,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Cloud Nine
    .species = SPECIES_PSYDUCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_CONFUSION, MOVE_TAIL_WHIP, MOVE_FURY_SWIPES}
    },
    {
    .iv = 31,
    .lvl = 16,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Adamant
    .species = SPECIES_HERDIER,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RETURN, MOVE_BITE, MOVE_HOWL, MOVE_LEER}
    }
};

static const struct TrainerMon sParty_Zone8DMirageBrutal[] = {//Leviathan 4, fought in a 2v1 tag battle with Zone8DWally, Brutal
    {
    .iv = 31,
    .lvl = 18,
    .nature = NATURE_JOLLY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Intimidate
    .species = SPECIES_STARAVIA, //Starts with aura +1 all stats
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RETURN, MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_ENDEAVOR}
    },
    {
    .iv = 31,
    .lvl = 18,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Intimidate
    .species = SPECIES_MAWILE, //Starts with aura +1 all stats
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_METAL_CLAW, MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_FIRE_FANG}
    }
};

static const struct TrainerMon sParty_AdaminaBrutal[] = {//Leviathan 5, Battle starts with permanent Sand, Brutal
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_SLOT_1, //Sturdy
    .gender = TRAINER_MON_MALE,
    .species = SPECIES_DWEBBLE,
    .moves = {MOVE_ROCK_BLAST, MOVE_BUG_BITE, MOVE_FEINT_ATTACK, MOVE_STEALTH_ROCK}
    },
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_MODEST,
    .ability = ABILITY_SLOT_2, //Magic Guard
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_BRAIXEN,
    .moves = {MOVE_INCINERATE, MOVE_PSYBEAM, MOVE_FIRE_SPIN, MOVE_SCORCHING_SANDS}
    },
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_CAREFUL,
    .ability = ABILITY_SLOT_2, //Mold Breaker
    .gender = TRAINER_MON_MALE,
    .species = SPECIES_SAWK,
    .moves = {MOVE_LOW_SWEEP, MOVE_COUNTER, MOVE_POWER_UP_PUNCH, MOVE_ROCK_TOMB}
    },
    {
    .iv = 31,
    .lvl = 20,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SLOT_2, //Guts
    .gender = TRAINER_MON_MALE,
    .species = SPECIES_LUXIO,
    .moves = {MOVE_SPARK, MOVE_BITE, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK}
    },
    {
    .iv = 31,
    .lvl = 22,
    .nature = NATURE_TIMID,
    .ability = ABILITY_SLOT_1, //Cursed Body
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_FROSLASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_OMINOUS_WIND, MOVE_ICY_WIND, MOVE_DRAINING_KISS, MOVE_WILL_O_WISP}
    },
    {
    .iv = 31,
    .lvl = 22,
    .nature = NATURE_JOLLY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Fur Coat
    .species = SPECIES_FURRET,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RETALIATE, MOVE_COVET, MOVE_COIL, MOVE_THIEF}
    }
};

static const struct TrainerMon sParty_JakeBrutal[] = {//Leviathan 6, Brutal
    {
    .iv = 31,
    .lvl = 24,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Scrappy
    .species = SPECIES_FARFETCHD_GALARIAN, //Starts with aura +2 all stats
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_BRICK_BREAK, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_KaizenBulkUpBrutal[] = {//Leviathan 7, Brutal
    {
    .iv = 31,
    .lvl = 26,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Guts
    .species = SPECIES_TIMBURR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BULK_UP, MOVE_WAKE_UP_SLAP, MOVE_KNOCK_OFF, MOVE_ROCK_TOMB}
    },
    {
    .iv = 31,
    .lvl = 26,
    .nature = NATURE_CAREFUL,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Overgrow
    .species = SPECIES_QUILLADIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BULK_UP, MOVE_SEED_BOMB, MOVE_LEECH_SEED, MOVE_SPIKES}
    },
    {
    .iv = 31,
    .lvl = 26,
    .nature = NATURE_JOLLY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Vital Spirit
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BULK_UP, MOVE_SLASH, MOVE_ENCORE, MOVE_FURY_SWIPES}
    },
    {
    .iv = 31,
    .lvl = 26,
    .nature = NATURE_BRAVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Strong Jaw
    .species = SPECIES_GRANBULL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BULK_UP, MOVE_COVET, MOVE_CRUNCH, MOVE_FIRE_FANG}
    }
};

static const struct TrainerMon sParty_KaizenCalmMindBrutal[] = {//Leviathan 8, Brutal
    {
    .iv = 31,
    .lvl = 26,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Illusion
    .species = SPECIES_ZORUA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CALM_MIND, MOVE_SNARL, MOVE_FOUL_PLAY, MOVE_TAUNT}
    },
    {
    .iv = 31,
    .lvl = 26,
    .nature = NATURE_HASTY,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Lightning Rod
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CALM_MIND, MOVE_ELECTRO_BALL, MOVE_NUZZLE, MOVE_DOUBLE_KICK}
    },
    {
    .ivs = {31, 31, 30, 30, 30, 30},
    .lvl = 26,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Magic Guard
    .species = SPECIES_KADABRA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CALM_MIND, MOVE_PSYBEAM, MOVE_HIDDEN_POWER, MOVE_ENCORE} //Hidden Power Fighting
    },
    {
    .ivs = {31, 31, 31, 31, 30, 30},
    .lvl = 26,
    .nature = NATURE_RASH,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Compound Eyes
    .species = SPECIES_VIVILLON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CALM_MIND, MOVE_AIR_CUTTER, MOVE_SLEEP_POWDER, MOVE_HIDDEN_POWER} //Hidden Power Ground
    }
};

static const struct TrainerMon sParty_Zone14CMirageBrutal[] = {//Leviathan 9, Double Battle, Brutal
    {
    .iv = 31,
    .lvl = 27,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Drought
    .species = SPECIES_VULPIX,
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_INCINERATE, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY}
    },
    {
    .iv = 31,
    .lvl = 27,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Chlorophyll
    .species = SPECIES_GLOOM,
    .heldItem = ITEM_MIRACLE_SEED,
    .moves = {MOVE_MEGA_DRAIN, MOVE_VENOSHOCK, MOVE_MOONLIGHT, MOVE_GROWTH}
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
    .ivs = {31, 31, 30, 30, 30, 30},
    .lvl = 27,
    .nature = NATURE_BOLD,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Telepathy
    .species = SPECIES_MUSHARNA,
    .heldItem = ITEM_TWISTED_SPOON,
    .moves = {MOVE_EXTRASENSORY, MOVE_CALM_MIND, MOVE_MOONLIGHT, MOVE_HIDDEN_POWER} //Hidden Power Fighting
    },
    {
    .ivs = {31, 31, 31, 31, 30, 31},
    .lvl = 27,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Drought
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_LAVA_PLUME, MOVE_SCORCHING_SANDS, MOVE_REST, MOVE_HIDDEN_POWER} //Hidden Power Electric
    },
    {
    .iv = 31,
    .lvl = 28,
    .nature = NATURE_HASTY,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Unnerve
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
    .ability = ABILITY_SLOT_2, //Torrent
    .species = SPECIES_DRIZZILE,
    .heldItem = ITEM_GROUND_GEM,
    .moves = {MOVE_SCALD, MOVE_U_TURN, MOVE_MUD_SHOT, MOVE_AIR_SLASH}
    },
    {
    .iv = 31,
    .lvl = 29,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Strong Jaw
    .species = SPECIES_CROCONAW,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
    {
    .ivs = {31, 31, 31, 30, 30, 30},
    .lvl = 29,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Swift Swim
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
    .ability = ABILITY_SLOT_2, //Moxie
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_POWER_HERB,
    .moves = {MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_BULLDOZE, MOVE_BOUNCE}
    }
};

//You fight each of these pirates in the order 4, 3, 2, 1 in a row without healing
static const struct TrainerMon sParty_Pirate1Brutal[] = {//Brutal
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_BARRASKEWDA,
    .moves = {MOVE_FLIP_TURN, MOVE_THROAT_CHOP, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG}
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_PERRSERKER,
    .moves = {MOVE_IRON_HEAD, MOVE_THROAT_CHOP, MOVE_COVET, MOVE_CURSE}
    }
};

static const struct TrainerMon sParty_Pirate2Brutal[] = {//Brutal
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_CRABOMINABLE,
    .moves = {MOVE_ICE_HAMMER, MOVE_MACH_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ZEN_HEADBUTT}
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_KINGLER,
    .moves = {MOVE_RAZOR_SHELL, MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_RETURN}
    }
};

static const struct TrainerMon sParty_Pirate3Brutal[] = {//Brutal
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_DHELMISE,
    .moves = {MOVE_ANCHOR_SHOT, MOVE_GRASSY_GLIDE, MOVE_SHADOW_CLAW, MOVE_BODY_PRESS}
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_DREDNAW,
    .moves = {MOVE_LIQUIDATION, MOVE_JAW_LOCK, MOVE_ROCK_TOMB, MOVE_COUNTER}
    }
};

static const struct TrainerMon sParty_Pirate4Brutal[] = {//Brutal
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_OCTILLERY,
    .moves = {MOVE_OCTAZOOKA, MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_AURORA_BEAM}
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_CHATOT,
    .moves = {MOVE_CHATTER, MOVE_UPROAR, MOVE_ROOST, MOVE_STEEL_WING}
    }
};

static const struct TrainerMon sParty_OdysseusBrutal[] = {//Leviathan 11, Brutal
    {
    .iv = 31,
    .lvl = 34,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SLOT_1, //Speed Boost
    .species = SPECIES_SHARPEDO, //Starts with aura +2 Attack, +2 Evasion
    .moves = {MOVE_WATERFALL, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS}
    }
};

static const struct TrainerMon sParty_JulieBrutal[] = {//Leviathan 12, Brutal
    {
    .iv = 31,
    .lvl = 34,
    .nature = NATURE_IMPISH,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_2, //Sturdy
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

static const struct TrainerMon sParty_CamAndPamBrutal[] = {//Leviathan 13, Double Battle, Brutal
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
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_SURF, MOVE_ICY_WIND, MOVE_RECOVER, MOVE_MIRROR_COAT}
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
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_2, //Water Absorb
    .species = SPECIES_QUAGSIRE,
    .heldItem = ITEM_RINDO_BERRY,
    .moves = {MOVE_WATERFALL, MOVE_STOMPING_TANTRUM, MOVE_BRICK_BREAK, MOVE_YAWN}
    }
};

static const struct TrainerMon sParty_Zone25LMiragesBrutal[] = {//Leviathan 14, Double Battle, Brutal. Note they can Mega Evolve both Gengar and Kangaskhan
    {
    .ivs = {31, 31, 31, 31, 30, 31},
    .lvl = 43,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Unburden
    .species = SPECIES_ACCELGOR,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER} // Hidden Power Electric
    },
    {
    .iv = 31,
    .lvl = 43,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Disguise
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK}
    },
    {
    .iv = 31,
    .lvl = 43,
    .nature = NATURE_RASH,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Protean
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_DARK_PULSE}
    },
    {
    .iv = 31,
    .lvl = 43,
    .nature = NATURE_NAIVE,
    .gender = TRAINER_MON_MALE,
    .ability = ABILITY_SLOT_1, //Vital Spirit
    .species = SPECIES_ELECTIVIRE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_THUNDERBOLT, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH}
    },
    {
    .iv = 31,
    .lvl = 43,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Levitate, turns into Shadow Tag after Mega Evolving
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_GENGARITE,
    .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT, MOVE_AURA_SPHERE}
    },
    {
    .iv = 31,
    .lvl = 43,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .ability = ABILITY_SLOT_1, //Scrappy, turns into Parental Bond after Mega Evolving
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_KANGASKHANITE,
    .moves = {MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_FAKE_OUT}
    }
};

static const struct TrainerMon sParty_Unused[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Richard[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Herman[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Santiago[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Gilbert[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Franklin[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_SEALEO,
    }
};

static const struct TrainerMon sParty_Kevin[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Jack[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dudley[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Chad[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Tony2[] = {
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = 40,
    .lvl = 39,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Takao[] = {
    {
    .iv = 127,
    .lvl = 13,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Hitoshi[] = {
    {
    .iv = 50,
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 200,
    .lvl = 32,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Kiyo[] = {
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Koichi[] = {
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 150,
    .lvl = 28,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob1[] = {
    {
    .iv = 10,
    .lvl = 19,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Nob2[] = {
    {
    .iv = 110,
    .lvl = 27,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob3[] = {
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob4[] = {
    {
    .iv = 130,
    .lvl = 31,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 130,
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 130,
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob5[] = {
    {
    .iv = 140,
    .lvl = 33,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 140,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 140,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 140,
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_BLACK_BELT
    }
};

static const struct TrainerMon sParty_Yuji[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Daisuke[] = {
    {
    .iv = 10,
    .lvl = 19,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Atsushi[] = {
    {
    .iv = 10,
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Kirk[] = {
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_ELECTRIKE,
    .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_SPARK, MOVE_LEER}
    },
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_VOLTORB,
    .moves = {MOVE_CHARGE, MOVE_SHOCK_WAVE, MOVE_SCREECH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_GruntAquaHideout7[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Shawn[] = {
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Fernando1[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Dalton1[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_Dalton2[] = {
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_WHISMUR,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton3[] = {
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dalton5[] = {
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Cole[] = {
    {
    .iv = 10,
    .lvl = 23,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jeff[] = {
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Axle[] = {
    {
    .iv = 10,
    .lvl = 23,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jace[] = {
    {
    .iv = 10,
    .lvl = 23,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Keegan[] = {
    {
    .iv = 120,
    .lvl = 23,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Bernie1[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Bernie2[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Bernie3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie4[] = {
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie5[] = {
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_MAGCARGO,
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Drew[] = {
    {
    .iv = 0,
    .lvl = 23,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Beau[] = {
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_POISON_STING, MOVE_SAND_ATTACK, MOVE_SCRATCH, MOVE_DIG}
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMon sParty_Larry[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Shane[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Justin[] = {
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_KECLEON,
    }
};

static const struct TrainerMon sParty_Ethan1[] = {
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Autumn[] = {
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Travis[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Ethan2[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Ethan3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Ethan4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Ethan5[] = {
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Brent[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Donald[] = {
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_SILCOON,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Taylor[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_CASCOON,
    },
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_Jeffrey1[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Derek[] = {
    {
    .iv = 150,
    .lvl = 16,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = 150,
    .lvl = 16,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Jeffrey2[] = {
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Jeffrey3[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey4[] = {
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey5[] = {
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SILVER_POWDER
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Edward[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Preston[] = {
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Virgil[] = {
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Blake[] = {
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_William[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_RALTS,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_RALTS,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Joshua[] = {
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron1[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron2[] = {
    {
    .iv = 10,
    .lvl = 33,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 10,
    .lvl = 33,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron3[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron4[] = {
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron5[] = {
    {
    .iv = 40,
    .lvl = 45,
    .species = SPECIES_SOLROCK,
    },
    {
    .iv = 40,
    .lvl = 45,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Jaclyn[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Hannah[] = {
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Samantha[] = {
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Maura[] = {
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Kayla[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_WOBBUFFET,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_NATU,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Alexis[] = {
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Jacki1[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki2[] = {
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki3[] = {
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki4[] = {
    {
    .iv = 30,
    .lvl = 40,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 30,
    .lvl = 40,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki5[] = {
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    },
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Walter1[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Micah[] = {
    {
    .iv = 0,
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 0,
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Thomas[] = {
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_Walter2[] = {
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Walter3[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Walter4[] = {
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Walter5[] = {
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_GOLDUCK,
    .moves = {MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP}
    },
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Sidney[] = {
    {
    .iv = 250,
    .lvl = 46,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_CRUNCH}
    },
    {
    .iv = 250,
    .lvl = 48,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TORMENT, MOVE_DOUBLE_TEAM, MOVE_SWAGGER, MOVE_EXTRASENSORY}
    },
    {
    .iv = 250,
    .lvl = 46,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_FEINT_ATTACK, MOVE_NEEDLE_ARM, MOVE_COTTON_SPORE}
    },
    {
    .iv = 250,
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_FACADE}
    },
    {
    .iv = 31,
    .lvl = 49,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Phoebe[] = {
    {
    .iv = 250,
    .lvl = 48,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_PROTECT}
    },
    {
    .iv = 250,
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_WILL_O_WISP, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 250,
    .lvl = 50,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_NIGHT_SHADE, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 250,
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FACADE}
    },
    {
    .iv = 31,
    .lvl = 51,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Glacia[] = {
    {
    .iv = 250,
    .lvl = 50,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_HAIL, MOVE_ICE_BALL}
    },
    {
    .iv = 250,
    .lvl = 50,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_ICY_WIND, MOVE_ICE_BEAM}
    },
    {
    .iv = 250,
    .lvl = 52,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_HAIL, MOVE_BLIZZARD}
    },
    {
    .iv = 250,
    .lvl = 52,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_EXPLOSION, MOVE_HAIL, MOVE_ICE_BEAM}
    },
    {
    .iv = 31,
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SURF, MOVE_BODY_SLAM, MOVE_ICE_BEAM, MOVE_SHEER_COLD}
    }
};

static const struct TrainerMon sParty_Drake[] = {
    {
    .iv = 250,
    .lvl = 52,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW, MOVE_PROTECT, MOVE_DOUBLE_EDGE}
    },
    {
    .iv = 250,
    .lvl = 54,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    },
    {
    .iv = 250,
    .lvl = 53,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SMOKESCREEN, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_BODY_SLAM}
    },
    {
    .iv = 250,
    .lvl = 53,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE}
    },
    {
    .iv = 31,
    .lvl = 55,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Roxanne1[] = {
    {
    .iv = 10,
    .lvl = 12,
    .species = SPECIES_GEODUDE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_ROCK_THROW, MOVE_ROCK_TOMB}
    },
    {
    .iv = 10,
    .lvl = 12,
    .species = SPECIES_GEODUDE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_ROCK_THROW, MOVE_ROCK_TOMB}
    },
    {
    .iv = 200,
    .lvl = 15,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_BLOCK, MOVE_HARDEN, MOVE_TACKLE, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMon sParty_Brawly1[] = {
    {
    .iv = 10,
    .lvl = 16,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_KARATE_CHOP, MOVE_LOW_KICK, MOVE_SEISMIC_TOSS, MOVE_BULK_UP}
    },
    {
    .iv = 10,
    .lvl = 16,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_BULK_UP}
    },
    {
    .iv = 200,
    .lvl = 19,
    .species = SPECIES_MAKUHITA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_ARM_THRUST, MOVE_VITAL_THROW, MOVE_REVERSAL, MOVE_BULK_UP}
    }
};

static const struct TrainerMon sParty_Wattson1[] = {
    {
    .iv = 200,
    .lvl = 20,
    .species = SPECIES_VOLTORB,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_SPARK, MOVE_SELF_DESTRUCT, MOVE_SHOCK_WAVE}
    },
    {
    .iv = 200,
    .lvl = 20,
    .species = SPECIES_ELECTRIKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_LEER, MOVE_QUICK_ATTACK, MOVE_HOWL}
    },
    {
    .iv = 220,
    .lvl = 22,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUPERSONIC, MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM}
    },
    {
    .iv = 250,
    .lvl = 24,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_SHOCK_WAVE, MOVE_HOWL}
    }
};

static const struct TrainerMon sParty_Flannery1[] = {
    {
    .iv = 200,
    .lvl = 24,
    .species = SPECIES_NUMEL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_OVERHEAT, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    },
    {
    .iv = 200,
    .lvl = 24,
    .species = SPECIES_SLUGMA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_OVERHEAT, MOVE_SMOG, MOVE_LIGHT_SCREEN, MOVE_SUNNY_DAY}
    },
    {
    .iv = 250,
    .lvl = 26,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_OVERHEAT, MOVE_TACKLE, MOVE_SUNNY_DAY, MOVE_ATTRACT}
    },
    {
    .iv = 250,
    .lvl = 29,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_BODY_SLAM, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Norman1[] = {
    {
    .iv = 200,
    .lvl = 27,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_PSYBEAM, MOVE_FACADE, MOVE_ENCORE}
    },
    {
    .iv = 200,
    .lvl = 27,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SLASH, MOVE_FACADE, MOVE_ENCORE, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 200,
    .lvl = 29,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SLASH, MOVE_BELLY_DRUM, MOVE_FACADE, MOVE_HEADBUTT}
    },
    {
    .iv = 250,
    .lvl = 31,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_COUNTER, MOVE_YAWN, MOVE_FACADE, MOVE_FEINT_ATTACK}
    }
};

static const struct TrainerMon sParty_Winona1[] = {
    {
    .iv = 210,
    .lvl = 29,
    .species = SPECIES_SWABLU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PERISH_SONG, MOVE_MIRROR_MOVE, MOVE_SAFEGUARD, MOVE_AERIAL_ACE}
    },
    {
    .iv = 210,
    .lvl = 29,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_SYNTHESIS}
    },
    {
    .iv = 210,
    .lvl = 30,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_GUN, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = 220,
    .lvl = 31,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_FURY_ATTACK, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = 31,
    .lvl = 33,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    }
};

static const struct TrainerMon sParty_TateAndLiza1[] = {
    {
    .iv = 250,
    .lvl = 41,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 250,
    .lvl = 41,
    .species = SPECIES_XATU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_SUNNY_DAY, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = 250,
    .lvl = 42,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_CALM_MIND}
    },
    {
    .iv = 250,
    .lvl = 42,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan1[] = {
    {
    .iv = 200,
    .lvl = 41,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL}
    },
    {
    .iv = 200,
    .lvl = 41,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_AMNESIA, MOVE_EARTHQUAKE}
    },
    {
    .iv = 200,
    .lvl = 43,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_AURORA_BEAM, MOVE_WATER_PULSE}
    },
    {
    .iv = 200,
    .lvl = 43,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_LEER}
    },
    {
    .iv = 250,
    .lvl = 46,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Jerry1[] = {
    {
    .iv = 10,
    .lvl = 9,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Ted[] = {
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Paul[] = {
    {
    .iv = 10,
    .lvl = 15,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 10,
    .lvl = 15,
    .species = SPECIES_ODDISH,
    },
    {
    .iv = 10,
    .lvl = 15,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Jerry2[] = {
    {
    .iv = 20,
    .lvl = 26,
    .species = SPECIES_RALTS,
    },
    {
    .iv = 20,
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry3[] = {
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry4[] = {
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Jerry5[] = {
    {
    .iv = 50,
    .lvl = 34,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = 50,
    .lvl = 34,
    .species = SPECIES_BANETTE,
    },
    {
    .iv = 50,
    .lvl = 34,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Karen1[] = {
    {
    .iv = 10,
    .lvl = 9,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Georgia[] = {
    {
    .iv = 10,
    .lvl = 16,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 10,
    .lvl = 16,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Karen2[] = {
    {
    .iv = 20,
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 20,
    .lvl = 26,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_Karen3[] = {
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen4[] = {
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen5[] = {
    {
    .iv = 50,
    .lvl = 35,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 50,
    .lvl = 35,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_KateAndJoy[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_SPINDA,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYBEAM, MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE}
    },
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FEINT_ATTACK}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg1[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg2[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg3[] = {
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg5[] = {
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Victor[] = {
    {
    .iv = 25,
    .lvl = 16,
    .species = SPECIES_TAILLOW,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 25,
    .lvl = 16,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel1[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Colton[] = {
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .iv = 0,
    .lvl = 40,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .iv = 0,
    .lvl = 42,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    }
};

static const struct TrainerMon sParty_Miguel2[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel3[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel4[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel5[] = {
    {
    .iv = 0,
    .lvl = 38,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Victoria[] = {
    {
    .iv = 50,
    .lvl = 17,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Vanessa[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Bethany[] = {
    {
    .iv = 10,
    .lvl = 35,
    .species = SPECIES_AZURILL,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 10,
    .lvl = 37,
    .species = SPECIES_MARILL,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 10,
    .lvl = 39,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel1[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel2[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel4[] = {
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel5[] = {
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_SITRUS_BERRY
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Timothy1[] = {
    {
    .iv = 200,
    .lvl = 27,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Timothy2[] = {
    {
    .iv = 210,
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy3[] = {
    {
    .iv = 220,
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy4[] = {
    {
    .iv = 230,
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy5[] = {
    {
    .iv = 240,
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Vicky[] = {
    {
    .iv = 200,
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_MEDITATE, MOVE_CONFUSION, MOVE_DETECT}
    }
};

static const struct TrainerMon sParty_Shelby1[] = {
    {
    .iv = 200,
    .lvl = 21,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 200,
    .lvl = 21,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby2[] = {
    {
    .iv = 210,
    .lvl = 30,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 210,
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby3[] = {
    {
    .iv = 220,
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 220,
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby4[] = {
    {
    .iv = 230,
    .lvl = 36,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 230,
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby5[] = {
    {
    .iv = 240,
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 240,
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Calvin1[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_Billy[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_SEEDOT,
    }
};

static const struct TrainerMon sParty_Josh[] = {
    {
    .iv = 10,
    .lvl = 10,
    .species = SPECIES_GEODUDE,
    .moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Tommy[] = {
    {
    .iv = 110,
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 120,
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Joey[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Ben[] = {
    {
    .iv = 150,
    .lvl = 17,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_GROWL, MOVE_THUNDERBOLT}
    },
    {
    .iv = 150,
    .lvl = 17,
    .species = SPECIES_GULPIN,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE, MOVE_YAWN, MOVE_POUND}
    }
};

static const struct TrainerMon sParty_Quincy[] = {
    {
    .iv = 10,
    .lvl = 43,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_ATTRACT, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER}
    },
    {
    .iv = 10,
    .lvl = 43,
    .species = SPECIES_DUSCLOPS,
    .moves = {MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_Katelynn[] = {
    {
    .iv = 10,
    .lvl = 43,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND}
    },
    {
    .iv = 10,
    .lvl = 43,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK}
    }
};

static const struct TrainerMon sParty_Jaylen[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_TRAPINCH,
    }
};

static const struct TrainerMon sParty_Dillon[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Calvin2[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin3[] = {
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 20,
    .lvl = 30,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 30,
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin5[] = {
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Eddie[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_ZIGZAGOON,
    }
};

static const struct TrainerMon sParty_Allen[] = {
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Timmy[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_ARON,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Wallace[] = {
    {
    .iv = 31,
    .lvl = 57,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_SPOUT, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD}
    },
    {
    .iv = 31,
    .lvl = 55,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM}
    },
    {
    .iv = 31,
    .lvl = 56,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = 31,
    .lvl = 56,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_AMNESIA, MOVE_HYPER_BEAM}
    },
    {
    .iv = 31,
    .lvl = 56,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_SURF}
    },
    {
    .iv = 31,
    .lvl = 58,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RECOVER, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_Andrew[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Ivan[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Claude[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Elliot1[] = {
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Ned[] = {
    {
    .iv = 10,
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Dale[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Nolan[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Barny[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Wade[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Carter[] = {
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Elliot2[] = {
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 20,
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = 20,
    .lvl = 26,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .iv = 31,
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot5[] = {
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Ronald[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 0,
    .lvl = 23,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Jacob[] = {
    {
    .iv = 20,
    .lvl = 6,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = 20,
    .lvl = 6,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = 200,
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Anthony[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin1[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin2[] = {
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin4[] = {
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Benjamin5[] = {
    {
    .iv = 40,
    .lvl = 39,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail1[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Jasmine[] = {
    {
    .iv = 80,
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 80,
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Abigail2[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail3[] = {
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dylan1[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan2[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan3[] = {
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Dylan5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria1[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria2[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria3[] = {
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Camden[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Demetrius[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Isaiah1[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo1[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Chase[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 80,
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah2[] = {
    {
    .iv = 10,
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah3[] = {
    {
    .iv = 20,
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah4[] = {
    {
    .iv = 30,
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isaiah5[] = {
    {
    .iv = 40,
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isobel[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Donny[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 160,
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Talia[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn1[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Allison[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 240,
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn2[] = {
    {
    .iv = 10,
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn3[] = {
    {
    .iv = 20,
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn4[] = {
    {
    .iv = 30,
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Katelyn5[] = {
    {
    .iv = 40,
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Nicolas1[] = {
    {
    .iv = 10,
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 10,
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas2[] = {
    {
    .iv = 110,
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 110,
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas3[] = {
    {
    .iv = 120,
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 120,
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas4[] = {
    {
    .iv = 130,
    .lvl = 46,
    .species = SPECIES_BAGON,
    },
    {
    .iv = 130,
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 130,
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas5[] = {
    {
    .iv = 140,
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 140,
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 140,
    .lvl = 49,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_DRAGON_FANG
    }
};

static const struct TrainerMon sParty_Aaron[] = {
    {
    .iv = 31,
    .lvl = 34,
    .species = SPECIES_BAGON,
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_EMBER}
    }
};

static const struct TrainerMon sParty_Perry[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Hugh[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Phil[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Jared[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_DODUO,
    },
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Humberto[] = {
    {
    .iv = 250,
    .lvl = 30,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Presley[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Edwardo[] = {
    {
    .iv = 150,
    .lvl = 29,
    .species = SPECIES_DODUO,
    },
    {
    .iv = 150,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Colin[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_NATU,
    }
};

static const struct TrainerMon sParty_Robert1[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Benny[] = {
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Chester[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Robert2[] = {
    {
    .iv = 10,
    .lvl = 32,
    .species = SPECIES_NATU,
    },
    {
    .iv = 10,
    .lvl = 32,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Robert3[] = {
    {
    .iv = 20,
    .lvl = 35,
    .species = SPECIES_NATU,
    },
    {
    .iv = 20,
    .lvl = 35,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert4[] = {
    {
    .iv = 30,
    .lvl = 38,
    .species = SPECIES_NATU,
    },
    {
    .iv = 30,
    .lvl = 38,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert5[] = {
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Alex[] = {
    {
    .iv = 150,
    .lvl = 33,
    .species = SPECIES_NATU,
    },
    {
    .iv = 150,
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Beck[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Yasu[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Takashi[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_KOFFING,
    }
};

static const struct TrainerMon sParty_Dianne[] = {
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jani[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lao1[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    }
};

static const struct TrainerMon sParty_Lung[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_KOFFING,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Lao2[] = {
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao3[] = {
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao4[] = {
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao5[] = {
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_SMOKE_BALL,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jocelyn[] = {
    {
    .iv = 127,
    .lvl = 13,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Laura[] = {
    {
    .iv = 150,
    .lvl = 13,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Cyndy1[] = {
    {
    .iv = 10,
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 10,
    .lvl = 18,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cora[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Paula[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Cyndy2[] = {
    {
    .iv = 110,
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 110,
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy3[] = {
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy4[] = {
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Cyndy5[] = {
    {
    .iv = 140,
    .lvl = 35,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 140,
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Madeline1[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Clarissa[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Angelica[] = {
    {
    .iv = 50,
    .lvl = 30,
    .species = SPECIES_CASTFORM,
    .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_Madeline2[] = {
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline3[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
    },
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_CAMERUPT,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Beverly[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Imani[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Kyla[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Denise[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Beth[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Tara[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_HORSEA,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Missy[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Alice[] = {
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Jenny1[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Grace[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Tanya[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Sharon[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Nikki[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Brenda[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Katie[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Susie[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Kara[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Dana[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Sienna[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Debra[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Linda[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_HORSEA,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Kaylee[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_LANTURN,
    },
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Laurel[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Carlee[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jenny2[] = {
    {
    .iv = 0,
    .lvl = 38,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny3[] = {
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny4[] = {
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny5[] = {
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Heidi[] = {
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    },
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMon sParty_Becky[] = {
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH, MOVE_DIG}
    },
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_MARILL,
    .moves = {MOVE_ROLLOUT, MOVE_BUBBLE_BEAM, MOVE_TAIL_WHIP, MOVE_DEFENSE_CURL}
    }
};

static const struct TrainerMon sParty_Carol[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Nancy[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Martha[] = {
    {
    .iv = 0,
    .lvl = 23,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 0,
    .lvl = 23,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana1[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_ODDISH,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Cedric[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

static const struct TrainerMon sParty_Irene[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Diana2[] = {
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana3[] = {
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana5[] = {
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_VILEPLUME,
    },
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_AmyAndLiv1[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv2[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia1[] = {
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_LOTAD,
    }
};

static const struct TrainerMon sParty_MiuAndYuki[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_BEAUTIFLY,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_AmyAndLiv3[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia2[] = {
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_DUSKULL,
    .moves = {MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_SHROOMISH,
    .moves = {MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AmyAndLiv4[] = {
    {
    .iv = 20,
    .lvl = 30,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = 20,
    .lvl = 30,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv5[] = {
    {
    .iv = 30,
    .lvl = 33,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = 30,
    .lvl = 33,
    .species = SPECIES_MINUN,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_AmyAndLiv6[] = {
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_MINUN,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_Huey[] = {
    {
    .iv = 10,
    .lvl = 12,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 10,
    .lvl = 12,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Edmond[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Ernest1[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Dwayne[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Phillip[] = {
    {
    .iv = 0,
    .lvl = 44,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .iv = 0,
    .lvl = 44,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Leonard[] = {
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Duncan[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_SPHEAL,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest2[] = {
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest3[] = {
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest4[] = {
    {
    .iv = 30,
    .lvl = 42,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 30,
    .lvl = 42,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 30,
    .lvl = 42,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest5[] = {
    {
    .iv = 40,
    .lvl = 45,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 40,
    .lvl = 45,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 40,
    .lvl = 45,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Eli[] = {
    {
    .iv = 10,
    .lvl = 23,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Annika[] = {
    {
    .iv = 10,
    .lvl = 39,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    },
    {
    .iv = 10,
    .lvl = 39,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Jazmyn[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Jonas[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB}
    }
};

static const struct TrainerMon sParty_Kayley[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_CASTFORM,
    .moves = {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM}
    }
};

static const struct TrainerMon sParty_Auron[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Kelvin[] = {
    {
    .iv = 150,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 150,
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Marley[] = {
    {
    .iv = 31,
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
    }
};

static const struct TrainerMon sParty_Reyna[] = {
    {
    .iv = 50,
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 200,
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Hudson[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Conor[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = 200,
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Edwin1[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Hector[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_ZANGOOSE,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sParty_TabithaMossdeep[] = {
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = 10,
    .lvl = 38,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 10,
    .lvl = 40,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_Edwin2[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin3[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin4[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin5[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_WallyVR1[] = {
    {
    .iv = 150,
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = 150,
    .lvl = 43,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 150,
    .lvl = 44,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = 150,
    .lvl = 41,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = 250,
    .lvl = 45,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanRoute103Mudkip[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Mudkip[] = {
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 10,
    .lvl = 20,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Mudkip[] = {
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Treecko[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Treecko[] = {
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 10,
    .lvl = 20,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Treecko[] = {
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Torchic[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Torchic[] = {
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 10,
    .lvl = 20,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Torchic[] = {
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayRoute103Mudkip[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_CHIMCHAR,
    }
};

static const struct TrainerMon sParty_MayRoute110Mudkip[] = {
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 10,
    .lvl = 20,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayRoute119Mudkip[] = {
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayRoute103Treecko[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_MayRoute110Treecko[] = {
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 10,
    .lvl = 20,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayRoute119Treecko[] = {
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayRoute103Torchic[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_MayRoute110Torchic[] = {
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 10,
    .lvl = 20,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayRoute119Torchic[] = {
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_Isaac1[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_WHISMUR,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_ARON,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Davis[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_PINSIR,
    }
};

static const struct TrainerMon sParty_Mitchell[] = {
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC}
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_SOLROCK,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Isaac2[] = {
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_ARON,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Isaac3[] = {
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_ARON,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac4[] = {
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_ARON,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac5[] = {
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Lydia1[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Halle[] = {
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Garrison[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Lydia2[] = {
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia3[] = {
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia4[] = {
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia5[] = {
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jackson1[] = {
    {
    .iv = 50,
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Lorenzo[] = {
    {
    .iv = 50,
    .lvl = 28,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = 50,
    .lvl = 28,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = 50,
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Sebastian[] = {
    {
    .iv = 50,
    .lvl = 39,
    .species = SPECIES_CACTURNE,
    }
};

static const struct TrainerMon sParty_Jackson2[] = {
    {
    .iv = 60,
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson3[] = {
    {
    .iv = 70,
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson4[] = {
    {
    .iv = 80,
    .lvl = 37,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson5[] = {
    {
    .iv = 90,
    .lvl = 39,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = 90,
    .lvl = 39,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Catherine1[] = {
    {
    .iv = 50,
    .lvl = 26,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 50,
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Jenna[] = {
    {
    .iv = 50,
    .lvl = 28,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = 50,
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 50,
    .lvl = 28,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Sophian[] = {
    {
    .iv = 50,
    .lvl = 38,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = 50,
    .lvl = 38,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine2[] = {
    {
    .iv = 60,
    .lvl = 30,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 60,
    .lvl = 30,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine3[] = {
    {
    .iv = 70,
    .lvl = 33,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 70,
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine4[] = {
    {
    .iv = 80,
    .lvl = 36,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 80,
    .lvl = 36,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine5[] = {
    {
    .iv = 90,
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .iv = 90,
    .lvl = 39,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Julio[] = {
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    {
    .iv = 50,
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 50,
    .lvl = 35,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_GruntUnused[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre4[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntJaggedPass[] = {
    {
    .iv = 50,
    .lvl = 22,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 50,
    .lvl = 22,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Marc[] = {
    {
    .iv = 120,
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 130,
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Brenden[] = {
    {
    .iv = 10,
    .lvl = 13,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Lilith[] = {
    {
    .iv = 150,
    .lvl = 13,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Cristian[] = {
    {
    .iv = 200,
    .lvl = 13,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Sylvia[] = {
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Leonardo[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Athena[] = {
    {
    .iv = 10,
    .lvl = 32,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE}
    },
    {
    .iv = 10,
    .lvl = 32,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_THIEF, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Harrison[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_GruntMtChimney2[] = {
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Clarence[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Terry[] = {
    {
    .iv = 0,
    .lvl = 37,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nate[] = {
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Kathleen[] = {
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Clifford[] = {
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nicholas[] = {
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Macey[] = {
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_NATU,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTreecko[] = {
    {
    .iv = 25,
    .lvl = 13,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = 50,
    .lvl = 15,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_BrendanRustboroMudkip[] = {
    {
    .iv = 25,
    .lvl = 13,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 50,
    .lvl = 15,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_Paxton[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Isabella[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_TabithaMtChimney[] = {
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 50,
    .lvl = 20,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 50,
    .lvl = 22,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 50,
    .lvl = 22,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Jonathan[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTorchic[] = {
    {
    .iv = 25,
    .lvl = 13,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 50,
    .lvl = 15,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_MayRustboroMudkip[] = {
    {
    .iv = 25,
    .lvl = 13,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 50,
    .lvl = 15,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
    {
    .iv = 150,
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 150,
    .lvl = 38,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = 150,
    .lvl = 39,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMtChimney[] = {
    {
    .iv = 150,
    .lvl = 24,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 150,
    .lvl = 24,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 150,
    .lvl = 25,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Tiana[] = {
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley1[] = {
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Janice[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Vivi[] = {
    {
    .iv = 10,
    .lvl = 15,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 10,
    .lvl = 15,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 10,
    .lvl = 15,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Haley2[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley4[] = {
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley5[] = {
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Sally[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_ODDISH,
    }
};

static const struct TrainerMon sParty_Robin[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Andrea[] = {
    {
    .iv = 10,
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Crissy[] = {
    {
    .iv = 10,
    .lvl = 39,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = 10,
    .lvl = 39,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Rick[] = {
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_WURMPLE,
    }
};

static const struct TrainerMon sParty_Lyle[] = {
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_WURMPLE,
    }
};

static const struct TrainerMon sParty_Jose[] = {
    {
    .iv = 50,
    .lvl = 8,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 50,
    .lvl = 8,
    .species = SPECIES_NINCADA,
    }
};

static const struct TrainerMon sParty_Doug[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_NINCADA,
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Greg[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Kent[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James1[] = {
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_NINCADA,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_NINCADA,
    }
};

static const struct TrainerMon sParty_James2[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James5[] = {
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Brice[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Trent1[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Lenny[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Lucas1[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Alan[] = {
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Clark[] = {
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Eric[] = {
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Lucas2[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike1[] = {
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_PELIPPER,
    .moves = {MOVE_GUST, MOVE_GROWL, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_POOCHYENA,
    .moves = {MOVE_BITE, MOVE_SCARY_FACE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike2[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Trent2[] = {
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent3[] = {
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent4[] = {
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent5[] = {
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_DezAndLuke[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_LeaAndJed[] = {
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_KiraAndDan1[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan2[] = {
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan4[] = {
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan5[] = {
    {
    .iv = 40,
    .lvl = 39,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 40,
    .lvl = 39,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Johanna[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Gerald[] = {
    {
    .iv = 10,
    .lvl = 23,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_FLAMETHROWER, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK, MOVE_BIND}
    }
};

static const struct TrainerMon sParty_Vivian[] = {
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_DETECT, MOVE_CONFUSION, MOVE_MEDITATE}
    }
};

static const struct TrainerMon sParty_Danielle[] = {
    {
    .iv = 10,
    .lvl = 23,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_FIRE_PUNCH}
    }
};

static const struct TrainerMon sParty_Hideo[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_POISON_GAS, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    }
};

static const struct TrainerMon sParty_Keigo[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_NINJASK,
    .moves = {MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM, MOVE_FURY_CUTTER, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_Riley[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_NINCADA,
    .moves = {MOVE_LEECH_LIFE, MOVE_FURY_SWIPES, MOVE_MIND_READER, MOVE_DIG}
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    }
};

static const struct TrainerMon sParty_Flint[] = {
    {
    .iv = 150,
    .lvl = 29,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 150,
    .lvl = 29,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Ashley[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_WallyMauville[] = {
    {
    .iv = 30,
    .lvl = 16,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_WallyVR2[] = {
    {
    .iv = 150,
    .lvl = 47,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = 150,
    .lvl = 46,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 150,
    .lvl = 47,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = 150,
    .lvl = 44,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = 250,
    .lvl = 48,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR3[] = {
    {
    .iv = 150,
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = 150,
    .lvl = 49,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 150,
    .lvl = 50,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = 150,
    .lvl = 47,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = 250,
    .lvl = 51,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR4[] = {
    {
    .iv = 150,
    .lvl = 53,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = 150,
    .lvl = 52,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 150,
    .lvl = 53,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = 150,
    .lvl = 50,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = 250,
    .lvl = 54,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR5[] = {
    {
    .iv = 150,
    .lvl = 56,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = 150,
    .lvl = 55,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 150,
    .lvl = 56,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = 150,
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = 250,
    .lvl = 57,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanLilycoveMudkip[] = {
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 200,
    .lvl = 34,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTreecko[] = {
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = 200,
    .lvl = 34,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTorchic[] = {
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 200,
    .lvl = 34,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayLilycoveMudkip[] = {
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 200,
    .lvl = 34,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayLilycoveTreecko[] = {
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = 200,
    .lvl = 34,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayLilycoveTorchic[] = {
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 200,
    .lvl = 34,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_Jonah[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Henry[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Roger[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Alexa[] = {
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ruben[] = {
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_NOSEPASS,
    }
};

static const struct TrainerMon sParty_Koji1[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Wayne[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Aidan[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Reed[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tisha[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    }
};

static const struct TrainerMon sParty_ToriAndTia[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SPINDA,
    }
};

static const struct TrainerMon sParty_KimAndIris[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_SWABLU,
    .moves = {MOVE_SING, MOVE_FURY_ATTACK, MOVE_SAFEGUARD, MOVE_AERIAL_ACE}
    },
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_REST, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_GROWTH, MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED}
    },
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_GRAVELER,
    .moves = {MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_MUD_SPORT, MOVE_ROCK_THROW}
    }
};

static const struct TrainerMon sParty_MelAndPaul[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_DUSTOX,
    .moves = {MOVE_GUST, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_BEAUTIFLY,
    .moves = {MOVE_GUST, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_STUN_SPORE}
    }
};

static const struct TrainerMon sParty_JohnAndJay1[] = {
    {
    .iv = 200,
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = 200,
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
    {
    .iv = 210,
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = 210,
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
    {
    .iv = 220,
    .lvl = 46,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = 220,
    .lvl = 46,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
    {
    .iv = 230,
    .lvl = 49,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = 230,
    .lvl = 49,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
    {
    .iv = 240,
    .lvl = 52,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = 240,
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_ReliAndIan[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_LilaAndRoy1[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
    {
    .iv = 0,
    .lvl = 42,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = 0,
    .lvl = 40,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_LANTURN,
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
    {
    .iv = 0,
    .lvl = 48,
    .species = SPECIES_LANTURN,
    },
    {
    .iv = 0,
    .lvl = 46,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
    {
    .iv = 0,
    .lvl = 51,
    .species = SPECIES_LANTURN,
    },
    {
    .iv = 0,
    .lvl = 49,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LisaAndRay[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Chris[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_FEEBAS,
    },
    {
    .iv = 0,
    .lvl = 23,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Dawson[] = {
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    },
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_POOCHYENA,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Sarah[] = {
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_LOTAD,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Darian[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Hailey[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Chandler[] = {
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Kaleb[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Joseph[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Alyssa[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Marcos[] = {
    {
    .iv = 10,
    .lvl = 15,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Rhett[] = {
    {
    .iv = 10,
    .lvl = 15,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Tyron[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Celina[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Bianca[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Hayden[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Sophie[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Coby[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Lawrence[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_BALTOY,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Wyatt[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_ARON,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Angelina[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Kai[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Charlotte[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Deandre[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_ARON,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_BALTOY,
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_BALTOY,
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
    {
    .iv = 75,
    .lvl = 26,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 75,
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 75,
    .lvl = 30,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 75,
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Darcy[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMossdeep[] = {
    {
    .iv = 150,
    .lvl = 42,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 150,
    .lvl = 43,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = 150,
    .lvl = 44,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Pete[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Isabelle[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Andres1[] = {
    {
    .iv = 50,
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 50,
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Josue[] = {
    {
    .iv = 50,
    .lvl = 25,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 50,
    .lvl = 25,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Camron[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Cory1[] = {
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Carolina[] = {
    {
    .iv = 50,
    .lvl = 24,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 50,
    .lvl = 24,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 50,
    .lvl = 24,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Elijah[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Celia[] = {
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Bryan[] = {
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Branden[] = {
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Bryant[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Shayla[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Kyra[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_DODUO,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Jaiden[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sParty_Alix[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Helene[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Marlene[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Devan[] = {
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Johnson[] = {
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_LOTAD,
    }
};

static const struct TrainerMon sParty_Melina[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Brandi[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Aisha[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Makayla[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Fabian[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Dayton[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Rachel[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Leonel[] = {
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Callie[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cale[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Myles[] = {
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Pat[] = {
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sParty_Cristin1[] = {
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_MayRustboroTreecko[] = {
    {
    .iv = 25,
    .lvl = 13,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = 50,
    .lvl = 15,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_MayRustboroTorchic[] = {
    {
    .iv = 25,
    .lvl = 13,
    .species = SPECIES_TORKOAL,
    },
    {
    .iv = 50,
    .lvl = 15,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_Roxanne2[] = {
    {
    .iv = 31,
    .lvl = 32,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = 31,
    .lvl = 35,
    .species = SPECIES_KABUTO,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 31,
    .lvl = 35,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 31,
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne3[] = {
    {
    .iv = 31,
    .lvl = 37,
    .species = SPECIES_OMANYTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = 31,
    .lvl = 37,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = 31,
    .lvl = 40,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 31,
    .lvl = 40,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 31,
    .lvl = 42,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne4[] = {
    {
    .iv = 31,
    .lvl = 42,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = 31,
    .lvl = 42,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = 31,
    .lvl = 45,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 31,
    .lvl = 45,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 31,
    .lvl = 47,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne5[] = {
    {
    .iv = 31,
    .lvl = 47,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT}
    },
    {
    .iv = 31,
    .lvl = 47,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = 31,
    .lvl = 47,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = 31,
    .lvl = 50,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 31,
    .lvl = 50,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 31,
    .lvl = 52,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Brawly2[] = {
    {
    .iv = 31,
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = 31,
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = 31,
    .lvl = 35,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = 31,
    .lvl = 37,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly3[] = {
    {
    .iv = 31,
    .lvl = 38,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = 31,
    .lvl = 38,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = 31,
    .lvl = 40,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = 31,
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly4[] = {
    {
    .iv = 31,
    .lvl = 40,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = 31,
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = 31,
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = 31,
    .lvl = 45,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = 31,
    .lvl = 47,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly5[] = {
    {
    .iv = 31,
    .lvl = 46,
    .species = SPECIES_HITMONLEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_MEGA_KICK, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_BULK_UP}
    },
    {
    .iv = 31,
    .lvl = 46,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = 31,
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = 31,
    .lvl = 48,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = 31,
    .lvl = 50,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = 31,
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Wattson2[] = {
    {
    .iv = 31,
    .lvl = 36,
    .species = SPECIES_MAREEP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 31,
    .lvl = 36,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = 31,
    .lvl = 38,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = 31,
    .lvl = 40,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson3[] = {
    {
    .iv = 31,
    .lvl = 39,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_SHOCK_WAVE}
    },
    {
    .iv = 31,
    .lvl = 41,
    .species = SPECIES_FLAAFFY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 31,
    .lvl = 41,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = 31,
    .lvl = 43,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = 31,
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson4[] = {
    {
    .iv = 31,
    .lvl = 44,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = 31,
    .lvl = 46,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 31,
    .lvl = 46,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = 31,
    .lvl = 48,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = 31,
    .lvl = 50,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson5[] = {
    {
    .iv = 31,
    .lvl = 50,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWIFT, MOVE_FOCUS_PUNCH, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 31,
    .lvl = 51,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = 31,
    .lvl = 51,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 31,
    .lvl = 53,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = 31,
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = 31,
    .lvl = 55,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Flannery2[] = {
    {
    .iv = 31,
    .lvl = 38,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 31,
    .lvl = 36,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = 31,
    .lvl = 38,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = 31,
    .lvl = 40,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery3[] = {
    {
    .iv = 31,
    .lvl = 41,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_SUNNY_DAY}
    },
    {
    .iv = 31,
    .lvl = 43,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 31,
    .lvl = 41,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = 31,
    .lvl = 43,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = 31,
    .lvl = 45,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery4[] = {
    {
    .iv = 31,
    .lvl = 46,
    .species = SPECIES_HOUNDOUR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = 31,
    .lvl = 46,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = 31,
    .lvl = 48,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 31,
    .lvl = 46,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = 31,
    .lvl = 48,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = 31,
    .lvl = 50,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery5[] = {
    {
    .iv = 31,
    .lvl = 51,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = 31,
    .lvl = 53,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 31,
    .lvl = 51,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = 31,
    .lvl = 51,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = 31,
    .lvl = 53,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = 31,
    .lvl = 55,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Norman2[] = {
    {
    .iv = 31,
    .lvl = 42,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = 31,
    .lvl = 42,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = 31,
    .lvl = 43,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = 31,
    .lvl = 45,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman3[] = {
    {
    .iv = 31,
    .lvl = 47,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = 31,
    .lvl = 47,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = 31,
    .lvl = 45,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = 31,
    .lvl = 48,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = 31,
    .lvl = 50,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman4[] = {
    {
    .iv = 31,
    .lvl = 52,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = 31,
    .lvl = 52,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = 31,
    .lvl = 50,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = 31,
    .lvl = 53,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = 31,
    .lvl = 55,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman5[] = {
    {
    .iv = 31,
    .lvl = 57,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = 31,
    .lvl = 57,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = 31,
    .lvl = 55,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = 31,
    .lvl = 57,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE}
    },
    {
    .iv = 31,
    .lvl = 58,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = 31,
    .lvl = 60,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Winona2[] = {
    {
    .iv = 31,
    .lvl = 40,
    .species = SPECIES_DRATINI,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = 31,
    .lvl = 38,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = 31,
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = 31,
    .lvl = 43,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = 31,
    .lvl = 45,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona3[] = {
    {
    .iv = 31,
    .lvl = 43,
    .species = SPECIES_HOOTHOOT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = 31,
    .lvl = 43,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = 31,
    .lvl = 45,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = 31,
    .lvl = 46,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = 31,
    .lvl = 48,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = 31,
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona4[] = {
    {
    .iv = 31,
    .lvl = 48,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = 31,
    .lvl = 49,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = 31,
    .lvl = 50,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = 31,
    .lvl = 51,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = 31,
    .lvl = 53,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = 31,
    .lvl = 55,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona5[] = {
    {
    .iv = 31,
    .lvl = 53,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = 31,
    .lvl = 54,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = 31,
    .lvl = 55,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = 31,
    .lvl = 55,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
    .iv = 31,
    .lvl = 58,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = 31,
    .lvl = 60,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_SKY_ATTACK, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TateAndLiza2[] = {
    {
    .iv = 31,
    .lvl = 48,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = 31,
    .lvl = 49,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 31,
    .lvl = 49,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = 31,
    .lvl = 50,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = 31,
    .lvl = 50,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza3[] = {
    {
    .iv = 31,
    .lvl = 53,
    .species = SPECIES_DROWZEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = 31,
    .lvl = 53,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = 31,
    .lvl = 54,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 31,
    .lvl = 54,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = 31,
    .lvl = 55,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = 31,
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza4[] = {
    {
    .iv = 31,
    .lvl = 58,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = 31,
    .lvl = 59,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 31,
    .lvl = 58,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = 31,
    .lvl = 59,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = 31,
    .lvl = 60,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = 31,
    .lvl = 60,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza5[] = {
    {
    .iv = 31,
    .lvl = 63,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = 31,
    .lvl = 64,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 31,
    .lvl = 63,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = 31,
    .lvl = 64,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = 31,
    .lvl = 65,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = 31,
    .lvl = 65,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan2[] = {
    {
    .iv = 31,
    .lvl = 46,
    .species = SPECIES_POLIWAG,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = 31,
    .lvl = 46,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = 31,
    .lvl = 48,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = 31,
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = 31,
    .lvl = 51,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan3[] = {
    {
    .iv = 31,
    .lvl = 50,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = 31,
    .lvl = 51,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = 31,
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = 31,
    .lvl = 53,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = 31,
    .lvl = 56,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan4[] = {
    {
    .iv = 31,
    .lvl = 56,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = 31,
    .lvl = 58,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = 31,
    .lvl = 56,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = 31,
    .lvl = 58,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = 31,
    .lvl = 58,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = 31,
    .lvl = 61,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan5[] = {
    {
    .iv = 31,
    .lvl = 61,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = 31,
    .lvl = 63,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = 31,
    .lvl = 61,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG}
    },
    {
    .iv = 31,
    .lvl = 63,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_SHEER_COLD}
    },
    {
    .iv = 31,
    .lvl = 63,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = 31,
    .lvl = 66,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Angelo[] = {
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_ILLUMISE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CHARM, MOVE_NONE}
    },
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_VOLBEAT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CONFUSE_RAY, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Darius[] = {
    {
    .iv = 200,
    .lvl = 30,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Steven[] = {
    {
    .iv = 31,
    .lvl = 77,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING}
    },
    {
    .iv = 31,
    .lvl = 75,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE}
    },
    {
    .iv = 31,
    .lvl = 76,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW}
    },
    {
    .iv = 31,
    .lvl = 76,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY}
    },
    {
    .iv = 31,
    .lvl = 76,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .iv = 31,
    .lvl = 78,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Anabel[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Andres2[] = {
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres4[] = {
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Cory2[] = {
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory3[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Cory5[] = {
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Pablo2[] = {
    {
    .iv = 10,
    .lvl = 37,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 10,
    .lvl = 37,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo3[] = {
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo4[] = {
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo5[] = {
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Koji2[] = {
    {
    .iv = 10,
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 10,
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji3[] = {
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji4[] = {
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji5[] = {
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    },
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Cristin2[] = {
    {
    .iv = 110,
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 110,
    .lvl = 35,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin3[] = {
    {
    .iv = 120,
    .lvl = 37,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = 120,
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 120,
    .lvl = 37,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin4[] = {
    {
    .iv = 130,
    .lvl = 39,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = 130,
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 10,
    .lvl = 39,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin5[] = {
    {
    .iv = 140,
    .lvl = 41,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = 140,
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = 140,
    .lvl = 41,
    .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMon sParty_Fernando2[] = {
    {
    .iv = 10,
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 10,
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 10,
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando3[] = {
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando4[] = {
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando5[] = {
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    }
};

/*static const struct TrainerMon sParty_Sawyer2[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Sawyer3[] = {
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer4[] = {
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer5[] = {
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};
*/
static const struct TrainerMon sParty_Gabrielle2[] = {
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle4[] = {
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Thalia2[] = {
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Thalia3[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia4[] = {
    {
    .iv = 30,
    .lvl = 38,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 30,
    .lvl = 38,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 30,
    .lvl = 38,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia5[] = {
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_WAILORD,
    },
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_KINGDRA,
    }
};

static const struct TrainerMon sParty_Mariela[] = {
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_CHIMECHO,
    }
};

static const struct TrainerMon sParty_Alvaro[] = {
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Everett[] = {
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_Red[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_CHARMANDER,
    }
};

static const struct TrainerMon sParty_Leaf[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BULBASAUR,
    }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_GROUDON,
    }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_KYOGRE,
    }
};
