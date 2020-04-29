#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    long x = atol("1000000");

    cout<<"String '1000000' converted to long-value, equal to "
        <<x<<"\nConverted value, divided by 2, equals to "<<x/2
        <<endl;

    return 0;
}
