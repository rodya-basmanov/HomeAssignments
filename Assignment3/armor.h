/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#ifndef ARMOR_H
#define ARMOR_H

#include <string>

class armor {
private:
    std::string _material;
    uint _defense;

public:
    armor(const std::string& material = "Steel", uint defense = 100);
    std::string get_material() const;
    void set_material(const std::string& material);

    uint get_defense() const;
    void set_defense(uint defense);
};

#endif