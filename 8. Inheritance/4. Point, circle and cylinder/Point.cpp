#include "Point.h"

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

ostream &operator<<(ostream &output, const Point &p)
{
    output<<'['<<p.x<<", "<<p.y<<']';

    return output;
}
