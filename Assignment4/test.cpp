/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 4 */

#include <gtest/gtest.h>
#include "transformer.h"

TEST(TransformerTest, AttackDecreasesWeapon) {
    TransformerBase transformer;
    unsigned int initialWeapon = transformer.getWeapon();
    transformer.attack();
    EXPECT_EQ(transformer.getWeapon(), initialWeapon - 1);
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
    transformer.setWeapon(15);
    EXPECT_EQ(transformer.getWeapon(), 15);
}