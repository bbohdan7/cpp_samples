#ifndef TIME_H
#define TIME_H
#include <iostream>

using std::cout;

class Time
{
    public:
        Time(int = 0, int = 0, int = 0);
        void setTime(int, int, int);
        void printMilitary();
        void printStandard();
    private:
        int hour;
        int minute;
        int second;
};

#endif // TIME_H
