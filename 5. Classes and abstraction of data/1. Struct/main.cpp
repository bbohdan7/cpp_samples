#include <iostream>

using namespace std;

struct Time{
    int hour;
    int minute;
    int second;
};

void printMilitary(const Time&);
void printStandard(const Time&);

int main()
{
    Time dinnerTime;

    dinnerTime.hour = 18;
    dinnerTime.minute = 30;
    dinnerTime.second = 0;

    cout<<"Dinner will take part at ";
    printMilitary(dinnerTime);
    cout<<" by military time, \nthat correspond ";
    printStandard(dinnerTime);
    cout<<" by standard time.\n";

    dinnerTime.hour = 29; //SHOULD BE AN ERROR!!!
    dinnerTime.minute = 73; //SHOULD BE AN ERROR!!!

    cout<<"\nTime with wrong values: ";
    printMilitary(dinnerTime);
    cout<<endl;

    return 0;
}

void printMilitary(const Time &t)
{
    if(t.hour <= 23 && t.minute <= 60 && t.second <= 60)
        cout<<(t.hour < 10 ? "0" : "")<<t.hour<<":"<<(t.minute < 10 ? "0" : "")<<t.minute;
    else
        cout<<" Error has been occurred!"<<endl;
}

void printStandard(const Time &t)
{
    cout<<((t.hour == 0 || t.hour == 12) ? 12 : t.hour % 12)
        <<":"<<(t.minute < 10 ? "0" : "")<<t.minute
        <<":"<<(t.second < 10 ? "0" : "")<<t.second
        <<(t.hour < 12 ? " AM" : " PM");
}
