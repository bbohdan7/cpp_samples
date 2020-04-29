#include <iostream>

using namespace std;

int square(int);
double square(double);

int main()
{
    cout<<"Square of integer is: "<<square(55)<<endl
        <<"Squaere of double is: "<<square(99.98)<<endl;

    return 0;
}

int square(int x){ return x * x; }
double square(double y){ return y * y; }
