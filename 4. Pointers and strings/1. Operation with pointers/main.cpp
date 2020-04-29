#include <iostream>

using namespace std;

int main()
{
    int a;
    int  *aPtr;

    a = 7;
    aPtr = &a;

    cout<<"Address of a: "<<&a
        <<"\nValue aPtr: "<<aPtr;

    cout<<"\n\nValue of a: "<<a
        <<"\nValue of *aPtr: "<<*aPtr;

    cout<<"\n\nWe'll show that * and & inverse "
        <<"to each other.\n&*aPtr = "<<&*aPtr
        <<"\n*&aPtr = "<<*&aPtr<<endl;

    return 0;
}
