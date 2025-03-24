#include "department.h"
#include <sstream>

/**
 * @brief Constructor of class Department.
 * @param name Name of the department.
 */
Department::Department(const std::string& name) : name(name) {}

/**
 * @brief Add a specialty to the department.
 * @param speciality Specialty to add.
 */
void Department::addSpeciality(const Speciality& speciality) 
{
    specialties.insert(speciality);
}

/**
 * @brief Get the name of the department.
 * @return Name of the department.
 */
const std::string& Department::getName() const 
{
    return name;
}

/**
 * @brief Overload << operator for Department.
 * @param os Output stream.
 * @param department Department object.
 * @return Output stream.
 */
std::ostream& operator<<(std::ostream& os, const Department& department) 
{
    os << "Department: " << department.name << "\nSpecialties:\n";
    for (const auto& speciality : department.specialties) 
    {
        os << "  - " << speciality << "\n";
    }
    return os;
}

/**
 * @brief Serialize the Department object to a string.
 * @return Serialized string representation of the Department.
 */
std::string Department::ToString() const 
{
    std::stringstream ss;
    ss << "Department: " << name << "\nSpecialties:\n";
    for (const auto& speciality : specialties) {
        ss << "  - " << speciality.ToString() << "\n";
    }
    return ss.str();
}

/**
 * @brief Overload < operator for sorting departments by name.
 * @param department Another department object.
 * @return True if this department's name is less than the other's.
 */
bool Department::operator<(const Department& department) const 
{
    return name < department.name;
}
