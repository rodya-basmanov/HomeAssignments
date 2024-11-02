/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 4 */

#include "transformer.h"
#include <iostream>

TransformerBase::TransformerBase() : health(100), armor(50), currentWeapon(10), firepower(75) {}

bool TransformerBase::move()
{
    return true;
}

bool TransformerBase::jump()
{
    return true;
}

bool TransformerBase::attack()
{
    if (currentWeapon > 0)
    {
        currentWeapon--;
        return true;
    }
    return false;
}

std::ostream& operator<<(std::ostream& os, const TransformerBase& transformer)
{
    os << "Transformer - Health: " << transformer.health
       << ", Armor: " << transformer.armor
       << ", Firepower: " << transformer.firepower
       << ", Weapon: " << transformer.currentWeapon;
    return os;
}