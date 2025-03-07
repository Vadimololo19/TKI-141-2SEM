#include "line.h"
#include "dot.h"

/**
* @brief function to get user input 
* @param message show message to user
* @return value 
*/
double inputByUser(std::string message);

/**
* @brief Main function of program
* @return 0, if everything is ok,else 1
*/
int main()
{   Dot dot1;
    Dot dot2;
    double x1,x2,x3,y1,y2,y3;
    x1 = inputByUser("Enter x1: ");
    y1 = inputByUser("Enter y1: ");
    x2 = inputByUser("Enter x2: ");
    y2 = inputByUser("Enter y2: ");
    dot1.setX(x1);
    dot1.setY(y1);
    std::cout<<"Dot1: \n"<<dot1<<std::endl;
    dot2.setX(x2);
    dot2.setY(y2);
    std::cout<<"Dot2: \n"<<dot2<<std::endl;
    Line line(dot1, dot2);
    std::cout<<"Line: \n"<<line<<std::endl;
    Dot dot3;
    x3 = inputByUser("Enter x3: ");
    y3 = inputByUser("Enter y3: ");
    dot3.setX(x3);
    dot3.setY(y3);
    std::cout<<"Dot3: \n"<<dot3<<std::endl;
    double distance = line.getDistance(dot3);
    line.checkDotAndDistance(distance);
    return 0;
}

double inputByUser(std::string message)
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


