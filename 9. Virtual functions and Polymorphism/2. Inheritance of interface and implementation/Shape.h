#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
class Shape{

public:
        virtual double area() const { return 0.0; }
        virtual double volume() const { return 0.0; }

        //pure virtual functions
        virtual void printShapeName() const = 0;
        virtual void print() const = 0;
};


#endif // SHAPE_H_INCLUDED
