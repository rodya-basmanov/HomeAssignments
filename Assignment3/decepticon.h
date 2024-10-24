#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"
#include "weapon.h"

class Decepticon : public Transformer
{
private:
    Weapon weapon;
public:
    Decepticon(int strength, int speed, int armor, std::string weaponType);
    ~Decepticon();

    void attack();
};

#endif