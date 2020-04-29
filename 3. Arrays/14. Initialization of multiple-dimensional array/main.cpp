#include <iostream>

using namespace std;

void printArray(int[][3]);

int main()
{
    int array1[2][3] = { { 1,2,3 }, { 4,5,6 } },
        array2[2][3] = {1,2,3,4,5,6},
        array3[2][3] = { { 1, 2 }, { 4 } }; //This initialization will fill with zero.

    cout<<"Value of array1:"<<endl;
    printArray(array1);

    cout<<"Value of array2:"<<endl;
    printArray(array2);

    cout<<"Value of array3"<<endl;
    printArray(array3);

    return 0;
}

void printArray(int a[][3])
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
            cout<<a[i][j]<<' ';

        cout<<endl;
    }
}
