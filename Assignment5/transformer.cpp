/* ## Assignment5
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 5 */

#include "transformer.h"

Transformer::Transformer() : health(100), armor(50), firepower(75), currentWeapon(10) {}

bool Transformer::move()
{
    return true;
}

bool Transformer::jump()
{
    return true;
}

bool Transformer::attack()
{
    if (currentWeapon > 0)
    {
        currentWeapon--;
        return true;
    }
    return false;
}

std::ostream& operator<<(std::ostream& os, const Transformer& transformer)
{
    os << "Transformer - Health: " << transformer.health
       << ", Armor: " << transformer.armor
       << ", Firepower: " << transformer.firepower
       << ", Weapon: " << transformer.currentWeapon;
    return os;
}