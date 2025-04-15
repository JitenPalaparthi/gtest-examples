add_executable(database_test 
database_test.cpp
)
target_link_libraries(database_test database GTest::gtest_main sqlite3)
add_test(NAME DatabaseTest COMMAND database_test)