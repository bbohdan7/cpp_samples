#include <iostream>
#include "Interface.h"

using std::cout;
using std::endl;

int main()
{
    Interface i(5);

    cout<<"Interface consists: "<<i.getValue()
        <<" before setValue"<<endl;

    i.setValue(10);

    cout<<"Interface consists: "<<i.getValue()
        <<" after setValue"<<endl;

    return 0;
}
