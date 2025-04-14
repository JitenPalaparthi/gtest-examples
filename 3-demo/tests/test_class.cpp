#include <gtest/gtest.h>
#include "../include/class_operations.h"

TEST(ClassTests,CounterTest){
    Counter c;
    EXPECT_EQ(c.get_count(),0);
    c.increment();
    EXPECT_EQ(c.get_count(),1);
    c.increment();
    c.increment();
    EXPECT_EQ(c.get_count(),3);
}