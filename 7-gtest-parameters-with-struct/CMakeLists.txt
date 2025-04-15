cmake_minimum_required(VERSION 3.10)
project(ValueParamGTestDemo)

set (CMAKE_CXX_STANDARD 17)

enable_testing() # this enable to use ctest

find_package(GTest REQUIRED)

#indlude directories
include_directories(include) # I

add_library(math_utils src/math_utils.cpp) #L

add_subdirectory(tests) # there is anotehr CMakeLists file in that directrory so go and execute it 

