#include "../include/database.h"

class UserService{
    public:
    explicit UserService(IDatabase& db): database(db){}

    bool addUser(const User& user){
        return database.createUser(user);
    }

    std::optional<User> findUser(int id){
        return database.getUser(id);
    }
    private:
    IDatabase& database;
};