/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 4 */

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <iostream>

class TransformerBase
{
public:
    TransformerBase();
    bool move();
    bool jump();
    bool attack();
    void setWeapon(unsigned int weapon)
    {
        currentWeapon = weapon;
    }
    unsigned int getWeapon() const
    {
        return currentWeapon;
    }

    friend std::ostream& operator<<(std::ostream& os, const TransformerBase& transformer);

protected:
    unsigned int health;
    unsigned int armor;
    unsigned int currentWeapon;
    unsigned int firepower;
};

#endif