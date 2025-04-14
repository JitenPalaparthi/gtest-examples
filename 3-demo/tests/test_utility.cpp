#include <gtest/gtest.h>
#include "../include/utility_operations.h"

TEST(UtilityTests, ApplyFunctionTest)
{
    int result = 0;
    apply_function(5, [&result](int x){
    result= x*2; 
    return 0; });
    EXPECT_EQ(result, 10);
    EXPECT_THROW(apply_function(5, nullptr), std::invalid_argument);
}

TEST(UtilityTests,LamdaTest){
    auto times_two= create_multiplier(2);
    EXPECT_EQ(times_two(5), 10);
    auto times_ten= create_multiplier(10);
    EXPECT_EQ(times_ten(5), 50);
}
