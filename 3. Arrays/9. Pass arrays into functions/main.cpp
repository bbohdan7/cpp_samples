#include <iostream>
#include <iomanip>
using namespace std;

void modifyArray(int[], int);
void modifyElement(int);

int main()
{
    const int arraySize = 5;
    int i, a[arraySize] = { 0, 1, 2, 3, 4 };

    cout<<"Result of transferring all of array by reference:"<<"\n\nValue of incoming array:\n";

    for(i = 0; i < arraySize; i++)
        cout<<setw(3)<<a[i];

    cout<<endl;

    //array transfered by reference
    modifyArray(a, arraySize);

    cout<<"Value of changed array:\n";

    for(i = 0; i < arraySize; i++)
        cout<<setw(3)<<a[i];

    cout<<"\n\n\n"
        <<"Result of transfer elements of array by value:"
        <<"\n\nValue a[3] equal "<<a[3]<<'\n';

    modifyElement(a[3]);

    cout<<"Value a[3] equals "<<a[3]<<'\n';

    return 0;
}

void modifyArray(int b[], int sizeOfArray)
{
    for(int j = 0; j < sizeOfArray; j++)
        b[j] *= 2;
}

void modifyElement(int e)
{
    cout<<"Value modifyElement "<<(e *= 2)<<endl;
}
