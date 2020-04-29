#include "Circle.h"

#include <iostream>

using std::cout;
using std::endl;

Circle::Circle(double r, int a, int b)
    :Point(a, b)
{
    radius = r;
    cout<<"Constructor Circle: radius equals "
        <<radius<<" ["<<x<<", "<<y<<"]"<<endl;
}

Circle::~Circle()
{
    cout<<"Destructor Circle: radius equals "
        <<radius<<" ["<<x<<", "<<y<<"]"<<endl;
}
