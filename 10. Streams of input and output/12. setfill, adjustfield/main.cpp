#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
linkin park point of authorityusing std::ios;
using std::setw;
using std::hex;
using std::dec;
using std::setfill;

int main()
{
    int x = 10000;

    cout<<x<<" is printed as integer with left and right align\n"
        <<"and as hexidecimal with inner align.\n"
        <<" used to fill symbol by default (space):\n";
    cout.setf(ios::showbase);
    cout<<setw(10)<<x<<'\n';
    cout.setf(ios::left, ios::adjustfield);
    cout<<setw(10)<<x<<'\n';
    cout.setf(ios::internal | ios::adjustfield);
    cout<<setw(10)<<hex<<x;

    cout<<"\n\nOther filling symbols:\n";
    cout.setf(ios::right, ios::adjustfield);
    cout.fill('*');
    cout<<setw(10)<<dec<<x<<'\n';
    cout.setf(ios::left, ios::adjustfield);
    cout<<setw(10)<<setfill('%')<<x<<'\n';
    cout.setf(ios::internal, ios::adjustfield);
    cout<<setw(10)<<setfill('^')<<hex<<x<<endl;

    return 0;
}
