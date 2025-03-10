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
* @brief function to check Dots
* @param dot1 first Dot
* @param dot2 second Dot
*/
void checkDots(Dot dot1,Dot dot2);

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
    line.checkDotAndDistance(distance);
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
    checkDots(dot1, dot2);
    return Line(dot1, dot2);
}

void checkDots(Dot dot1,Dot dot2)
{
    if(dot1 == dot2)
    {
        std::cout<<"Dots are equal"<<std::endl;
        exit(1);
    }
}
