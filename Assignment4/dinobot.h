/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 4 */

#ifndef DINOBOT_H
#define DINOBOT_H

#include <iostream>
#include "transformer.h"

class Dinobot : public TransformerBase
{
public:
    Dinobot();
    Dinobot(unsigned int health, unsigned int armor, unsigned int firepower, unsigned int currentWeapon);

    bool transformToVehicle();

    bool operator>(const Dinobot& other) const;
    bool operator<(const Dinobot& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Dinobot& dinobot);

private:
    unsigned int health;
    unsigned int armor;
    unsigned int firepower;
    unsigned int currentWeapon;
};

#endif