/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include "weapon.h"
#include "armor.h"
#include <string>

class transformer {
protected:
    uint _health;
    uint _armor;
    uint _weapon;
    uint _power;

public:
    transformer(uint health, uint armor, uint weapon, uint power);
    virtual ~transformer() = default;

    uint get_health() const;
    void set_health(uint health);

    uint get_armor() const;
    void set_armor(uint armor);

    uint get_weapon() const;
    void set_weapon(uint weapon);

    uint get_power() const;
    void set_power(uint power);

    virtual void transform() const = 0;

    bool motion() const;
    bool jump() const;
    bool attack() const;
};

#endif