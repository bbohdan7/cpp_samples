#include <iostream>

using namespace std;

int main()
{
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;
    int array[20], *ptr = array;

    cout<<"Char size: "<<sizeof c;
    cout<<"\nShort size: "<<sizeof s;
    cout<<"\nInt size: "<<sizeof i;
    cout<<"\nLong size: "<<sizeof l;
    cout<<"\nFloat size: "<<sizeof f;
    cout<<"\nDouble size: "<<sizeof d;
    cout<<"\nLong double size: "<<sizeof ld;
    cout<<"\nArray size(20 int): "<<sizeof array;
    cout<<"\nPointer on array(name is first element of it) size: "<<sizeof ptr<<endl;

}
