/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#include "armor.h"

armor::armor(const std::string& material, uint defense) : _material(material), _defense(defense) {}

std::string armor::get_material() const {
    return _material;
}

void armor::set_material(const std::string& material) {
    _material = material;
}

uint armor::get_defense() const {
    return _defense;
}

void armor::set_defense(uint defense) {
    _defense = defense;
}