/* ## Assignment6
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 6 */

#include "templates.h"
#include <gtest/gtest.h>

TEST(GenericClassTest, FirstClassPositive)
{
    FirstClass instance;

    GenericClass<FirstClass, float> obj(5.0f, {}, instance);

    EXPECT_TRUE(obj.compute());
}

TEST(GenericClassTest, FirstClassNegative)
{
    FirstClass instance;

    GenericClass<FirstClass, float> obj(-5.0f, {}, instance);

    EXPECT_FALSE(obj.compute());
}

TEST(GenericClassTest, SecondClassPositive)
{
    SecondClass instance;

    std::vector<float> fList = {5.0f, 10.0f};

    GenericClass<SecondClass, float> obj(0.0f, fList, instance);

    EXPECT_TRUE(obj.compute());
}

TEST(GenericClassTest, SecondClassNegative)
{
    SecondClass instance;

    std::vector<float> fList;

    GenericClass<SecondClass, float> obj(0.0f, fList, instance);

    EXPECT_FALSE(obj.compute());
}

TEST(GenericClassTest, ThirdClassPositive)
{
    ThirdClass instance;

    std::vector<float> fList = {1.0f, 2.0f};

    GenericClass<ThirdClass, float> obj(-2.0f, fList, instance);

    EXPECT_TRUE(obj.compute());
}

TEST(GenericClassTest, ThirdClassNegative)
{
    ThirdClass instance;

    std::vector<float> fList = {6.0f, 7.0f};

    GenericClass<ThirdClass, float> obj(9.0f, fList, instance);

    EXPECT_FALSE(obj.compute());
}

TEST(SpecializationTest, IntTrue)
{
    FirstClass instance;

    std::vector<float> fList = {1.0f, 2.0f};

    GenericClass<FirstClass, int> obj(13, fList, instance);

    EXPECT_TRUE(obj.compute());
}

TEST(SpecializationTest, DoubleFalse)
{
    FirstClass instance;

    std::vector<float> fList = {1.0f, 2.0f};

    GenericClass<FirstClass, double> obj(13.13, fList, instance);

    EXPECT_FALSE(obj.compute());
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}