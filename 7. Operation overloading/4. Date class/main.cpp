#include <iostream>
#include "Date.h"

using std::cout;
using std::endl;

int main()
{
    Date d1, d2(12, 27, 1992), d3(0, 99, 8045);

    cout<<"d1 equals to "<<d1
        <<"\nd2 equals to "<<d2
        <<"\nd3 equals to "<<d3<<"\n\n";

    cout<<"d2 += 7 equals "<<(d2 += 7)<<"\n\n";

    d3.setDate(2, 28, 1992);
    cout<<" d3 equals to "<<d3;
    cout<<"\n++d3 equals to "<<++d3<<"\n\n";

    Date d4(3, 18, 1969);

    cout<<"Verification of operation prefix increment:\n"
        <<"     d4 equals to "<<d4<<'\n';
    cout<<"++d4 equals "<<++d4<<'\n';
    cout<<"     d4 equals to "<<d4<<"\n\n";
    cout<<"Verification of operation postfix increment:\n"
        <<"     d4 equals to "<<d4<<'\n';
    cout<<"d4++ equals to "<<d4++<<'\n';
    cout<<"     d4 equals to "<<d4<<endl;

    return 0;
}
