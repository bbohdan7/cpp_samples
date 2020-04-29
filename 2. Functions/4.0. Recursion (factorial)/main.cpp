#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long);

int main()
{
    for(int i = 0; i <= 10; i++)
        cout<<setw(2)<<i<<"! = "<<factorial(i)<<endl;
}

unsigned long factorial(unsigned long number)
{
    if(number <= 1)
        return 1;
    else
        return number * factorial(number - 1);
}
