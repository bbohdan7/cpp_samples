#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"


class Cylinder : public Circle
{
    public:
        Cylinder(int h = 1);
        virtual double area() const;

    private:
        int height;
};

#endif // CYLINDER_H
