#include "Point.h"

#include <iostream>
using std::cout;

Point::Point(int a, int b)
{
    setPoint(a, b);
}

void Point::setPoint(int a, int b)
{
    x = a;
    y = b;
}

int Point::getX() const
{
    return x;
}

int Point::getY() const
{
    return y;
}

void Point::printShapeName() const
{
    cout<<"Point: ";
}

void Point::print() const
{
    cout<<'['<<x<<", "<<y<<']';
}

