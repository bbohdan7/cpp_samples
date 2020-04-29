#include <iostream>
#include "Increment.h"

using std::cout;
using std::endl;

int main()
{
    Increment value(10, 5);

    cout<<"After incrementing: ";
    value.print();

    for(int j = 0; j < 3; j++){
        value.addIncrement();
        cout<<"After incrementing "<<j + 1<<": ";
        value.print();
    }

    return 0;
}
