#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::ios;
using std::setiosflags;
using std::hex;

int main()
{
    cout<<setiosflags(ios::uppercase)
        <<"Printing with uppercase numbers with exponential\n"
        <<"format and hexidecimal values:\n"
        <<4.34e10<<'\n'<<hex<<123456789<<endl;

    return 0;
}
