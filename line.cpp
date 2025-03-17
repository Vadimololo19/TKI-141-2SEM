#include "line.h"
#include "dot.h"

/**
* @brief Constructor of class Line
*/
Line::Line(Dot dot1, Dot dot2): dot1(dot1), dot2(dot2) 
{
    if(dot1 == dot2)
    {
        std::cout << "Dots are equal" << std::endl;
        exit(1);
    }
    k = (dot2.getY() - dot1.getY()) / (dot2.getX() - dot1.getX());
    b = dot1.getY() - k * dot1.getX();
}

/**
* @brief function to overload << operator
* @param os - output stream
* @param line - Line
* @return output stream
*/
std::ostream& operator<<(std::ostream& os, const Line& line)
{
    os << "y" << "=" << line.k << "x" << "+" << line.b << std::endl;
    return os;
}

/**
* @brief function to get Distance
* @param dot3 - third dot
* @return distance
*/
double Line::getDistance(Dot dot3)
{
    double distance = abs(k * dot3.getX() - dot3.getY() + b) / sqrt(pow(k, 2) + 1);
    return distance;
}

