#include "gtest/gtest.h"
#include "../include/institute.h"

class InstituteTest : public ::testing::Test {
protected:
    void SetUp() override {
        Institute institute("ITTSU");
    }

    void TearDown() override {
        delete institute;
    }

    Institute* institute;
};

TEST_F(InstituteTest, getName) {
    EXPECT_EQ(institute->getName(), "ITTSU");
}   
