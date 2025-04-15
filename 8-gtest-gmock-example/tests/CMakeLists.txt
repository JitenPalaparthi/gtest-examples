add_executable(service_test service_test.cpp)
target_link_libraries(service_test service GTest::gtest GTest::gmock_main Threads::Threads)
add_test(NAME UserServiceMockTest COMMAND service_test)