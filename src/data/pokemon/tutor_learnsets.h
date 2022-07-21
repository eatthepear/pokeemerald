const u16 gTutorMoves[] =
{
    [TUTOR_MOVE_ICY_WIND] = MOVE_ICY_WIND,
    [TUTOR_MOVE_GRASS_KNOT] = MOVE_GRASS_KNOT,
    [TUTOR_MOVE_LOW_KICK] = MOVE_LOW_KICK,
    [TUTOR_MOVE_HEAL_BELL] = MOVE_HEAL_BELL,
    [TUTOR_MOVE_HELPING_HAND] = MOVE_HELPING_HAND,
    [TUTOR_MOVE_SLEEP_TALK] = MOVE_SLEEP_TALK,
    [TUTOR_MOVE_STEALTH_ROCK] = MOVE_STEALTH_ROCK,
    [TUTOR_MOVE_TAUNT] = MOVE_TAUNT,
    [TUTOR_MOVE_FIRE_PUNCH] = MOVE_FIRE_PUNCH,
    [TUTOR_MOVE_ICE_PUNCH] = MOVE_ICE_PUNCH,
    [TUTOR_MOVE_THUNDER_PUNCH] = MOVE_THUNDER_PUNCH,
    [TUTOR_MOVE_FLIP_TURN] = MOVE_FLIP_TURN,
    [TUTOR_MOVE_U_TURN] = MOVE_U_TURN,
    [TUTOR_MOVE_DEFOG] = MOVE_DEFOG,
    [TUTOR_MOVE_PAIN_SPLIT] = MOVE_PAIN_SPLIT,
    [TUTOR_MOVE_TRICK] = MOVE_TRICK,
    [TUTOR_MOVE_BOUNCE] = MOVE_BOUNCE,
    [TUTOR_MOVE_IRON_HEAD] = MOVE_IRON_HEAD,
    [TUTOR_MOVE_KNOCK_OFF] = MOVE_KNOCK_OFF,
    [TUTOR_MOVE_VOLT_SWITCH] = MOVE_VOLT_SWITCH,
    [TUTOR_MOVE_ZEN_HEADBUTT] = MOVE_ZEN_HEADBUTT,
    [TUTOR_MOVE_ROOST] = MOVE_ROOST,
    [TUTOR_MOVE_SYNTHESIS] = MOVE_SYNTHESIS,
    [TUTOR_MOVE_TAILWIND] = MOVE_TAILWIND,
    [TUTOR_MOVE_DRACO_METEOR] = MOVE_DRACO_METEOR,
    [TUTOR_MOVE_EXPANDING_FORCE] = MOVE_EXPANDING_FORCE,
    [TUTOR_MOVE_HEAT_WAVE] = MOVE_HEAT_WAVE,
    [TUTOR_MOVE_POLTERGEIST] = MOVE_POLTERGEIST,
    [TUTOR_MOVE_POWER_WHIP] = MOVE_POWER_WHIP,
    [TUTOR_MOVE_SUPERPOWER] = MOVE_SUPERPOWER,
    [TUTOR_MOVE_SWORDS_DANCE] = MOVE_SWORDS_DANCE,
    [TUTOR_MOVE_NASTY_PLOT] = MOVE_NASTY_PLOT,
};

#define TUTOR_LEARNSET(moves) ((u32)(moves))
#define TUTOR(move) ((u64)1 << (TUTOR_##move))

