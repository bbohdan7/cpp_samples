#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double d = atof("99.9");

    cout<<"String '99.0' is converting to double-value that equal to "
        <<d<<"\nConverted value, divided by 2, equal to "
        <<d / 2.0<<endl;

    return 0;
}
