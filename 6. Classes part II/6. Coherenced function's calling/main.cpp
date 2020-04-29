#include <iostream>
#include "Time.h"

using std::cout;
using std::endl;

int main()
{
    Time t;

    t.setHour(18).setMinute(30).setSecond(10);
    cout<<"Military time: ";
    t.printMilitary();
    cout<<"\nStandard time: ";
    t.printStandard();

    cout<<"\n\nNew standard of time: ";
    t.setTime(20, 20, 20).printStandard();

    return 0;
}
