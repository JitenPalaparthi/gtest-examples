#include <gtest/gtest.h>
#include "../include/string_operations.h"

TEST(StringTests,ReverseTest){
    EXPECT_EQ(reverse_string("hello"),"olleh");
    EXPECT_EQ(reverse_string(""),"");
}

TEST(StringTests,PalindromTest){
   EXPECT_TRUE(is_palindrom("madam"));
   EXPECT_FALSE(is_palindrom("hello"));
   EXPECT_TRUE(is_palindrom(""));
}