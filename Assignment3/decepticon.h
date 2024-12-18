/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"

class decepticon : public transformer {
private:
    uint _danger_level;

public:
    decepticon(uint health, uint armor, uint weapon, uint power, uint danger_level);
    uint get_danger_level() const;
    void set_danger_level(uint danger_level);

    void transform() const override;
};

#endif