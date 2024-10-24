#include "transformer.h"
#include "engine.h"
#include <iostream>

Transformer::Transformer(int strength, int speed, int armor, int fuel) : engine(Engine())
{
    this->strength = strength;
    this->speed = speed;
    this->armor = armor;
    this->fuel = fuel;
}
Transformer::~Transformer()
{
    std::cout << "Transformer destroyed";
}
int Transformer::getStrength()
{
    return strength;
}
void Transformer::setStrength(int strength)
{
    this->strength = strength;
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
int Transformer::getFuel()
{
    return fuel;
}
void Transformer::setFuel(int fuel)
{
    this->fuel = fuel;
}
void Transformer::transform()
{
    std::cout << "TRansformer is transform\n";
}
void Transformer::refuel()
{
    std::cout << "Transformer refuel\n";
}