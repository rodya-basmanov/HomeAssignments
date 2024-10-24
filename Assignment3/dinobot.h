#ifndef DINOBOT_H
#define DINOBOT_H

#include "transformer.h"
#include <string>

class Dinobot : public Transformer
{
private:
    std::string form;
public:
    Dinobot(int strength, int speed, int armor, std::string form);
    ~Dinobot();

    void roar();
};


#endif