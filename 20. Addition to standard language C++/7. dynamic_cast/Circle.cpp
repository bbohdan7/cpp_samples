#include "Circle.h"


Circle::Circle(int r)
{
    radius = r;
}

double Circle::area() const
{
    return PI * radius * radius;
}
