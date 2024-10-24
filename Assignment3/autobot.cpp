#include "autobot.h"
#include <iostream>

Autobot::Autobot(int strength, int speed, int armor, bool isLeader) : Transformer(strength, speed, armor, 100)
{
    this->isLeader = isLeader;
}
Autobot::~Autobot()
{
    std::cout << "Autobot destroyed";
}
bool Autobot::getIsLeader()
{
    return isLeader;
}
void Autobot::setIsLeader(bool isLeader)
{
    this->isLeader = isLeader; 
}
void Autobot::specialMove()
{
    std::cout << "Autobot performs a special move\n";
}