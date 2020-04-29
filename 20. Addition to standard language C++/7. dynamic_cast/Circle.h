#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape
{
    public:
        Circle(int r = 1);
        virtual double area() const;
    protected:
        int radius;
};

#endif // CIRCLE_H
