#include <iostream>
#include <iomanip>

#include "Shape.h"
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"

using std::cout;
using std::endl;

using std::ios;
using std::setiosflags;
using std::setprecision;

void virtualViaPointer(const Shape*);
void virtualViaReference(const Shape&);

int main()
{
    cout<<setiosflags(ios::fixed | ios::showpoint)<<setprecision(2);

    Point point(7, 11);
    Circle circle(3.5, 22, 8);
    Cylinder cylinder(10, 3.3, 10, 10);

    point.printShapeName();
    point.print();
    cout<<'\n';

    circle.printShapeName();
    circle.print();
    cout<<'\n';

    cylinder.printShapeName();
    cylinder.print();
    cout<<"\n\n";

    Shape *arrayOfShapes[3];

    arrayOfShapes[0] = &point;
    arrayOfShapes[1] = &circle;
    arrayOfShapes[2] = &cylinder;

    cout<<"Callings of virtual functions from pointers of base class\n";

    for(int i = 0; i < 3; i++)
        virtualViaPointer(arrayOfShapes[i]);

    cout<<"Callings of virtual functions from pointers of base class\n";

    for(int j = 0; j < 3; j++)
        virtualViaReference(*arrayOfShapes[j]);

    return 0;
}

void virtualViaPointer(const Shape *baseClassPtr)
{
    baseClassPtr->printShapeName();
    baseClassPtr->print();

    cout<<"\nArea = "<<baseClassPtr->area()
        <<"\nVolume = "<<baseClassPtr->volume()<<"\n\n";
}

void virtualViaReference(const Shape &baseClassRef)
{
    baseClassRef.printShapeName();
    baseClassRef.print();

    cout<<"\nArea = "<<baseClassRef.area()
        <<"\nVolume = "<<baseClassRef.volume()<<"\n\n";
}
