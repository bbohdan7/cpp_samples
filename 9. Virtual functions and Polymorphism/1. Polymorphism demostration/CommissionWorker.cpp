#include "CommissionWorker.h"

#include <iostream>

using std::cout;

CommissionWorker::CommissionWorker(const char *first, const char *last, double s, double c, int q)
    :Employee(first, last)
{
    setSalary(s);
    setCommission(c);
    setQuantity(q);
}

void CommissionWorker::setSalary(double s)
{
    salary = s > 0 ? s : 0;
}

void CommissionWorker::setCommission(double c)
{
    commission = c > 0 ? c : 0;
}

void CommissionWorker::setQuantity(int q)
{
    quantity = q > 0 ? q : 0;
}

double CommissionWorker::earnings() const
{
    return salary + commission * quantity;
}

void CommissionWorker::print() const
{
    cout<<"\n       Worker with commission: ";
    Employee::print();
}

