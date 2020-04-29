#include <iostream>

using namespace std;

int cubeByValue(int);
int cubeByReference(int*);

int main()
{
    int a = 3;

    cout<<"Outcoming result of cubeByValue: "<<cubeByValue(5);
    cubeByReference(&a);
    cout<<"\nVariable 'a' after cubeByReference is modified: "<<a<<endl;

    return 0;
}

int cubeByValue(int n)
{
    return n * n * n;
}

int cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}
