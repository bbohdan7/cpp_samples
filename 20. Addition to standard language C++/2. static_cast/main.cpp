#include <iostream>
#include "BaseClass.h"
#include "DerivedClass.h"

using namespace std;

void test(BaseClass*);

int main()
{
    double d = 8.22;
    int x = static_cast<int>(d);

    cout<<"d is "<<d<<"\nx is "<<x<<endl;

    BaseClass *basePtr = new DerivedClass;
    test(basePtr);
    delete basePtr;

    return 0;
}

void test(BaseClass *basePtr)
{
    DerivedClass *derivedPtr;

    derivedPtr = static_cast<DerivedClass*>(basePtr);
    derivedPtr->f();
}
