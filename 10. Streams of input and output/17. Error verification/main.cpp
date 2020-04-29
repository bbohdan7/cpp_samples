#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x;

    cout<<"Before error input operation: "
        <<"\ncin.rdstate(): "<<cin.rdstate()
        <<"\n       cin.eof(): "<<cin.eof()
        <<"\n       cin.fail(): "<<cin.fail()
        <<"\n       cin.bad(): "<<cin.bad()
        <<"\n       cin.good(): "<<cin.good()
        <<"\n\nExpecting of integer but being entered char: ";
    cin>>x;

    cout<<"\nAfter error input operation: "
        <<"\ncin.rdstate(): "<<cin.rdstate()
        <<"\n       cin.eof(): "<<cin.eof()
        <<"\n       cin.fail(): "<<cin.fail()
        <<"\n       cin.bad(): "<<cin.bad()
        <<"\n       cin.good(): "<<cin.good()<<"\n\n";

    cin.clear();

    cout<<"After cin.clear():"
        <<"\ncin.fail: "<<cin.fail()
        <<"\ncin.good(): "<<cin.good()<<endl;

    return 0;
}
