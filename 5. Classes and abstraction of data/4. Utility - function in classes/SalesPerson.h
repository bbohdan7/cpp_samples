#ifndef SALESPERSON_H
#define SALESPERSON_H
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::setprecision;
using std::setiosflags;

class SalesPerson
{
    public:
        SalesPerson();
        void getSalesFromUser();
        void setSales(int, double);
        void printAnnualSales();
    private:
        double totalAnnualSales(); // Utility - function (must be a private function-member)!!!
        double sales[12];
};

#endif // SALESPERSON_H
