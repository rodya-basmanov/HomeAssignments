#include "transformer.h"
#include "autobot.h"
#include <iostream>

int main()
{
    Autobot optimus(100, 20, 100, true);
    optimus.transform();
    optimus.specialMove();
    return 0;
}