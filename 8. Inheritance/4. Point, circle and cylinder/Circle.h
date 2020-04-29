#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

#include <iostream>

using std::ostream;

class Circle : public Point
{
    friend ostream &operator<<(ostream&, const Circle&);

    public:
        Circle(double r = 0, int x = 0, int y = 0);
        void setRadius(double);
        double getRadius() const;
        double area() const;

    protected:
        double radius;
};

#endif // CIRCLE_H
