#include <gtest/gtest.h>

#include "../include/math_utils.h"

class IsEvenParamTest : public ::testing::TestWithParam<std::pair<int,bool>>{};

TEST_P(IsEvenParamTest,CheckIsEvenWithMultipleValues){
    auto [number,expected] = GetParam();
    EXPECT_EQ(isEven(number),expected);
}

// Name generator function
std::string TestNameGenerator(const ::testing::TestParamInfo<std::pair<int, bool>>& info) {
    int number = info.param.first;
    bool expected = info.param.second;

    // Remove negative sign for valid test name string
    std::string name = "Number_" + std::to_string(number);
    // Replace negative sign with 'Neg' because test names can't have '-'
    if (number < 0)
        name = "Neg" + std::to_string(-number);

    // Append expected result for clarity
    name += expected ? "_IsEven" : "_IsOdd";

    return name;
}

INSTANTIATE_TEST_SUITE_P(IsEvenTests,IsEvenParamTest,::testing::Values(
    std::make_pair(2,true),
    std::make_pair(3,false),
    std::make_pair(0,true),
    std::make_pair(-1,false),
    std::make_pair(-10,true),
    std::make_pair(-9,false)
),TestNameGenerator);



