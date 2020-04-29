#include <iostream>

using namespace std;

unsigned long fibonacci(unsigned long);

int main()
{
    unsigned long result, number;

    cout<<"Enter integer number: ";
    cin>>number;
    result = fibonacci(number);
    cout<<"Fibonacci number ("<<number<<") = "<<result<<endl;

    return 0;
}

unsigned long fibonacci(unsigned long n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
