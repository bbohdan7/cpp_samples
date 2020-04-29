#include "Point.h"

#include <iostream>

using std::cout;
using std::endl;

Point::Point(int a, int b)
{
    x = a;
    y = b;

    cout<<"Constructor Point: "
        << "[" << x << ", " << y << "]"<<endl;
}

Point::~Point()
{
    cout<<"Destructor Point: "
        <<"["<<x<<", "<<y<<"]"<<endl;
}
