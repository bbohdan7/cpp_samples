#ifndef BOSS_H
#define BOSS_H

#include "Employee.h"

class Boss : public Employee
{
    public:
        Boss(const char*, const char*, double = 0.0);
        void setWeeklySalary(double);
        virtual double earnings() const;
        virtual void print() const;

    private:
        double weeklySalary;
};

#endif // BOSS_H
