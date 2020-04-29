#include <iostream>
#include "Employee.h"

using std::cout;
using std::endl;

int main()
{
    Employee e( "Bob", "Jones", 7, 24, 1949, 3, 12, 1988 );

    cout<<'\n';

    e.print();

    cout<<"\nVerification of constructor Date with incorrect values:\n";
    Date d(14, 35, 1994);
    cout<<endl;

    return 0;
}
