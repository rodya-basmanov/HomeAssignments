/* ## Assignment5
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 5 */

#include "decepticon.h"

Decepticon::Decepticon()
{
    health = 140;
    armor = 80;
    firepower = 95;
    currentWeapon = 20;
}

void Decepticon::transform() const
{
    std::cout << "Decepticon transforming to fighter mode!" << std::endl;
}

void Decepticon::openFire() const
{
    std::cout << "Decepticon opening fire!" << std::endl;
}

void Decepticon::ultra() const
{
    std::cout << "Decepticon executing ultra strike!" << std::endl;
}