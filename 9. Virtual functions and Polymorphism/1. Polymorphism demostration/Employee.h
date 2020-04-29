#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
    public:
        Employee(const char*, const char*);
        ~Employee();
        const char *getFirstName() const;
        const char *getLastName() const;

        virtual double earnings() const = 0; // Pure virtual function (makes class the abstract)
        virtual void print() const;

    private:
        char *firstName;
        char *lastName;
};

#endif // EMPLOYEE_H
