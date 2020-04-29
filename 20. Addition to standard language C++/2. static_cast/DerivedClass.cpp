#include "DerivedClass.h"
#include <iostream>

using std::cout;

DerivedClass::DerivedClass()
{
    //ctor
}

void DerivedClass::f(void) const
{
    cout<<"Derived\n";
}
