#include <iostream>
#include <memory>

using std::cout;
using std::endl;
using std::auto_ptr;

#include "Integer.h"

int main()
{
    cout<<"Creating object auto_ptr that points on Integer\n";

    auto_ptr<Integer> ptrToInteger(new Integer(7));

    cout<<"Using auto_ptr for working with Integer\n";

    ptrToInteger->setInteger(99);

    cout<<"Integer after setInteger()\nTermination program"<<endl;

    return 0;
}
