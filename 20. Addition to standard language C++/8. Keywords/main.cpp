#include <iostream>
#include <iso646.h>

using namespace std;

int main()
{
    int a = 8, b = 22;

    cout<<boolalpha
        <<"\n    a and b: "<<(a and b)
        <<"\n     a or b: "<<(a or b)
        <<"\n      not a: "<<(not a)
        <<"\n a not_eq b: "<<(a not_eq b)
        <<"\n a bitand b: "<<(a bitand b)
        <<"\n a bitor b: "<<(a bitor b)
        <<"\n    a xor b:"<<(a xor b)
        <<"\n    compl a:"<<(compl 2)
        <<"\na and__eq b:"<<(a and_eq b)
        <<"\n  a or_eq b:"<<(a or_eq b)
        <<"\n a xor_eq b:"<<(a xor_eq b)<<endl;

    return 0;
}
