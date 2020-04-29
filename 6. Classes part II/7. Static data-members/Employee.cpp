#include "Employee.h"

#include <iostream>
#include <cstring>
#include <cassert>

using std::cout;
using std::endl;

int Employee::count = 0;

int Employee::getCount()
{
    return count;
}

Employee::Employee(const char *first, const char*last)
{
    firstName = new char[ strlen(first) + 1 ];
    assert( firstName != 0 );
    strcpy( firstName, first );

    lastName = new char[ strlen(last) + 1 ];
    assert( lastName != 0 );
    strcpy(lastName, last);

    ++count;
    cout<<"Constructor Employee for "<<firstName
        <<" "<<lastName<<" has been called."<<endl;
}

Employee::~Employee()
{
    cout<<"~Employee() has been called for "<<firstName
        <<' '<<lastName<<endl;

    delete[] firstName;
    delete[] lastName;
    --count;
}

const char *Employee::getFirstName() const
{
    return firstName;
}

const char *Employee::getLastName() const
{
    return lastName;
}

