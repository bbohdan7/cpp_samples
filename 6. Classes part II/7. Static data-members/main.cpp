#include <iostream>
#include "Employee.h"

using std::cout;
using std::endl;

int main()
{
    cout<<"Amount of employees before creating of objects equal: "
        <<Employee::getCount()<<endl;

    Employee *e1Ptr = new Employee("Susan", "Baker");
    Employee *e2Ptr = new Employee("Robert", "Jones");

    cout<<"Amount of employees after creation of objects equal: "
        <<Employee::getCount();

    cout<<"\n\nEmployee 1: "
        <<e1Ptr->getFirstName()
        <<" "<<e1Ptr->getLastName()
        <<"\nEmployee 2: "
        <<e2Ptr->getFirstName()
        <<" "<<e2Ptr->getLastName()<<"\n\n";

    delete e1Ptr;
    e1Ptr = 0;
    delete e2Ptr;
    e2Ptr = 0;

    cout<<"Amount of employees after deleting equal: "
        <<Employee::getCount()<<endl;

    return 0;
}
