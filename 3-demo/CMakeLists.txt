cmake_minimum_required(VERSION 3.10)
project(GTestDemo2)

set (CMAKE_CXX_STANDARD 17)

#indlude directories

include_directories(include)

#Add source files

add_library(operations 
src/array_operations.cpp
src/class_operations.cpp
src/string_operations.cpp
src/utility_operations.cpp
)

enable_testing()
find_package(GTest REQUIRED)
add_subdirectory(tests) # there is anotehr CMakeLists file in that directrory so go and execute it 

