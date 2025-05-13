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
* @brief function to overload << operator
* @param os - output stream
* @param dot - Dot
* @return output stream
*/
std::ostream& operator<<(std::ostream& os, const Dot& dot)
{
    os << "X: " << dot.getX() << ", Y: " << dot.getY();
    return os;
}

bool Dot::operator==(const Dot& dot) const
{
    return x == dot.x && y == dot.y;
}

bool Dot::operator!=(const Dot& dot) const
{
    return x != dot.x || y != dot.y;
}
