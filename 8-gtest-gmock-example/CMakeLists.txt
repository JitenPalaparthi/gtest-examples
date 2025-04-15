cmake_minimum_required(VERSION 3.10)
project(gmockdemo)

set (CMAKE_CXX_STANDARD 17)

# # Enable coverage only in Debug builds

enable_testing() # this enable to use ctest

find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-instr-generate -fcoverage-mapping")
# set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fprofile-arcs -ftest-coverage")
# set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fprofile-arcs -ftest-coverage")
## g++ -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main  -fprofile-instr-generate -fcoverage-mapping -pthread test/test_sample.cpp src/sample.cpp -o test_runner
#indlude directories
include_directories(include) # I

add_library(service src/service.cpp) #L

add_subdirectory(tests) # there is anotehr CMakeLists file in that directrory so go and execute it 

