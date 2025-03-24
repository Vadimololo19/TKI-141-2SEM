#pragma once
#include <iostream>
#include <set>
#include <string>
#include "group.h"

/**
 * @brief Class Speciality represents a student specialty.
 */
class Speciality
{
private:
    /** @brief Name of the speciality */
    std::string name;

    /** @brief Set of groups belonging to this speciality */
    std::set<Group> groups;

public:
    /**
     * @brief Constructor for Speciality.
     * @param name Name of the speciality.
     */
    Speciality(const std::string& name);

    /**
     * @brief Add a group to the speciality.
     * @param group Group to add.
     */
    void addGroup(const Group& group);

    /**
     * @brief Get the name of the speciality.
     * @return Name of the speciality.
     */
    const std::string& getName() const;

    /**
     * @brief Friend function to overload << operator.
     * @param os Output stream.
     * @param speciality Speciality object.
     * @return Reference to output stream.
     */
    friend std::ostream& operator<<(std::ostream& os, const Speciality& speciality);

    /**
     * @brief Function to serialize the Speciality object to a string.
     * @return Serialized string representation of the Speciality.
     */
    std::string ToString() const;
    
    /**
     * @brief function to overload < operator.
     * @param speciality Speciality object.
     * @return Reference to output stream.
     */
    bool operator<(const Speciality& speciality) const;
};
