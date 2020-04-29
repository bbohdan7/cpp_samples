#include "SalesPerson.h"

SalesPerson::SalesPerson()
{
    for(int i = 0; i < 12; i++)
        sales[i] = 0.0;
}

void SalesPerson::getSalesFromUser()
{
    double salesFigure;

    for(int i = 0; i <= 12; i++){
        cout<<"Enter value of sales for month "<<i<<": ";
        cin>>salesFigure;
        setSales(i, salesFigure);
    }
}

void SalesPerson::setSales(int month, double amount)
{
    if(month >= 1 && month <= 12 && amount > 0)
        sales[month - 1] = amount;
    else
        cout<<"Wrong month or properties about sales"<<endl;
}

void SalesPerson::printAnnualSales()
{
    cout<<setprecision(2)
        <<setiosflags(ios::fixed | ios::showpoint)
        <<"\nSum of sales for year: $"
        <<totalAnnualSales()<<endl;
}

double SalesPerson::totalAnnualSales()
{
    double total = 0.0;

    for(int i = 0; i < 12; i++)
        total += sales[i];

    return total;
}
