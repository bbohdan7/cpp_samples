#include "Derived.h"

using std::cout;

Derived::Derived(int i, char c, double f)
    :Base1(i),
     Base2(c),
     real(f){ }

double Derived::getReal() const
{
    return real;
}

ostream &operator<<(ostream &output, const Derived &d)
{
    cout<<"            Integer: "<<d.value
        <<"\n             Symbol: "<<d.letter
        <<"\n               Real: "<<d.real;

    return output;
}
