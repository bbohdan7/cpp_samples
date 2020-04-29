#include <iostream>
#include <iomanip>
#include "Point.h"
#include "Circle.h"

using std::cout;
using std::endl;

int main()
{
    Point *pointPtr = 0, p(30, 50);
    Circle *circlePtr = 0, c(2.7, 120, 89);

    cout<<"Point p: "<<p<<"\nCircle c: "<<c<<'\n';

    pointPtr = &c;
    cout<<"\nCircle c (with *pointPtr): "
        <<*pointPtr<<'\n';

    circlePtr = static_cast<Circle*>(pointPtr);
    cout<<"\nCircle c (with *circlePtr):\n"<<*circlePtr
        <<circlePtr->area()<<'\n';

    //DANGEROUS ASSIGNING!!! Because interpretation Point as Circle!!!
    pointPtr = &p;
    circlePtr = static_cast<Circle*>(pointPtr);
    cout<<"\nPoint p (with *circlePtr):\n"<<*circlePtr
        <<"\nArea of object circlePtr points on: "
        <<circlePtr->area()<<endl;

    return 0;
}
