#include "Count.h"
#include <iostream>

using std::cout;
using std::endl;

Count::Count()
{
    x = 0;
}

void Count::print() const
{
    cout <<x<<endl;
}

void setX(Count &c, int val)
{
    c.x = val;
}
