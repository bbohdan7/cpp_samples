#include <iostream>
#include "Base.h"
#include "Derived.h"
#include "Derived2.h"
#include "Multiple.h"

using namespace std;

int main()
{
    Multiple both;
    DerivedOne one;
    DerivedTwo two;

    Base *array[3];
    //array[0] = &both; //ERROR - ambiguous!!!
    array[1] = &one;
    array[2] = &two;

    for(int k = 0; k < 3; k++)
        array[k] -> print();

    return 0;
}
