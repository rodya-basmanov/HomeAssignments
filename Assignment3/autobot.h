/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "transformer.h"

class autobot : public transformer {
private:
    std::string _weapon_type;
    uint _skill_level;
    uint _inventory_size;

public:
    autobot(uint health, uint armor, uint weapon, uint power, const std::string& weapon_type, uint skill_level = 0, uint inventory_size = 50);
    std::string get_weapon_type() const;
    void set_weapon_type(const std::string& weapon_type);

    uint get_skill_level() const;
    void set_skill_level(uint skill_level);

    uint get_inventory_size() const;
    void set_inventory_size(uint inventory_size);

    void transform() const override;
};

#endif