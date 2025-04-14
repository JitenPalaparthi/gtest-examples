cmake_minimum_required(VERSION 3.10)
project(MathOperationsTest CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(GTest REQUIRED) # if GTest is not found then it is stopped here

## can do the below but works only on mac, that too if gtest is installed using brew
## include_directories(/opt/homebrew/include)
## link_directories(/opt/homebrew/lib)

include_directories(${GTEST_INCLUDE_DIRS} src) # 

set(SOURCES src/math_operations.cpp)
set(TEST_SOURCES test/test_math_operations.cpp)

add_executable(test_runner ${SOURCES} ${TEST_SOURCES})
target_link_libraries(test_runner ${GTEST_LIBRARIES} GTest::gtest_main pthread)

##target_link_libraries(test_runner gtest gtest_main pthread)

# GTEST_INCLUDE_DIRS
# GTEST_LIBRARIES