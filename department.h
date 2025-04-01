#pragma once
#include <iostream>
#include <set>
#include <string>
#include "speciality.h"

/**
 * @brief Class DepartmentInstitute represents a department-institute.
 */
class DepartmentInstitute {};

/**
 * @brief Class Department represents an academic department.
 */
class Department
{
private:
    /** @brief Name of the department */
    std::string name;

    /** @brief Set of specialties belonging to this department */
    std::set<Speciality> specialties;

    /** @brief department-institute */
    DepartmentInstitute institute;
public:
    /**
     * @brief Constructor for Department.
     * @param name Name of the department.
     */
    Department(const std::string& name);

    /**
     * @brief Add a specialty to the department.
     * @param specialty Specialty to add.
     */
    void addSpeciality(const Speciality& specialty);

    /**
     * @brief Get the name of the department.
     * @return Name of the department.
     */
    const std::string& getName() const;

    /**
     * @brief Friend function to overload << operator.
     * @param os Output stream.
     * @param department Department object.
     * @return Reference to output stream.
     */
    friend std::ostream& operator<<(std::ostream& os, const Department& department);

    /**
     * @brief Function to serialize the Department object to a string.
     * @return Serialized string representation of the Department.
     */
    std::string ToString() const;

    /**
     * @brief function to overload < operator.
     * @param department Another department object.
     */
    bool operator<(const Department& department) const;
};
