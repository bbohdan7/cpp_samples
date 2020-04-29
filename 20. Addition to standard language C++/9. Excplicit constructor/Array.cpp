#include "Array.h"

#include <iostream>
#include <cassert>


Array::Array(int arraySize)
{
    size = (arraySize > 0 ? arraySize : 10);

    cout<<"Array - constructor has been called for "
        <<size<<" elements\n";

    ptr = new int[size];
    assert(ptr != 0);

    for(int i = 0; i < size; i++)
        ptr[i] = 0;
}

Array::~Array()
{
    delete [] ptr;
}

ostream &operator<<(ostream &output, const Array &a)
{
    int i;

    for(i = 0; i < a.size; i++)
        output<<a.ptr[i]<<' ';

    return output;
}
