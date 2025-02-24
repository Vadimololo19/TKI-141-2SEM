#pragma once
#include <iostream>
#include <array>

class Dot
{
    private:
        double x;
        double y;
    public:
        Dot(): x(0), y(0) {}
        Dot(double x, double y): x(x), y(y) {}
        double getX() const;
        double getY() const;
        void showDot();
        void setX();
        void setY();
};
