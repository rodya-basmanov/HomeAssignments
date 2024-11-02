/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#ifndef AUTOBOTS_H
#define AUTOBOTS_H

#include <iostream>
#include "transformer.h"

class Autobot : public TransformerBase
{
public:
    Autobot();
    Autobot(unsigned int health, unsigned int armor, unsigned int firepower, unsigned int currentWeapon);
    bool transformToVehicle();

    bool operator>(const Autobot& other) const;
    bool operator<(const Autobot& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);

private:
    unsigned int health;
    unsigned int armor;
    unsigned int firepower;
    unsigned int currentWeapon;
};

#endif