/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 4 */

#include "autobot.h"

Autobot::Autobot() : health(100), armor(50), firepower(75), currentWeapon(10) {}
Autobot::Autobot(unsigned int h, unsigned int a, unsigned int f, unsigned int w)
    : health(h), armor(a), firepower(f), currentWeapon(w) {}

bool Autobot::transformToVehicle()
{
    std::cout << "Autobot transforming to vehicle!" << std::endl;
    return true;
}

bool Autobot::operator>(const Autobot& other) const
{
    return firepower > other.firepower;
}
bool Autobot::operator<(const Autobot& other) const
{
    return firepower < other.firepower;
}

std::ostream& operator<<(std::ostream& os, const Autobot& autobot)
{
    os << "Autobot - Health: " << autobot.health
       << ", Armor: " << autobot.armor
       << ", Firepower: " << autobot.firepower
       << ", Weapon: " << autobot.currentWeapon;
    return os;
}