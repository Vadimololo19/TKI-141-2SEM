#pragma once

#include <iostream>
#include <string>

class Person
{
    private:
        std::string lastName;
        std::string firstName;
        std::string patronymic;
    public:
        Person(std::string ln,std::string fn, std::string pn) : lastName(ln), firstName(fn), patronymic(pn) {}
        void show()
        {   
        std::cout << lastName << " " << firstName << std::endl;
        }
        //Person(const std::string& ln,const std::string& fn,const std::string& pn = "");
        //void Show();
        //void ShowFormal();
        void showFormal()
        {
            std::cout << lastName << " " << firstName << " " << patronymic << std::endl;
        } 
};

