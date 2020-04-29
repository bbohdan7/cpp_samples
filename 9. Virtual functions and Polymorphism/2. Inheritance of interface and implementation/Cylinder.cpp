#include "Cylinder.h"

#include <iostream>

using std::cout;

Cylinder::Cylinder(double h, double r, int a, int b)
    :Circle(r, a, b)
{
    setHeight(h);
}

void Cylinder::setHeight(double h)
{
    height = h;
}

double Cylinder::getHeight() const
{
    return height;
}

double Cylinder::area() const
{
    return 2 * Circle::area() + 2 * 3.14159 * getRadius() * height;
}

double Cylinder::volume() const
{
    return Circle::area() * height;
}

void Cylinder::printShapeName() const
{
    cout<<"Cylinder: ";
}

void Cylinder::print() const
{
    cout<<" Height: "<<height;
}
