#include <iostream>
#include "TestMutable.h"

using namespace std;

int main()
{
    const TestMutable t(99);

    cout<<"Initial value: "<<t.getValue();

    t.modifyValue();
    cout<<"\nModified value: "<<t.getValue()<<endl;

    return 0;
}
