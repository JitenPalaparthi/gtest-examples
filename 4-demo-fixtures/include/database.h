#ifndef DATABASE_H
#define DATABASE_H

#include <sqlite3.h>
#include <string>

class Database{
    public:
    Database();
    ~Database();

    bool open(const std::string& dbname);
    void close();

    bool createTable();
    bool insertUser(const std::string& name);
    int getUserCount();

    private:
    sqlite3* db;
};
#endif