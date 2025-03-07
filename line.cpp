#include "line.h"
#include "dot.h"

/**
* @brief Constructor of class Line
*/
Line::Line(Dot dot1, Dot dot2): dot1(dot1), dot2(dot2) {}

/**
* @brief function to overload << operator
* @param os - output stream
* @param line - Line
* @return output stream
*/
std::ostream& operator<<(std::ostream& os, const Line& line)
{
    os << line.dot1 << std::endl;  
    os << line.dot2 << std::endl;
    return os;
}

/**
* @brief function to get Distance
* @param dot3 - third dot
* @return distance
*/
double Line::getDistance(Dot dot3)
{
    double distance = abs((dot2.getY() - dot1.getY()) * dot3.getX() 
                    - (dot2.getX() - dot1.getX()) * dot3.getY() 
                    + dot2.getX() * dot1.getY() 
                    - dot2.getY() * dot1.getX()) 
                / sqrt(pow(dot2.getY() - dot1.getY(), 2) 
                    + pow(dot2.getX() - dot1.getX(), 2));
    return distance;
}

/**
* @brief function to check Dot and Distance
* @param dot3 - third dot
* @param distance - distance
*/
void Line::checkDotAndDistance(double distance)
{
    if (distance <= std::numeric_limits<double>::epsilon())
    {
        std::cout << "Dot is on line" << std::endl;
    }
    else
    {
        std::cout << "Dot is not on line" << std::endl;
    }
    std::cout << "Distance: " << distance << std::endl;
}

