#ifndef TIME_H
#define TIME_H
#include <iostream>
using std::cout;


class Time
{
    public:
        Time(int = 0, int = 0, int = 0);
        void setTime(int, int, int);
        void setHour(int);
        void setMinute(int);
        void setSecond(int);

        int getHour();
        int getMinute();
        int getSecond();

        void printMilitary();
        void printStandard();

    private:
        int hour;
        int minute;
        int second;
};

#endif // TIME_H
