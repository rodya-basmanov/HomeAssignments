#include <gtest/gtest.h>
#include "autobot.h"
#include "decepticon.h"
#include "dinobot.h"
#include "transformer.h"
#include "weapon.h"

TEST(AutobotTest, ConstructorAndGetters) {
    Autobot optimus(100, 20, 100, true);
    EXPECT_EQ(optimus.getStrength(), 100);
    EXPECT_EQ(optimus.getSpeed(), 20);
    EXPECT_EQ(optimus.getArmor(), 100);
    EXPECT_EQ(optimus.getIsLeader(), true);
}
TEST(AutobotTest, SetIsLeader) {
    Autobot optimus(100, 20, 100, true);
    optimus.setIsLeader(false);
    EXPECT_EQ(optimus.getIsLeader(), false);
}
TEST(AutobotTest, SpecialMove) {
    Autobot optimus(100, 20, 100, true);
    testing::internal::CaptureStdout();
    optimus.specialMove();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot performs a special move\n");
}
TEST(DecepticonTest, ConstructorAndAttack) {
    Decepticon megatron(120, 40, 100, "Blaster");
    EXPECT_EQ(megatron.getStrength(), 120);
    EXPECT_EQ(megatron.getSpeed(), 40);
    EXPECT_EQ(megatron.getArmor(), 100);
    testing::internal::CaptureStdout();
    megatron.attack();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Decepticon attack with Blaster\n");
}
TEST(DinobotTest, ConstructorAndRoar) {
    Dinobot grimlock(150, 70, 100, "Dino mode");
    EXPECT_EQ(grimlock.getStrength(), 150);
    EXPECT_EQ(grimlock.getSpeed(), 70);
    EXPECT_EQ(grimlock.getArmor(), 100);
    testing::internal::CaptureStdout();
    grimlock.roar();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Dinobot roars in Dino mode form\n");
}
TEST(TransformerTest, TransformAndRefuel) {
    Transformer transformer(100, 20, 30, 100);
    testing::internal::CaptureStdout();
    transformer.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "TRansformer is transform\n");

    testing::internal::CaptureStdout();
    transformer.refuel();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Transformer refuel\n");
}
TEST(WeaponTest, ConstructorAndGetType) {
    Weapon sword("Sword");
    EXPECT_EQ(sword.getType(), "Sword");
}
