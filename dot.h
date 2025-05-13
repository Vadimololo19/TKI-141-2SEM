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
         * @brief Friend function to overload << operator
         * @param os Output stream
         * @param dot Line object
         * @return Reference to output stream
        */
        friend std::ostream& operator<<(std::ostream& os, const Dot& dot);
        
        /**
         * @brief function to overload == operator
         * @param dot Dot object
         * @return True or false
        */
        bool operator==(const Dot& dot) const;

        /**
         * @brief function to overload != operator
         * @param dot Dot object
         * @return True or false
        */
        bool operator!=(const Dot& dot) const;
};
