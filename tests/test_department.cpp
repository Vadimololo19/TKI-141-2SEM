#include "gtest/gtest.h"
#include "../include/department.h"

class DepartmentTest : public testing::Test {
protected:
    void SetUp() override {
        department = new Department("UIZI");
    }

    void TearDown() override {
        delete department;
    }

    Department* department;
};

TEST_F(DepartmentTest, getName) {
    EXPECT_EQ(department->getName(), "UIZI");
}
