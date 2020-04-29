#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

#include <iostream>

using std::ostream;

class Cylinder : public Circle
{
    friend ostream &operator<<(ostream&, const Cylinder&);

    public:
        Cylinder(double h = 0.0, double r = 0.0, int x = 0, int y = 0);
        void setHeight(double h);
        double getHeight() const;
        double area() const;
        double volume() const;

    protected:
        double height;
};

#endif // CYLINDER_H
