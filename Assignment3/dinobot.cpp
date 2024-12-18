/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#include "dinobot.h"

dinobot::dinobot(uint health, uint armor, uint weapon, uint power, const std::string& dinosaur_type)
    : transformer(health, armor, weapon, power), _dinosaur_type(dinosaur_type) {}

std::string dinobot::get_dinosaur_type() const {
    return _dinosaur_type;
}

void dinobot::set_dinosaur_type(const std::string& dinosaur_type) {
    _dinosaur_type = dinosaur_type;
}

void dinobot::transform() const {

}