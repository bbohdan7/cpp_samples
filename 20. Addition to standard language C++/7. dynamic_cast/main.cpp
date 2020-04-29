#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Cylinder.h"

using namespace std;

void outputShapeArea(const Shape*);

int main()
{
    Circle circle;
    Cylinder cylinder;
    Shape *ptr = 0;

    outputShapeArea(&circle);
    outputShapeArea(&cylinder);
    outputShapeArea(ptr);

    return 0;
}

void outputShapeArea(const Shape *shapePtr)
{
    const Circle *circlePtr;
    const Cylinder *cylinderPtr;

    cylinderPtr = dynamic_cast<const Cylinder*>(shapePtr);

    if(cylinderPtr != 0)
        cout<<" Area of cylinder: "<<shapePtr->area();
    else{
        circlePtr = dynamic_cast<const Circle*>(shapePtr);

        if(circlePtr != 0)
            cout<<" Area of circle: "<<circlePtr->area();
        else
            cout<<" Neither circle nor cylinder.";
    }

    cout<<endl;
}
