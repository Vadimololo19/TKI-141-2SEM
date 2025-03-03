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
    public:

    /**
    * @brief Constructor of class Line
    * @param dot1 First dot of line
    * @param dot2 Second dot of line
    */
    Line(Dot dot1, Dot dot2);

    /**
    * @brief Method to show line
    */
    void showLine();

    /**
    * @brief Method to get line
    */
    void getLine();

    /**
    * @brief Method to get distance between dot and line
    * @param dot3 Dot
    * @return Distance between dot and line
    */
    double getDistance(Dot dot3);

    /**
    * @brief Method to check dot and distance
    * @param dot3 Dot
    * @param distance Distance between dot and line
    */
    void checkDotAndDistance(Dot dot3, double distance);

};

