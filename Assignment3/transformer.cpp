#include "transformer.h"

TransformerBase::TransformerBase() : health(100), armor(50), currentWeapon(10), firepower(75) {}

bool TransformerBase::move() {
    return true;
}
bool TransformerBase::jump() {
    return true;
}
bool TransformerBase::attack() {
    if (currentWeapon > 0) {
        currentWeapon--;
        return true;
    }
    return false;
}