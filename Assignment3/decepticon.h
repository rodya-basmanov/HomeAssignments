#ifndef DECEPTICON_H
#define DECEPTICON_H

#include <iostream>
#include "transformer.h"

class Decepticon : public TransformerBase {
public:
    bool transformToVehicle();
private:
    unsigned int health;
    unsigned int armor;
    unsigned int currentWeapon;
    unsigned int firepower;
};

#endif