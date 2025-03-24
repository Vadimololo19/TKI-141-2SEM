#include "group.h"

/**
 * @brief Constructor of class Group.
 * @param name Name of the group.
 */
Group::Group(const std::string& name) : name(name) {}

/**
 * @brief Get the name of the group.
 * @return Name of the group.
 */
const std::string& Group::getName() const 
{
    return name;
}

/**
 * @brief Overload << operator for Group.
 * @param os Output stream.
 * @param group Group object.
 * @return Output stream.
 */
std::ostream& operator<<(std::ostream& os, const Group& group) 
{
    os << "Group: " << group.name;
    return os;
}

/**
 * @brief Serialize the Group object to a string.
 * @return Serialized string representation of the Group.
 */
std::string Group::ToString() const 
{
    return "Group: " + name;
}

/**
 * @brief Overload < operator for sorting groups by name.
 * @param group Another group object.
 * @return True if this group's name is less than the other's.
 */
bool Group::operator<(const Group& group) const 
{
    return name < group.name;
}
