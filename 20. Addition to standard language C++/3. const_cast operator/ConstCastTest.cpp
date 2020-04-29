#include "ConstCastTest.h"

#include <iostream>

using std::cout;
using std::endl;

ConstCastTest::ConstCastTest()
{
    //ctor
}

void ConstCastTest::setNumber(int num)
{
    number = num;
}

int ConstCastTest::getNumber() const
{
    return number;
}

void ConstCastTest::printNumber() const
{
    cout<<"\nNumber after modification: ";

    const_cast<ConstCastTest*>(this)->number--;

    cout<<number<<endl;
}
