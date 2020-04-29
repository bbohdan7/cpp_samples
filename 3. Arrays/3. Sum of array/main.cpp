#include <iostream>

using namespace std;

int main()
{
    const int arraySize = 10;
    int a[arraySize] = { 1, 3, 5, 4, 99, 16, 45, 67, 89, 45 };

    int total = 0;

    for(int i = 0; i < arraySize; i++)
        total += a[i];

    cout<<"Summary values of the array is: "<<total<<endl;

    return 0;
}
