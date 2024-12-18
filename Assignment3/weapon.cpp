/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#include "weapon.h"

weapon::weapon(const std::string& type, uint damage) : _type(type), _damage(damage) {}

std::string weapon::get_type() const {
    return _type;
}

void weapon::set_type(const std::string& type) {
    _type = type;
}

uint weapon::get_damage() const {
    return _damage;
}

void weapon::set_damage(uint damage) {
    _damage = damage;
}