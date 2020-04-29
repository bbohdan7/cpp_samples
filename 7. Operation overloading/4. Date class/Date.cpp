#include "Date.h"

#include <iostream>

using std::ostream;

const int Date::days[] = { 0, 31, 28, 31, 30, 30,
                           31, 31, 30, 31, 30, 31 };

Date::Date(int m, int d, int y)
{
    setDate(m, d, y);
}

void Date::setDate(int mm, int dd, int yy)
{
    month = (mm >= 1 && mm <= 12) ? mm : 1;
    year = (yy >= 1900 && yy <= 2100) ? yy : 1900;

    if(month == 2 && leapYear(year))
        day = (dd >= 1 && dd <= 29) ? dd : 1;
    else
        day = (dd >= 1 && dd <= days[month]) ? dd : 1;
}

Date &Date::operator++()
{
    helpIncrement();

    return *this;
}

Date Date::operator++(int)
{
    Date temp = *this;
    helpIncrement();

    return temp;
}

const Date &Date::operator+=(int additionalDays)
{
    for(int i = 0; i < additionalDays; i++)
        helpIncrement();

    return *this;
}

bool Date::leapYear(int y) const
{
    if( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0) )
        return true;
    else
        return false;
}

bool Date::endOfMonth(int d) const
{
    if(month == 2 && leapYear(year))
        return d == 29;
    else
        return d == days[month];
}

void Date::helpIncrement()
{
    if(endOfMonth(day) && month == 12){
        day = 1;
        month = 1;
        ++year;
    }
    else if(endOfMonth(day)){
        day = 1;
        ++month;
    }
    else
        ++day;
}

ostream &operator<<(ostream &output, const Date &d)
{
    static char *monthName[13] = { "", "January",
        "February", "March", "April", "May", "June",
        "July", "August", "September", "October",
        "November", "December" };

    output<<monthName[d.month] << ' '
          <<d.day<<", "<<d.year;

    return output;
}
