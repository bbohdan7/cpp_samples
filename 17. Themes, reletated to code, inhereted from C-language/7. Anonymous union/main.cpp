#include <iostream>

using namespace std;

int main()
{
    union {
        int b;
        double d;
        char *fPtr;
    };

    int a = 1;
    double c = 3.3;
    char *ePtr = "Anonymous";

    cout<<a<<' ';
    b = 2;
    cout<<b<<endl;

    cout<<c<<' ';
    d = 4.4;
    cout<<d<<endl;

    cout<<ePtr<<' ';
    fPtr = "union";
    cout<<fPtr<<endl;

    return 0;
}
