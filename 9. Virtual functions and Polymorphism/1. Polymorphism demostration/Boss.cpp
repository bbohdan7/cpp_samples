#include "Boss.h"

#include <iostream>

using std::cout;

Boss::Boss(const char *first, const char *last, double s)
    :Employee(first, last)
{
    setWeeklySalary(s);
}

void Boss::setWeeklySalary(double s)
{
    weeklySalary = s > 0 ? s : 0;
}

double Boss::earnings() const
{
    return weeklySalary;
}

void Boss::print() const
{
    cout<<"\n           Administrator: ";
    Employee::print();
}
