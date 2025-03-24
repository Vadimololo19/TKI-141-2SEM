#pragma once
#include <iostream>
#include <string>

/**
 * @brief Class Group represents a student group.
 */
class Group
{
private:
    /** @brief Name of the group */
    std::string name;

public:
    /**
     * @brief Default constructor for Group.
     * @param name, default is empty string.
     */
    Group(const std::string& name = "");

    /**
     * @brief Get the name of the group.
     * @return Name of the group.
     */
    const std::string& getName() const;

    /**
     * @brief Friend function to overload << operator.
     * @param os Output stream.
     * @param group Group object.
     * @return Reference to output stream.
     */
    friend std::ostream& operator<<(std::ostream& os, const Group& group);

    /**
     * @brief Function to serialize the Group object to a string.
     * @return Serialized string representation of the Group.
     */
    std::string ToString() const;
    
    /**
     * @brief function to overload < operator.
     * @param group Group object.
     */
    bool operator<(const Group& group) const;
};
