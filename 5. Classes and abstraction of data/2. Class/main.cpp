#include <iostream>
#include "time.h"
using namespace std;

int main()
{
    Time t;

    cout<<"Initial time value by military time ";
    t.printMilitary();

    cout<<"\nInitial time value by standard time ";
    t.printStandard();

    t.setTime(13, 27, 6);
    cout<<"\n\nMilitary time after setTime ";
    t.printMilitary();
    cout<<"\nStandart time after setTime ";
    t.printStandard();

    t.setTime(99, 99, 99);
    cout<<"\n\nAfter the effort to set incorrect value:"
        <<"\nMilitary time: ";
    t.printMilitary();
    cout<<"\nStandard time: ";
    t.printStandard();
    cout<<endl;

    return 0;
}
