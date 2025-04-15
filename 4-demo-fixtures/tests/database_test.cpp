#include <gtest/gtest.h>
#include "../include/database.h"

class DatabaseTestFixture : public ::testing::Test
{
protected:

    void SetUp() override
    {
        db = new Database();
        ASSERT_TRUE(db->open(":memory:")); // Why ASSERT why not EXPECT?
        ASSERT_TRUE(db->createTable());
    }

    void TearDown() override
    {
        delete db;
    }

    Database* db;
};

TEST_F(DatabaseTestFixture, InsertUsers)
{ // For every TEST_F this is used
    EXPECT_TRUE(db->insertUser("Jiten"));
    EXPECT_TRUE(db->insertUser("Priya"));

    // int count = db->getUserCount();
    // EXPECT_EQ(count,2);
}

TEST_F(DatabaseTestFixture, CountUsers)
{ // For every TEST_F this is used
    EXPECT_TRUE(db->insertUser("Jiten"));
    EXPECT_TRUE(db->insertUser("Priya"));
    int count = db->getUserCount();
    EXPECT_EQ(count, 2);
}
