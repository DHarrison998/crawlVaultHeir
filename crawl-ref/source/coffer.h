#pragma once

#include <vector>
#include "art-enum.h"
#include "tag-version.h"

using std::vector;

// Daniel - Mid, make "one handed" versions of all lists
static vector<unrand_type> coffer_short_blade = {
    UNRAND_SPRIGGANS_KNIFE,             // Spriggan's Knife
    UNRAND_ARC_BLADE,                   // arc blade
    UNRAND_CAPTAIN,                     // captain's cutlass
    UNRAND_GYRE,                        // pair of quick blades "Gyre" and "Gimble"
    UNRAND_VAMPIRES_TOOTH               // Vampire's Tooth
};
static vector<unrand_type> coffer_short_blade_one_handed = {
    UNRAND_SPRIGGANS_KNIFE,             // Spriggan's Knife
    UNRAND_ARC_BLADE,                   // arc blade
    UNRAND_CAPTAIN,                     // captain's cutlass
    UNRAND_VAMPIRES_TOOTH               // Vampire's Tooth
};
static vector<unrand_type> coffer_long_blade = {
    UNRAND_THROATCUTTER,                // Throatcutter
    UNRAND_SINGING_SWORD,               // Singing Sword
    UNRAND_THERMIC_ENGINE,              // Maxwell's thermic engine
    UNRAND_AUTUMN_KATANA,               // autumn katana
    UNRAND_LEECH,                       // demon blade "Leech"
    UNRAND_ZEALOT_SWORD,                // zealot's sword
    UNRAND_POWER,                       // sword of Power
    UNRAND_DREAD_KNIGHT,                // sword of the Dread Knight
    UNRAND_CEREBOV,                     // sword of Cerebov
    UNRAND_PLUTONIUM_SWORD,             // plutonium sword
};
static vector<unrand_type> coffer_long_blade_one_handed = {
    UNRAND_THROATCUTTER,                // Throatcutter
    UNRAND_SINGING_SWORD,               // Singing Sword
    UNRAND_THERMIC_ENGINE,              // Maxwell's thermic engine
    UNRAND_AUTUMN_KATANA,               // autumn katana
    UNRAND_LEECH,                       // demon blade "Leech"
    UNRAND_ZEALOT_SWORD,                // zealot's sword
    UNRAND_POWER,                       // sword of Power
    UNRAND_DREAD_KNIGHT,                // sword of the Dread Knight
    UNRAND_CEREBOV,                     // sword of Cerebov
    UNRAND_PLUTONIUM_SWORD,             // plutonium sword
};
static vector<unrand_type> coffer_axe = {
    UNRAND_ARGA,                        // mithril axe "Arga"
    UNRAND_DEMON_AXE,                   // obsidian axe
    UNRAND_HOLY_AXE,                    // consecrated labrys
    UNRAND_WOODCUTTERS_AXE,             // woodcutter's axe
    UNRAND_TROG,                        // Wrath of Trog
    UNRAND_FROSTBITE,                   // frozen axe "Frostbite"
    UNRAND_WOE,                         // Axe of Woe
};
static vector<unrand_type> coffer_axe_one_handed = {
    UNRAND_ARGA,                        // mithril axe "Arga"
    UNRAND_DEMON_AXE,                   // obsidian axe
    UNRAND_HOLY_AXE,                    // consecrated labrys
    UNRAND_WOODCUTTERS_AXE,             // woodcutter's axe
    UNRAND_TROG,                        // Wrath of Trog
    UNRAND_FROSTBITE,                   // frozen axe "Frostbite"
    UNRAND_WOE,                         // Axe of Woe
};
static vector<unrand_type> coffer_polearm = {
    UNRAND_FORCE_LANCE,                 // Force Lance
    UNRAND_WYRMBANE,                    // lance "Wyrmbane"
    UNRAND_OCTOPUS_KING,                // trident of the Octopus King
    UNRAND_RIFT,                        // demon trident "Rift"
    UNRAND_CONDEMNATION,                // trishula "Condemnation"
    UNRAND_FINISHER,                    // scythe "Finisher"
    UNRAND_CURSES,                      // scythe of Curses
    UNRAND_GUARD,                       // glaive of the Guard
    UNRAND_PRUNE,                       // glaive of Prune
    UNRAND_LOCHABER_AXE,                // Lochaber axe
};
static vector<unrand_type> coffer_polearm_one_handed = {
    UNRAND_FORCE_LANCE,                 // Force Lance
    UNRAND_WYRMBANE,                    // lance "Wyrmbane"
    UNRAND_OCTOPUS_KING,                // trident of the Octopus King
    UNRAND_RIFT,                        // demon trident "Rift"
    UNRAND_CONDEMNATION,                // trishula "Condemnation"
    UNRAND_FINISHER,                    // scythe "Finisher"
    UNRAND_CURSES,                      // scythe of Curses
    UNRAND_GUARD,                       // glaive of the Guard
    UNRAND_PRUNE,                       // glaive of Prune
    UNRAND_LOCHABER_AXE,                // Lochaber axe
};
static vector<unrand_type> coffer_mace_and_flail = {
    UNRAND_DEVASTATOR,                  // shillelagh "Devastator"
    UNRAND_SNAKEBITE,                   // whip "Snakebite"
    UNRAND_SPELLBINDER,                 // demon whip "Spellbinder"
    UNRAND_EOS,                         // morningstar "Eos"
    UNRAND_TORMENT,                     // sceptre of Torment
    // UNRAND_ASMODEUS,                    // sceptre of Asmodeus
    UNRAND_UNDEADHUNTER,                // great mace "Undeadhunter"
    UNRAND_FIRESTARTER,                 // great mace "Firestarter"
    UNRAND_VARIABILITY,                 // mace of Variability
    UNRAND_DARK_MAUL,                   // dark maul
    UNRAND_SKULLCRUSHER,                // giant club "Skullcrusher"
};
static vector<unrand_type> coffer_mace_and_flail_one_handed = {
    UNRAND_DEVASTATOR,                  // shillelagh "Devastator"
    UNRAND_SNAKEBITE,                   // whip "Snakebite"
    UNRAND_SPELLBINDER,                 // demon whip "Spellbinder"
    UNRAND_EOS,                         // morningstar "Eos"
    UNRAND_TORMENT,                     // sceptre of Torment
    // UNRAND_ASMODEUS,                    // sceptre of Asmodeus
    UNRAND_UNDEADHUNTER,                // great mace "Undeadhunter"
    UNRAND_FIRESTARTER,                 // great mace "Firestarter"
    UNRAND_VARIABILITY,                 // mace of Variability
    UNRAND_DARK_MAUL,                   // dark maul
    UNRAND_SKULLCRUSHER,                // giant club "Skullcrusher"
};
static vector<unrand_type> coffer_ranged = {
    UNRAND_PUNK,                        // greatsling "Punk"
    UNRAND_ZEPHYR,                      // longbow "Zephyr"
    UNRAND_STORM_BOW,                   // storm bow
    UNRAND_MULE,                        // hand cannon "Mule"
    UNRAND_DAMNATION,                   // arbalest "Damnation"
    UNRAND_SNIPER,                      // heavy crossbow "Sniper"
};
static vector<unrand_type> coffer_ranged_one_handed = {
    UNRAND_PUNK,                        // greatsling "Punk"
    UNRAND_MULE,                        // hand cannon "Mule"
};
static vector<unrand_type> coffer_staff = {
    UNRAND_OLGREB,                      // staff of Olgreb
    UNRAND_ELEMENTAL_STAFF,             // Elemental Staff
    UNRAND_MAJIN,                       // Majin-Bo
    UNRAND_MEEK,                        // staff of the Meek
    UNRAND_ORDER,                       // lajatang of Order
};
static vector<unrand_type> coffer_orb = {
    UNRAND_CHARLATANS_ORB,              // Charlatan's Orb
    UNRAND_WUCAD_MU,                    // crystal ball of Wucad Mu
    UNRAND_DISPATER,                    // orb of Dispater
    UNRAND_SKULL_OF_ZONGULDROK,         // skull of Zonguldrok
    UNRAND_BATTLE,                      // sphere of Battle
};
static vector<unrand_type> coffer_cloak = {
    UNRAND_THIEF,                       // cloak of the Thief
    UNRAND_STARLIGHT,                   // cloak of Starlight
    UNRAND_RATSKIN_CLOAK,               // ratskin cloak
    UNRAND_FISTICLOAK,                  // fungal fisticloak
    UNRAND_DRAGONSKIN,                  // dragonskin cloak
};
static vector<unrand_type> coffer_hat = {
    UNRAND_ALCHEMIST,                   // hat of the Alchemist
    UNRAND_DRAGONMASK,                  // mask of the Dragon
    UNRAND_BEAR_SPIRIT,                 // hat of the Bear Spirit
    UNRAND_HOOD_ASSASSIN,               // hood of the Assassin
    UNRAND_DYROVEPREVA,                 // crown of Dyrovepreva
    UNRAND_PONDERING,                   // hat of Pondering
    // This next one is new!
    UNRAND_VAINGLORY,                   // crown of vainglory
};
static vector<unrand_type> coffer_glove = {
    UNRAND_FENCERS,                     // fencer's gloves
    UNRAND_GADGETEER,                   // gloves of the gadgeteer
    UNRAND_DELATRAS_GLOVES,             // Delatra's gloves
    UNRAND_WAR,                         // gauntlets of War
    UNRAND_POWER_GLOVES,                // Mad Mage's Maulers
};
static vector<unrand_type> coffer_boot = {
    UNRAND_SLICK_SLIPPERS,              // slick slippers
    UNRAND_SEVEN_LEAGUE_BOOTS,          // seven-league boots
    UNRAND_MOUNTAIN_BOOTS,              // mountain boots
};
static vector<unrand_type> coffer_shield = {
    UNRAND_WARLOCK_MIRROR,              // warlock's mirror
    UNRAND_RESISTANCE,                  // shield of Resistance
    UNRAND_STORM_QUEEN,                 // Storm Queen's Shield
    UNRAND_GONG,                        // shield of the Gong
    UNRAND_IGNORANCE,                   // tower shield of Ignorance
};
static vector<unrand_type> coffer_armor = {
    UNRAND_VICTORY,                     // toga "Victory"
    UNRAND_VINES,                       // robe of Vines
    UNRAND_RCLOUDS,                     // robe of Clouds
    UNRAND_FOLLY,                       // robe of Folly
    UNRAND_AUGMENTATION,                // robe of Augmentation
    UNRAND_MISFORTUNE,                  // robe of Misfortune
    UNRAND_NIGHT,                       // robe of Night
    UNRAND_ZHOR,                        // skin of Zhor
    UNRAND_SALAMANDER,                  // salamander hide armour
    UNRAND_EMBRACE,                     // Cigotuvi's embrace
    UNRAND_JUSTICARS_REGALIA,           // justicar's regalia
    UNRAND_MOON_TROLL_LEATHER_ARMOUR,   // moon troll leather armour
    UNRAND_KRYIAS,                      // Kryia's mail coat
    UNRAND_FAERIE,                      // faerie dragon scales
    UNRAND_LEAR,                        // Lear's hauberk
    UNRAND_MAXWELL,                     // Maxwell's patent armour
    UNRAND_DRAGON_KING,                 // scales of the Dragon King
    UNRAND_ORANGE_CRYSTAL_PLATE_ARMOUR, // orange crystal plate armour
};
static vector<unrand_type> coffer_barding = {
    UNRAND_LIGHTNING_SCALES,            // lightning scales
    UNRAND_BLACK_KNIGHT_HORSE,          // Black Knight's barding
};
static vector<unrand_type> coffer_ring = {
    UNRAND_MAGE,                        // ring of the Mage
    UNRAND_TORTOISE,                    // ring of the Tortoise
    UNRAND_HARE,                        // ring of the Hare
    UNRAND_SHADOWS,                     // ring of Shadows
    UNRAND_OCTOPUS_KING_RING,           // ring of the Octopus King
};
static vector<unrand_type> coffer_amulet = {      
    UNRAND_SHIELDING,                   // brooch of Shielding
    UNRAND_BLOODLUST,                   // necklace of Bloodlust
    UNRAND_FOUR_WINDS,                  // amulet of the Four Winds
    UNRAND_AIR,                         // amulet of the Air
    UNRAND_FINGER_AMULET,               // macabre finger necklace
    UNRAND_VITALITY,                    // amulet of Vitality
    UNRAND_DREAMSHARD_NECKLACE,         // dreamshard necklace
    UNRAND_ELEMENTAL_VULNERABILITY,     // amulet of Elemental Vulnerability
    UNRAND_HERMITS_PENDANT,             // Hermit's Pendant
};
static vector<unrand_type> coffer_stealth = { 
    UNRAND_SHADOWS,                     // ring of Shadows
    UNRAND_NIGHT,                       // robe of Night
    UNRAND_HOOD_ASSASSIN,               // hood of the Assassin
    UNRAND_THIEF,                       // cloak of the Thief
};
static vector<unrand_type> coffer_magic = {   
    UNRAND_VITALITY,                    // amulet of Vitality
    UNRAND_ELEMENTAL_VULNERABILITY,     // amulet of Elemental Vulnerability
    UNRAND_MAGE,                        // ring of the Mage
    UNRAND_VICTORY,                     // toga "Victory"
    UNRAND_FOLLY,                       // robe of Folly
    UNRAND_AUGMENTATION,                // robe of Augmentation
};