#include <iostream>
#include "ConstCastTest.h"
using namespace std;

int main()
{
    ConstCastTest x;
    x.setNumber(8);

    cout<<"Initial value of number: "<<x.getNumber();

    x.printNumber();

    return 0;
}
