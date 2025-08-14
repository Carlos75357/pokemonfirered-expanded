# Guía para Añadir Pokémon de Generación 10 Personalizada

## ✅ Archivos ya configurados:
- `src/data/pokemon/species_info/gen_10_families.h` - Plantilla para especies
- `src/data/pokemon/level_up_learnsets/gen_10.h` - Plantilla para movimientos por nivel
- `src/data/pokemon/teachable_learnsets.h` - Plantilla para MT/MO
- `include/config/species_enabled.h` - Configuración habilitada
- `src/pokemon.c` - Sistema de learnsets configurado
- `src/data/pokemon/species_info.h` - Incluye gen_10_families.h

## 📋 Pasos para añadir TUS Pokémon personalizados:

### 1. **Definir tu Pokémon en species.h**
Edita: `include/constants/species.h`
```c
// Gen 10 Pokémon Personalizados
#define SPECIES_TU_POKEMON_1                              1524
#define SPECIES_TU_POKEMON_2                              1525
// ... añade más según necesites

#define SPECIES_EGG                                     (SPECIES_TU_POKEMON_2 + 1)
```

### 2. **Añadir números de Pokédex Nacional**
Edita: `include/constants/pokedex.h`
```c
// Gen 10 Pokémon Personalizados
NATIONAL_DEX_TU_POKEMON_1,
NATIONAL_DEX_TU_POKEMON_2,
```

### 3. **Configurar familias en species_enabled.h**
Edita: `include/config/species_enabled.h`
```c
// Al final del archivo, añade:
#define P_FAMILY_TU_POKEMON_1            P_GEN_10_POKEMON
#define P_FAMILY_TU_POKEMON_2            P_GEN_10_POKEMON
```

### 4. **Definir especies en gen_10_families.h**
Copia la plantilla comentada y modifica:
- Nombre del Pokémon
- Stats base (HP, Attack, Defense, etc.)
- Tipos
- Habilidades
- Descripción
- Altura/peso

### 5. **Crear Level Up Learnsets**
En `src/data/pokemon/level_up_learnsets/gen_10.h`, copia la plantilla y define qué movimientos aprende por nivel.

### 6. **Crear Teachable Learnsets**
En `src/data/pokemon/teachable_learnsets.h`, define qué MT/MO puede aprender.

### 7. **Crear archivos gráficos** (IMPORTANTE)
Necesitas crear estas carpetas y archivos:
```
graphics/pokemon/tu_pokemon_1/
├── anim_front.4bpp.lz (o anim_front_gba.4bpp.lz)
├── back.4bpp.lz (o back_gba.4bpp.lz)
├── normal.gbapal (o normal_gba.gbapal)
├── shiny.gbapal (o shiny_gba.gbapal)
├── icon.4bpp (o icon_gba.4bpp)
├── footprint.1bpp
└── overworld.4bpp
```

### 8. **Definir gráficos en pokemon.h**
Edita: `src/data/graphics/pokemon.h`
```c
#if P_FAMILY_TU_POKEMON_1
const u32 gMonFrontPic_TuPokemon1[] = INCBIN_U32("graphics/pokemon/tu_pokemon_1/anim_front.4bpp.lz");
const u32 gMonBackPic_TuPokemon1[] = INCBIN_U32("graphics/pokemon/tu_pokemon_1/back.4bpp.lz");
const u16 gMonPalette_TuPokemon1[] = INCBIN_U16("graphics/pokemon/tu_pokemon_1/normal.gbapal");
const u16 gMonShinyPalette_TuPokemon1[] = INCBIN_U16("graphics/pokemon/tu_pokemon_1/shiny.gbapal");
const u8 gMonIcon_TuPokemon1[] = INCBIN_U8("graphics/pokemon/tu_pokemon_1/icon.4bpp");
const u8 gMonFootprint_TuPokemon1[] = INCBIN_U8("graphics/pokemon/tu_pokemon_1/footprint.1bpp");
#endif
```

### 9. **Definir cries (sonidos)**
Edita: `include/constants/cries.h`
```c
#define CRY_TU_POKEMON_1                    CRY_BULBASAUR // Usa un cry existente como placeholder
```

### 10. **Compilar y probar**
```bash
make clean
make
```

## 🚨 Errores comunes a evitar:
- **Nombres únicos**: Cada SPECIES_, CRY_, NATIONAL_DEX_ debe ser único
- **Números consecutivos**: Los números de especies deben ser consecutivos
- **Archivos gráficos**: Todos los archivos gráficos deben existir
- **Learnsets**: Todos los learnsets referenciados deben estar definidos

## 💡 Consejos:
- Empieza con 1-2 Pokémon para probar
- Usa stats balanceados (total ~300-600)
- Reutiliza cries existentes inicialmente
- Crea gráficos simples o modifica existentes

¡Ya tienes todo listo para crear tu Generación 10 personalizada!
