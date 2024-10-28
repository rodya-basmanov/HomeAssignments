#ifndef DINOBOT_H
#define DINOBOT_H

#include <iostream>
#include "transformer.h"

class MiniRobot : public TransformerBase {
public:
    bool transformToVehicle();
private:
    unsigned int health;
    unsigned int armor;
    unsigned int currentWeapon;
    unsigned int firepower;
};

#endif