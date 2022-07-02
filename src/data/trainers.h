const struct Trainer gTrainers[] = {
    [TRAINER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_LELOUCH,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = 0,
        .party = {.TrainerMon = NULL},
    },

    [TRAINER_NINA] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Nina"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nina),
        .party = {.TrainerMon = sParty_Nina},
        .shouldShuffle = TRUE,
    },

    [TRAINER_MARIAM] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Mariam"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Mariam),
        .party = {.TrainerMon = sParty_Mariam},
        .shouldShuffle = TRUE,
    },

    [TRAINER_OSCAR] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Oscar"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Oscar),
        .party = {.TrainerMon = sParty_Oscar},
        .shouldShuffle = TRUE,
    },

    [TRAINER_COREY_LEVIATHAN_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Corey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_CoreyDefault),
        .party = {.TrainerMon = sParty_CoreyDefault},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_COREY_LEVIATHAN_1_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Corey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_CoreyBrutal),
        .party = {.TrainerMon = sParty_CoreyBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_HARPER] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Harper"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Harper),
        .party = {.TrainerMon = sParty_Harper},
        .shouldShuffle = TRUE,
    },

    [TRAINER_POLLY] =
    {
        .trainerClass = TRAINER_CLASS_FAIRY_TALE_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_FAIRY_TALE_GIRL,
        .trainerName = _("Polly"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Polly),
        .party = {.TrainerMon = sParty_Polly},
        .shouldShuffle = TRUE,
    },

    [TRAINER_JEREMIAH] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Jeremiah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jeremiah),
        .party = {.TrainerMon = sParty_Jeremiah},
        .shouldShuffle = TRUE,
    },

    [TRAINER_ARTHUR] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Arthur"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Arthur),
        .party = {.TrainerMon = sParty_Arthur},
        .shouldShuffle = TRUE,
    },

    [TRAINER_JOEY_LEVIATHAN_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Joey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STRONGEST_MOVE,
        .partySize = ARRAY_COUNT(sParty_JoeyDefault),
        .party = {.TrainerMon = sParty_JoeyDefault},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },
    
    [TRAINER_JOEY_LEVIATHAN_2_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Joey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_JoeyBrutal),
        .party = {.TrainerMon = sParty_JoeyBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_JEMMA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Jemma"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jemma),
        .party = {.TrainerMon = sParty_Jemma},
        .shouldShuffle = TRUE,
    },

    [TRAINER_PATRICK] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Patrick"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Patrick),
        .party = {.TrainerMon = sParty_Patrick},
        .shouldShuffle = TRUE,
    },

    [TRAINER_BORIS] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Boris"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Boris),
        .party = {.TrainerMon = sParty_Boris},
        .shouldShuffle = TRUE,
    },

    [TRAINER_ANNABELLE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Annabelle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Annabelle),
        .party = {.TrainerMon = sParty_Annabelle},
        .shouldShuffle = TRUE,
    },

    [TRAINER_RICHARD] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Richard"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Richard),
        .party = {.TrainerMon = sParty_Richard},
        .shouldShuffle = TRUE,
    },

    [TRAINER_PHILLIPA_LEVIATHAN_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Phillipa"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STRONGEST_MOVE,
        .partySize = ARRAY_COUNT(sParty_PhillipaDefault),
        .party = {.TrainerMon = sParty_PhillipaDefault},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
        .shouldShuffle = TRUE,
    },

    [TRAINER_PHILLIPA_LEVIATHAN_3_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Phillipa"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_PhillipaBrutal),
        .party = {.TrainerMon = sParty_PhillipaBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
        .shouldShuffle = TRUE,
    },

    [TRAINER_HERMAN] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Herman"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Herman),
        .party = {.TrainerMon = sParty_Herman},
        .shouldShuffle = TRUE,
    },

    [TRAINER_RALPH] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Ralph"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ralph),
        .party = {.TrainerMon = sParty_Ralph},
        .shouldShuffle = TRUE,
    },
    
    [TRAINER_SANTIAGO] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Santiago"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Santiago),
        .party = {.TrainerMon = sParty_Santiago},
        .shouldShuffle = TRUE,
    },

    [TRAINER_CHLOE_AND_KAYA] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Chloe&Kaya"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ChloeAndKaya),
        .party = {.TrainerMon = sParty_ChloeAndKaya},
        .shouldShuffle = TRUE,
    },

    [TRAINER_LUCIA] =
    {
        .trainerClass = TRAINER_CLASS_FAIRY_TALE_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_FAIRY_TALE_GIRL,
        .trainerName = _("Lucia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lucia),
        .party = {.TrainerMon = sParty_Lucia},
        .shouldShuffle = TRUE,
    },

    [TRAINER_FRED] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Fred"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Fred),
        .party = {.TrainerMon = sParty_Fred},
        .shouldShuffle = TRUE,
    },

    [TRAINER_RITA_LEVIATHAN_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Rita"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STRONGEST_MOVE,
        .partySize = ARRAY_COUNT(sParty_RitaDefault),
        .party = {.TrainerMon = sParty_RitaDefault},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_RITA_LEVIATHAN_4_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Rita"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_RitaBrutal),
        .party = {.TrainerMon = sParty_RitaBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_ANNE_AND_JUNE] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Anne&June"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AnneAndJune),
        .party = {.TrainerMon = sParty_AnneAndJune},
        .shouldShuffle = TRUE,
    },

    [TRAINER_GILBERT] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Gilbert"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Gilbert),
        .party = {.TrainerMon = sParty_Gilbert},
        .shouldShuffle = TRUE,
    },

    [TRAINER_REBECCA] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Rebecca"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Rebecca),
        .party = {.TrainerMon = sParty_Rebecca},
        .shouldShuffle = TRUE,
    },

    [TRAINER_CAITLYN] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Caitlyn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Caitlyn),
        .party = {.TrainerMon = sParty_Caitlyn},
        .shouldShuffle = TRUE,
    },

    [TRAINER_RYAN] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Ryan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Ryan),
        .party = {.TrainerMon = sParty_Ryan},
        .shouldShuffle = TRUE,
    },

    [TRAINER_KEVIN] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Kevin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Kevin),
        .party = {.TrainerMon = sParty_Kevin},
        .shouldShuffle = TRUE,
    },

    [TRAINER_DECLAN_LEVIATHAN_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Declan"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_Declan),
        .party = {.TrainerMon = sParty_Declan},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_LELOUCHEXP1] =
    {
        .trainerClass = TRAINER_CLASS_LELOUCH,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Lelouch"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_LelouchExp1),
        .party = {.TrainerMon = sParty_LelouchExp1},
    },

    [TRAINER_RONAN] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Ronan"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Ronan),
        .party = {.TrainerMon = sParty_Ronan},
        .shouldShuffle = TRUE,
    },

    [TRAINER_MELANIE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Melanie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Melanie),
        .party = {.TrainerMon = sParty_Melanie},
        .shouldShuffle = TRUE,
    },

    [TRAINER_CONSTANCE] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Constance"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Constance),
        .party = {.TrainerMon = sParty_Constance},
        .shouldShuffle = TRUE,
    },

    [TRAINER_FRANK] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Frank"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Frank),
        .party = {.TrainerMon = sParty_Frank},
        .shouldShuffle = TRUE,
    },

    [TRAINER_DUDLEY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Dudley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Dudley),
        .party = {.TrainerMon = sParty_Dudley},
        .shouldShuffle = TRUE,
    },

    [TRAINER_DAISY] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Daisy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Daisy),
        .party = {.TrainerMon = sParty_Daisy},
        .shouldShuffle = TRUE,
    },

    [TRAINER_ZACK_LEVIATHAN_6] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Zack"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ZackDefault),
        .party = {.TrainerMon = sParty_ZackDefault},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_ZACK_LEVIATHAN_6_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Zack"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ZackBrutal),
        .party = {.TrainerMon = sParty_ZackBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_MILLIE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Millie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Millie),
        .party = {.TrainerMon = sParty_Millie},
        .shouldShuffle = TRUE,
    },

    [TRAINER_JAMAL] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Jamal"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Jamal),
        .party = {.TrainerMon = sParty_Jamal},
        .shouldShuffle = TRUE,
    },

    [TRAINER_PAIGE] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Paige"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Paige),
        .party = {.TrainerMon = sParty_Paige},
        .shouldShuffle = TRUE,
    },

    [TRAINER_SETH] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Seth"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Seth),
        .party = {.TrainerMon = sParty_Seth},
        .shouldShuffle = TRUE,
    },

    [TRAINER_CONNIE] =
    {
        .trainerClass = TRAINER_CLASS_BACKPACKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .trainerName = _("Connie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Connie),
        .party = {.TrainerMon = sParty_Connie},
        .shouldShuffle = TRUE,
    },

    [TRAINER_CHAD] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Chad"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Chad),
        .party = {.TrainerMon = sParty_Chad},
        .shouldShuffle = TRUE,
    },

    [TRAINER_BETTY_LEVIATHAN_7] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_SOCIALITE,
        .trainerName = _("Betty"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_BettyDefault),
        .party = {.TrainerMon = sParty_BettyDefault},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_BETTY_LEVIATHAN_7_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_SOCIALITE,
        .trainerName = _("Betty"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_BettyBrutal),
        .party = {.TrainerMon = sParty_BettyBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_JIMMY] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Jimmy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Jimmy),
        .party = {.TrainerMon = sParty_Jimmy},
        .shouldShuffle = TRUE,
    },

    [TRAINER_EMILIANO] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Emiliano"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Emiliano),
        .party = {.TrainerMon = sParty_Emiliano},
        .shouldShuffle = TRUE,
    },

    [TRAINER_MARCUS] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Marcus"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Marcus),
        .party = {.TrainerMon = sParty_Marcus},
        .shouldShuffle = TRUE,
    },

    [TRAINER_KAREN] =
    {
        .trainerClass = TRAINER_CLASS_BACKPACKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .trainerName = _("Karen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Karen),
        .party = {.TrainerMon = sParty_Karen},
        .shouldShuffle = TRUE,
    },

    [TRAINER_JAYDEN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Jayden"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Jayden),
        .party = {.TrainerMon = sParty_Jayden},
        .shouldShuffle = TRUE,
    },

    [TRAINER_NEIL] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Neil"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Neil),
        .party = {.TrainerMon = sParty_Neil},
        .shouldShuffle = TRUE,
    },

    [TRAINER_TAMARA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Tamara"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Tamara),
        .party = {.TrainerMon = sParty_Tamara},
        .shouldShuffle = TRUE,
    },

    [TRAINER_MIRAGE_LEVIATHAN_8] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .trainerName = _("Mirage"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_Zone8DMirage),
        .party = {.TrainerMon = sParty_Zone8DMirage},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_MIRAGE_LEVIATHAN_8_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .trainerName = _("Mirage"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_Zone8DMirageBrutal),
        .party = {.TrainerMon = sParty_Zone8DMirageBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_WALLY_ZONE8D] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("Wally"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_Zone8DWally),
        .party = {.TrainerMon = sParty_Zone8DWally},
    },

    [TRAINER_ARI] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Ari"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Ari),
        .party = {.TrainerMon = sParty_Ari},
    },

    [TRAINER_BERTHA] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Bertha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Bertha),
        .party = {.TrainerMon = sParty_Bertha},
    },

    [TRAINER_CASSANDRA] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Cassandra"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Cassandra),
        .party = {.TrainerMon = sParty_Cassandra},
    },

    [TRAINER_DOMINIC] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Dominic"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Dominic),
        .party = {.TrainerMon = sParty_Dominic},
    },

    [TRAINER_ERICA] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Erica"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Erica),
        .party = {.TrainerMon = sParty_Erica},
    },

    [TRAINER_KYLE] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Kyle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Kyle),
        .party = {.TrainerMon = sParty_Kyle},
    },

    [TRAINER_CRYSTAL] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Crystal"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Crystal),
        .party = {.TrainerMon = sParty_Crystal},
    },

    [TRAINER_BELLE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Belle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Belle),
        .party = {.TrainerMon = sParty_Belle},
    },

    [TRAINER_DEWEY] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Dewey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Dewey),
        .party = {.TrainerMon = sParty_Dewey},
    },

    [TRAINER_PEARLIE] =
    {
        .trainerClass = TRAINER_CLASS_BACKPACKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .trainerName = _("Pearlie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Pearlie),
        .party = {.TrainerMon = sParty_Pearlie},
    },

    [TRAINER_RAPHAEL] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Raphael"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Raphael),
        .party = {.TrainerMon = sParty_Raphael},
    },

    [TRAINER_ERNEST] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Ernest"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Ernest),
        .party = {.TrainerMon = sParty_Ernest},
    },

    [TRAINER_ALANA] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Alana"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Alana),
        .party = {.TrainerMon = sParty_Alana},
    },

    [TRAINER_SUSAN] =
    {
        .trainerClass = TRAINER_CLASS_BACKPACKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .trainerName = _("Susan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Susan),
        .party = {.TrainerMon = sParty_Susan},
        .shouldShuffle = TRUE,
    },

    [TRAINER_CONRAD] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Conrad"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Conrad),
        .party = {.TrainerMon = sParty_Conrad},
    },

    [TRAINER_ADAMINA_LEVIATHAN_10] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Adamina"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_AdaminaDefault),
        .party = {.TrainerMon = sParty_AdaminaDefault},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_ADAMINA_LEVIATHAN_10_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Adamina"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_AdaminaBrutal),
        .party = {.TrainerMon = sParty_AdaminaBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_JEANETTE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Jeanette"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Jeanette),
        .party = {.TrainerMon = sParty_Jeanette},
    },

    [TRAINER_REGINA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Regina"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Regina),
        .party = {.TrainerMon = sParty_Regina},
    },

    [TRAINER_EMMA_AND_LEO] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Emma & Leo"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_EmmaAndLeo),
        .party = {.TrainerMon = sParty_EmmaAndLeo},
    },

    [TRAINER_JOEL] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Joel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Joel),
        .party = {.TrainerMon = sParty_Joel},
    },

    [TRAINER_LEVIATHAN6] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Jake"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_Jake),
        .party = {.TrainerMon = sParty_Jake},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_DOLORES] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Lydia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Dolores),
        .party = {.TrainerMon = sParty_Dolores},
    },

    [TRAINER_ESSENCE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Essence"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Essence),
        .party = {.TrainerMon = sParty_Essence},
    },

    [TRAINER_RANDOLPH] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Randolph"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Randolph),
        .party = {.TrainerMon = sParty_Randolph},
    },

    [TRAINER_HILDA] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Hilda"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Hilda),
        .party = {.TrainerMon = sParty_Hilda},
    },

    [TRAINER_GENIE] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("Genie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Genie),
        .party = {.TrainerMon = sParty_Genie},
    },

    [TRAINER_KINLEY] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Kinley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Kinley),
        .party = {.TrainerMon = sParty_Kinley},
    },

    [TRAINER_JAN_AND_ERIN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Jan & Erin"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_JanAndErin),
        .party = {.TrainerMon = sParty_JanAndErin},
    },

    [TRAINER_AMBER_AND_KIM] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Amber&Kim"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_AmberAndKim),
        .party = {.TrainerMon = sParty_AmberAndKim},
    },

    [TRAINER_LEVIATHAN7] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Kaizen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_KaizenBulkUp),
        .party = {.TrainerMon = sParty_KaizenBulkUp},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_LEVIATHAN8] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Kaizen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_KaizenCalmMind),
        .party = {.TrainerMon = sParty_KaizenCalmMind},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_BART] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Bart"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Bart),
        .party = {.TrainerMon = sParty_Bart},
    },

    [TRAINER_LOLA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Lola"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Lola),
        .party = {.TrainerMon = sParty_Lola},
    },

    [TRAINER_TODD] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Todd"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Todd),
        .party = {.TrainerMon = sParty_Todd},
    },

    [TRAINER_CHARLIE] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Charlie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Charlie),
        .party = {.TrainerMon = sParty_Charlie},
    },

    [TRAINER_LEVIATHAN9] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .trainerName = _("Mirage"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_Zone14CMirage),
        .party = {.TrainerMon = sParty_Zone14CMirage},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_LELOUCHEXP2] =
    {
        .trainerClass = TRAINER_CLASS_LELOUCH,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Lelouch"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LelouchExp2),
        .party = {.TrainerMon = sParty_LelouchExp2},
    },

    [TRAINER_ANGUS] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Angus"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Angus),
        .party = {.TrainerMon = sParty_Angus},
    },

    [TRAINER_HOMER] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Homer"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Homer),
        .party = {.TrainerMon = sParty_Homer},
    },

    [TRAINER_IONA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Iona"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Iona),
        .party = {.TrainerMon = sParty_Iona},
    },

    [TRAINER_TANISHA] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Tanisha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Tanisha),
        .party = {.TrainerMon = sParty_Tanisha},
    },

    [TRAINER_RAFAEL] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Rafael"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Rafael),
        .party = {.TrainerMon = sParty_Rafael},
    },

    [TRAINER_OTIS] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Otis"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Otis),
        .party = {.TrainerMon = sParty_Otis},
    },

    [TRAINER_BERKE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Berke"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Berke),
        .party = {.TrainerMon = sParty_Berke},
    },

    [TRAINER_GEORGINA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Georgina"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Georgina),
        .party = {.TrainerMon = sParty_Georgina},
    },

    [TRAINER_RUSSELL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Russell"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Russell),
        .party = {.TrainerMon = sParty_Russell},
    },

    [TRAINER_LEVIATHAN10] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Sophia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_Sophia),
        .party = {.TrainerMon = sParty_Sophia},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_MARION] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Marion"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Marion),
        .party = {.TrainerMon = sParty_Marion},
    },

    [TRAINER_CLINTON] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Clinton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Clinton),
        .party = {.TrainerMon = sParty_Clinton},
    },

    [TRAINER_KENNETH] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Kenneth"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Kenneth),
        .party = {.TrainerMon = sParty_Kenneth},
    },

    [TRAINER_JAY] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Jay"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Jay),
        .party = {.TrainerMon = sParty_Jay},
    },

    [TRAINER_BLANCHE] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Blanche"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Blanche),
        .party = {.TrainerMon = sParty_Blanche},
    },

    [TRAINER_TERRENCE] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Terrence"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Terrence),
        .party = {.TrainerMon = sParty_Terrence},
    },

    [TRAINER_MARTY] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Marty"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Marty),
        .party = {.TrainerMon = sParty_Marty},
    },

    [TRAINER_KARI] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Kari"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Kari),
        .party = {.TrainerMon = sParty_Kari},
    },

    [TRAINER_ABRAHAM] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Abraham"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Abraham),
        .party = {.TrainerMon = sParty_Abraham},
    },

    [TRAINER_REX] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Rex"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Rex),
        .party = {.TrainerMon = sParty_Rex},
    },

    [TRAINER_EMILIO] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Emilio"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Emilio),
        .party = {.TrainerMon = sParty_Emilio},
    },

    [TRAINER_MELINDA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Melinda"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Melinda),
        .party = {.TrainerMon = sParty_Melinda},
    },

    [TRAINER_LOUIS] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Louis"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Louis),
        .party = {.TrainerMon = sParty_Louis},
    },

    [TRAINER_DESIREE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Desiree"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_Desiree),
        .party = {.TrainerMon = sParty_Desiree},
    },

    [TRAINER_ANITA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Anita"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_Anita),
        .party = {.TrainerMon = sParty_Anita},
    },

    [TRAINER_WILLIE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Willie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_Willie),
        .party = {.TrainerMon = sParty_Willie},
    },

    [TRAINER_DORIS] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Doris"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Doris),
        .party = {.TrainerMon = sParty_Doris},
    },

    [TRAINER_PIRATE_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Gunner"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Pirate1),
        .party = {.TrainerMon = sParty_Pirate1},
    },

    [TRAINER_PIRATE_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Swab"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Pirate2),
        .party = {.TrainerMon = sParty_Pirate2},
    },
    
    [TRAINER_PIRATE_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Lackey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Pirate3),
        .party = {.TrainerMon = sParty_Pirate3},
    },
    
    [TRAINER_PIRATE_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Cabin Boy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Pirate4),
        .party = {.TrainerMon = sParty_Pirate4},
    },
    
    [TRAINER_LEVIATHAN11] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Odysseus"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_Odysseus),
        .party = {.TrainerMon = sParty_Odysseus},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_LEVIATHAN12] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Julie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_Julie),
        .party = {.TrainerMon = sParty_Julie},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_LELOUCHEXP3] =
    {
        .trainerClass = TRAINER_CLASS_LELOUCH,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Lelouch"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LelouchExp3),
        .party = {.TrainerMon = sParty_LelouchExp3},
    },

    [TRAINER_LELOUCHEVHP] =
    {
        .trainerClass = TRAINER_CLASS_LELOUCH,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Lelouch"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LelouchEVHP),
        .party = {.TrainerMon = sParty_LelouchEVHP},
    },

    [TRAINER_LELOUCHEVATK] =
    {
        .trainerClass = TRAINER_CLASS_LELOUCH,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Lelouch"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LelouchEVAttack),
        .party = {.TrainerMon = sParty_LelouchEVAttack},
    },

    [TRAINER_LELOUCHEVDEF] =
    {
        .trainerClass = TRAINER_CLASS_LELOUCH,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Lelouch"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LelouchEVDefense),
        .party = {.TrainerMon = sParty_LelouchEVDefense},
    },

    [TRAINER_LELOUCHEVSPA] =
    {
        .trainerClass = TRAINER_CLASS_LELOUCH,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Lelouch"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LelouchEVSpecialAttack),
        .party = {.TrainerMon = sParty_LelouchEVSpecialAttack},
    },

    [TRAINER_LELOUCHEVSPD] =
    {
        .trainerClass = TRAINER_CLASS_LELOUCH,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Lelouch"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LelouchEVSpecialDefense),
        .party = {.TrainerMon = sParty_LelouchEVSpecialDefense},
    },

    [TRAINER_LELOUCHEVSPE] =
    {
        .trainerClass = TRAINER_CLASS_LELOUCH,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Lelouch"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LelouchEVSpeed),
        .party = {.TrainerMon = sParty_LelouchEVSpeed},
    },

    [TRAINER_HOWARD] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Howard"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Howard),
        .party = {.TrainerMon = sParty_Howard},
    },

    [TRAINER_ELOISE] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Eloise"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Eloise),
        .party = {.TrainerMon = sParty_Eloise},
    },

    [TRAINER_ALLY_AND_EMMY] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Ally&Emmy"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_AllyAndEmmy),
        .party = {.TrainerMon = sParty_AllyAndEmmy},
    },

    [TRAINER_AMIR] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Amir"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Amir),
        .party = {.TrainerMon = sParty_Amir},
    },

    [TRAINER_GETHIN] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Gethin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Gethin),
        .party = {.TrainerMon = sParty_Gethin},
    },

    [TRAINER_BERNARD] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Bernard"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Bernard),
        .party = {.TrainerMon = sParty_Bernard},
    },

    [TRAINER_ELLIE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Ellie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Ellie),
        .party = {.TrainerMon = sParty_Ellie},
    },

    [TRAINER_RUSTY] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Rusty"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Rusty),
        .party = {.TrainerMon = sParty_Rusty},
    },

    [TRAINER_CODY] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Cody"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Cody),
        .party = {.TrainerMon = sParty_Cody},
    },

    [TRAINER_LEWIS] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Lewis"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Lewis),
        .party = {.TrainerMon = sParty_Lewis},
    },

    [TRAINER_CORNELIUS] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Cornelius"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Cornelius),
        .party = {.TrainerMon = sParty_Cornelius},
    },

    [TRAINER_INEZ_AND_EMMA] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Inez & Emma"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_InezAndEmma),
        .party = {.TrainerMon = sParty_InezAndEmma},
    },

    [TRAINER_HELEN] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Helen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Helen),
        .party = {.TrainerMon = sParty_Helen},
    },

    [TRAINER_WESLEY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Wesley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Wesley),
        .party = {.TrainerMon = sParty_Wesley},
    },

    [TRAINER_ALFREDO] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Alfredo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Alfredo),
        .party = {.TrainerMon = sParty_Alfredo},
    },

    [TRAINER_IAN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ian"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Ian),
        .party = {.TrainerMon = sParty_Ian},
    },

    [TRAINER_AUDREY] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Audrey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Audrey),
        .party = {.TrainerMon = sParty_Audrey},
    },

    
    [TRAINER_LEVIATHAN13] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Cam & Pam"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_CamAndPam),
        .party = {.TrainerMon = sParty_CamAndPam},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_EDGARDO] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Edgardo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Edgardo),
        .party = {.TrainerMon = sParty_Edgardo},
    },

    [TRAINER_JEAN] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Jean"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Jean),
        .party = {.TrainerMon = sParty_Jean},
    },

    [TRAINER_ROSE] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Rose"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Rose),
        .party = {.TrainerMon = sParty_Rose},
    },

    [TRAINER_JENNIFER] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Jennifer"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Jennifer),
        .party = {.TrainerMon = sParty_Jennifer},
    },

    [TRAINER_MATTHEW] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Matthew"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Matthew),
        .party = {.TrainerMon = sParty_Matthew},
    },

    [TRAINER_KERRY] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Kerry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Kerry),
        .party = {.TrainerMon = sParty_Kerry},
    },

    [TRAINER_ANNIE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Annie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Annie),
        .party = {.TrainerMon = sParty_Annie},
    },

    [TRAINER_CHRISTI] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Christi"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Christi),
        .party = {.TrainerMon = sParty_Christi},
    },

    [TRAINER_SPENCER] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Spencer"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Spencer),
        .party = {.TrainerMon = sParty_Spencer},
    },

    [TRAINER_HAYWOOD] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Haywood"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Haywood),
        .party = {.TrainerMon = sParty_Haywood},
    },

    [TRAINER_MONROE] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Monroe"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Monroe),
        .party = {.TrainerMon = sParty_Monroe},
    },

    [TRAINER_DAVID] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("David"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_David),
        .party = {.TrainerMon = sParty_David},
    },

    [TRAINER_DOMINIK] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Dominik"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Dominik),
        .party = {.TrainerMon = sParty_Dominik},
    },

    [TRAINER_DOUGLAS] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Douglas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Douglas),
        .party = {.TrainerMon = sParty_Douglas},
    },

    [TRAINER_NADINE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Nadine"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Nadine),
        .party = {.TrainerMon = sParty_Nadine},
    },

    [TRAINER_SANDY] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Sandy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Sandy),
        .party = {.TrainerMon = sParty_Sandy},
    },

    [TRAINER_SHELDON] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Sheldon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Sheldon),
        .party = {.TrainerMon = sParty_Sheldon},
    },

    [TRAINER_LEVIATHAN14] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_MIRAGES,
        .trainerName = _("Mirages"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_Zone25LMirages),
        .party = {.TrainerMon = sParty_Zone25LMirages},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_LELOUCHEXP4] =
    {
        .trainerClass = TRAINER_CLASS_LELOUCH,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Lelouch"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LelouchExp4),
        .party = {.TrainerMon = sParty_LelouchExp4},
    },

    [TRAINER_LEVIATHAN6_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Jake"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_JakeBrutal),
        .party = {.TrainerMon = sParty_JakeBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_LEVIATHAN7_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Kaizen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_KaizenBulkUpBrutal),
        .party = {.TrainerMon = sParty_KaizenBulkUpBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_LEVIATHAN8_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Kaizen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_KaizenCalmMindBrutal),
        .party = {.TrainerMon = sParty_KaizenCalmMindBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_LEVIATHAN9_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .trainerName = _("Mirage"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_Zone14CMirageBrutal),
        .party = {.TrainerMon = sParty_Zone14CMirageBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_LEVIATHAN10_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Sophia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_SophiaBrutal),
        .party = {.TrainerMon = sParty_SophiaBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_LEVIATHAN11_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Odysseus"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_OdysseusBrutal),
        .party = {.TrainerMon = sParty_OdysseusBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_LEVIATHAN12_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Julie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_JulieBrutal),
        .party = {.TrainerMon = sParty_JulieBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

    [TRAINER_LEVIATHAN13_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Cam & Pam"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_CamAndPamBrutal),
        .party = {.TrainerMon = sParty_CamAndPamBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },
    
    [TRAINER_LEVIATHAN14_BRUTAL] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_MIRAGES,
        .trainerName = _("Mirages"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_KNOWLEDGABLE,
        .partySize = ARRAY_COUNT(sParty_Zone25LMiragesBrutal),
        .party = {.TrainerMon = sParty_Zone25LMiragesBrutal},
        .hasCustomTransition = TRUE,
        .transition = B_TRANSITION_MUGSHOT,
    },

};
