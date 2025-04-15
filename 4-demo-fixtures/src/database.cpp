#include "../include/database.h"

Database::Database() : db(nullptr) {}

Database::~Database()
{
    close();
}

bool Database::open(const std::string &dbname)
{
    int rc = sqlite3_open(dbname.c_str(), &db);
    return rc == SQLITE_OK;
}

void Database::close()
{
    if (db)
    {
        sqlite3_close(db);
        db = nullptr;
    }
}

bool Database::createTable()
{
    const char *sql = "CREATE Table users (id INTEGER PRIMARY KEY,name TEXT);";
    return sqlite3_exec(db, sql, nullptr, nullptr, nullptr) == SQLITE_OK;
}

bool Database::insertUser(const std::string& name){
    std::string sql = "INSERT INTO users (name) VALUES('"+name+"');";
    return sqlite3_exec(db, sql.c_str(), nullptr, nullptr, nullptr) == SQLITE_OK;
}

int Database::getUserCount(){
    const char* sql = "SELECT COUNT(*) FROM users;";
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
    if (rc != SQLITE_OK) return -1;

    rc = sqlite3_step(stmt);
    if (rc != SQLITE_ROW) {
        sqlite3_finalize(stmt);
        return -1;
    }

    int count = sqlite3_column_int(stmt, 0);
    sqlite3_finalize(stmt);
    return count;
}
