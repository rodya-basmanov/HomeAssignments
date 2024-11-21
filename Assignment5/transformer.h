/* ## Assignment5
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 5 */

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <iostream>

class Transformer
{
public:
    Transformer();
    virtual ~Transformer() = default;

    virtual void transform() const = 0;
    virtual void openFire() const = 0;
    virtual void ultra() const = 0;

    bool move();
    bool jump();
    bool attack();

    friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);

protected:
    unsigned int health;
    unsigned int armor;
    unsigned int firepower;
    unsigned int currentWeapon;
};

#endif