/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#ifndef AUTOBOTS_H
#define AUTOBOTS_H

#include <iostream>
#include "transformer.h"

class Autobot : public TransformerBase {
public:
    bool transformToVehicle();
};

#endif