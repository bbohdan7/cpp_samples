#include <iostream>
#include "Point.h"
#include "Circle.h"

using std::cout;
using std::endl;

int main()
{
    {
        Point p(11, 22);
    }
    cout<<endl;
    Circle circle1(4.5, 72, 29);
    cout<<endl;
    Circle circle2(10, 5, 5);
    cout<<endl;

    return 0;
}
