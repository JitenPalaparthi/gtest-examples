add_executable(run_tests 
test_array.cpp
test_class.cpp
test_strings.cpp 
test_utility.cpp
)

target_link_libraries(run_tests operations GTest::GTest GTest::Main)

add_test(NAME run_tests COMMAND run_tests)