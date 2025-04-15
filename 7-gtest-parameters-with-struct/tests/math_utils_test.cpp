#include <gtest/gtest.h>

#include "../include/math_utils.h"

struct TestCase {
    int input;
    bool expected;
    std::string test_case_name;
};

class IsEvenParamTest : public ::testing::TestWithParam<TestCase>{};

TEST_P(IsEvenParamTest,CheckIsEvenWithMultipleValues){
    auto param = GetParam();
    EXPECT_EQ(isEven(param.input),param.expected);
}

// Name generator function
std::string TestNameGenerator(const ::testing::TestParamInfo<TestCase>& info) {
    return info.param.test_case_name;
}

INSTANTIATE_TEST_SUITE_P(IsEvenTests,IsEvenParamTest,::testing::Values(
    TestCase{2, true,"test_1"},
    TestCase{3, false,"test_2"},
    TestCase{0, true,"test_3"},
    TestCase{-1, false,"test_4"}
),TestNameGenerator);