#ifndef TRANSFORMER_H
#define TRANSFORMER_H

class Transformer
{
private:
    int strength;
    int speed;
    int armor;
    int fuel;
    Engine engine;
public:
    Transformer(int strength, int speed, int armor, int fuel);
    ~Transformer();

    int getStrength();
    void setStrength(int strength);

    int getSpeed();
    void setSpeed(int speed);

    int getArmor();
    void setArmor(int armor);

    int getFuel();
    void setFuel(int fuel);

    void transform();
    void refuel();

};
#endif