/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#include "transformer.h"

transformer::transformer(uint health, uint armor, uint weapon, uint power)
    : _health(health), _armor(armor), _weapon(weapon), _power(power) {}

uint transformer::get_health() const {
    return _health;
}

void transformer::set_health(uint health) {
    _health = health;
}

uint transformer::get_armor() const {
    return _armor;
}

void transformer::set_armor(uint armor) {
    _armor = armor;
}

uint transformer::get_weapon() const {
    return _weapon;
}

void transformer::set_weapon(uint weapon) {
    _weapon = weapon;
}

uint transformer::get_power() const {
    return _power;
}

void transformer::set_power(uint power) {
    _power = power;
}

bool transformer::motion() const {
    return true;
}

bool transformer::jump() const {
    return true;
}

bool transformer::attack() const {
    return true;
}