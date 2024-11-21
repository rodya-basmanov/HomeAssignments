/* ## Assignment5
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 5 */

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"

class Decepticon : public Transformer
{
public:
    Decepticon();

    void transform() const override;
    void openFire() const override;
    void ultra() const override;
};

#endif