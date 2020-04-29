#include <iostream>
#include <iomanip>
#include <cstdarg>
using namespace std;

double average(int, ...);

int main()
{
    double w = 37.5, x = 22.5, y = 1.7, z = 10.2;

    cout<<setiosflags(ios::fixed | ios::showpoint)
        <<setprecision(1)<<"w = "<<w<<"\nx = "<<x
        <<"\ny = "<<y<<"\nz = "<<z<<endl;
    cout<<setprecision(3)<<"Average w and x = "
        <<average(2, w, x)
        <<"\nThe average of w,x and y is "
        <<average(3, w, x, y)
        <<"\nAverage of w, x, y and z = "
        <<average(4, w, x, y, z)<<endl;

    return 0;
}

double average(int i, ...)
{
    double total = 0;
    va_list ap;

    va_start(ap, i);

    for(int j = 1; j <= i; j++)
        total += va_arg(ap, double);

    va_end(ap);

    return total/i;
}
