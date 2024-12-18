/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#include <gtest/gtest.h>
#include "transformer.h"

TEST(TransformerTest, AttackDecreasesWeapon) {
    TransformerBase transformer;
    unsigned int initialWeapon = transformer.getCurrentWeapon();
    transformer.attack();
    EXPECT_EQ(transformer.getCurrentWeapon(), initialWeapon - 1);
}

TEST(TransformerTest, JumpSuccessful) {
    TransformerBase transformer;
    EXPECT_TRUE(transformer.jump());
}

TEST(TransformerTest, MoveSuccessful) {
    TransformerBase transformer;
    EXPECT_TRUE(transformer.move());
}

TEST(TransformerTest, SetAndGetWeapon) {
    TransformerBase transformer;
    transformer.setCurrentWeapon(15);
    EXPECT_EQ(transformer.getCurrentWeapon(), 15);
}

TEST(TransformerTest, GetPrimaryWeapon) {
    TransformerBase transformer;
    EXPECT_EQ(transformer.getPrimaryWeapon().getName(), "Blaster");
    EXPECT_EQ(transformer.getPrimaryWeapon().getDamage(), 25);
}

TEST(TransformerTest, GetDefensiveArmor) {
    TransformerBase transformer;
    EXPECT_EQ(transformer.getDefensiveArmor().getType(), "Titanium");
    EXPECT_EQ(transformer.getDefensiveArmor().getStrength(), 40);
}