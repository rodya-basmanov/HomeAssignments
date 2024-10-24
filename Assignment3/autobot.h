#ifndef AUTOBOT_H
#define AUTOBOT_H
#include "transformer.h"

class Autobot : public Transformer
{
private:
    bool isLeader;
public:
    Autobot(int strength, int speed, int armor, bool isLeader);
    ~Autobot();

    bool getIsLeader();
    void setIsLeader(bool isLeader);

    void specialMove();
};
#endif