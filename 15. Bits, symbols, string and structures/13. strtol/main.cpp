#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    long x;
    const char *string = "-1234567abc";
    char *remainderPtr;

    x = strtol(string, &remainderPtr, 0);
    cout<<"Incoming string: '"<<string
        <<"'\nConverted to value "<<x
        <<"\nRemainder incoming string: '"
        <<remainderPtr
        <<"'\nConverted to value, plus 567, equal"
        <<x + 267<<endl;

    return 0;
}
