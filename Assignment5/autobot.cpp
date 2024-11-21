/* ## Assignment5
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 5 */

#include "autobot.h"

Autobot::Autobot()
{
    health = 120;
    armor = 70;
    firepower = 85;
    currentWeapon = 15;
}

void Autobot::transform() const
{
    std::cout << "Autobot transforming to vehicle mode!" << std::endl;
}

void Autobot::openFire() const
{
    std::cout << "Autobot opening fire!" << std::endl;
}

void Autobot::ultra() const
{
    std::cout << "Autobot executing ultra attack!" << std::endl;
}