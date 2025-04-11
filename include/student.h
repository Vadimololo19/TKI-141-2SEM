#pragma once
#include <iostream>
#include <string>
#include "group.h"
#include "speciality.h"
#include "department.h"
#include "institute.h"

/**
 * @brief Class Student represents a student.
 */
class Student
{
private:
    /** @brief First name of the student */
    std::string firstName;

    /** @brief Last name of the student */
    std::string lastName;

    /** @brief Group of the student */
    Group group;

    /** @brief Speciality of the student */
    Speciality speciality;

    /** @brief Department of the student */
    Department department;

    /** @brief Institute of the student */
    Institute institute;

public:
    /**
     * @brief Constructor for Student.
     * @param firstName First name of the student.
     * @param lastName Last name of the student.
     * @param group Group of the student.
     * @param speciality Speciality of the student.
     * @param department Department of the student.
     * @param institute Institute of the student.
     */
    Student(const std::string& firstName, const std::string& lastName, const Group& group,
            const Speciality& speciality, const Department& department, const Institute& institute);

    /**
     * @brief Get the last name of the student.
     * @return Last name of the student.
     */
    const std::string& getLastName() const;

    /**
     * @brief Get the group of the student.
     * @return Group of the student.
     */
    const Group& getGroup() const;

    /**
     * @brief Get the speciality of the student.
     * @return Speciality of the student.
     */
    const Speciality& getSpeciality() const;

    /**
     * @brief Get the department of the student.
     * @return Department of the student.
     */
    const Department& getDepartment() const;

    /**
     * @brief Get the institute of the student.
     * @return Institute of the student.
     */
    const Institute& getInstitute() const;

    /**
     * @brief Overload < operator for sorting students by last name.
     * @param other Another student object.
     * @return True if this student's last name is less than the other's.
     */
    bool operator<(const Student& other) const;

    /**
     * @brief Friend function to overload << operator.
     * @param os Output stream.
     * @param student Student object.
     * @return Reference to output stream.
     */
    friend std::ostream& operator<<(std::ostream& os, const Student& student);

    /**
     * @brief Function to serialize the Student object to a string.
     * @return Serialized string representation of the Student.
     */
    std::string ToString() const;
};
