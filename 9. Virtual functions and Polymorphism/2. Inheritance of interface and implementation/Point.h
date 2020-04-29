#ifndef POINT_H
#define POINT_H

#include "Shape.h"


class Point : public Shape
{
    public:
        Point(int = 0, int = 0);
        void setPoint(int, int);
        int getX() const;
        int getY() const;

        virtual void printShapeName() const;
        virtual void print() const;

    private:
        int x;
        int y;
};

#endif // POINT_H
