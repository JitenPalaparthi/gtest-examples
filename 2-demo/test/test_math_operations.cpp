#include "../src/math_operations.h"
#include <gtest/gtest.h> // What kind of library is gtest?

// Test the add functionality

TEST(MathOperationsTest, Add)
{
    MathOperations math;
    EXPECT_EQ(math.add(2, 3), 5);
    EXPECT_EQ(math.add(-1, 1), 0);
    EXPECT_EQ(math.add(0, 0), 0);
}

// Test the substract functionality

TEST(MathOperationsTest, Substract)
{
    MathOperations math;
    EXPECT_EQ(math.substract(5, 3), 2);
    EXPECT_EQ(math.substract(10, 20), -10);
}
// Test the multiplication functionality

TEST(MathOperationsTest, Multiply)
{
    MathOperations math;
    EXPECT_EQ(math.multiply(5, 3), 15);
    EXPECT_EQ(math.multiply(0, 20), 0);
    EXPECT_EQ(math.multiply(-2, -3), 6);
}