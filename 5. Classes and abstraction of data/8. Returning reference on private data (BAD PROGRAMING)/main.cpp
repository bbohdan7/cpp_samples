#include <iostream>
#include "Time.h"

using std::cout;
using std::endl;

int main()
{
    Time t;
    int &hourRef = t.badSetHour(20); // BAD PROGRAMMING!!!

    cout<<"Hours before setting up: "<<hourRef;
    hourRef = 30; // setting with incorrect value.
    cout<<"\nHours after setting up: "<<t.getHour();

    //DANGER!!! CALLING FUNCTION THAT RETURNS REFERENCE
    // THAT CAN BE USED AS L-VALUE!

    t.badSetHour(12) = 74;

    cout<<"\n\n***********************************************\n"
        <<"BAD PRACTICE OF PROGRAMMING!!!\n"
        <<"badSetHour() as l-value, hours: "
        <<t.getHour()
        <<"\n***********************************************\n"<<endl;

    return 0;
}
