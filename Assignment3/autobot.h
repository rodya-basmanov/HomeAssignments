#ifndef AUTOBOTS_H
#define AUTOBOTS_H

#include <iostream>
#include "transformer.h"

class Autobot : public TransformerBase {
public:
    bool transformToVehicle();
private:
    unsigned int health;
    unsigned int armor;
    unsigned int firepower;
    unsigned int currentWeapon;
};

#endif