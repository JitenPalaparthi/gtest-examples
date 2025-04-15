cmake_minimum_required(VERSION 3.10)
project(TypeParamGTestDemo)

set (CMAKE_CXX_STANDARD 17)

enable_testing() # this enable to use ctest

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS}) # I

#indlude directories
include_directories(include) # I

add_executable(test_is_zero tests/test_is_zero.cpp)
target_link_libraries(test_is_zero  GTest::GTest GTest::Main pthread)