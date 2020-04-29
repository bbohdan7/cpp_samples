#include <iostream>

using namespace std;

void staticArrayInit();
void automaticArrayInit();

int main()
{
    cout<<"First calling each function:\n";
    staticArrayInit();
    automaticArrayInit();

    cout<<"\n\nSecond calling each function:\n";
    staticArrayInit();
    automaticArrayInit();
    cout<<endl;

    return 0;
}

void staticArrayInit()
{
    static int array1[3];
    int i;

    cout<<"\nValue on incoming staticArrayInit:\n";

    for(i = 0; i < 3; i++)
        cout<<"Array1["<<i<<"] = "<<array1[i]<<"  ";

    cout<<"\nValue on outcoming staticArrayInit:\n";

    for(i = 0; i < 3; i++)
        cout<<"array1["<<i<<"] = "<<( array1[i] += 5 )<<"  ";
}

void automaticArrayInit()
{
    int i, array2[3] = { 1, 2, 3 };

    cout<<"\n\nValue on incoming automaticArrayInit:\n";

    for(i = 0; i < 3; i++)
        cout<<"array2["<<i<<"] = "<<array2[i]<<"  ";

    cout<<"\nValue on outcoming automaticArrayInit:\n";

    for(i = 0; i < 3; i++)
        cout<<"array2["<<i<<"] = "<<(array2[i] += 5)<<" ";
}
