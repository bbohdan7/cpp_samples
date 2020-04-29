#include <iostream>
#include "Time.h"

using std::cout;
using std::endl;

void incrementMinutes(Time&, const int);

int main()
{
    Time t;

    t.setHour(17);
    t.setMinute(34);
    t.setMinute(25);

    cout<<"Result of setting all correct values:\n"
        <<"     Hours: "<<t.getHour()
        <<"     Minutes: "<<t.getMinute()
        <<"     Second: "<<t.getSecond();

    t.setHour(234);
    t.setMinute(43);
    t.setSecond(6373);

    cout<<"\n\nThe effort to set incorrect values of hours and"
        <<" seconds:\n  Hours: "<<t.getHour()
        <<" Minutes: "<<t.getMinute()
        <<" Second: "<<t.getSecond()<<"\n\n";

    t.setTime(11, 58, 0);
    incrementMinutes(t, 3);

    return 0;
}

void incrementMinutes(Time &tt, const int count)
{
    cout<<"Increasing minutes on "<<count
        <<"\nInitial time: ";
    tt.printStandard();

    for(int i = 0; i < count; i++){
        tt.setMinute((tt.getMinute() + 1) % 60 );

        if(tt.getMinute() == 0)
            tt.setHour((tt.getHour() + 1) % 24 );

        cout<<"\nminute + 1: ";
        tt.printStandard();
    }

    cout<<endl;
}
