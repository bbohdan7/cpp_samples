#include <iostream>
#include "Example.h"

using namespace std;
//using namespace Example;

int main()
{
    cout<<"d = "<<d;

    cout<<"\n(global) myInt = "<<myInt;

    cout<<"\nPI = "<<Example::PI<<"\nE = "
        <<Example::E<<"\nmyInt = "<<Example::myInt
        <<"\nFISCAL3 = "<<Example::Inner::FISCAL3<<endl;

    Example::printValue();

    return 0;
}
