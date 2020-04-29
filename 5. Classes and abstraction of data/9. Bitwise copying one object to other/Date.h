#ifndef DATE_H
#define DATE_H

#include <iostream>

using std::cout;

class Date
{
    public:
        Date(int = 1, int = 1, int = 1990);
        void print();
    private:
        int month;
        int day;
        int year;
};

#endif // DATE_H
