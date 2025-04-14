#include <gtest/gtest.h>
#include "../src/sample.h"

// sample test case

TEST(AdditionTest,HandlesPositiveAddNumbers){
    EXPECT_EQ(add(2,3),5); // It only reports the failure but continue the execition
    //ASEERT_EQ(add(2,3),5); // It stops the current execution when it is failure
}

// sample test 
TEST(AdditionTest,HandlesNegativeAddNumbers){
    EXPECT_EQ(add(-2,-3),-5); // It only reports the failure but continue the execition
   // ASEERT_EQ(add(2,3),5); // It stops the current execution when it is failure
}


TEST(SubstractTest,HandlesPositiveSubNumbers){
    EXPECT_EQ(sub(10,5),5); // It only reports the failure but continue the execition
   // ASEERT_EQ(add(2,3),5); // It stops the current execution when it is failure
}


int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();// Master function to run all the tests, anything that is TEST() or TEST_F()
}
// TEST --> Google test macro, to define a new test case
// AdditionTest --> Test suite name
// HandlesPositiveNumbers --> The specific unit test name
// EXPECT_EQ --> Assertion