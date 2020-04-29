#include <iostream>

using namespace std;

template<class T>
T maximum(T, T, T);

int main()
{

    int int1, int2, int3;

    cout<<"Enter three integer number: ";
    cin>>int1>>int2>>int3;
    cout<<"Maximum number: "
        <<maximum(int1, int2, int2);

    double double1, double2, double3;

    cout<<"\nEnter three double numbers: ";
    cin>>double1>>double2>>double3;
    cout<<"Maximum number: "<<maximum(double1, double2, double3);

    char char1, char2, char3;

    cout<<"\nEnter three char symbols: ";
    cin>>char1>>char2>>char3;
    cout<<"Maximum value: "
        <<maximum(char1, char2, char3)<<endl;

    return 0;
}

template<class T>
T maximum(T value1, T value2, T value3)
{
    T max = value1;

    if(value2 > max)
        max = value2;

    if(value3 > max)
        max = value3;

    return max;
}
