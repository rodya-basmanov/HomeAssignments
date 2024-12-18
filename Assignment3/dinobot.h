/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#ifndef DINOBOT_H
#define DINOBOT_H

#include "transformer.h"

class dinobot : public transformer {
private:
    std::string _dinosaur_type;

public:
    dinobot(uint health, uint armor, uint weapon, uint power, const std::string& dinosaur_type);
    std::string get_dinosaur_type() const;
    void set_dinosaur_type(const std::string& dinosaur_type);

    void transform() const override;
};

#endif