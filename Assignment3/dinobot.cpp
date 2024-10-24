#include <iostream>
#include "dinobot.h"

Dinobot::Dinobot(int strength, int speed, int armor, std::string form) : Transformer(strength, speed, armor, 100)
{
    this->form = form;
}
Dinobot::~Dinobot()
{
    std::cout << "Dinobot destroyed";
}
void Dinobot::roar()
{
    std::cout << "Dinobot roars in " << form << " form";
}