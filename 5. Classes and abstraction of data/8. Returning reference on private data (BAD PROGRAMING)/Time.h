#ifndef TIME_H
#define TIME_H

#include <iostream>

using std::cout;
using std::endl;

class Time
{
    public:
        Time(int = 0, int = 0, int = 0);
        void setTime(int, int, int);
        int getHour();
        int &badSetHour(int); // VERY DANGEROUS GETTING REFERENCE ON PRIVATE DATA - MEMBER!!!
    private:
        int hour;
        int minute;
        int second;

};

#endif // TIME_H
