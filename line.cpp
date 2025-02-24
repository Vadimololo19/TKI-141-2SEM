#include "line.h"
#include "dot.h"

Line::Line(Dot dot1, Dot dot2): dot1(dot1), dot2(dot2) {}

void Line::getLine()
{
    double x1 = dot1.getX();
    double y1 = dot1.getY();
    double x2 = dot2.getX();
    double y2 = dot2.getY();
}

void Line::showLine()
{
    std::cout << "Dot1: " << std::endl;
    dot1.showDot();
    std::cout << "Dot2: " << std::endl;
    dot2.showDot();
}

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

void Line::checkDotAndDistance(Dot dot3, double distance)
{
    if (distance <= 1e-6)
    {
        std::cout << "Dot is on line" << std::endl;
    }
    else
    {
        std::cout << "Dot is not on line" << std::endl;
    }
    std::cout << "Distance: " << distance << std::endl;
}

