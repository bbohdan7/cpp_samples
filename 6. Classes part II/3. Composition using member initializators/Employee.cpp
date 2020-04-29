#include "Employee.h"
#include "Date.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

Employee::Employee(char *fname, char *lname, int bmonth, int bday, int byear, int hmonth, int hday, int hyear)
    :birthDate(bmonth, bday, byear),
     hireDate(hmonth, hday, hyear)
{
    int length = strlen(fname);
    length = (length < 25 ? length : 24);
    strncpy(firstName, fname, length);
    firstName[length] = '\0';

    length = strlen(lname);
    length = (length < 25 ? length : 24);
    strncpy(lastName, lname, length);
    lastName[length] = '\0';

    cout<<"Constructor of object Employee: "
        <<firstName<<' '<<lastName<<endl;
}

void Employee::print() const
{
    cout<<lastName<<", "<<firstName<<"\nbusy: ";
    hireDate.print();
    cout<<"birthday: ";
    birthDate.print();
    cout<<endl;
}

Employee::~Employee()
{
    cout<<"Destructor of object Employee: "
        <<lastName<<", "<<firstName<<endl;
}
