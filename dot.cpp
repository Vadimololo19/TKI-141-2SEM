#include "dot.h"

/**
* @brief Constructor of class Dot
*/
double Dot::getX() const { return x; }

/**
* @brief Constructor of class Dot
*/
double Dot::getY() const { return y; }

/**
* @brief function to set X of Dot
* @param newX - new X
*/
void Dot::setX(double newX) 
{
    x = newX;
}

/**
* @brief function to set Y of Dot
* @param newY - new Y
*/
void Dot::setY(double newY) 
{
    y = newY;
}

/**
* @brief function to overload << operator
* @param os - output stream
* @param dot - Dot
* @return output stream
std::ostream& operator<<(std::ostream& os, const Dot& dot)
{
    os << "X: " << dot.getX() << ", Y: " << dot.getY();
    return os;
}
