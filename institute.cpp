#include "institute.h"
#include <sstream>

/**
 * @brief Constructor of class Institute.
 * @param name Name of the institute.
 */
Institute::Institute(const std::string& name) : name(name) {}

/**
 * @brief Add a department to the institute.
 * @param department Department to add.
 */
void Institute::addDepartment(const Department& department) 
{
    departments.insert(department);
}

/**
 * @brief Get the name of the institute.
 * @return Name of the institute.
 */
const std::string& Institute::getName() const 
{
    return name;
}

/**
 * @brief Overload << operator for Institute.
 * @param os Output stream.
 * @param institute Institute object.
 * @return Output stream.
 */
std::ostream& operator<<(std::ostream& os, const Institute& institute) 
{
    os << "Institute: " << institute.name << "\nDepartments:\n";
    for (const auto& department : institute.departments) 
    {
        os << "  - " << department << "\n";
    }
    return os;
}

/**
 * @brief Serialize the Institute object to a string.
 * @return Serialized string representation of the Institute.
 */
std::string Institute::ToString() const 
{
    std::stringstream ss;
    ss << "Institute: " << name << "\nDepartments:\n";
    for (const auto& department : departments) 
    {
        ss << "  - " << department.ToString() << "\n";
    }
    return ss.str();
}
