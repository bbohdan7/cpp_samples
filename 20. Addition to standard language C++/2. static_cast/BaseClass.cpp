#include "BaseClass.h"
#include <iostream>
using std::cout;

BaseClass::BaseClass()
{
    //ctor
}

void BaseClass::f(void) const
{
    cout<<"Base\n";
}
