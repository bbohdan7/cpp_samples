#include "Increment.h"

Increment::Increment(int c, int i)
    :increment(i) // Member-initializer for const data-members.
{
    count = c;
}

void Increment::print() const
{
    cout<<"count = "<<count
        <<", increment = "<<increment<<endl;
}
