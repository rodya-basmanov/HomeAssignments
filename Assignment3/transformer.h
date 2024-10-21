#ifndef TRANSFORMER_H
#define TRANSFORMER_H

class Transformer
{
private:
    int strength;
    int speed;
    int armor;
public:
    Transformer(int strength, int speed, int armor);
    int getStrength();
    void setStrength(int strength);

    int getSpeed();
    void setSpeed(int speed);

    int getArmor();
    void setArmor(int armor);

    void transform();

};
#endif