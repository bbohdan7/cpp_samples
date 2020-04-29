#include <iostream>
#include "Date.h"

using std::cout;
using std::endl;

int main()
{
    Date date1(7, 4, 1993), date2; // date2 by default 1/1/1990

    cout<<"date1 = ";
    date1.print();
    cout<<"\ndate2 = ";
    date2.print();

    date2 = date1;
    cout<<"\n\nAfter bitwise copying by default, date2 = ";
    date2.print();
    cout<<endl;

    return 0;
}


