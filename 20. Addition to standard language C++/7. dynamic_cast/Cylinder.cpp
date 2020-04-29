#include "Cylinder.h"

Cylinder::Cylinder(int h)
{
    height = h;
}

double Cylinder::area() const
{
    return 2 * PI * radius * height + 2 * Circle::area();
}
