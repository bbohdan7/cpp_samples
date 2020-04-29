#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    cout<<"isspace:\n"
        <<(isspace('\n') ? " is " : " isn't ")
        <<"a space char\n";
    cout<<"\niscntrl:\n"
        <<(iscntrl('\n') ? " is " : " isn't ")
        <<"a control char\n";
    cout<<"\nispunct:\n"
        <<(ispunct(';') ? " is " : " isn't ")
        <<"a punctuation char\n";
    cout<<"\nisprint:\n"
        <<(isprint('$') ? " is " : " isn't ")
        <<"a printed symbol\n";
    cout<<"\nisgraph:\n"
        <<(isgraph('Q') ? " is " : " isn't ")
        <<"a symbol different of space"<<endl;

    return 0;
}
