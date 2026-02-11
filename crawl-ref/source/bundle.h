#pragma once

#include <vector>
#include "newgame.h"
#include "tag-version.h"

using std::vector;

static item_skill_bundle bundle_options[] = 
{
    {
        "warrior", 
        {{OBJ_COFFERS, COFFER_WEAPON_MAJOR}, {OBJ_COFFERS, COFFER_AUX_MINOR}}, 
        {{SK_FIGHTING, 2}, {SK_DODGING, 2}},
        false
    },
    {
        "bullwark", 
        {{OBJ_COFFERS, COFFER_ARMOR_MAJOR}, {OBJ_COFFERS, COFFER_ARMOR_MINOR}}, 
        {{SK_FIGHTING, 2}, {SK_ARMOUR, 2}},
        false
    },
    {
        "assassin", 
        {{OBJ_COFFERS, COFFER_STEALTH_MINOR}, {OBJ_COFFERS, COFFER_STEALTH_MAJOR}}, 
        {{SK_DODGING, 2}, {SK_STEALTH, 2}},
        false
    },
    {
        "fashionista", 
        {{OBJ_COFFERS, COFFER_JEWELRY_MINOR}, {OBJ_COFFERS, COFFER_AUX_MAJOR}}, 
        {{SK_DODGING, 2}, {SK_STEALTH, 2}},
        false
    },
    {
        "aristacrat", 
        {{OBJ_COFFERS, COFFER_JEWELRY_MINOR}, {OBJ_COFFERS, COFFER_JEWELRY_MAJOR}}, 
        {{SK_FIGHTING, 2}, {SK_DODGING, 2}},
        false
    },
    {
        "magi",
        {{OBJ_COFFERS, COFFER_MAGIC_MINOR}, {OBJ_COFFERS, COFFER_MAGIC_MAJOR}}, 
        {{SK_SPELLCASTING, 3}, {SK_DODGING, 1}},
        true
    },
    // COFFER_WEAPON_MINOR, // not currently given
};

static const spell_type starting_bundle_spells[] =
{
    SPELL_APPORTATION,
    SPELL_FOXFIRE,
    SPELL_FREEZE,
    SPELL_KINETIC_GRAPNEL,
    SPELL_KISS_OF_DEATH,
    SPELL_MAGIC_DART,
    SPELL_POISONOUS_VAPOURS,
    SPELL_SANDBLAST,
    SPELL_SHOCK,
    SPELL_SLOW,
    SPELL_SOUL_SPLINTER,
    SPELL_SUMMON_SMALL_MAMMAL,
};