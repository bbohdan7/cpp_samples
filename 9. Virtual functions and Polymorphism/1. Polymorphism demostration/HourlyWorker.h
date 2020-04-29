#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

#include "Employee.h"

class HourlyWorker : public Employee
{
    public:
        HourlyWorker(const char*, const char*, double = 0.0, double = 0.0);
        void setWage(double);
        void setHours(double);
        virtual double earnings() const;
        virtual void print() const;

    private:
        double wage;
        double hours;
};

#endif // HOURLYWORKER_H
