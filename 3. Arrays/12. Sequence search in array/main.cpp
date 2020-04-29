#include <iostream>

using namespace std;

int linearSearch(const int[], int, int);

int main()
{
    const int arraySize = 100;
    int a[arraySize], searchKey, element;

    for(int x = 0; x < arraySize; x++)
        a[x] = 2 * x;

    cout<<"Enter key of search - integer number:"<<endl;
    cin>>searchKey;
    element = linearSearch(a, searchKey, arraySize);

    if(element != -1)
        cout<<"Value has been found in element "<<element<<endl;
    else
        cout<<"Value has not been found"<<endl;

    return 0;
}

int linearSearch(const int array[], int key, int sizeOfArray)
{
    for(int n = 0; n < sizeOfArray; n++)
        if(array[n] == key)
            return n;

    return -1;
}
