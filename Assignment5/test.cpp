/* ## Assignment5
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 5 */

#include <gtest/gtest.h>
#include "autobot.h"
#include "decepticon.h"

TEST(TransformerTest, AutobotMethods) {
    Autobot autobot;

    testing::internal::CaptureStdout();
    autobot.transform();
    std::string transformOutput = testing::internal::GetCapturedStdout();
    EXPECT_EQ(transformOutput, "Autobot transforming to vehicle mode!\n");

    testing::internal::CaptureStdout();
    autobot.openFire();
    std::string openFireOutput = testing::internal::GetCapturedStdout();
    EXPECT_EQ(openFireOutput, "Autobot opening fire!\n");

    testing::internal::CaptureStdout();
    autobot.ultra();
    std::string ultraOutput = testing::internal::GetCapturedStdout();
    EXPECT_EQ(ultraOutput, "Autobot executing ultra attack!\n");
}

TEST(TransformerTest, DecepticonMethods) {
    Decepticon decepticon;

    testing::internal::CaptureStdout();
    decepticon.transform();
    std::string transformOutput = testing::internal::GetCapturedStdout();
    EXPECT_EQ(transformOutput, "Decepticon transforming to fighter mode!\n");

    testing::internal::CaptureStdout();
    decepticon.openFire();
    std::string openFireOutput = testing::internal::GetCapturedStdout();
    EXPECT_EQ(openFireOutput, "Decepticon opening fire!\n");

    testing::internal::CaptureStdout();
    decepticon.ultra();
    std::string ultraOutput = testing::internal::GetCapturedStdout();
    EXPECT_EQ(ultraOutput, "Decepticon executing ultra strike!\n");
}

TEST(TransformerTest, Polymorphism) {
    Transformer* autobot = new Autobot();
    Transformer* decepticon = new Decepticon();

    testing::internal::CaptureStdout();
    autobot->transform();
    autobot->openFire();
    autobot->ultra();
    std::string autobotOutput = testing::internal::GetCapturedStdout();
    EXPECT_EQ(autobotOutput,
              "Autobot transforming to vehicle mode!\nAutobot opening fire!\nAutobot executing ultra attack!\n");

    testing::internal::CaptureStdout();
    decepticon->transform();
    decepticon->openFire();
    decepticon->ultra();
    std::string decepticonOutput = testing::internal::GetCapturedStdout();
    EXPECT_EQ(decepticonOutput,
              "Decepticon transforming to fighter mode!\nDecepticon opening fire!\nDecepticon executing ultra strike!\n");

    delete autobot;
    delete decepticon;
}

TEST(TransformerTest, VectorTest) {
    std::vector<Transformer*> transformers;

    for (int i = 0; i < 3; ++i) {
        transformers.push_back(new Autobot());
        transformers.push_back(new Decepticon());
    }

    testing::internal::CaptureStdout();
    for (auto transformer : transformers) {
        transformer->transform();
        transformer->openFire();
        transformer->ultra();
    }
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Autobot transforming to vehicle mode!"), std::string::npos);
    EXPECT_NE(output.find("Decepticon transforming to fighter mode!"), std::string::npos);

    for (auto transformer : transformers) {
        delete transformer;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}