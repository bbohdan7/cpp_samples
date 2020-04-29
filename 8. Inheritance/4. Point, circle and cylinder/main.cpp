#include <iostream>

#include "Point.h";
#include "Circle.h";
#include "Cylinder.h";

using std::cout;
using std::endl;

int main()
{
    Cylinder cyl(5.7, 2.5, 12, 23);

    cout<<"X-coordinate: "<<cyl.getX()
        <<"\nY-coordinate: "<<cyl.getY()
        <<"\nRadius: "<<cyl.getRadius()
        <<"\nHeight: "<<cyl.getHeight()<<"\n\n";

    cyl.setHeight(10);
    cyl.setRadius(4.25);
    cyl.setPoint(2, 2);

    cout<<"New position, radius and height of cylinder:\n"
        <<cyl<<"\n\n";

    cout<<"Area of cylinder:\n"
        <<cyl.area()<<'\n';

    Point &pRef = cyl;
    cout<<"\nCylinder as Point: "
        <<pRef<<"\n\n";

    Circle &circleRef = cyl;
    cout<<"\nCylinder as Circle: "
        <<circleRef<<"\nArea: "<<circleRef.area()<<endl;

    return 0;
}
