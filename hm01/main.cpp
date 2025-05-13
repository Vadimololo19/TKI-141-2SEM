#include "hm01.h"
#include <iostream>

int main()
{
    Person person("Tkachev","Vadim","Evgenievich");
    person.show();
    person.showFormal();
    return 0;
}