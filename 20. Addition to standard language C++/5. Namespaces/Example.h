#ifndef EXAMPLE_H_INCLUDED
#define EXAMPLE_H_INCLUDED

#include <iostream>
using std::cout;
using std::endl;

int myInt = 98;

namespace Example{
    const double PI = 3.14159;
    const double E = 2.71828;
    int myInt = 8;
    void printValue();

    namespace Inner{
        enum Years { FISCAL1 = 1990, FISCAL2, FISCAL3 };
    }
}

namespace {
    double d = 88.22;
}

void Example::printValue()
{
    cout<<"\nIn printValues:\n"<<"myInt = "
        <<myInt<<"\nPI = "<<PI<<"\nE = "<<E
        <<"\nd = "<<d<<"\n(global) myInt = "
        <<::myInt<<"\nFISCAL3 = "<<Inner::FISCAL3<<endl;
}
#endif // EXAMPLE_H_INCLUDED
