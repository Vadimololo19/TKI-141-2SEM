#include "gtest/gtest.h"
#include "../include/group.h"

class GroupTest : public ::testing::Test {
protected:
    void SetUp() override {
        group = new Group("TKI-141");
    }

    void TearDown() override {
        delete group;
    }

    Group* group;
};

TEST_F(GroupTest, getName) {
    EXPECT_EQ(group->getName(), "TKI-141");
}
