#pragma once
#include <iostream>
#include <set>
#include <string>
#include "department.h"

/**
 * @brief Class Institute represents an academic institute.
 */
class Institute
{
private:
    /** @brief Name of the institute */
    std::string name;

    /** @brief Set of departments belonging to this institute */
    std::set<Department> departments;

public:
    /**
     * @brief Constructor for Institute.
     * @param name Name of the institute.
     */
    Institute(const std::string& name);

    /**
     * @brief Add a department to the institute.
     * @param department Department to add.
     */
    void addDepartment(const Department& department);

    /**
     * @brief Get the name of the institute.
     * @return Name of the institute.
     */
    const std::string& getName() const;

    /**
     * @brief Friend function to overload << operator.
     * @param os Output stream.
     * @param institute Institute object.
     * @return Reference to output stream.
     */
    friend std::ostream& operator<<(std::ostream& os, const Institute& institute);

    /**
     * @brief Function to serialize the Institute object to a string.
     * @return Serialized string representation of the Institute.
     */
    std::string ToString() const;
};
