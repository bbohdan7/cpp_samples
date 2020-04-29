#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

#include <iostream>
#include <iomanip>

using std::ios;
using std::ostream;
using std::setiosflags;
using std::setprecision;

class Circle : public Point
{
    friend ostream &operator<<(ostream&, const Circle&);

    public:
        Circle(double r = 0.0, int x = 0, int y = 0);
        void setRadius(double);
        double getRadius() const;
        double area() const;

    protected:
        double radius;
};

#endif // CIRCLE_H
