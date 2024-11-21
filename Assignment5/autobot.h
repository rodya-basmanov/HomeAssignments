/* ## Assignment5
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 5 */

#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "transformer.h"

class Autobot : public Transformer
{
public:
    Autobot();

    void transform() const override;
    void openFire() const override;
    void ultra() const override;
};

#endif