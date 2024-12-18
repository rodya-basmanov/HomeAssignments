/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class weapon {
private:
    std::string _type;
    uint _damage;

public:
    weapon(const std::string& type = "Blaster", uint damage = 50);
    std::string get_type() const;
    void set_type(const std::string& type);

    uint get_damage() const;
    void set_damage(uint damage);
};

#endif