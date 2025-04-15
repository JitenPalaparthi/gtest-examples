#include <gtest/gtest.h>

#include "../include/math_utils.h"

template<typename T>

class IsZeroTest: public ::testing::Test{};

using MyTypes = ::testing::Types<int,float,double>;

TYPED_TEST_SUITE(IsZeroTest,MyTypes);

TYPED_TEST(IsZeroTest,ZeroCheck){
    TypeParam zeroValue= TypeParam(0);
    TypeParam nonZeroValue= TypeParam(1);
    EXPECT_TRUE(IsZero(zeroValue));
    EXPECT_FALSE(IsZero(nonZeroValue));
}