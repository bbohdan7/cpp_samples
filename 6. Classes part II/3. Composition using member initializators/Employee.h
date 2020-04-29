#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Date.h"

class Employee
{
    public:
        Employee(char*, char*, int, int, int, int, int, int);
        void print() const;
        ~Employee();
    private:
        char firstName[25];
        char lastName[25];
        const Date birthDate; //Composition
        const Date hireDate; //Composition
};

#endif // EMPLOYEE_H
