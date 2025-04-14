#include <gtest/gtest.h>
#include "../include/array_operations.h"

TEST(ArrayOperationsTest,FindMax_PositiveNumbers){
    std::vector<int> nums= {1,3,7,2,9,5};
    EXPECT_EQ(find_max(nums),9);
}

TEST(ArrayOperationsTest,FindMax_NegativeNumbers){
    std::vector<int> nums= {-10,-3,-7,-1,-4};
    EXPECT_EQ(find_max(nums),-1);
}

TEST(ArrayOperationsTest,FindMax_MixedNumbers){
    std::vector<int> nums= {-10,-3,-7,-1,0,-4,-100};
    EXPECT_EQ(find_max(nums),0);
}

TEST(ArrayOperationsTest,FindMax_EmptyVector){
    std::vector<int> nums;
   // EXPECT_EQ(fix_max(nums),-1);
   EXPECT_THROW(find_max(nums),std::invalid_argument);
}

TEST(ArrayOperationsTest,SwapValues_Int){
    int a=10,b=20;
    swap_values(a,b);
    EXPECT_EQ(a,20);
    EXPECT_EQ(b,10);
}

TEST(ArrayOperationsTest,SwapValues_Double){
    double a=3.14,b=6.28;
    swap_values(a,b);
    EXPECT_EQ(a,6.28);
    EXPECT_EQ(b,3.14);
}

int main(int argc,char **argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}