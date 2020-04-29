#include "Circle.h"

#include <iostream>

using std::cout;

Circle::Circle(double r, int a, int b)
    :Point(a, b)
{
    setRadius(r);
}

void Circle::setRadius(double r)
{
    radius = r;
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::area() const
{
    return 3.14159 * radius * radius;
}

void Circle::printShapeName() const
{
    cout<<"Circle: ";
}

void Circle::print() const
{
    cout<<"Radius: "<<radius;
}
