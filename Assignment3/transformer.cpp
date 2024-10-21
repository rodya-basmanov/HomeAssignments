#include "transformer.h"
#include <iostream>

Transformer::Transformer(int strength, int speed, int armor)
{
    this->strength = strength;
    this->speed = speed;
    this->armor = armor;
}
int Transformer::getStrength()
{
    return strength;
}
void Transformer::setStrength(int stregnth)
{
    this->strength = stregnth;
}
int Transformer::getSpeed()
{
    return speed;
}
void Transformer::setSpeed(int speed)
{
    this->speed = speed;
}
int Transformer::getArmor()
{
    return armor;
}
void Transformer::setArmor(int armor)
{
    this->armor = armor;
}
void Transformer::transform()
{
    std::cout << "TRansformer is transform\n";
}