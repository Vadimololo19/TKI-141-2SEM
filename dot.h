#pragma once
#include <iostream>

/**
* @brief Class Dot
*/
class Dot
{
    private:
        /** @brief x coordinate */
        double x;

        /** @brief y coordinate */
        double y;
    public:

        /** 
         * @brief Default constructor 
         * @param x, default 0
         * @param y, default 0
        */
        Dot(): x(0), y(0) {}

        /** 
         * @brief Constructor
         * @param x
         * @param y
        */ 
        Dot(double x, double y): x(x), y(y) {}

        /** 
         * @brief Get x coordinate
         * @return x coordinate
        */
        double getX() const;

        /** 
         * @brief Get y coordinate
         * @return y coordinate
        */
        double getY() const;

        /** 
         * @brief Set x coordinate
        */
        void setX(double newX);

        /** 
         * @brief Set y coordinate
        */
        void setY(double newY);

        /**
         * @brief Friend function to overload << operator
         * @param os Output stream
         * @param line Line object
         * @return Reference to output stream
        */
        friend std::ostream& operator<<(std::ostream& os, const Dot& dot);
};
