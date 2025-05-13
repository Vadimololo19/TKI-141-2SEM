#include "../include/student.h"
#include <sstream>

/**
 * @brief Constructor of class Student.
 * @param firstName First name of the student.
 * @param lastName Last name of the student.
 * @param group Group of the student.
 * @param speciality Specialty of the student.
 * @param department Department of the student.
 * @param institute Institute of the student.
 */
Student::Student(const std::string& firstName, const std::string& lastName, const Group& group,
                 const Speciality& speciality, const Department& department, const Institute& institute)
    : firstName(firstName), lastName(lastName), group(group), speciality(speciality),
      department(department), institute(institute) {}

/**
 * @brief Get the last name of the student.
 * @return Last name of the student.
 */
const std::string& Student::getLastName() const 
{
    return lastName;
}

/**
 * @brief Get the group of the student.
 * @return Group of the student.
 */
const Group& Student::getGroup() const 
{
    return group;
}

/**
 * @brief Get the specialty of the student.
 * @return Specialty of the student.
 */
const Speciality& Student::getSpeciality() const 
{
    return speciality;
}

/**
 * @brief Get the department of the student.
 * @return Department of the student.
 */
const Department& Student::getDepartment() const 
{
    return department;
}

/**
 * @brief Get the institute of the student.
 * @return Institute of the student.
 */
const Institute& Student::getInstitute() const 
{
    return institute;
}

/**
 * @brief Overload < operator for sorting students by last name.
 * @param other Another student object.
 * @return True if this student's last name is less than the other's.
 */
bool Student::operator<(const Student& other) const 
{
    return lastName < other.lastName || (lastName == other.lastName && firstName < other.firstName);
}

/**
 * @brief Overload << operator for Student.
 * @param os Output stream.
 * @param student Student object.
 * @return Output stream.
 */
std::ostream& operator<<(std::ostream& os, const Student& student) 
{
    os << "Student: " << student.firstName << " " << student.lastName
       << "\nGroup: " << student.group
       << "\nSpeciality: " << student.speciality.getName()
       << "\nDepartment: " << student.department.getName()
       << "\nInstitute: " << student.institute.getName();
    return os;
}

/**
 * @brief Serialize the Student object to a string.
 * @return Serialized string representation of the Student.
 */
std::string Student::ToString() const 
{
    std::stringstream ss;
    ss << "Student: " << firstName << " " << lastName
       << "\nGroup: " << group.ToString()
       << "\nSpeciality: " << speciality.getName()
       << "\nDepartment: " << department.getName()
       << "\nInstitute: " << institute.getName();
    return ss.str();
}
