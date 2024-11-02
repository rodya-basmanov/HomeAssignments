/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 4 */

#include "decepticon.h"

Decepticon::Decepticon() : health(120), armor(60), firepower(85), currentWeapon(12) {}
Decepticon::Decepticon(unsigned int h, unsigned int a, unsigned int f, unsigned int w)
    : health(h), armor(a), firepower(f), currentWeapon(w) {}

bool Decepticon::transformToVehicle()
{
    std::cout << "Decepticon transforming to vehicle!" << std::endl;
    return true;
}

bool Decepticon::operator>(const Decepticon& other) const
{
    return firepower > other.firepower;
}
bool Decepticon::operator<(const Decepticon& other) const
{
    return firepower < other.firepower;
}

std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon)
{
    os << "Decepticon - Health: " << decepticon.health
       << ", Armor: " << decepticon.armor
       << ", Firepower: " << decepticon.firepower
       << ", Weapon: " << decepticon.currentWeapon;
    return os;
}