#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
    cout<<"Number of created objects = "
        <<Array::getArrayCount()<<'\n';

    Array integers1(7), integers2;

    cout<<"Number of created objects = "
        <<Array::getArrayCount()<<"\n\n";

    cout<<"Size of array integer2 equal "
        <<integers1.getSize()
        <<"\nArray after initialization:\n"
        <<integers1<<"\n";

    cout<<"Size of array integer2 equal "
        <<integers2.getSize()
        <<"\n\n"
        <<integers2<<"\n";

    cout<<"Enter 17 integer numbers:\n";
    cin>>integers1>>integers2;
    cout<<"After entering arrays consist:\n"
        <<"integers1:\n"<<integers1
        <<"integers2:\n"<<integers2<<"\n";

    cout<<"Evaluation: integers1 != integers2\n";

    if(integers1 != integers2)
        cout<<"Arrays are not equal.\n";

    Array integers3(integers1);

    cout<<"\nSize of array integers3 equal "
        <<integers2.getSize()
        <<"\nArray after initialization:\n"
        <<integers3<<"\n";

    cout<<"Assigning array integers2 to integers1:\n";

    integers1 = integers2;

    cout<<"integers1:\n"<<integers1
        <<"integers2:\n"<<integers2<<"\n";

    cout<<"Evaluation: integers1 == integers2\n";

    if(integers1 == integers2)
        cout<<"Arrays are equal.";

    cout<<"integers[5] equal "<<integers1[5]<<"\n";

    cout<<"Assigning 1000 to element integers1[5]\n";
    integers1[5] = 1000;
    cout<<"integers1:\n"<<integers1<<endl;



    return 0;
}
