#include "hm01.h"
#include <iostream>

void Person::show()
{
    std::cout << lastName << " " << firstName << std::endl;
}

void Person::showFormal()
{
    std::cout << lastName << " " << firstName << " " << patronymic << std::endl;
}
