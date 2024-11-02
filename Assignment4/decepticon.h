/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 4 */

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include <iostream>
#include "transformer.h"

class Decepticon : public TransformerBase
{
public:
    Decepticon();
    Decepticon(unsigned int health, unsigned int armor, unsigned int firepower, unsigned int currentWeapon);

    bool transformToVehicle();
    bool operator>(const Decepticon& other) const;
    bool operator<(const Decepticon& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);

private:
    unsigned int health;
    unsigned int armor;
    unsigned int firepower;
    unsigned int currentWeapon;
};

#endif