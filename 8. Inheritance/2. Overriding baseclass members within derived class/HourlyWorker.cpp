#include "HourlyWorker.h"

#include <iostream>
#include <iomanip>

using std::ios;
using std::cout;
using std::endl;
using std::setiosflags;
using std::setprecision;

HourlyWorker::HourlyWorker(const char *first, const char *last, double initHours, double initWage)
    :Employee(first, last)
{
    hours = initHours;
    wage = initWage;
}

double HourlyWorker::getPay() const
{
    return wage * hours;
}

void HourlyWorker::print() const
{
    cout<<"HourlyWorker::print() is executing\n\n";
    Employee::print();

    cout<<" - worker with hourly wage $"
        <<setiosflags(ios::fixed | ios::showpoint)
        <<setprecision(2)<<getPay()<<endl;
}
