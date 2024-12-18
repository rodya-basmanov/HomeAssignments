/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include <iostream>
#include "transformer.h"

class Decepticon : public TransformerBase {
public:
    bool transformToVehicle();
};

#endif