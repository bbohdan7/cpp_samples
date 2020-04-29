#include <iostream>
#include "Count.h"

using std::cout;
using std::endl;

int main()
{
    Count counter;

    cout<<"counter.x after creation: ";
    counter.print();
    cout<<"counter.x after calling of friend function setX: ";
    setX(counter, 8);
    counter.print();

    return 0;
}
