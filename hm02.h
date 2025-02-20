#pragma once
#include <iostream>
#include <array>
#include <cmath>

class Line
{
    private:
        int x1;
        int y1;
        int x2;
        int y2;
    public:
        Line(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}
        void showLine()
        {
            std::cout << "Line: " << x1 << " | " << y1 << " | " << x2 << " | " << y2 << std::endl;
        }
        void getCord1()
        {
            std::cout << "Enter X and Y cord for first dot" << std::endl;
            std::cin >> x1 >> y1;
        }
        void getCord2()
        {
            std::cout << "Enter X and Y cord for second dot" << std::endl;
            std::cin >> x2 >> y2;
        }
        void checkDot(int x3, int y3)
        {
            if ((y2 - y1) * (x3 - x1) - (x2 - x1) * (y3 - y1) < 1e-6)
            {
                std::cout << "Dot is on the line" << std::endl;
            }
            else
            {
                std::cout << "Dot is not on the line" << std::endl;
            }
        }
        void getDistanceBetweenDotAndLine(int x3,int y3)
        {
            double distance = abs((y2 - y1) * x3 - (x2 - x1) * y3 + x2 * y1 - y2 * x1)/sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
            std::cout << "Distance between dot and line: " << distance << std::endl;
        }
};

