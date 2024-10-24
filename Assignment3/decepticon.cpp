#include <iostream>
#include "decepticon.h"

Decepticon::Decepticon(int strength, int speed, int armor, std::string weaponType) : Transformer(strength, speed, armor, 100), weapon(weaponType) {}

Decepticon::~Decepticon()
{
    std::cout << "Decepticon destroyed";
}

void Decepticon::attack()
{
    std::cout << "Decepticon attack with " << weapon.getType();
}