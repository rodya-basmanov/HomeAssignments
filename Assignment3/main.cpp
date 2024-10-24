#include "autobot.h"
#include "dinobot.h"
#include "decepticon.h"
#include <iostream>

int main()
{
    Autobot optimus(100, 20, 100, true);
    optimus.transform();
    optimus.specialMove();
    return 0;

    Decepticon megatron(120, 40, 100, "Blaster");
    megatron.transform();
    megatron.attack();

    Dinobot grimlock(150, 70, 100, "Dino mode");
    grimlock.transform();
    grimlock.roar();
    
    return 0;
}