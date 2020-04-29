#ifndef SHAPE_H
#define SHAPE_H

const double PI = 3.14159;

class Shape
{
    public:
        Shape();
        virtual double area() const { return 0.0; }
};

#endif // SHAPE_H
