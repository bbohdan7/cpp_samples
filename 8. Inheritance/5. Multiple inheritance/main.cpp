#include <iostream>

#include "Base1.h"
#include "Base2.h"
#include "Derived.h"

using std::cout;
using std::endl;

int main()
{
    Base1 b1(10), *base1Ptr = 0;
    Base2 b2('Z'), *base2Ptr = 0;
    Derived d(7, 'A', 3.5);

    cout<<" Object b1 consists integer: "<<b1.getData()
        <<"\nObject b2 consists symbol: "<<b2.getData()
        <<"\nObject d consists:\n"<<d<<"\n\n";

    cout<<"Data elements of class Derived can be accessed as separate:"
        <<"\n               Integer: "<<d.Base1::getData()
        <<"\n                Symbol: "<<d.Base2::getData()
        <<"\n                  Real: "<<d.getReal()<<"\n\n";

    cout<<"Derived can be interpreted either object or base-class:\n";

    base1Ptr = &d;
    cout<<"base1Ptr->getData(): "
        <<base1Ptr->getData()<<'\n';

    base2Ptr = &d;
    cout<<"base2Ptr->getData(): "
        <<base2Ptr->getData()<<endl;

    return 0;
}
