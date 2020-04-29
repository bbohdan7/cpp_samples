#include "Array.h"

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cassert>

using std::setw;
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

int Array::arrayCount = 0;

Array::Array(int arraySize)
{
    size = (arraySize > 0 ? arraySize : 10);
    ptr = new int[ size ];
    assert(ptr != 0);
    ++arraySize;

    for(int i = 0; i < size; i++)
        ptr[i] = 0;
}

//Copying constructor
Array::Array(const Array &init)
    :size(init.size)
{
    ptr = new int[size];
    assert(ptr != 0);
    ++arrayCount;

    for(int i = 0; i < size; i++)
        ptr[i] = init.ptr[i];
}

Array::~Array()
{
    delete[] ptr;
    --arrayCount;
}

int Array::getSize() const
{
    return size;
}

const Array &Array::operator=(const Array &right)
{
    if(&right != this){
        if(size != right.size){
            delete[] ptr;
            size = right.size;
            ptr = new int[size];
            assert(ptr != 0);
        }

        for(int i = 0; i < size; i++)
            ptr[i] = right.ptr[i];

    }
    return *this;
}

bool Array::operator==(const Array &right) const
{
    if(size != right.size)
        return false;

    for(int i = 0; i < size; i++)
        if(ptr[i] != right.ptr[i])
            return false;

    return true;
}

bool Array::operator!=(const Array &right) const
{
    return !(*this == right);
}

int &Array::operator[](int subscript)
{
    assert(0 <= subscript && subscript < size);

    return ptr[subscript];
}

const int &Array::operator[](int subscript) const
{
    assert(0 <= subscript && subscript < size);

    return ptr[subscript];
}

int Array::getArrayCount()
{
    return arrayCount;
}

istream &operator>>(istream &input, Array &a)
{
    for(int i = 0; i < a.size; i++)
        input>>a.ptr[i];

    return input;
}

ostream &operator<<(ostream &output, const Array &a)
{
    int i;

    for(i = 0; i < a.size; i++){
        output<<setw(12)<<a.ptr[i];

        if((i + 1) % 4 == 0)
            output<<endl;
    }
    if(i % 4 != 0)
        output<<endl;

    return output;
}
