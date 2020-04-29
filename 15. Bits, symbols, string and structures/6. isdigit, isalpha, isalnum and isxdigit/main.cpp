#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    cout<<"isDigit:\n"
        <<(isdigit('8') ? " 8 is " : " 8 isn't ")
        <<" a number\n"
        <<(isdigit('#') ? " # is " : " # isn't ")
        <<" a number\n";
    cout<<"\nisAlpha:\n"
        <<(isalpha('A') ? " A is " : " A isn't ")
        <<" an alpha\n";
    cout<<"\nisAlnum:\n"
        <<(isalnum('A') ? " A is " : " A isn't ")
        <<" an Alnum\n";
    cout<<"\nisxDigit:"
        <<(isxdigit('F') ? " F is " : " F isn't ")
        <<" an hex number"<<endl;

    return 0;
}
