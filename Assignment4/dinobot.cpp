/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 4 */

#include "dinobot.h"

Dinobot::Dinobot() : health(130), armor(70), firepower(90), currentWeapon(8) {}
Dinobot::Dinobot(unsigned int h, unsigned int a, unsigned int f, unsigned int w)
    : health(h), armor(a), firepower(f), currentWeapon(w) {}

bool Dinobot::transformToVehicle()
{
    std::cout << "Dinobot transforming to dinosaur mode!" << std::endl;
    return true;
}

bool Dinobot::operator>(const Dinobot& other) const
{
    return firepower > other.firepower;
}
bool Dinobot::operator<(const Dinobot& other) const
{
    return firepower < other.firepower;
}

std::ostream& operator<<(std::ostream& os, const Dinobot& dinobot)
{
    os << "Dinobot - Health: " << dinobot.health
       << ", Armor: " << dinobot.armor
       << ", Firepower: " << dinobot.firepower
       << ", Weapon: " << dinobot.currentWeapon;
    return os;
}