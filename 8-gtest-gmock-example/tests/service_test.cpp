#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../include/database.h"
#include "../src/service.cpp"

class MockDatabase: public IDatabase{
    public:
    MOCK_METHOD(bool, createUser,(const User& user),(override));
    MOCK_METHOD(std::optional<User>, getUser,(int id),(override));
    MOCK_METHOD(bool, updateUser,(const User& user),(override));
    MOCK_METHOD(bool, deleteUser,(int id),(override));
    // MOCK_METHOD(return_type,method_name,argument_list,specifier)
};

TEST(UserServiceTest,AddUserService){
    MockDatabase mockdb;
    UserService service(mockdb);

    User testUser{1,"Jiten"};
    EXPECT_CALL(mockdb,createUser(Eq(testUser))).WillOnce(Return(true));
    EXPECT_TRUE(service.addUser(testUser));
}