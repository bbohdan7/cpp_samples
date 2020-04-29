#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;

class Time
{
    public:
        Time();
        void setTime(int, int, int);
        void printMilitary();
        void printStandard();
    private:
        int hour;
        int minute;
        int second;
};

#endif // TIME_H
