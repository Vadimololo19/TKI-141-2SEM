#pragma once
#include "dot.h"
#include <cmath>
class Line
{
    private:
    Dot dot1;
    Dot dot2;
    public:
    Line(Dot dot1, Dot dot2);
    void showLine();
    void getLine();
    double getDistance(Dot dot3);
    void checkDotAndDistance(Dot dot3, double distance);

};

