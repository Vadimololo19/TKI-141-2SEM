#include "line.h"
#include "dot.h"

int main()
{   Dot dot1;
    Dot dot2;
    dot1.setX();
    dot1.setY();
    dot2.setX();
    dot2.setY();
    Line line(dot1, dot2);
    Dot dot3;
    dot3.setX();
    dot3.setY();
    line.getLine();
    line.showLine();
    double distance = line.getDistance(dot3);
    line.checkDotAndDistance(dot3, distance);
    return 0;
}
