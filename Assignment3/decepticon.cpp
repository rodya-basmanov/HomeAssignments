/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#include "decepticon.h"

decepticon::decepticon(uint health, uint armor, uint weapon, uint power, uint danger_level)
    : transformer(health, armor, weapon, power), _danger_level(danger_level) {}

uint decepticon::get_danger_level() const {
    return _danger_level;
}

void decepticon::set_danger_level(uint danger_level) {
    _danger_level = danger_level;
}

void decepticon::transform() const {
    
}