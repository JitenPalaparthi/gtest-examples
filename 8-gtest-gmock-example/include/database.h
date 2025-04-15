#pragma once
#include <string>
#include <optional>

struct User{
    int id;
    std::string name;
};

class IDatabase{
    public:
        virtual ~IDatabase()=default;
        virtual bool createUser(const User& user)=0;
        virtual std::optional<User> getUser(int id)=0;
        virtual bool updateUser(const User& user)=0;
        virtual bool deleteUser(int id)=0;

};