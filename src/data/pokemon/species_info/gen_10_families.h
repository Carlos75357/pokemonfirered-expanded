#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen10[] =
{
#endif

// Gen 10 Pokémon - Paldea Region (Scarlet/Violet DLC)
// Nota: Añade aquí los Pokémon de Gen 10 que quieras incluir
// Ejemplo con estructura básica:

#if P_FAMILY_SPRIGATITO
    [SPECIES_SPRIGATITO] =
    {
        .baseHP        = 40,
        .baseAttack    = 61,
        .baseDefense   = 54,
        .baseSpeed     = 65,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sprigatito"),
        .cryId = CRY_SPRIGATITO,
        .natDexNum = NATIONAL_DEX_SPRIGATITO,
        .categoryName = _("Grass Cat"),
        .height = 4,
        .weight = 41,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The scent\n"
            "grows stronger when this Pokémon is\n"
            "in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sprigatito,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Sprigatito,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sprigatito,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Sprigatito,
        .shinyPalette = gMonShinyPalette_Sprigatito,
        .iconSprite = gMonIcon_Sprigatito,
        .iconPalIndex = 1,
        FOOTPRINT(Sprigatito)
        OVERWORLD(
            sPicTable_Sprigatito,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sprigatito,
            gShinyOverworldPalette_Sprigatito
        )
        .levelUpLearnset = sSprigatitoLevelUpLearnset,
        .teachableLearnset = sSprigatitoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FLORAGATO}),
    },

    [SPECIES_FLORAGATO] =
    {
        .baseHP        = 61,
        .baseAttack    = 80,
        .baseDefense   = 63,
        .baseSpeed     = 83,
        .baseSpAttack  = 60,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 144,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Floragato"),
        .cryId = CRY_FLORAGATO,
        .natDexNum = NATIONAL_DEX_FLORAGATO,
        .categoryName = _("Grass Cat"),
        .height = 9,
        .weight = 122,
        .description = COMPOUND_STRING(
            "Floragato deftly wields the vine hidden\n"
            "beneath its long fur, slamming the\n"
            "hard flower bud against its opponents."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Floragato,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Floragato,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Floragato,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Floragato,
        .shinyPalette = gMonShinyPalette_Floragato,
        .iconSprite = gMonIcon_Floragato,
        .iconPalIndex = 1,
        FOOTPRINT(Floragato)
        OVERWORLD(
            sPicTable_Floragato,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Floragato,
            gShinyOverworldPalette_Floragato
        )
        .levelUpLearnset = sFloragatoLevelUpLearnset,
        .teachableLearnset = sFloragatoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_MEOWSCARADA}),
    },

    [SPECIES_MEOWSCARADA] =
    {
        .baseHP        = 76,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = 123,
        .baseSpAttack  = 81,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DARK),
        .catchRate = 45,
        .expYield = 265,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Meowscarada"),
        .cryId = CRY_MEOWSCARADA,
        .natDexNum = NATIONAL_DEX_MEOWSCARADA,
        .categoryName = _("Magician"),
        .height = 15,
        .weight = 312,
        .description = COMPOUND_STRING(
            "With its disheveled appearance, it\n"
            "performs magic using its flower\n"
            "bouquets. It can make opponents\n"
            "disappear seemingly into thin air."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Meowscarada,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Meowscarada,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Meowscarada,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Meowscarada,
        .shinyPalette = gMonShinyPalette_Meowscarada,
        .iconSprite = gMonIcon_Meowscarada,
        .iconPalIndex = 1,
        FOOTPRINT(Meowscarada)
        OVERWORLD(
            sPicTable_Meowscarada,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Meowscarada,
            gShinyOverworldPalette_Meowscarada
        )
        .levelUpLearnset = sMeowscaradaLevelUpLearnset,
        .teachableLearnset = sMeowscaradaTeachableLearnset,
    },
#endif //P_FAMILY_SPRIGATITO

// *** GENERACIÓN 10 PERSONALIZADA ***
// Aquí puedes añadir tus propios Pokémon inventados
// Plantilla de ejemplo para un Pokémon personalizado:

/*
#if P_FAMILY_TU_POKEMON_PERSONALIZADO
    [SPECIES_TU_POKEMON] =
    {
        .baseHP        = 50,        // HP base
        .baseAttack    = 60,        // Ataque base
        .baseDefense   = 55,        // Defensa base
        .baseSpeed     = 70,        // Velocidad base
        .baseSpAttack  = 65,        // Ataque Especial base
        .baseSpDefense = 60,        // Defensa Especial base
        .types = MON_TYPES(TYPE_NORMAL),  // Tipo(s) del Pokémon
        .catchRate = 45,            // Ratio de captura (0-255)
        .expYield = 64,             // Experiencia que da al derrotarlo
        .evYield_HP = 1,            // EVs que da (puedes usar _Attack, _Defense, etc.)
        .genderRatio = PERCENT_FEMALE(50),  // Porcentaje de hembras
        .eggCycles = 20,            // Ciclos para eclosionar huevo
        .friendship = STANDARD_FRIENDSHIP,  // Amistad inicial
        .growthRate = GROWTH_MEDIUM_FAST,   // Velocidad de crecimiento
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_QUICK_FEET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("TuPokemon"),
        .cryId = CRY_TU_POKEMON,
        .natDexNum = NATIONAL_DEX_TU_POKEMON,
        .categoryName = _("Ejemplo"),
        .height = 10,               // Altura en decímetros
        .weight = 100,              // Peso en hectogramos
        .description = COMPOUND_STRING(
            "Descripción de tu Pokémon personalizado.\n"
            "Puedes escribir hasta 4 líneas\n"
            "describiendo sus características\n"
            "y comportamiento único."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TuPokemon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_TuPokemon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TuPokemon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_TuPokemon,
        .shinyPalette = gMonShinyPalette_TuPokemon,
        .iconSprite = gMonIcon_TuPokemon,
        .iconPalIndex = 0,
        FOOTPRINT(TuPokemon)
        OVERWORLD(
            sPicTable_TuPokemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TuPokemon,
            gShinyOverworldPalette_TuPokemon
        )
        .levelUpLearnset = sTuPokemonLevelUpLearnset,
        .teachableLearnset = sTuPokemonTeachableLearnset,
        // .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_EVOLUCION}),
    },
#endif //P_FAMILY_TU_POKEMON_PERSONALIZADO
*/

// *** AÑADE TUS POKÉMON PERSONALIZADOS AQUÍ ***
// Copia la plantilla de arriba y modifica los valores según tus Pokémon inventados

#ifdef __INTELLISENSE__
};
#endif
