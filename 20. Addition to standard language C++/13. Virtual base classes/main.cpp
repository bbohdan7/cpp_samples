#include <iostream>
#include "base.h"
#include "derived1.h"
#include "derived2.h"
#include "multiple.h"

using namespace std;

int main()
{
    Multiple both;
    DerivedOne one;
    DerivedTwo two;

    Base *array[3];

    array[0] = &both;
    array[1] = &one;
    array[2] = &two;

    for(int k = 0; k < 3; k++)
        array[k] -> print();

    return 0;
}
