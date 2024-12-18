/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#include <gtest/gtest.h>
#include "autobot.h"
#include "decepticon.h"
#include "dinobot.h"
#include "weapon.h"
#include "armor.h"

TEST(autobot_test, constructor_and_getters) {
    autobot a(150, 90, 25, 120, "Plasma Cannon", 10, 100);

    EXPECT_EQ(a.get_health(), 150);
    EXPECT_EQ(a.get_armor(), 90);
    EXPECT_EQ(a.get_weapon(), 25);
    EXPECT_EQ(a.get_power(), 120);
    EXPECT_EQ(a.get_weapon_type(), "Plasma Cannon");
    EXPECT_EQ(a.get_skill_level(), 10);
    EXPECT_EQ(a.get_inventory_size(), 100);
}

TEST(autobot_test, setters) {
    autobot a(0, 0, 0, 0, "Laser Blaster");
    a.set_weapon_type("Plasma Blaster");
    a.set_skill_level(20);
    a.set_inventory_size(200);

    EXPECT_EQ(a.get_weapon_type(), "Plasma Blaster");
    EXPECT_EQ(a.get_skill_level(), 20);
    EXPECT_EQ(a.get_inventory_size(), 200);
}

TEST(autobot_test, methods) {
    autobot a(150, 90, 25, 120, "Plasma Cannon");
    EXPECT_TRUE(a.motion());
    EXPECT_TRUE(a.jump());
    EXPECT_TRUE(a.attack());
}

TEST(decepticon_test, constructor_and_getters) {
    decepticon d(130, 85, 30, 110, 5);

    EXPECT_EQ(d.get_health(), 130);
    EXPECT_EQ(d.get_armor(), 85);
    EXPECT_EQ(d.get_weapon(), 30);
    EXPECT_EQ(d.get_power(), 110);
    EXPECT_EQ(d.get_danger_level(), 5);
}

TEST(decepticon_test, setters) {
    decepticon d(0, 0, 0, 0, 0);
    d.set_danger_level(10);

    EXPECT_EQ(d.get_danger_level(), 10);
}

TEST(decepticon_test, methods) {
    decepticon d(130, 85, 30, 110, 5);
    EXPECT_TRUE(d.motion());
    EXPECT_TRUE(d.jump());
    EXPECT_TRUE(d.attack());
}

TEST(dinobot_test, constructor_and_getters) {
    dinobot d(120, 80, 25, 100, "T-Rex");

    EXPECT_EQ(d.get_health(), 120);
    EXPECT_EQ(d.get_armor(), 80);
    EXPECT_EQ(d.get_weapon(), 25);
    EXPECT_EQ(d.get_power(), 100);
    EXPECT_EQ(d.get_dinosaur_type(), "T-Rex");
}

TEST(dinobot_test, setters) {
    dinobot d(0, 0, 0, 0, "");
    d.set_dinosaur_type("Triceratops");

    EXPECT_EQ(d.get_dinosaur_type(), "Triceratops");
}

TEST(dinobot_test, methods) {
    dinobot d(120, 80, 25, 100, "T-Rex");
    EXPECT_TRUE(d.motion());
    EXPECT_TRUE(d.jump());
    EXPECT_TRUE(d.attack());
}