#pragma once
#include "dot.h"
#include <cmath>

/**
* @brief Class line
*/
class Line
{
    private:

    /**
    * @brief First dot of line
    */
    Dot dot1;

    /**
    * @brief Second dot of line
    */
    Dot dot2;
    
    /**
     * @brief Slope of line
     */
    double k;

    /**
    * @brief Intercept of line
    */
    double b;
    public:

    /**
    * @brief Constructor of class Line
    * @param dot1 First dot of line
    * @param dot2 Second dot of line
    */
    Line(Dot dot1, Dot dot2);

    
    /**
    * @brief Friend function to overload << operator
    * @param os Output stream
    * @param line Line object
    * @return Reference to output stream
    */
    friend std::ostream& operator<<(std::ostream& os, const Line& line);

    /**
    * @brief Method to get distance between dot and line
    * @param dot3 Dot
    * @return Distance between dot and line
    */
    double getDistance(Dot dot3);

};

