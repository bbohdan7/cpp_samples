#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    ostringstream outputString;
    string s1("Printing out some of data types "),
           s2("in ostringstream-object:"),
           s3("\n           double: "),
           s4("\n           int: "),
           s5("\naddress of int: ");
    double d = 123.4567;
    int i = 22;

    outputString<<s1<<s2<<s3<<d<<s4<<i<<s5<<&i;
    cout<<"outputString consist:\n"<<outputString.str();

    outputString<<"\nAdded some of symbols";
    cout<<"\n\nAfter adding "
        <<"outputString consist:\n"<<outputString.str()
        <<endl;

    return 0;
}
