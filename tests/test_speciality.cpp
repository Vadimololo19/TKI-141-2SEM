#include "gtest/gtest.h"
#include "../include/speciality.h"

class SpecialityTest : public ::testing::Test {
protected:
    void SetUp() override {
        sp = new Speciality("Computer Security");
    }

    void TearDown() override {
        delete sp;
    }

    Speciality* sp;
};

TEST_F(SpecialityTest, getName) {
    EXPECT_EQ(sp->getName(), "Computer Security");
}
