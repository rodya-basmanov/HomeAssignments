#ifndef TRANSFORMER_H
#define TRANSFORMER_H

class TransformerBase {
public:
    TransformerBase();
    bool move();
    bool jump();
    bool attack();
    void setWeapon(unsigned int weapon) {
        currentWeapon = weapon;
    }
    unsigned int getWeapon() {
        return currentWeapon;
    }
protected:
    unsigned int health;
    unsigned int armor;
    unsigned int currentWeapon;
    unsigned int firepower;
};

#endif