#include "dot.h"

double Dot::getX() const { return x; }
double Dot::getY() const { return y; }

void Dot::setX() 
{
    std::cout << "Enter X of Dot" << std::endl;
    std::cin >> x;
}

void Dot::setY() 
{
    std::cout << "Enter Y of Dot" << std::endl;
    std::cin >> y;
}

void Dot::showDot()
{
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
}
