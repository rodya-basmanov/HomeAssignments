#include <iostream>
#include "weapon.h"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destroyed";
}

std::string Weapon::getType()
{
    return type;
}