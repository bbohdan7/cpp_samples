#include <iostream>
#include "Array.h"

using namespace std;

void outputArray(const Array&);

int main()
{
    Array integers1(7);

    //ERROR!!!
    //outputArray(integers1);

    //ERROR AS WELL!!!
    //outputArray(15);

    //DO THIS WAY!!!
    outputArray(Array(15));

    return 0;
}

void outputArray(const Array &arrayToOutput)
{
    cout<<"Array consists:\n"
        <<arrayToOutput<<"\n\n";
}
