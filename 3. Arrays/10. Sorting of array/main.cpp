#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int arraySize = 10;
    int a[arraySize] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int i, hold;

    cout<<"Elements of data in incoming order\n";

    for(i = 0; i < arraySize; i++)
        cout<<setw(4)<<a[i];

    for(int pass = 0; pass < arraySize - 1; pass++)
        for(int i = 0; i < arraySize; i++)
            if(a[i] > a[i + 1]){
                hold = a[i];
                a[i] = a[i + 1];
                a[ i + 1 ] = hold;
            }
    cout<<"\nElements of data in ascending order\n";

    for(i = 0; i < arraySize; i++)
        cout<<setw(4)<<a[i];

    cout<<endl;
    return 0;
}
