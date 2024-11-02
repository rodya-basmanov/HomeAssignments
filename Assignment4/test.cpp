/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 4 */

#include <gtest/gtest.h>
#include "autobot.h"
#include "decepticon.h"
#include "dinobot.h"
#include <sstream>

TEST(AutobotTest, ConstructorAndAttributes) {
    Autobot autobot(100, 50, 80, 10);
    EXPECT_EQ(autobot.getWeapon(), 10);
}

TEST(AutobotTest, OutputOperator) {
    Autobot autobot(100, 50, 80, 10);
    std::ostringstream os;
    os << autobot;
    EXPECT_NE(os.str().find("Autobot - Health: 100"), std::string::npos);
}

TEST(AutobotTest, ComparisonOperator) {
    Autobot autobot1(100, 50, 80, 10);
    Autobot autobot2(100, 50, 75, 10);
    EXPECT_TRUE(autobot1 > autobot2);
    EXPECT_FALSE(autobot1 < autobot2);
}

TEST(DecepticonTest, ConstructorAndAttributes) {
    Decepticon decepticon(120, 60, 85, 12);
    EXPECT_EQ(decepticon.getWeapon(), 12);
}

TEST(DecepticonTest, OutputOperator) {
    Decepticon decepticon(120, 60, 85, 12);
    std::ostringstream os;
    os << decepticon;
    EXPECT_NE(os.str().find("Decepticon - Health: 120"), std::string::npos);
}

TEST(DecepticonTest, ComparisonOperator) {
    Decepticon decepticon1(120, 60, 85, 12);
    Decepticon decepticon2(120, 60, 75, 10);
    EXPECT_TRUE(decepticon1 > decepticon2);
    EXPECT_FALSE(decepticon1 < decepticon2);
}

TEST(DinobotTest, ConstructorAndAttributes) {
    Dinobot dinobot(130, 70, 90, 8);
    EXPECT_EQ(dinobot.getWeapon(), 8);
}

TEST(DinobotTest, OutputOperator) {
    Dinobot dinobot(130, 70, 90, 8);
    std::ostringstream os;
    os << dinobot;
    EXPECT_NE(os.str().find("Dinobot - Health: 130"), std::string::npos);
}

TEST(DinobotTest, ComparisonOperator) {
    Dinobot dinobot1(130, 70, 90, 8);
    Dinobot dinobot2(130, 70, 80, 6);
    EXPECT_TRUE(dinobot1 > dinobot2);
    EXPECT_FALSE(dinobot1 < dinobot2);
}

TEST(TransformerBaseTest, BasicFunctions) {
    TransformerBase transformer;
    transformer.setWeapon(10);
    EXPECT_EQ(transformer.getWeapon(), 10);

    transformer.attack();
    EXPECT_EQ(transformer.getWeapon(), 9);
    EXPECT_TRUE(transformer.move());
    EXPECT_TRUE(transformer.jump());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}