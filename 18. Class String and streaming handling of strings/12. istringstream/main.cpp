#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string input("Input test 123 4.7 A");
    istringstream inputString(input);
    string string1, string2;
    int i;
    double d;
    char c;

    inputString>>string1>>string2>>i>>d>>c;

    cout<<"These elements have been taken\n"
        <<"from istringstream-object:"
        <<"\nstring: "<<string1
        <<"\nstring: "<<string2
        <<"\n   int: "<<i
        <<"\ndouble: "<<d
        <<"\n  char: "<<c;

    long x;

    inputString>>x;

    if(inputString.good())
        cout<<"\n\nValue of long: "<<x<<endl;
    else
        cout<<"\n\ninputString is empty."<<endl;

    return 0;
}
