#include <iostream>
#include <iomanip>

using namespace std;

void bubbleSort(int*, const int);

int main()
{
    const int arraySize = 10;
    int a[arraySize] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int i;

    cout<<"Elements of data in outcome order\n";

    for(i = 0; i < arraySize; i++)
        cout<<setw(4)<<a[i];

    bubbleSort(a, arraySize);
    cout<<"\nElements of data in ascending order\n";

    for(i = 0; i < arraySize; i++)
        cout<<setw(4)<<a[i];

    cout<<endl;

    return 0;
}

void bubbleSort(int *array, const int size)
{
    void swap(int *const, int *const);

    for(int pass = 0; pass < size - 1; pass++)
        for(int j = 0; j < size - 1; j++)
            if(array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
}

void swap(int *const element1Ptr, int *const element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}
