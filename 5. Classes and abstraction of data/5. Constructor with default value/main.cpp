#include <iostream>
#include "time.h"

using std::cout;
using std::endl;

int main()
{
    Time t1,
        t2(2),
        t3(21, 34),
        t4(12, 25, 42),
        t5(27, 74, 99);

    cout<<"Variants:\n"
        <<"all arguments by default:\n   ";
    t1.printMilitary();
    cout<<"\n   ";
    t1.printStandard();

    cout<<"\nHours set, minutes and second by default:"
        <<"\n   ";
    t2.printMilitary();
    cout<<"\n   ";
    t2.printStandard();

    cout<<"\nHours and minutes has been set and seconds by default:"
        <<"\n   ";
    t3.printMilitary();
    cout<<"\n   ";
    t3.printStandard();

    cout<<"\nHours, minutes and second have been set:"
        <<"\n   ";
    t4.printMilitary();
    cout<<"\n   ";
    t4.printStandard();

    cout<<"\nIncorrect values! Constructor with default values has been applied."
        <<"\n   ";
    t5.printMilitary();
    cout<<"\n   ";
    t5.printStandard();
    cout<<endl;

    return 0;
}
