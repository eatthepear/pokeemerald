const u16 *const gFormSpeciesIdTables[NUM_SPECIES] =
{
#if P_NEW_POKEMON == TRUE
    [SPECIES_VENUSAUR] = sVenusaurFormSpeciesIdTable,
    [SPECIES_CHARIZARD] = sCharizardFormSpeciesIdTable,
    [SPECIES_BLASTOISE] = sBlastoiseFormSpeciesIdTable,
    [SPECIES_BEEDRILL] = sBeedrillFormSpeciesIdTable,
    [SPECIES_PIDGEOT] = sPidgeotFormSpeciesIdTable,
    [SPECIES_RATTATA] = sRattataFormSpeciesIdTable,
    [SPECIES_RATICATE] = sRaticateFormSpeciesIdTable,
    [SPECIES_PIKACHU] = sPikachuFormSpeciesIdTable,
    [SPECIES_RAICHU] = sRaichuFormSpeciesIdTable,
    [SPECIES_SANDSHREW] = sSandshrewFormSpeciesIdTable,
    [SPECIES_SANDSLASH] = sSandslashFormSpeciesIdTable,
    [SPECIES_VULPIX] = sVulpixFormSpeciesIdTable,
    [SPECIES_NINETALES] = sNinetalesFormSpeciesIdTable,
    [SPECIES_DIGLETT] = sDiglettFormSpeciesIdTable,
    [SPECIES_DUGTRIO] = sDugtrioFormSpeciesIdTable,
    [SPECIES_MEOWTH] = sMeowthFormSpeciesIdTable,
    [SPECIES_PERSIAN] = sPersianFormSpeciesIdTable,
    [SPECIES_ALAKAZAM] = sAlakazamFormSpeciesIdTable,
    [SPECIES_GROWLITHE] = sGrowlitheFormSpeciesIdTable,
    [SPECIES_ARCANINE] = sArcanineFormSpeciesIdTable,
    [SPECIES_GEODUDE] = sGeodudeFormSpeciesIdTable,
    [SPECIES_GRAVELER] = sGravelerFormSpeciesIdTable,
    [SPECIES_GOLEM] = sGolemFormSpeciesIdTable,
    [SPECIES_PONYTA] = sPonytaFormSpeciesIdTable,
    [SPECIES_RAPIDASH] = sRapidashFormSpeciesIdTable,
    [SPECIES_SLOWPOKE] = sSlowpokeFormSpeciesIdTable,
    [SPECIES_SLOWBRO] = sSlowbroFormSpeciesIdTable,
    [SPECIES_FARFETCHD] = sFarfetchdFormSpeciesIdTable,
    [SPECIES_GRIMER] = sGrimerFormSpeciesIdTable,
    [SPECIES_MUK] = sMukFormSpeciesIdTable,
    [SPECIES_GENGAR] = sGengarFormSpeciesIdTable,
    [SPECIES_VOLTORB] = sVoltorbFormSpeciesIdTable,
    [SPECIES_ELECTRODE] = sElectrodeFormSpeciesIdTable,
    [SPECIES_EXEGGUTOR] = sExeggutorFormSpeciesIdTable,
    [SPECIES_MAROWAK] = sMarowakFormSpeciesIdTable,
    [SPECIES_WEEZING] = sWeezingFormSpeciesIdTable,
    [SPECIES_KANGASKHAN] = sKangaskhanFormSpeciesIdTable,
    [SPECIES_MR_MIME] = sMrMimeFormSpeciesIdTable,
    [SPECIES_PINSIR] = sPinsirFormSpeciesIdTable,
    [SPECIES_GYARADOS] = sGyaradosFormSpeciesIdTable,
    [SPECIES_AERODACTYL] = sAerodactylFormSpeciesIdTable,
    [SPECIES_ARTICUNO] = sArticunoFormSpeciesIdTable,
    [SPECIES_ZAPDOS] = sZapdosFormSpeciesIdTable,
    [SPECIES_MOLTRES] = sMoltresFormSpeciesIdTable,
    [SPECIES_MEWTWO] = sMewtwoFormSpeciesIdTable,
    [SPECIES_TYPHLOSION] = sTyphlosionFormSpeciesIdTable,
    [SPECIES_PICHU] = sPichuFormSpeciesIdTable,
    [SPECIES_AMPHAROS] = sAmpharosFormSpeciesIdTable,
    [SPECIES_SLOWKING] = sSlowkingFormSpeciesIdTable,
    [SPECIES_QWILFISH] = sQwilfishFormSpeciesIdTable,
    [SPECIES_SNEASEL] = sSneaselFormSpeciesIdTable,
#endif
    [SPECIES_UNOWN] = sUnownFormSpeciesIdTable,
#if P_NEW_POKEMON == TRUE
    [SPECIES_STEELIX] = sSteelixFormSpeciesIdTable,
    [SPECIES_SCIZOR] = sScizorFormSpeciesIdTable,
    [SPECIES_HERACROSS] = sHeracrossFormSpeciesIdTable,
    [SPECIES_CORSOLA] = sCorsolaFormSpeciesIdTable,
    [SPECIES_HOUNDOOM] = sHoundoomFormSpeciesIdTable,
    [SPECIES_TYRANITAR] = sTyranitarFormSpeciesIdTable,
    [SPECIES_SCEPTILE] = sSceptileFormSpeciesIdTable,
    [SPECIES_BLAZIKEN] = sBlazikenFormSpeciesIdTable,
    [SPECIES_SWAMPERT] = sSwampertFormSpeciesIdTable,
    [SPECIES_ZIGZAGOON] = sZigzagoonFormSpeciesIdTable,
    [SPECIES_LINOONE] = sLinooneFormSpeciesIdTable,
    [SPECIES_GARDEVOIR] = sGardevoirFormSpeciesIdTable,
    [SPECIES_SABLEYE] = sSableyeFormSpeciesIdTable,
    [SPECIES_MAWILE] = sMawileFormSpeciesIdTable,
    [SPECIES_AGGRON] = sAggronFormSpeciesIdTable,
    [SPECIES_MEDICHAM] = sMedichamFormSpeciesIdTable,
    [SPECIES_MANECTRIC] = sManectricFormSpeciesIdTable,
    [SPECIES_SHARPEDO] = sSharpedoFormSpeciesIdTable,
    [SPECIES_CAMERUPT] = sCameruptFormSpeciesIdTable,
    [SPECIES_ALTARIA] = sAltariaFormSpeciesIdTable,
#endif
    [SPECIES_CASTFORM] = sCastformFormSpeciesIdTable,
#if P_NEW_POKEMON == TRUE
    [SPECIES_BANETTE] = sBanetteFormSpeciesIdTable,
    [SPECIES_ABSOL] = sAbsolFormSpeciesIdTable,
    [SPECIES_GLALIE] = sGlalieFormSpeciesIdTable,
    [SPECIES_SALAMENCE] = sSalamenceFormSpeciesIdTable,
    [SPECIES_METAGROSS] = sMetagrossFormSpeciesIdTable,
    [SPECIES_LATIAS] = sLatiasFormSpeciesIdTable,
    [SPECIES_LATIOS] = sLatiosFormSpeciesIdTable,
    [SPECIES_KYOGRE] = sKyogreFormSpeciesIdTable,
    [SPECIES_GROUDON] = sGroudonFormSpeciesIdTable,
    [SPECIES_RAYQUAZA] = sRayquazaFormSpeciesIdTable,
#endif
    [SPECIES_DEOXYS] = sDeoxysFormSpeciesIdTable,
#if P_NEW_POKEMON == TRUE
    [SPECIES_BURMY] = sBurmyFormSpeciesIdTable,
    [SPECIES_WORMADAM] = sWormadamFormSpeciesIdTable,
    [SPECIES_CHERRIM] = sCherrimFormSpeciesIdTable,
    [SPECIES_SHELLOS] = sShellosFormSpeciesIdTable,
    [SPECIES_GASTRODON] = sGastrodonFormSpeciesIdTable,
    [SPECIES_LOPUNNY] = sLopunnyFormSpeciesIdTable,
    [SPECIES_GARCHOMP] = sGarchompFormSpeciesIdTable,
    [SPECIES_LUCARIO] = sLucarioFormSpeciesIdTable,
    [SPECIES_ABOMASNOW] = sAbomasnowFormSpeciesIdTable,
    [SPECIES_GALLADE] = sGalladeFormSpeciesIdTable,
    [SPECIES_ROTOM] = sRotomFormSpeciesIdTable,
    [SPECIES_DIALGA] = sDialgaFormSpeciesIdTable,
    [SPECIES_PALKIA] = sPalkiaFormSpeciesIdTable,
    [SPECIES_GIRATINA] = sGiratinaFormSpeciesIdTable,
    [SPECIES_SHAYMIN] = sShayminFormSpeciesIdTable,
    [SPECIES_ARCEUS] = sArceusFormSpeciesIdTable,
    [SPECIES_SAMUROTT] = sSamurottFormSpeciesIdTable,
    [SPECIES_AUDINO] = sAudinoFormSpeciesIdTable,
    [SPECIES_BASCULIN] = sBasculinFormSpeciesIdTable,
    [SPECIES_LILLIGANT] = sLilligantFormSpeciesIdTable,
    [SPECIES_DARUMAKA] = sDarumakaFormSpeciesIdTable,
    [SPECIES_DARMANITAN] = sDarmanitanFormSpeciesIdTable,
    [SPECIES_YAMASK] = sYamaskFormSpeciesIdTable,
    [SPECIES_ZORUA] = sZoruaFormSpeciesIdTable,
    [SPECIES_ZOROARK] = sZoroarkFormSpeciesIdTable,
    [SPECIES_DEERLING] = sDeerlingFormSpeciesIdTable,
    [SPECIES_SAWSBUCK] = sSawsbuckFormSpeciesIdTable,
    [SPECIES_STUNFISK] = sStunfiskFormSpeciesIdTable,
    [SPECIES_BRAVIARY] = sBraviaryFormSpeciesIdTable,
    [SPECIES_TORNADUS] = sTornadusFormSpeciesIdTable,
    [SPECIES_THUNDURUS] = sThundurusFormSpeciesIdTable,
    [SPECIES_LANDORUS] = sLandorusFormSpeciesIdTable,
    [SPECIES_KYUREM] = sKyuremFormSpeciesIdTable,
    [SPECIES_KELDEO] = sKeldeoFormSpeciesIdTable,
    [SPECIES_MELOETTA] = sMeloettaFormSpeciesIdTable,
    [SPECIES_GENESECT] = sGenesectFormSpeciesIdTable,
    [SPECIES_GRENINJA] = sGreninjaFormSpeciesIdTable,
    [SPECIES_VIVILLON] = sVivillonFormSpeciesIdTable,
    [SPECIES_FLABEBE] = sFlabebeFormSpeciesIdTable,
    [SPECIES_FLOETTE] = sFloetteFormSpeciesIdTable,
    [SPECIES_FLORGES] = sFlorgesFormSpeciesIdTable,
    [SPECIES_FURFROU] = sFurfrouFormSpeciesIdTable,
    [SPECIES_MEOWSTIC] = sMeowsticFormSpeciesIdTable,
    [SPECIES_AEGISLASH] = sAegislashFormSpeciesIdTable,
    [SPECIES_SLIGGOO] = sSliggooFormSpeciesIdTable,
    [SPECIES_GOODRA] = sGoodraFormSpeciesIdTable,
    [SPECIES_PUMPKABOO] = sPumpkabooFormSpeciesIdTable,
    [SPECIES_GOURGEIST] = sGourgeistFormSpeciesIdTable,
    [SPECIES_AVALUGG] = sAvaluggFormSpeciesIdTable,
    [SPECIES_XERNEAS] = sXerneasFormSpeciesIdTable,
    [SPECIES_ZYGARDE] = sZygardeFormSpeciesIdTable,
    [SPECIES_DIANCIE] = sDiancieFormSpeciesIdTable,
    [SPECIES_HOOPA] = sHoopaFormSpeciesIdTable,
    [SPECIES_DECIDUEYE] = sDecidueyeFormSpeciesIdTable,
    [SPECIES_ORICORIO] = sOricorioFormSpeciesIdTable,
    [SPECIES_ROCKRUFF] = sRockruffFormSpeciesIdTable,
    [SPECIES_LYCANROC] = sLycanrocFormSpeciesIdTable,
    [SPECIES_WISHIWASHI] = sWishiwashiFormSpeciesIdTable,
    [SPECIES_SILVALLY] = sSilvallyFormSpeciesIdTable,
    [SPECIES_MINIOR] = sMiniorFormSpeciesIdTable,
    [SPECIES_MIMIKYU] = sMimikyuFormSpeciesIdTable,
    [SPECIES_NECROZMA] = sNecrozmaFormSpeciesIdTable,
    [SPECIES_MAGEARNA] = sMagearnaFormSpeciesIdTable,
    [SPECIES_CRAMORANT] = sCramorantFormSpeciesIdTable,
    [SPECIES_TOXTRICITY] = sToxtricityFormSpeciesIdTable,
    [SPECIES_SINISTEA] = sSinisteaFormSpeciesIdTable,
    [SPECIES_POLTEAGEIST] = sPolteageistFormSpeciesIdTable,
    [SPECIES_ALCREMIE] = sAlcremieFormSpeciesIdTable,
    [SPECIES_EISCUE] = sEiscueFormSpeciesIdTable,
    [SPECIES_INDEEDEE] = sIndeedeeFormSpeciesIdTable,
    [SPECIES_MORPEKO] = sMorpekoFormSpeciesIdTable,
    [SPECIES_ZACIAN] = sZacianFormSpeciesIdTable,
    [SPECIES_ZAMAZENTA] = sZamazentaFormSpeciesIdTable,
    [SPECIES_ETERNATUS] = sEternatusFormSpeciesIdTable,
    [SPECIES_URSHIFU] = sUrshifuFormSpeciesIdTable,
    [SPECIES_ZARUDE] = sZarudeFormSpeciesIdTable,
    [SPECIES_CALYREX] = sCalyrexFormSpeciesIdTable,
    [SPECIES_ENAMORUS] = sEnamorusFormSpeciesIdTable,
    // Megas
    [SPECIES_VENUSAUR_MEGA] = sVenusaurFormSpeciesIdTable,
    [SPECIES_CHARIZARD_MEGA_X] = sCharizardFormSpeciesIdTable,
    [SPECIES_CHARIZARD_MEGA_Y] = sCharizardFormSpeciesIdTable,
    [SPECIES_BLASTOISE_MEGA] = sBlastoiseFormSpeciesIdTable,
    [SPECIES_BEEDRILL_MEGA] = sBeedrillFormSpeciesIdTable,
    [SPECIES_PIDGEOT_MEGA] = sPidgeotFormSpeciesIdTable,
    [SPECIES_ALAKAZAM_MEGA] = sAlakazamFormSpeciesIdTable,
    [SPECIES_SLOWBRO_MEGA] = sSlowbroFormSpeciesIdTable,
    [SPECIES_GENGAR_MEGA] = sGengarFormSpeciesIdTable,
    [SPECIES_KANGASKHAN_MEGA] = sKangaskhanFormSpeciesIdTable,
    [SPECIES_PINSIR_MEGA] = sPinsirFormSpeciesIdTable,
    [SPECIES_GYARADOS_MEGA] = sGyaradosFormSpeciesIdTable,
    [SPECIES_AERODACTYL_MEGA] = sAerodactylFormSpeciesIdTable,
    [SPECIES_MEWTWO_MEGA_X] = sMewtwoFormSpeciesIdTable,
    [SPECIES_MEWTWO_MEGA_Y] = sMewtwoFormSpeciesIdTable,
    [SPECIES_AMPHAROS_MEGA] = sAmpharosFormSpeciesIdTable,
    [SPECIES_STEELIX_MEGA] = sSteelixFormSpeciesIdTable,
    [SPECIES_SCIZOR_MEGA] = sScizorFormSpeciesIdTable,
    [SPECIES_HERACROSS_MEGA] = sHeracrossFormSpeciesIdTable,
    [SPECIES_HOUNDOOM_MEGA] = sHoundoomFormSpeciesIdTable,
    [SPECIES_TYRANITAR_MEGA] = sTyranitarFormSpeciesIdTable,
    [SPECIES_SCEPTILE_MEGA] = sSceptileFormSpeciesIdTable,
    [SPECIES_BLAZIKEN_MEGA] = sBlazikenFormSpeciesIdTable,
    [SPECIES_SWAMPERT_MEGA] = sSwampertFormSpeciesIdTable,
    [SPECIES_GARDEVOIR_MEGA] = sGardevoirFormSpeciesIdTable,
    [SPECIES_SABLEYE_MEGA] = sSableyeFormSpeciesIdTable,
    [SPECIES_MAWILE_MEGA] = sMawileFormSpeciesIdTable,
    [SPECIES_AGGRON_MEGA] = sAggronFormSpeciesIdTable,
    [SPECIES_MEDICHAM_MEGA] = sMedichamFormSpeciesIdTable,
    [SPECIES_MANECTRIC_MEGA] = sManectricFormSpeciesIdTable,
    [SPECIES_SHARPEDO_MEGA] = sSharpedoFormSpeciesIdTable,
    [SPECIES_CAMERUPT_MEGA] = sCameruptFormSpeciesIdTable,
    [SPECIES_ALTARIA_MEGA] = sAltariaFormSpeciesIdTable,
    [SPECIES_BANETTE_MEGA] = sBanetteFormSpeciesIdTable,
    [SPECIES_ABSOL_MEGA] = sAbsolFormSpeciesIdTable,
    [SPECIES_GLALIE_MEGA] = sGlalieFormSpeciesIdTable,
    [SPECIES_SALAMENCE_MEGA] = sSalamenceFormSpeciesIdTable,
    [SPECIES_METAGROSS_MEGA] = sMetagrossFormSpeciesIdTable,
    [SPECIES_LATIAS_MEGA] = sLatiasFormSpeciesIdTable,
    [SPECIES_LATIOS_MEGA] = sLatiosFormSpeciesIdTable,
    [SPECIES_LOPUNNY_MEGA] = sLopunnyFormSpeciesIdTable,
    [SPECIES_GARCHOMP_MEGA] = sGarchompFormSpeciesIdTable,
    [SPECIES_LUCARIO_MEGA] = sLucarioFormSpeciesIdTable,
    [SPECIES_ABOMASNOW_MEGA] = sAbomasnowFormSpeciesIdTable,
    [SPECIES_GALLADE_MEGA] = sGalladeFormSpeciesIdTable,
    [SPECIES_AUDINO_MEGA] = sAudinoFormSpeciesIdTable,
    [SPECIES_DIANCIE_MEGA] = sDiancieFormSpeciesIdTable,
    // Special Mega + Primals
    [SPECIES_RAYQUAZA_MEGA] = sRayquazaFormSpeciesIdTable,
    [SPECIES_KYOGRE_PRIMAL] = sKyogreFormSpeciesIdTable,
    [SPECIES_GROUDON_PRIMAL] = sGroudonFormSpeciesIdTable,
    // Alolan Forms
    [SPECIES_RATTATA_ALOLAN] = sRattataFormSpeciesIdTable,
    [SPECIES_RATICATE_ALOLAN] = sRaticateFormSpeciesIdTable,
    [SPECIES_RAICHU_ALOLAN] = sRaichuFormSpeciesIdTable,
    [SPECIES_SANDSHREW_ALOLAN] = sSandshrewFormSpeciesIdTable,
    [SPECIES_SANDSLASH_ALOLAN] = sSandslashFormSpeciesIdTable,
    [SPECIES_VULPIX_ALOLAN] = sVulpixFormSpeciesIdTable,
    [SPECIES_NINETALES_ALOLAN] = sNinetalesFormSpeciesIdTable,
    [SPECIES_DIGLETT_ALOLAN] = sDiglettFormSpeciesIdTable,
    [SPECIES_DUGTRIO_ALOLAN] = sDugtrioFormSpeciesIdTable,
    [SPECIES_MEOWTH_ALOLAN] = sMeowthFormSpeciesIdTable,
    [SPECIES_PERSIAN_ALOLAN] = sPersianFormSpeciesIdTable,
    [SPECIES_GEODUDE_ALOLAN] = sGeodudeFormSpeciesIdTable,
    [SPECIES_GRAVELER_ALOLAN] = sGravelerFormSpeciesIdTable,
    [SPECIES_GOLEM_ALOLAN] = sGolemFormSpeciesIdTable,
    [SPECIES_GRIMER_ALOLAN] = sGrimerFormSpeciesIdTable,
    [SPECIES_MUK_ALOLAN] = sMukFormSpeciesIdTable,
    [SPECIES_EXEGGUTOR_ALOLAN] = sExeggutorFormSpeciesIdTable,
    [SPECIES_MAROWAK_ALOLAN] = sMarowakFormSpeciesIdTable,
    // Galarian Forms
    [SPECIES_MEOWTH_GALARIAN] = sMeowthFormSpeciesIdTable,
    [SPECIES_PONYTA_GALARIAN] = sPonytaFormSpeciesIdTable,
    [SPECIES_RAPIDASH_GALARIAN] = sRapidashFormSpeciesIdTable,
    [SPECIES_SLOWPOKE_GALARIAN] = sSlowpokeFormSpeciesIdTable,
    [SPECIES_SLOWBRO_GALARIAN] = sSlowbroFormSpeciesIdTable,
    [SPECIES_FARFETCHD_GALARIAN] = sFarfetchdFormSpeciesIdTable,
    [SPECIES_WEEZING_GALARIAN] = sWeezingFormSpeciesIdTable,
    [SPECIES_MR_MIME_GALARIAN] = sMrMimeFormSpeciesIdTable,
    [SPECIES_ARTICUNO_GALARIAN] = sArticunoFormSpeciesIdTable,
    [SPECIES_ZAPDOS_GALARIAN] = sZapdosFormSpeciesIdTable,
    [SPECIES_MOLTRES_GALARIAN] = sMoltresFormSpeciesIdTable,
    [SPECIES_SLOWKING_GALARIAN] = sSlowkingFormSpeciesIdTable,
    [SPECIES_CORSOLA_GALARIAN] = sCorsolaFormSpeciesIdTable,
    [SPECIES_ZIGZAGOON_GALARIAN] = sZigzagoonFormSpeciesIdTable,
    [SPECIES_LINOONE_GALARIAN] = sLinooneFormSpeciesIdTable,
    [SPECIES_DARUMAKA_GALARIAN] = sDarumakaFormSpeciesIdTable,
    [SPECIES_DARMANITAN_GALARIAN] = sDarmanitanFormSpeciesIdTable,
    [SPECIES_YAMASK_GALARIAN] = sYamaskFormSpeciesIdTable,
    [SPECIES_STUNFISK_GALARIAN] = sStunfiskFormSpeciesIdTable,
    //Hisuian Forms
    [SPECIES_GROWLITHE_HISUIAN] = sGrowlitheFormSpeciesIdTable,
    [SPECIES_ARCANINE_HISUIAN] = sArcanineFormSpeciesIdTable,
    [SPECIES_VOLTORB_HISUIAN] = sVoltorbFormSpeciesIdTable,
    [SPECIES_ELECTRODE_HISUIAN] = sElectrodeFormSpeciesIdTable,
    [SPECIES_TYPHLOSION_HISUIAN] = sTyphlosionFormSpeciesIdTable,
    [SPECIES_QWILFISH_HISUIAN] = sQwilfishFormSpeciesIdTable,
    [SPECIES_SNEASEL_HISUIAN] = sSneaselFormSpeciesIdTable,
    [SPECIES_SAMUROTT_HISUIAN] = sSamurottFormSpeciesIdTable,
    [SPECIES_LILLIGANT_HISUIAN] = sLilligantFormSpeciesIdTable,
    [SPECIES_ZORUA_HISUIAN] = sZoruaFormSpeciesIdTable,
    [SPECIES_ZOROARK_HISUIAN] = sZoroarkFormSpeciesIdTable,
    [SPECIES_BRAVIARY_HISUIAN] = sBraviaryFormSpeciesIdTable,
    [SPECIES_SLIGGOO_HISUIAN] = sSliggooFormSpeciesIdTable,
    [SPECIES_GOODRA_HISUIAN] = sGoodraFormSpeciesIdTable,
    [SPECIES_AVALUGG_HISUIAN] = sAvaluggFormSpeciesIdTable,
    [SPECIES_DECIDUEYE_HISUIAN] = sDecidueyeFormSpeciesIdTable,
    // Misc Forms
    // Cosplay Pikachu
    [SPECIES_PIKACHU_COSPLAY] = sPikachuFormSpeciesIdTable,
    [SPECIES_PIKACHU_ROCK_STAR] = sPikachuFormSpeciesIdTable,
    [SPECIES_PIKACHU_BELLE] = sPikachuFormSpeciesIdTable,
    [SPECIES_PIKACHU_POP_STAR] = sPikachuFormSpeciesIdTable,
    [SPECIES_PIKACHU_PH_D] = sPikachuFormSpeciesIdTable,
    [SPECIES_PIKACHU_LIBRE] = sPikachuFormSpeciesIdTable,
    // Cap Pikachu
    [SPECIES_PIKACHU_ORIGINAL_CAP] = sPikachuFormSpeciesIdTable,
    [SPECIES_PIKACHU_HOENN_CAP] = sPikachuFormSpeciesIdTable,
    [SPECIES_PIKACHU_SINNOH_CAP] = sPikachuFormSpeciesIdTable,
    [SPECIES_PIKACHU_UNOVA_CAP] = sPikachuFormSpeciesIdTable,
    [SPECIES_PIKACHU_KALOS_CAP] = sPikachuFormSpeciesIdTable,
    [SPECIES_PIKACHU_ALOLA_CAP] = sPikachuFormSpeciesIdTable,
    [SPECIES_PIKACHU_PARTNER_CAP] = sPikachuFormSpeciesIdTable,
    [SPECIES_PIKACHU_WORLD_CAP] = sPikachuFormSpeciesIdTable,
    // Pichu
    [SPECIES_PICHU_SPIKY_EARED] = sPichuFormSpeciesIdTable,
#endif
    // Unown
    [SPECIES_UNOWN_B] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_C] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_D] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_E] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_F] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_G] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_H] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_I] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_J] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_K] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_L] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_M] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_N] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_O] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_P] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_Q] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_R] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_S] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_T] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_U] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_V] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_W] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_X] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_Y] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_Z] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_EMARK] = sUnownFormSpeciesIdTable,
    [SPECIES_UNOWN_QMARK] = sUnownFormSpeciesIdTable,
    // Castform
    [SPECIES_CASTFORM_SUNNY] = sCastformFormSpeciesIdTable,
    [SPECIES_CASTFORM_RAINY] = sCastformFormSpeciesIdTable,
    [SPECIES_CASTFORM_SNOWY] = sCastformFormSpeciesIdTable,
    // Deoxys
    [SPECIES_DEOXYS_ATTACK] = sDeoxysFormSpeciesIdTable,
    [SPECIES_DEOXYS_DEFENSE] = sDeoxysFormSpeciesIdTable,
    [SPECIES_DEOXYS_SPEED] = sDeoxysFormSpeciesIdTable,
