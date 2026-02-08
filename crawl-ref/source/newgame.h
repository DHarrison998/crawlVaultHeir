/**
 * @file
 * @brief Functions used when starting a new game.
**/

#pragma once

#include <vector>

#include "item-prop-enum.h"
#include "job-type.h"
#include "species-type.h"

using std::vector;

class UINewGameMenu;
struct menu_letter;
struct newgame_def;

string newgame_char_description(const newgame_def& ng);

void choose_tutorial_character(newgame_def& ng_choice);

bool choose_game(newgame_def& ng, newgame_def& choice,
                 const newgame_def& defaults);

weapon_type starting_weapon_upgrade(weapon_type wp, job_type job,
                                            species_type species);
coffer_type get_coffer_choice(coffer_type type, job_type job,
                                            species_type species);

string newgame_random_name();

/*
 * A structure for grouping backgrounds by category.
 */
struct job_group
{
    const char* name;   ///< Name of the group.
    coord_def position; ///< Relative coordinates of the title.
    int width;          ///< Column width.
    vector<job_type> jobs; ///< List of jobs in the group.

    /// A method to attach the group to a freeform.
    void attach(const newgame_def& ng, const newgame_def& defaults,
                UINewGameMenu* menu, menu_letter &letter);
};

struct species_group
{
    const char* name;   ///< Name of the group.
    coord_def position; ///< Relative coordinates of the title.
    int width;          ///< Column width.
    vector<species_type> species_list; ///< List of species in the group.

    /// A method to attach the group to a freeform.
    void attach(const newgame_def& ng, const newgame_def& defaults,
                UINewGameMenu* menu, menu_letter &letter);
};

struct item_skill_bundle
{
    const char* name;
    vector<pair<object_class_type, uint8_t>> items;
    vector<pair<skill_type, int>> skills;
    bool starting_spell;

    bool operator==(const item_skill_bundle& other) const
    {
        if (items.size() != other.items.size()
            || skills.size() != other.skills.size())
            return false;

        if (name != other.name)
            return false;
        
        for (unsigned int i = 0; i < items.size(); ++i)
        {
            if (items[i] != other.items[i])
                return false;
        }
        for (unsigned int i = 0; i < skills.size(); ++i)
        {
            if (skills[i] != other.skills[i])
                return false;
        }
        return true;
    }
    bool operator!=(const item_skill_bundle& other) const
    {
        return !(*this == other);
    }
    // void clear() const // Daniel - Warning, probably need to do this right. Should the whole thing be a pointer in newgame-def.h?
    // {
    //     // name = nullptr;
    //     items.clear();
    //     skills.clear();
    // }
};