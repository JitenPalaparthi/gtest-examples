#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../include/database.h"
#include "../src/service.cpp" // normally better to separate declaration and definition

using ::testing::_;
using ::testing::Return;
using ::testing::Optional;
using ::testing::Eq;

// Mock class
class MockDatabase : public IDatabase {
public:
    MOCK_METHOD(bool, createUser, (const User& user), (override));
    MOCK_METHOD(std::optional<User>, getUser, (int id), (override));
    MOCK_METHOD(bool, updateUser, (const User& user), (override));
    MOCK_METHOD(bool, deleteUser, (int id), (override));
};

// Test case
TEST(UserServiceTest, AddUserSuccess) {
    MockDatabase mockDb;
    UserService service(mockDb);

    User testUser{1, "Jiten"};

    EXPECT_CALL(mockDb, createUser(Eq(testUser))).WillOnce(Return(true));

    EXPECT_TRUE(service.addUser(testUser));
}

TEST(UserServiceTest, FindUserReturnsUser) {
    MockDatabase mockDb;
    UserService service(mockDb);

    User expectedUser{42, "Alice"};

    EXPECT_CALL(mockDb, getUser(42)).WillOnce(Return(expectedUser));

    auto result = service.findUser(42);

    ASSERT_TRUE(result.has_value());
    //EXPECT_EQ(result->name, "Alice");
    EXPECT_THAT(result->name, ::testing::Eq("Alice"));
}