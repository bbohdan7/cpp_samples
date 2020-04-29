#include "Employee.h"

#include <iostream>
#include <cstring>
#include <cassert>

using std::cout;

Employee::Employee(const char *first, const char *last)
{
    firstName = new char[ strlen(first) + 1 ];
    assert(firstName != 0);
    strcpy(firstName, first);

    lastName = new char[ strlen(last) + 1 ];
    assert(lastName != 0);
    strcpy(lastName, last);
}

Employee::~Employee()
{
    delete [] firstName;
    delete [] lastName;
}

const char *Employee::getFirstName() const
{
    return firstName;
}

const char *Employee::getLastName() const
{
    return lastName;
}

void Employee::print() const
{
    cout<<firstName<<' '<<lastName;
}
