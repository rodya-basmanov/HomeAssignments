/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#include "autobot.h"

autobot::autobot(uint health, uint armor, uint weapon, uint power, const std::string& weapon_type, uint skill_level, uint inventory_size)
    : transformer(health, armor, weapon, power), _weapon_type(weapon_type), _skill_level(skill_level), _inventory_size(inventory_size) {}

std::string autobot::get_weapon_type() const {
    return _weapon_type;
}

void autobot::set_weapon_type(const std::string& weapon_type) {
    _weapon_type = weapon_type;
}

uint autobot::get_skill_level() const {
    return _skill_level;
}

void autobot::set_skill_level(uint skill_level) {
    _skill_level = skill_level;
}

uint autobot::get_inventory_size() const {
    return _inventory_size;
}

void autobot::set_inventory_size(uint inventory_size) {
    _inventory_size = inventory_size;
}

void autobot::transform() const {

}