#include "Date.h"
#include <iostream>

using std::cout;
using std::endl;

Date::Date(int mn, int dy, int yr)
{
    if(mn > 0 && mn <= 12)
        month = mn;
    else{
        month = 1;
        cout<<"Month "<<mn<<" incorrect. Set month to 1.\n";
    }

    year = yr;
    day = checkDay(dy);

    cout<<"Constructor of object Date ";
    print();
    cout<<endl;
}

void Date::print() const
{
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}

Date::~Date()
{
    cout<<"Destructor Date-object for date ";
    print();
    cout<<endl;
}

int Date::checkDay(int testDay)
{
    static const int daysPerMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if( testDay > 0 && testDay <= daysPerMonth[month]);
        return testDay;


    if(month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    cout<<"Day "<<testDay<<" incorrect. Set day to 1.\n";

    return 1;
}
