add_executable(math_utils_test 
math_utils_test.cpp
)
target_link_libraries(math_utils_test math_utils GTest::gtest_main)
add_test(NAME MathUtilsParamTest COMMAND math_utils_test)