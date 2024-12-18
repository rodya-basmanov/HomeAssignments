/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#ifndef DINOBOT_H
#define DINOBOT_H

#include <iostream>
#include "transformer.h"

class MiniRobot : public TransformerBase {
public:
    bool transformToVehicle();
};

#endif