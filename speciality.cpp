#include "speciality.h"
#include <sstream>

/**
 * @brief Constructor of class Speciality.
 * @param name Name of the speciality.
 */
Speciality::Speciality(const std::string& name) : name(name) {}

/**
 * @brief Add a group to the speciality.
 * @param group Group to add.
 */
void Speciality::addGroup(const Group& group) 
{
    groups.insert(group);
}

/**
 * @brief Get the name of the speciality.
 * @return Name of the speciality.
 */
const std::string& Speciality::getName() const 
{
    return name;
}

/**
 * @brief Overload << operator for Speciality.
 * @param os Output stream.
 * @param speciality Speciality object.
 * @return Output stream.
 */
std::ostream& operator<<(std::ostream& os, const Speciality& speciality) 
{
    os << "Speciality: " << speciality.name << "\nGroups:\n";
    for (const auto& group : speciality.groups) {
        os << "  - " << group << "\n";
    }
    return os;
}

/**
 * @brief Serialize the Speciality object to a string.
 * @return Serialized string representation of the Speciality.
 */
std::string Speciality::ToString() const 
{
    std::stringstream ss;
    ss << "Speciality: " << name << "\nGroups:\n";
    for (const auto& group : groups) {
        ss << "  - " << group.ToString() << "\n";
    }
    return ss.str();
}

/**
 * @brief Overload < operator for sorting specialities by name.
 * @param speciality Another speciality object.
 * @return True if this speciality's name is less than the other's.
 */
bool Speciality::operator<(const Speciality& speciality) const 
{
    return name < speciality.name;
}