#if P_NEW_POKEMON == TRUE
    // Burmy
    [SPECIES_BURMY_SANDY_CLOAK] = sBurmyFormSpeciesIdTable,
    [SPECIES_BURMY_TRASH_CLOAK] = sBurmyFormSpeciesIdTable,
    // Wormadam
    [SPECIES_WORMADAM_SANDY_CLOAK] = sWormadamFormSpeciesIdTable,
    [SPECIES_WORMADAM_TRASH_CLOAK] = sWormadamFormSpeciesIdTable,
    // Cherrim
    [SPECIES_CHERRIM_SUNSHINE] = sCherrimFormSpeciesIdTable,
    // Shellos
    [SPECIES_SHELLOS_EAST_SEA] = sShellosFormSpeciesIdTable,
    // Gastrodon
    [SPECIES_GASTRODON_EAST_SEA] = sGastrodonFormSpeciesIdTable,
    // Rotom
    [SPECIES_ROTOM_HEAT] = sRotomFormSpeciesIdTable,
    [SPECIES_ROTOM_WASH] = sRotomFormSpeciesIdTable,
    [SPECIES_ROTOM_FROST] = sRotomFormSpeciesIdTable,
    [SPECIES_ROTOM_FAN] = sRotomFormSpeciesIdTable,
    [SPECIES_ROTOM_MOW] = sRotomFormSpeciesIdTable,
    // Origin Forme
    [SPECIES_DIALGA_ORIGIN] = sDialgaFormSpeciesIdTable,
    [SPECIES_PALKIA_ORIGIN] = sPalkiaFormSpeciesIdTable,
    [SPECIES_GIRATINA_ORIGIN] = sGiratinaFormSpeciesIdTable,
    // Shaymin
    [SPECIES_SHAYMIN_SKY] = sShayminFormSpeciesIdTable,
    // Arceus
    [SPECIES_ARCEUS_FIGHTING] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_FLYING] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_POISON] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_GROUND] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_ROCK] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_BUG] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_GHOST] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_STEEL] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_FIRE] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_WATER] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_GRASS] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_ELECTRIC] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_PSYCHIC] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_ICE] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_DRAGON] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_DARK] = sArceusFormSpeciesIdTable,
    [SPECIES_ARCEUS_FAIRY] = sArceusFormSpeciesIdTable,
    // Basculin
    [SPECIES_BASCULIN_BLUE_STRIPED] = sBasculinFormSpeciesIdTable,
    [SPECIES_BASCULIN_WHITE_STRIPED] = sBasculinFormSpeciesIdTable,
    // Darmanitan
    [SPECIES_DARMANITAN_ZEN_MODE] = sDarmanitanFormSpeciesIdTable,
    [SPECIES_DARMANITAN_ZEN_MODE_GALARIAN] = sDarmanitanFormSpeciesIdTable,
    // Deerling
    [SPECIES_DEERLING_SUMMER] = sDeerlingFormSpeciesIdTable,
    [SPECIES_DEERLING_AUTUMN] = sDeerlingFormSpeciesIdTable,
    [SPECIES_DEERLING_WINTER] = sDeerlingFormSpeciesIdTable,
    // Sawsbuck
    [SPECIES_SAWSBUCK_SUMMER] = sSawsbuckFormSpeciesIdTable,
    [SPECIES_SAWSBUCK_AUTUMN] = sSawsbuckFormSpeciesIdTable,
    [SPECIES_SAWSBUCK_WINTER] = sSawsbuckFormSpeciesIdTable,
    // Therian Forms
    [SPECIES_TORNADUS_THERIAN] = sTornadusFormSpeciesIdTable,
    [SPECIES_THUNDURUS_THERIAN] = sThundurusFormSpeciesIdTable,
    [SPECIES_LANDORUS_THERIAN] = sLandorusFormSpeciesIdTable,
    [SPECIES_ENAMORUS_THERIAN] = sEnamorusFormSpeciesIdTable,
    // Kyurem
    [SPECIES_KYUREM_WHITE] = sKyuremFormSpeciesIdTable,
    [SPECIES_KYUREM_BLACK] = sKyuremFormSpeciesIdTable,
    // Keldeo
    [SPECIES_KELDEO_RESOLUTE] = sKeldeoFormSpeciesIdTable,
    // Meloetta
    [SPECIES_MELOETTA_PIROUETTE] = sMeloettaFormSpeciesIdTable,
    // Genesect
    [SPECIES_GENESECT_DOUSE_DRIVE] = sGenesectFormSpeciesIdTable,
    [SPECIES_GENESECT_SHOCK_DRIVE] = sGenesectFormSpeciesIdTable,
    [SPECIES_GENESECT_BURN_DRIVE] = sGenesectFormSpeciesIdTable,
    [SPECIES_GENESECT_CHILL_DRIVE] = sGenesectFormSpeciesIdTable,
    // Greninja
    [SPECIES_GRENINJA_BATTLE_BOND] = sGreninjaFormSpeciesIdTable,
    [SPECIES_GRENINJA_ASH] = sGreninjaFormSpeciesIdTable,
    // Vivillon
    [SPECIES_VIVILLON_POLAR] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_TUNDRA] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_CONTINENTAL] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_GARDEN] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_ELEGANT] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_MEADOW] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_MODERN] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_MARINE] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_ARCHIPELAGO] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_HIGH_PLAINS] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_SANDSTORM] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_RIVER] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_MONSOON] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_SAVANNA] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_SUN] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_OCEAN] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_JUNGLE] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_FANCY] = sVivillonFormSpeciesIdTable,
    [SPECIES_VIVILLON_POKE_BALL] = sVivillonFormSpeciesIdTable,
    // Flabébé
    [SPECIES_FLABEBE_YELLOW_FLOWER] = sFlabebeFormSpeciesIdTable,
    [SPECIES_FLABEBE_ORANGE_FLOWER] = sFlabebeFormSpeciesIdTable,
    [SPECIES_FLABEBE_BLUE_FLOWER] = sFlabebeFormSpeciesIdTable,
    [SPECIES_FLABEBE_WHITE_FLOWER] = sFlabebeFormSpeciesIdTable,
    // Floette
    [SPECIES_FLOETTE_YELLOW_FLOWER] = sFloetteFormSpeciesIdTable,
    [SPECIES_FLOETTE_ORANGE_FLOWER] = sFloetteFormSpeciesIdTable,
    [SPECIES_FLOETTE_BLUE_FLOWER] = sFloetteFormSpeciesIdTable,
    [SPECIES_FLOETTE_WHITE_FLOWER] = sFloetteFormSpeciesIdTable,
    [SPECIES_FLOETTE_ETERNAL_FLOWER] = sFloetteFormSpeciesIdTable,
    // Florges
    [SPECIES_FLORGES_YELLOW_FLOWER] = sFlorgesFormSpeciesIdTable,
    [SPECIES_FLORGES_ORANGE_FLOWER] = sFlorgesFormSpeciesIdTable,
    [SPECIES_FLORGES_BLUE_FLOWER] = sFlorgesFormSpeciesIdTable,
    [SPECIES_FLORGES_WHITE_FLOWER] = sFlorgesFormSpeciesIdTable,
    //Furfrou
    [SPECIES_FURFROU_HEART_TRIM] = sFurfrouFormSpeciesIdTable,
    [SPECIES_FURFROU_STAR_TRIM] = sFurfrouFormSpeciesIdTable,
    [SPECIES_FURFROU_DIAMOND_TRIM] = sFurfrouFormSpeciesIdTable,
    [SPECIES_FURFROU_DEBUTANTE_TRIM] = sFurfrouFormSpeciesIdTable,
    [SPECIES_FURFROU_MATRON_TRIM] = sFurfrouFormSpeciesIdTable,
    [SPECIES_FURFROU_DANDY_TRIM] = sFurfrouFormSpeciesIdTable,
    [SPECIES_FURFROU_LA_REINE_TRIM] = sFurfrouFormSpeciesIdTable,
    [SPECIES_FURFROU_KABUKI_TRIM] = sFurfrouFormSpeciesIdTable,
    [SPECIES_FURFROU_PHARAOH_TRIM] = sFurfrouFormSpeciesIdTable,
    // Meowstic
    [SPECIES_MEOWSTIC_FEMALE] = sMeowsticFormSpeciesIdTable,
    // Aegislash
    [SPECIES_AEGISLASH_BLADE] = sAegislashFormSpeciesIdTable,
    // Pumpkaboo
    [SPECIES_PUMPKABOO_SMALL] = sPumpkabooFormSpeciesIdTable,
    [SPECIES_PUMPKABOO_LARGE] = sPumpkabooFormSpeciesIdTable,
    [SPECIES_PUMPKABOO_SUPER] = sPumpkabooFormSpeciesIdTable,
    // Gourgeist
    [SPECIES_GOURGEIST_SMALL] = sGourgeistFormSpeciesIdTable,
    [SPECIES_GOURGEIST_LARGE] = sGourgeistFormSpeciesIdTable,
    [SPECIES_GOURGEIST_SUPER] = sGourgeistFormSpeciesIdTable,
    // Xerneas
    [SPECIES_XERNEAS_ACTIVE] = sXerneasFormSpeciesIdTable,
    // Zygarde
    [SPECIES_ZYGARDE_10] = sZygardeFormSpeciesIdTable,
    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT] = sZygardeFormSpeciesIdTable,
    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT] = sZygardeFormSpeciesIdTable,
    [SPECIES_ZYGARDE_COMPLETE] = sZygardeFormSpeciesIdTable,
    // Hoopa
    [SPECIES_HOOPA_UNBOUND] = sHoopaFormSpeciesIdTable,
    // Oricorio
    [SPECIES_ORICORIO_POM_POM] = sOricorioFormSpeciesIdTable,
    [SPECIES_ORICORIO_PAU] = sOricorioFormSpeciesIdTable,
    [SPECIES_ORICORIO_SENSU] = sOricorioFormSpeciesIdTable,
    // Rockruff
    [SPECIES_ROCKRUFF_OWN_TEMPO] = sRockruffFormSpeciesIdTable,
    // Lycanroc
    [SPECIES_LYCANROC_MIDNIGHT] = sLycanrocFormSpeciesIdTable,
    [SPECIES_LYCANROC_DUSK] = sLycanrocFormSpeciesIdTable,
    // Wishiwashi
    [SPECIES_WISHIWASHI_SCHOOL] = sWishiwashiFormSpeciesIdTable,
    // Silvally
    [SPECIES_SILVALLY_FIGHTING] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_FLYING] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_POISON] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_GROUND] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_ROCK] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_BUG] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_GHOST] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_STEEL] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_FIRE] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_WATER] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_GRASS] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_ELECTRIC] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_PSYCHIC] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_ICE] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_DRAGON] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_DARK] = sSilvallyFormSpeciesIdTable,
    [SPECIES_SILVALLY_FAIRY] = sSilvallyFormSpeciesIdTable,
    // Minior
    [SPECIES_MINIOR_METEOR_ORANGE] = sMiniorFormSpeciesIdTable,
    [SPECIES_MINIOR_METEOR_YELLOW] = sMiniorFormSpeciesIdTable,
    [SPECIES_MINIOR_METEOR_GREEN] = sMiniorFormSpeciesIdTable,
    [SPECIES_MINIOR_METEOR_BLUE] = sMiniorFormSpeciesIdTable,
    [SPECIES_MINIOR_METEOR_INDIGO] = sMiniorFormSpeciesIdTable,
    [SPECIES_MINIOR_METEOR_VIOLET] = sMiniorFormSpeciesIdTable,
    [SPECIES_MINIOR_CORE_RED] = sMiniorFormSpeciesIdTable,
    [SPECIES_MINIOR_CORE_ORANGE] = sMiniorFormSpeciesIdTable,
    [SPECIES_MINIOR_CORE_YELLOW] = sMiniorFormSpeciesIdTable,
    [SPECIES_MINIOR_CORE_GREEN] = sMiniorFormSpeciesIdTable,
    [SPECIES_MINIOR_CORE_BLUE] = sMiniorFormSpeciesIdTable,
    [SPECIES_MINIOR_CORE_INDIGO] = sMiniorFormSpeciesIdTable,
    [SPECIES_MINIOR_CORE_VIOLET] = sMiniorFormSpeciesIdTable,
    // Mimikyu
    [SPECIES_MIMIKYU_BUSTED] = sMimikyuFormSpeciesIdTable,
    // Necrozma
    [SPECIES_NECROZMA_DUSK_MANE] = sNecrozmaFormSpeciesIdTable,
    [SPECIES_NECROZMA_DAWN_WINGS] = sNecrozmaFormSpeciesIdTable,
    [SPECIES_NECROZMA_ULTRA] = sNecrozmaFormSpeciesIdTable,
    // Magearna
    [SPECIES_MAGEARNA_ORIGINAL_COLOR] = sMagearnaFormSpeciesIdTable,
    // Cramorant
    [SPECIES_CRAMORANT_GULPING] = sCramorantFormSpeciesIdTable,
    [SPECIES_CRAMORANT_GORGING] = sCramorantFormSpeciesIdTable,
    // Toxtricity
    [SPECIES_TOXTRICITY_LOW_KEY] = sToxtricityFormSpeciesIdTable,
    // Sinistea
    [SPECIES_SINISTEA_ANTIQUE] = sSinisteaFormSpeciesIdTable,
    // Polteageist
    [SPECIES_POLTEAGEIST_ANTIQUE] = sPolteageistFormSpeciesIdTable,
    // Alcremie
    [SPECIES_ALCREMIE_RUBY_CREAM] = sAlcremieFormSpeciesIdTable,
    [SPECIES_ALCREMIE_MATCHA_CREAM] = sAlcremieFormSpeciesIdTable,
    [SPECIES_ALCREMIE_MINT_CREAM] = sAlcremieFormSpeciesIdTable,
    [SPECIES_ALCREMIE_LEMON_CREAM] = sAlcremieFormSpeciesIdTable,
    [SPECIES_ALCREMIE_SALTED_CREAM] = sAlcremieFormSpeciesIdTable,
    [SPECIES_ALCREMIE_RUBY_SWIRL] = sAlcremieFormSpeciesIdTable,
    [SPECIES_ALCREMIE_CARAMEL_SWIRL] = sAlcremieFormSpeciesIdTable,
    [SPECIES_ALCREMIE_RAINBOW_SWIRL] = sAlcremieFormSpeciesIdTable,
    // Eiscue
    [SPECIES_EISCUE_NOICE_FACE] = sEiscueFormSpeciesIdTable,
    // Indeedee
    [SPECIES_INDEEDEE_FEMALE] = sIndeedeeFormSpeciesIdTable,
    // Morpeko
    [SPECIES_MORPEKO_HANGRY] = sMorpekoFormSpeciesIdTable,
    // Zacian
    [SPECIES_ZACIAN_CROWNED_SWORD] = sZacianFormSpeciesIdTable,
    // Zamazenta
    [SPECIES_ZAMAZENTA_CROWNED_SHIELD] = sZamazentaFormSpeciesIdTable,
    // Eternatus
    [SPECIES_ETERNATUS_ETERNAMAX] = sEternatusFormSpeciesIdTable,
    // Urshifu
    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE] = sUrshifuFormSpeciesIdTable,
    // Zarude
    [SPECIES_ZARUDE_DADA] = sZarudeFormSpeciesIdTable,
    // Calyrex
    [SPECIES_CALYREX_ICE_RIDER] = sCalyrexFormSpeciesIdTable,
    [SPECIES_CALYREX_SHADOW_RIDER] = sCalyrexFormSpeciesIdTable,
#endif
};
