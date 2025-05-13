#include "gtest/gtest.h"
#include "../include/student.h"

class StudentTest : public ::testing::Test {
protected:
    void SetUp() override {
        Group GroupChecker("TKI-141");
        Speciality SpecialityChecker("Computer Security");
        Institute InstituteChecker("ITTSU");
        Department DepartmentChecker("UIZI");

        Group group("TKI-141");
        Speciality speciality("Computer Security");
        Institute institute("ITTSU");
        Department department("UIZI");
        student = new Student("Vadim","Tkachev",group,speciality,department,institute);
    }

    void TearDown() override {
        delete student;
    }
    
    Group GroupChecker;
    Speciality SpecialityChecker;
    Institute InstituteChecker;
    Department DepartmentChecker;
    Student* student;
};

TEST_F(StudentTest, ConstructorValidator) {
    EXPECT_EQ(student->getLastName(), "Tkachev");
    EXPECT_EQ(student->getGroup(), GroupChecker);
    EXPECT_EQ(student->getSpeciality(), SpecialityChecker);
    EXPECT_EQ(student->getDepartment(), DepartmentChecker);
    EXPECT_EQ(student->getInstitute(), InstituteChecker);
}
