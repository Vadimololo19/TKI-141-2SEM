#include "hm02.h"

int main()
{
    int x3, y3;
    Line line(0,0,0,0);
    line.getCord1();
    line.getCord2();
    line.showLine();
    std::cout << "Enter X and Y cord for dot" << std::endl;
    std::cin >> x3 >> y3;
    line.checkDot(x3,y3);
    line.getDistanceBetweenDotAndLine(x3,y3);
    return 0;
}