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
*/
void Dot::setX() 
{
    std::cout << "Enter X of Dot" << std::endl;
    std::cin >> x;
}

/**
* @brief function to set Y of Dot
*/
void Dot::setY() 
{
    std::cout << "Enter Y of Dot" << std::endl;
    std::cin >> y;
}

/**
* @brief function to show Dot
*/
void Dot::showDot()
{
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
}
