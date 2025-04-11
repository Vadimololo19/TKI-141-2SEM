#pragma once
#include <iostream>
#include <string>
#include <set>

/**
 * @brief Class Student represents a student.
 */
class GroupStudent {};

/**
 * @brief Class Speciality represents a student speciality.
 */
class GroupSpeciality {};

/**
 * @brief Class Group represents a student group.
 */
class Group
{
private:
    /** @brief Name of the group */
    std::string name;

    /** @brief Set of students in the group */
    std::set<GroupStudent> students;

    /** @brief Speciality of the group */
    GroupSpeciality speciality;
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

    /**
     * @brief function to overload == operator.
     * @param group Group object.
     */
    bool operator==(const Group& group) const; 

    /**
     * @brief function to overload != operator.
     * @param group Group object.
     */
    bool operator!=(const Group& group) const;
};
