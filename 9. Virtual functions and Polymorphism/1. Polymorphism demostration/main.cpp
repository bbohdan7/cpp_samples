#include <iostream>
#include <iomanip>

#include "Employee.h"
#include "Boss.h"
#include "CommissionWorker.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"

using std::cout;
using std::endl;
using std::ios;
using std::setiosflags;
using std::setprecision;

void virtualViaPointer(const Employee*);
void virtualViaReference(const Employee&);

int main()
{
    cout<<setiosflags(ios::fixed | ios::showpoint)
        <<setprecision(2);

    Boss b("John", "Smith", 800.00);
    b.print();
    cout<<" earned $"<<b.earnings();
    virtualViaPointer(&b);
    virtualViaReference(b);

    CommissionWorker c("Sue", "Jones", 200.0, 3.0, 150);
    c.print();
    virtualViaPointer(&c);
    virtualViaReference(c);

    PieceWorker p("Bob", "Lewis", 2.5, 200);
    p.print();
    virtualViaPointer(&p);
    virtualViaReference(p);

    HourlyWorker h("Karen", "Price", 13.75, 40);
    h.print();
    virtualViaPointer(&h);
    virtualViaReference(h);
    cout<<endl;

    return 0;
}

void virtualViaPointer(const Employee *baseClassPtr)
{
    baseClassPtr->print();
    cout<<" earned $"<<baseClassPtr->earnings();
}

void virtualViaReference(const Employee &baseClassRef)
{
    baseClassRef.print();
    cout<<" earned $"<<baseClassRef.earnings();
}
