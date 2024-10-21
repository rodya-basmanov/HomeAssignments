#include "autobot.h"
#include <iostream>

Autobot::Autobot(int strength, int speed, int armor, bool isLeader) : Transformer(strength, speed, armor)
{
    this->isLeader = isLeader;
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