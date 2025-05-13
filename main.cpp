#include "line.h"
#include "dot.h"

/**
* @brief function to get user input 
* @param message show message to user
* @return value 
*/
double input(std::string message);

/**
* @brief function to get Dot
* @return Dot
*/
Dot getDot();

/**
* @brief function to get Line
* @return Line
*/
Line getLine();

/**
* @brief function to check Dot and Distance
* @param dot3 - third dot
* @param distance - distance
*/
void checkDotAndDistance(double distance);

/**
* @brief Main function of program
* @return 0, if everything is ok,else 1
*/
int main()
{   
    Line line = getLine(); 
    std::cout<<"Line: \n"<<line<<std::endl;
    Dot dot3 = getDot();
    std::cout<<"Dot3: \n"<<dot3<<std::endl;
    double distance = line.getDistance(dot3);
    checkDotAndDistance(distance);
    return 0;
}

double input(std::string message)
{
    std::cout << message;
    double value;
    std::cin >> value;
    if(std::cin.fail())
    {
        std::cout<<"Error input"<<std::endl;
        exit(1);
    }
    return value;
}

Dot getDot() 
{
    double x = input("Enter x: ");
    double y = input("Enter y: ");
    return Dot(x, y);
}

Line getLine()
{
    Dot dot1 = getDot();
    Dot dot2 = getDot();
    return Line(dot1, dot2);
}

void checkDotAndDistance(double distance)
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
