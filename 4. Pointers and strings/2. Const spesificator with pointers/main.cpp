#include <iostream>

using namespace std;

void noConstOnNoConst(int*);
void noConstOnConst(const int*);
void constOnNoConst(int *const);
void constOnConst(const int *const);

int main()
{
    int num = 0;

    noConstOnNoConst(&num); //Correct!
    noConstOnConst(&num); //Error!
    constOnNoConst(&num); //Correct, because memory location hasn't been changed!
    constOnConst(&num); //Error, value is changing but memory location isn't!
}

void noConstOnNoConst(int *numPtr)
{
    *numPtr = 99;
}

void noConstOnConst(const int *numPtr) // It'll must be a error!
{
    *numPtr += 5;
}

void constOnNoConst(int *const numPtr) // The value can be changed but address location cannot be modified!
{
    *numPtr += 100;
}

void constOnConst(const int *const numPtr) //Cannot reassign the value and change memory location.
{
    *numPtr = 5;
}

