#include <iostream>
#include "../include/group.h"
#include "../include/speciality.h"
#include "../include/department.h"
#include "../include/institute.h"
#include "../include/student.h"

int main() {
    Group group1("TKI-141");

    Speciality speciality1("Computer Security");
    speciality1.addGroup(group1);

    Department department1("Control and security of information");
    department1.addSpeciality(speciality1);

    Institute institute1("Institute of Transport Technic and Control Systems");
    institute1.addDepartment(department1);

    Student student1("Vadim", "Tkachev", group1, speciality1, department1, institute1);

    std::cout << "Student Information:\n";
    std::cout << student1 << "\n\n";

    std::cout << "Serialized Student:\n";
    std::cout << student1.ToString() << "\n\n";

    Group group2("TKI-142");

    speciality1.addGroup(group2);

    Student student2("Alphabet", "Gaspareyrov", group2, speciality1, department1, institute1);

    std::cout << "Student Information:\n";
    std::cout << student2 << "\n\n";

    std::cout << "Serialized Student:\n";
    std::cout << student2.ToString() << "\n\n";
    
    std::cout << "Serialized Speciality:\n";
    std::cout << speciality1.ToString() << "\n\n";
    return 0;
}
