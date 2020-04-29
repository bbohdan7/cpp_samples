#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "DivideByZeroException.h"

double quotient(int, int);

int main()
{
    int number1, number2;
    double result;

    cout<<"Enter two whole number: ";

    while(cin>>number1>>number2){
        try{
            result = quotient(number1, number2);
            cout<<"Quotient is: "<<result<<endl;
        }
        catch(DivideByZeroException ex){
            cout<<"ERROR: "<<ex.what()<<'\n';
        }

        cout<<"\nEnter two whole numbers: ";
    }
    cout<<endl;

    return 0;
}

double quotient(int numerator, int denominator)
{
    if(denominator == 0)
            throw DivideByZeroException();

    return static_cast<double>(numerator) / denominator;
}
