#include <iostream>
#include <iomanip>

using namespace std;

void bubble(int[], const int, bool(*)(int, int));
bool ascending(int,int);
bool descending(int, int);

int main()
{
    const int arraySize = 10;
    int order,
        counter,
        a[arraySize] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    cout<<"Enter 1 for sort by ascending,\n"
        <<"Enter 2 for sort by descending: ";
    cin>>order;
    cout<<"\Data elements in outcome order\n";

    for(counter = 0; counter < arraySize; counter++)
        cout<<setw(4)<<a[counter];

    if(order == 1){
        bubble(a, arraySize, ascending);
        cout<<"\nData elements by ascending\n";
    }
    else{
        bubble(a, arraySize, descending);
        cout<<"\nData elements by descending\n";
    }

    for(counter = 0; counter < arraySize; counter++)
        cout<<setw(4)<<a[counter];

    cout<<endl;

    return 0;
}

void bubble(int work[], const int size, bool(*compare)(int ,int))
{
    void swap(int *const, int *const);

    for(int pass = 0; pass < size; pass++)
        for(int count = 0; count < size - 1; count++)
            if((*compare)(work[count], work[count + 1]))
                swap( &work[count], &work[count + 1] );
}

void swap(int *const element1Ptr, int *const Element2Ptr)
{
    int temp;

    temp = *element1Ptr;
    *element1Ptr = *Element2Ptr;
    *Element2Ptr = temp;
}

bool ascending(int a, int b)
{
    return b < a;
}

bool descending(int a, int b)
{
    return b > a;
}