static const u32 sTutorLearnsets[] =
{
    [SPECIES_NONE]          = TUTOR_LEARNSET(0),

    [SPECIES_BULBASAUR]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_IVYSAUR]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_VENUSAUR]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CHARMANDER]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CHARMELEON]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CHARIZARD]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SQUIRTLE]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_WARTORTLE]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_BLASTOISE]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_CATERPIE]      = TUTOR_LEARNSET(0),

    [SPECIES_METAPOD]       = TUTOR_LEARNSET(0),

    [SPECIES_BUTTERFREE]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_WEEDLE]        = TUTOR_LEARNSET(0),

    [SPECIES_KAKUNA]        = TUTOR_LEARNSET(0),

    [SPECIES_BEEDRILL]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_PIDGEY]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_PIDGEOTTO]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_PIDGEOT]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_RATTATA]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_RATICATE]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SPEAROW]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_FEAROW]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_EKANS]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ARBOK]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_PIKACHU]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_RAICHU]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_SANDSHREW]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SANDSLASH]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_NIDORAN_F]     = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_NIDORINA]      = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_NIDOQUEEN]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_NIDORAN_M]     = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_NIDORINO]      = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_NIDOKING]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_CLEFAIRY]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_CLEFABLE]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_VULPIX]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_NINETALES]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_JIGGLYPUFF]    = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_WIGGLYTUFF]    = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_ZUBAT]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_GOLBAT]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_ODDISH]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_GLOOM]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_VILEPLUME]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_PARAS]         = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_PARASECT]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_VENONAT]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_VENOMOTH]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_DIGLETT]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_DUGTRIO]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_MEOWTH]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_PERSIAN]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_PSYDUCK]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_GOLDUCK]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_MANKEY]        = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_PRIMEAPE]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_GROWLITHE]     = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_ARCANINE]      = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_POLIWAG]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_POLIWHIRL]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)),

    [SPECIES_POLIWRATH]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_ABRA]          = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_KADABRA]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_ALAKAZAM]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_MACHOP]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_MACHOKE]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_MACHAMP]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_BELLSPROUT]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_WEEPINBELL]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_VICTREEBEL]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TENTACOOL]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TENTACRUEL]    = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_GEODUDE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_GRAVELER]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_GOLEM]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_PONYTA]        = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_RAPIDASH]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SLOWPOKE]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_SLOWBRO]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_MAGNEMITE]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_MAGNETON]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_FARFETCHD]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_DODUO]         = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DODRIO]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SEEL]          = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_DEWGONG]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_GRIMER]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_MUK]           = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_SHELLDER]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_CLOYSTER]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_GASTLY]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_HAUNTER]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_GENGAR]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_ONIX]          = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)),

    [SPECIES_DROWZEE]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_HYPNO]         = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_KRABBY]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_KINGLER]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_VOLTORB]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_ELECTRODE]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_EXEGGCUTE]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_EXEGGUTOR]     = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CUBONE]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MAROWAK]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_HITMONLEE]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_HITMONCHAN]    = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_LICKITUNG]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_KOFFING]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_WEEZING]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_RHYHORN]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_RHYDON]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CHANSEY]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_TANGELA]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_KANGASKHAN]    = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_HORSEA]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_SEADRA]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_GOLDEEN]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_SEAKING]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_STARYU]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_STARMIE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_MR_MIME]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_SCYTHER]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_JYNX]          = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_ELECTABUZZ]    = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_MAGMAR]        = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_PINSIR]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TAUROS]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_MAGIKARP]      = TUTOR_LEARNSET(TUTOR(MOVE_BOUNCE)),

    [SPECIES_GYARADOS]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_POWER_WHIP)),

    [SPECIES_LAPRAS]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_DITTO]         = TUTOR_LEARNSET(0),

    [SPECIES_EEVEE]         = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_VAPOREON]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_JOLTEON]       = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_FLAREON]       = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_PORYGON]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_OMANYTE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_OMASTAR]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_KABUTO]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_KABUTOPS]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_AERODACTYL]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_SNORLAX]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_ARTICUNO]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_ZAPDOS]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_MOLTRES]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_DRATINI]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_DRAGONAIR]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_DRAGONITE]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_MEWTWO]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_MEW]           = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_CHIKORITA]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BAYLEEF]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MEGANIUM]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CYNDAQUIL]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_QUILAVA]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_TYPHLOSION]    = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_TOTODILE]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CROCONAW]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_FERALIGATR]    = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SENTRET]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_FURRET]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_HOOTHOOT]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_NOCTOWL]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_LEDYBA]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_LEDIAN]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_SPINARAK]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ARIADOS]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_CROBAT]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_CHINCHOU]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_LANTURN]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_PICHU]         = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_CLEFFA]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_IGGLYBUFF]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_TOGEPI]        = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_TOGETIC]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_NATU]          = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_XATU]          = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_MAREEP]        = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_FLAAFFY]       = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_AMPHAROS]      = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_BELLOSSOM]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MARILL]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_AZUMARILL]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_SUDOWOODO]     = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_POLITOED]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_HOPPIP]        = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SKIPLOOM]      = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_JUMPLUFF]      = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_AIPOM]         = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_SUNKERN]       = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_SUNFLORA]      = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_YANMA]         = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_WOOPER]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)),

    [SPECIES_QUAGSIRE]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)),

    [SPECIES_ESPEON]        = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_UMBREON]       = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_MURKROW]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_SLOWKING]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_MISDREAVUS]    = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_UNOWN]         = TUTOR_LEARNSET(0),

    [SPECIES_WOBBUFFET]     = TUTOR_LEARNSET(0),

    [SPECIES_GIRAFARIG]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_PINECO]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_FORRETRESS]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_DUNSPARCE]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_GLIGAR]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_STEELIX]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)),

    [SPECIES_SNUBBULL]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_GRANBULL]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_QWILFISH]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SCIZOR]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SHUCKLE]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_HERACROSS]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SNEASEL]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TEDDIURSA]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_URSARING]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SLUGMA]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_MAGCARGO]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_SWINUB]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_PILOSWINE]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_CORSOLA]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_REMORAID]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_OCTILLERY]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_DELIBIRD]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)),

    [SPECIES_MANTINE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_SKARMORY]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_HOUNDOUR]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_HOUNDOOM]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_KINGDRA]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_PHANPY]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_DONPHAN]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_PORYGON2]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_STANTLER]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_SMEARGLE]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_TYROGUE]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_HITMONTOP]     = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_SMOOCHUM]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_ELEKID]        = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_MAGBY]         = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_MILTANK]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_BLISSEY]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_RAIKOU]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_ENTEI]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_SUICUNE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_LARVITAR]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_PUPITAR]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_TYRANITAR]     = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_LUGIA]         = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_HO_OH]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_CELEBI]        = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_TREECKO]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_GROVYLE]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SCEPTILE]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TORCHIC]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_COMBUSKEN]     = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BLAZIKEN]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MUDKIP]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_MARSHTOMP]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_SWAMPERT]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_POOCHYENA]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_MIGHTYENA]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_ZIGZAGOON]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_LINOONE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_WURMPLE]       = TUTOR_LEARNSET(0),

    [SPECIES_SILCOON]       = TUTOR_LEARNSET(0),

    [SPECIES_BEAUTIFLY]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_CASCOON]       = TUTOR_LEARNSET(0),

    [SPECIES_DUSTOX]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_LOTAD]         = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_LOMBRE]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_LUDICOLO]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SEEDOT]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_NUZLEAF]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_SHIFTRY]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_TAILLOW]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_SWELLOW]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_WINGULL]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_PELIPPER]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_RALTS]         = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_KIRLIA]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_GARDEVOIR]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_SURSKIT]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_MASQUERAIN]    = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_SHROOMISH]     = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BRELOOM]       = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SLAKOTH]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_VIGOROTH]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SLAKING]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_NINCADA]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_NINJASK]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_SHEDINJA]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_WHISMUR]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_LOUDRED]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_EXPLOUD]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_MAKUHITA]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_HARIYAMA]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_AZURILL]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_NOSEPASS]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_SKITTY]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_DELCATTY]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_SABLEYE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_MAWILE]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ARON]          = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_LAIRON]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_AGGRON]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_MEDITITE]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_MEDICHAM]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_ELECTRIKE]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_MANECTRIC]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_PLUSLE]        = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_MINUN]         = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_VOLBEAT]       = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_ILLUMISE]      = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_ROSELIA]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_GULPIN]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_SWALOT]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_CARVANHA]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_SHARPEDO]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_WAILMER]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_WAILORD]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_NUMEL]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_CAMERUPT]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_TORKOAL]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_SPOINK]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_GRUMPIG]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_SPINDA]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_TRAPINCH]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_VIBRAVA]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_FLYGON]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_CACNEA]        = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_CACTURNE]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_SWABLU]        = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_ALTARIA]       = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_ZANGOOSE]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SEVIPER]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_LUNATONE]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_IRON_HEAD)),

    [SPECIES_SOLROCK]       = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_IRON_HEAD)),

    [SPECIES_BARBOACH]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_WHISCASH]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_CORPHISH]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CRAWDAUNT]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_BALTOY]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_CLAYDOL]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_LILEEP]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CRADILY]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ANORITH]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ARMALDO]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_FEEBAS]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_MILOTIC]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_IRON_HEAD)),

    [SPECIES_CASTFORM]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_KECLEON]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_SHUPPET]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_BANETTE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_DUSKULL]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_DUSCLOPS]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_TROPIUS]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CHIMECHO]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_ABSOL]         = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_WYNAUT]        = TUTOR_LEARNSET(0),

    [SPECIES_SNORUNT]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_GLALIE]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)),

    [SPECIES_SPHEAL]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_SEALEO]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_WALREIN]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CLAMPERL]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_HUNTAIL]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_GOREBYSS]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_RELICANTH]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_LUVDISC]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_BAGON]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_SHELGON]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_SALAMENCE]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_BELDUM]        = TUTOR_LEARNSET(TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_METANG]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_METAGROSS]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_REGIROCK]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_REGICE]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_REGISTEEL]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_LATIAS]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_LATIOS]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_KYOGRE]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_GROUDON]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_RAYQUAZA]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_JIRACHI]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_DEOXYS]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_TURTWIG]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_GROTLE]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TORTERRA]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CHIMCHAR]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_MONFERNO]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_INFERNAPE]     = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_PIPLUP]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_PRINPLUP]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_EMPOLEON]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_STARLY]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_STARAVIA]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_STARAPTOR]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_BIDOOF]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BIBAREL]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_KRICKETOT]     = TUTOR_LEARNSET(0),

    [SPECIES_KRICKETUNE]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_SHINX]         = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_LUXIO]         = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_LUXRAY]        = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_BUDEW]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ROSERADE]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CRANIDOS]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_RAMPARDOS]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SHIELDON]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)),

    [SPECIES_BASTIODON]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)),

    [SPECIES_BURMY]         = TUTOR_LEARNSET(0),

    [SPECIES_WORMADAM]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_MOTHIM]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_COMBEE]        = TUTOR_LEARNSET(0),

    [SPECIES_VESPIQUEN]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_PACHIRISU]     = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_BUIZEL]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_FLOATZEL]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_CHERUBI]       = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_CHERRIM]       = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_SHELLOS]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_GASTRODON]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_AMBIPOM]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_DRIFLOON]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_DRIFBLIM]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_BUNEARY]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_LOPUNNY]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_MISMAGIUS]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_HONCHKROW]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_GLAMEOW]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_PURUGLY]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_CHINGLING]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_STUNKY]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_SKUNTANK]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_BRONZOR]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_BRONZONG]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_BONSLY]        = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_MIME_JR]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_HAPPINY]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_CHATOT]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_SPIRITOMB]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_GIBLE]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_GABITE]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_GARCHOMP]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MUNCHLAX]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_RIOLU]         = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_LUCARIO]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_HIPPOPOTAS]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_HIPPOWDON]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_SKORUPI]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DRAPION]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CROAGUNK]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_TOXICROAK]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_CARNIVINE]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)),

    [SPECIES_FINNEON]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_LUMINEON]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_MANTYKE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_SNOVER]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ABOMASNOW]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_WEAVILE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_MAGNEZONE]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_IRON_HEAD)),

    [SPECIES_LICKILICKY]    = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_RHYPERIOR]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TANGROWTH]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ELECTIVIRE]    = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_MAGMORTAR]     = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_TOGEKISS]      = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_YANMEGA]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_LEAFEON]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_GLACEON]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_GLISCOR]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MAMOSWINE]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_PORYGON_Z]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_GALLADE]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_PROBOPASS]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_DUSKNOIR]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_FROSLASS]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_ROTOM]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_UXIE]          = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_MESPRIT]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_AZELF]         = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_DIALGA]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_PALKIA]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_HEATRAN]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_REGIGIGAS]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_GIRATINA]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),
    
    [SPECIES_GIRATINA_ORIGIN] = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),
    
    [SPECIES_CRESSELIA]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_PHIONE]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_MANAPHY]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_DARKRAI]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_SHAYMIN]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_SHAYMIN_SKY]   = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),
    
    [SPECIES_ARCEUS]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_VICTINI]       = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_SNIVY]         = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SERVINE]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SERPERIOR]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TEPIG]         = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_PIGNITE]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_EMBOAR]        = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_OSHAWOTT]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DEWOTT]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SAMUROTT]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_PATRAT]        = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_WATCHOG]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_LILLIPUP]      = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_HERDIER]       = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_STOUTLAND]     = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_PURRLOIN]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_LIEPARD]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_PANSAGE]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),
    
    [SPECIES_SIMISAGE]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_PANSEAR]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_SIMISEAR]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_PANPOUR]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)),

    [SPECIES_SIMIPOUR]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)),

    [SPECIES_MUNNA]         = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)),

    [SPECIES_MUSHARNA]      = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)),

    [SPECIES_PIDOVE]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_TRANQUILL]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_UNFEZANT]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_BLITZLE]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_ZEBSTRIKA]     = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_ROGGENROLA]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_BOLDORE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_GIGALITH]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_WOOBAT]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_SWOOBAT]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_DRILBUR]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_EXCADRILL]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_AUDINO]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_TIMBURR]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_GURDURR]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_CONKELDURR]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_TYMPOLE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_PALPITOAD]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_POWER_WHIP)),

    [SPECIES_SEISMITOAD]    = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POWER_WHIP)),

    [SPECIES_THROH]         = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_SAWK]          = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_SEWADDLE]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_SWADLOON]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_LEAVANNY]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_VENIPEDE]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_WHIRLIPEDE]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_SCOLIPEDE]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_COTTONEE]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_WHIMSICOTT]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_PETILIL]       = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_LILLIGANT]     = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BASCULIN]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_SANDILE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_KROKOROK]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_KROOKODILE]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_DARUMAKA]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_DARMANITAN]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_MARACTUS]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_DWEBBLE]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CRUSTLE]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SCRAGGY]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_SCRAFTY]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_SIGILYPH]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_YAMASK]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_COFAGRIGUS]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_TIRTOUGA]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_CARRACOSTA]    = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_ARCHEN]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_ARCHEOPS]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_TRUBBISH]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_GARBODOR]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_ZORUA]         = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_ZOROARK]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_MINCCINO]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_CINCCINO]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_GOTHITA]       = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_GOTHORITA]     = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_GOTHITELLE]    = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_SOLOSIS]       = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_EXPANDING_FORCE)),

    [SPECIES_DUOSION]       = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_EXPANDING_FORCE)),

    [SPECIES_REUNICLUS]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_DUCKLETT]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_SWANNA]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_VANILLITE]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_VANILLISH]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_VANILLUXE]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_DEERLING]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_SAWSBUCK]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_EMOLGA]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_KARRABLAST]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ESCAVALIER]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_FOONGUS]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)),

    [SPECIES_AMOONGUSS]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_FRILLISH]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_JELLICENT]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_ALOMOMOLA]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_JOLTIK]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_GALVANTULA]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_FERROSEED]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)),

    [SPECIES_FERROTHORN]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_KLINK]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_KLANG]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_KLINKLANG]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_TYNAMO]        = TUTOR_LEARNSET(0),

    [SPECIES_EELEKTRIK]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_EELEKTROSS]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_ELGYEM]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_BEHEEYEM]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_LITWICK]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_LAMPENT]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_CHANDELURE]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_AXEW]          = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_FRAXURE]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_HAXORUS]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CUBCHOO]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_BEARTIC]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CRYOGONAL]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)),

    [SPECIES_SHELMET]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ACCELGOR]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_STUNFISK]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_MIENFOO]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MIENSHAO]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DRUDDIGON]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_GOLETT]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_GOLURK]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_PAWNIARD]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BISHARP]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BOUFFALANT]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_RUFFLET]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_BRAVIARY]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_VULLABY]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_MANDIBUZZ]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_HEATMOR]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_DURANT]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_DEINO]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_ZWEILOUS]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_HYDREIGON]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_LARVESTA]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_VOLCARONA]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_COBALION]      = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_TERRAKION]     = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_VIRIZION]      = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_TORNADUS]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_TORNADUS_THERIAN]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),
    
    [SPECIES_THUNDURUS]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_THUNDURUS_THERIAN]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_VOLT_SWITCH)),
    
    [SPECIES_RESHIRAM]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ZEKROM]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_LANDORUS]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_LANDORUS_THERIAN]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_U_TURN)),
    
    [SPECIES_KYUREM]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_KELDEO]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_MELOETTA]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_GENESECT]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_CHESPIN]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_QUILLADIN]     = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CHESNAUGHT]    = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_FENNEKIN]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_BRAIXEN]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_DELPHOX]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_FROAKIE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_FROGADIER]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_GRENINJA]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_BUNNELBY]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_DIGGERSBY]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_FLETCHLING]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_FLETCHINDER]   = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TALONFLAME]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SCATTERBUG]    = TUTOR_LEARNSET(0),

    [SPECIES_SPEWPA]        = TUTOR_LEARNSET(0),

    [SPECIES_VIVILLON]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_LITLEO]        = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_PYROAR]        = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_FLABEBE]       = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_FLOETTE]       = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_FLORGES]       = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_SKIDDO]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_GOGOAT]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_PANCHAM]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_PANGORO]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_FURFROU]       = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_ESPURR]        = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)),

    [SPECIES_MEOWSTIC]      = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_HONEDGE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DOUBLADE]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_AEGISLASH]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SPRITZEE]      = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_AROMATISSE]    = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_SWIRLIX]       = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_SLURPUFF]      = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_INKAY]         = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_MALAMAR]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_BINACLE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BARBARACLE]    = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SKRELP]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_DRAGALGE]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_CLAUNCHER]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CLAWITZER]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_HELIOPTILE]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_HELIOLISK]     = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_TYRUNT]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_TYRANTRUM]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_AMAURA]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_AURORUS]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_SYLVEON]       = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_HAWLUCHA]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DEDENNE]       = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_CARBINK]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_GOOMY]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_SLIGGOO]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_GOODRA]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_KLEFKI]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)),

    [SPECIES_PHANTUMP]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_TREVENANT]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_PUMPKABOO]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_GOURGEIST]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_BERGMITE]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_AVALUGG]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_NOIBAT]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_NOIVERN]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_XERNEAS]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_YVELTAL]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_ZYGARDE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_DIANCIE]       = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_HOOPA]         = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_VOLCANION]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ROWLET]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_DARTRIX]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_DECIDUEYE]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_LITTEN]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_TORRACAT]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_INCINEROAR]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_POPPLIO]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_BRIONNE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_PRIMARINA]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_PIKIPEK]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TRUMBEAK]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TOUCANNON]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_YUNGOOS]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_GUMSHOOS]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_GRUBBIN]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_CHARJABUG]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_VIKAVOLT]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_ROOST)),

    [SPECIES_CRABRAWLER]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_CRABOMINABLE]  = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_ORICORIO]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CUTIEFLY]      = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_RIBOMBEE]      = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_ROCKRUFF]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_LYCANROC]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_WISHIWASHI]    = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_MAREANIE]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_TOXAPEX]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_MUDBRAY]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_MUDSDALE]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_DEWPIDER]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ARAQUANID]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_FOMANTIS]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)),

    [SPECIES_LURANTIS]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)),

    [SPECIES_MORELULL]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_SHIINOTIC]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_SALANDIT]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_SALAZZLE]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_STUFFUL]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BEWEAR]        = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BOUNSWEET]     = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_STEENEE]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_TSAREENA]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_COMFEY]        = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_ORANGURU]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)),

    [SPECIES_PASSIMIAN]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_WIMPOD]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_GOLISOPOD]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SANDYGAST]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_PALOSSAND]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_PYUKUMUKU]     = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_TYPE_NULL]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SILVALLY]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MINIOR]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_KOMALA]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TURTONATOR]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_TOGEDEMARU]    = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_MIMIKYU]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BRUXISH]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DRAMPA]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_DHELMISE]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_JANGMO_O]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_HAKAMO_O]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_KOMMO_O]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TAPU_KOKO]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_TAPU_LELE]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_TAPU_BULU]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_TAPU_FINI]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_COSMOG]        = TUTOR_LEARNSET(0),

    [SPECIES_COSMOEM]       = TUTOR_LEARNSET(0),

    [SPECIES_SOLGALEO]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_LUNALA]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_NIHILEGO]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_BUZZWOLE]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_PHEROMOSA]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_XURKITREE]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)),


    [SPECIES_CELESTEELA]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_KARTANA]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_GUZZLORD]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_NECROZMA]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_MAGEARNA]      = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_MARSHADOW]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_POIPOLE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_NAGANADEL]     = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_STAKATAKA]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_BLACEPHALON]   = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_ZERAORA]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_GROOKEY]       = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_THWACKEY]      = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_RILLABOOM]     = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SCORBUNNY]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_RABOOT]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_CINDERACE]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_SOBBLE]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_DRIZZILE]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_INTELEON]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SKWOVET]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_GREEDENT]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ROOKIDEE]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_CORVISQUIRE]   = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_CORVIKNIGHT]   = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_BLIPBUG]       = TUTOR_LEARNSET(0),

    [SPECIES_DOTTLER]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)),

    [SPECIES_ORBEETLE]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)),

    [SPECIES_NICKIT]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_THIEVUL]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_GOSSIFLEUR]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_SYNTHESIS)),

    [SPECIES_ELDEGOSS]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_SYNTHESIS)),

    [SPECIES_WOOLOO]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_DUBWOOL]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CHEWTLE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_DREDNAW]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_YAMPER]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_BOLTUND]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_ROLYCOLY]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)),

    [SPECIES_CARKOL]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_COALOSSAL]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_APPLIN]        = TUTOR_LEARNSET(TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_FLAPPLE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_APPLETUN]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_SILICOBRA]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_SANDACONDA]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_CRAMORANT]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_ARROKUDA]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_BARRASKEWDA]   = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_FLIP_TURN)),

    [SPECIES_TOXEL]         = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_TOXTRICITY]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_SIZZLIPEDE]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_POWER_WHIP)),

    [SPECIES_CENTISKORCH]   = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_POWER_WHIP)),

    [SPECIES_CLOBBOPUS]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_GRAPPLOCT]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_SINISTEA]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_POLTEAGEIST]   = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_HATENNA]       = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)),

    [SPECIES_HATTREM]       = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)),

    [SPECIES_HATTERENE]     = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_IMPIDIMP]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_MORGREM]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_GRIMMSNARL]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_OBSTAGOON]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_PERRSERKER]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_CURSOLA]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_SIRFETCHD]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MR_RIME]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_RUNERIGUS]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_MILCERY]       = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ALCREMIE]      = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_FALINKS]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_PINCURCHIN]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_SNOM]          = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_FROSMOTH]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)),

    [SPECIES_STONJOURNER]   = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_EISCUE]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_INDEEDEE]      = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)),

    [SPECIES_MORPEKO]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_CUFANT]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_COPPERAJAH]    = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_DRACOZOLT]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_ARCTOZOLT]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_DRACOVISH]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_ARCTOVISH]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),

    [SPECIES_DURALUDON]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DREEPY]        = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_DRAKLOAK]      = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_DRAGAPULT]     = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_ZACIAN]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ZAMAZENTA]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ETERNATUS]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_KUBFU]         = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_URSHIFU]       = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_ZARUDE]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_REGIELEKI]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_REGIDRAGO]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_GLASTRIER]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_SPECTRIER]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)),

    [SPECIES_CALYREX]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_WYRDEER]          = TUTOR_LEARNSET(0),

    [SPECIES_KLEAVOR]          = TUTOR_LEARNSET(0),

    [SPECIES_URSALUNA]          = TUTOR_LEARNSET(0),

    [SPECIES_BASCULEGION]          = TUTOR_LEARNSET(0),

    [SPECIES_SNEASLER]          = TUTOR_LEARNSET(0),

    [SPECIES_OVERQWIL]          = TUTOR_LEARNSET(0),

    [SPECIES_ENAMORUS]          = TUTOR_LEARNSET(0),

    [SPECIES_RATTATA_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),
    
    [SPECIES_RATICATE_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),
    
    [SPECIES_RAICHU_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),
    
    [SPECIES_SANDSHREW_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SWORDS_DANCE)),
    
    [SPECIES_SANDSLASH_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SWORDS_DANCE)),
    
    [SPECIES_VULPIX_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)),
    
    [SPECIES_NINETALES_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_NASTY_PLOT)),
    
    [SPECIES_DIGLETT_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)),
    
    [SPECIES_DUGTRIO_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_IRON_HEAD)),
    
    [SPECIES_MEOWTH_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),
    
    [SPECIES_PERSIAN_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),
    
    [SPECIES_GEODUDE_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)),
    
    [SPECIES_GRAVELER_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_SUPERPOWER)),
    
    [SPECIES_GOLEM_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),
    
    [SPECIES_GRIMER_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)),
    
    [SPECIES_MUK_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)),
    
    [SPECIES_EXEGGUTOR_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),
    
    [SPECIES_MAROWAK_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MEOWTH_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_PONYTA_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)),

    [SPECIES_RAPIDASH_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SLOWPOKE_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_SLOWBRO_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_FARFETCHD_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_WEEZING_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_MR_MIME_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_ARTICUNO_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_ZAPDOS_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_MOLTRES_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_SLOWKING_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_CORSOLA_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)),

    [SPECIES_ZIGZAGOON_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_LINOONE_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_GRASS_KNOT)),

    [SPECIES_DARUMAKA_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_DARMANITAN_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_YAMASK_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_STUNFISK_GALARIAN]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_BOUNCE)),

    [SPECIES_GROWLITHE_HISUIAN]     = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_ARCANINE_HISUIAN]      = TUTOR_LEARNSET(TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_VOLTORB_HISUIAN]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_ELECTRODE_HISUIAN]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_TYPHLOSION_HISUIAN]    = TUTOR_LEARNSET(TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_HEAT_WAVE)),

    [SPECIES_QWILFISH_HISUIAN]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SNEASEL_HISUIAN]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SAMUROTT_HISUIAN]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FLIP_TURN)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SUPERPOWER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_LILLIGANT_HISUIAN]     = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ZORUA_HISUIAN]         = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_ZOROARK_HISUIAN]       = TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_LOW_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_BOUNCE)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_BRAVIARY_HISUIAN]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_HEAT_WAVE)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_SLIGGOO_HISUIAN]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_DRACO_METEOR)),

    [SPECIES_GOODRA_HISUIAN]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_DRACO_METEOR)
                                            | TUTOR(MOVE_POWER_WHIP)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_AVALUGG_HISUIAN]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_IRON_HEAD)
                                            | TUTOR(MOVE_SUPERPOWER)),

    [SPECIES_DECIDUEYE_HISUIAN]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_U_TURN)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_ROOST)
                                            | TUTOR(MOVE_SYNTHESIS)
                                            | TUTOR(MOVE_TAILWIND)
                                            | TUTOR(MOVE_GRASS_KNOT)
                                            | TUTOR(MOVE_POLTERGEIST)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_BURMY_SANDY_CLOAK]   = TUTOR_LEARNSET(0),

    [SPECIES_BURMY_TRASH_CLOAK]   = TUTOR_LEARNSET(0),

    [SPECIES_WORMADAM_SANDY_CLOAK]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_WORMADAM_TRASH_CLOAK]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_STEALTH_ROCK)),

    [SPECIES_ROTOM_HEAT]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_ROTOM_WASH]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_ROTOM_FROST]   = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_ROTOM_FAN]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_ROTOM_MOW]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_VOLT_SWITCH)
                                            | TUTOR(MOVE_DEFOG)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_POLTERGEIST)),

    [SPECIES_KYUREM_BLACK]  = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_KYUREM_WHITE]  = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_MEOWSTIC_FEMALE]    = TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)
                                            | TUTOR(MOVE_NASTY_PLOT)),

    [SPECIES_TOXTRICITY_LOW_KEY]= TUTOR_LEARNSET(TUTOR(MOVE_KNOCK_OFF)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_VOLT_SWITCH)),

    [SPECIES_SINISTEA_ANTIQUE]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_POLTEAGEIST_ANTIQUE]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_PAIN_SPLIT)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_ALCREMIE_RUBY_CREAM]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ALCREMIE_MATCHA_CREAM]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ALCREMIE_MINT_CREAM]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ALCREMIE_LEMON_CREAM]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ALCREMIE_SALTED_CREAM]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ALCREMIE_RUBY_SWIRL]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ALCREMIE_CARAMEL_SWIRL]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ALCREMIE_RAINBOW_SWIRL]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_INDEEDEE_FEMALE]= TUTOR_LEARNSET(TUTOR(MOVE_HEAL_BELL)
                                            | TUTOR(MOVE_HELPING_HAND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TRICK)
                                            | TUTOR(MOVE_ZEN_HEADBUTT)
                                            | TUTOR(MOVE_EXPANDING_FORCE)),

    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE]= TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_ZARUDE_DADA]   = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_U_TURN)),

    [SPECIES_CALYREX_ICE_RIDER]= TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_TRICK)),

    [SPECIES_CALYREX_SHADOW_RIDER]= TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_TAUNT)
                                            | TUTOR(MOVE_TRICK)),
};
