#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T>
T maximum(T, T, T);

int main()
{
    int a = 8, b = 88, c = 22;
    double d = 95.96, e = 78.59, f = 83.89;

    cout<<maximum(a, b, c)<<'\n';
    cout<<maximum(d, e, f)<<endl;

    return 0;
}

template<typename T>
T maximum(T value1, T value2, T value3)
{
    T max = value1;

    if(value2 > max)
        max = value2;

    if(value3 > max)
        max = value3;

    const char *dataType = typeid(T).name();

    cout<<dataType<<" - types to be compared.\nGreater: "<<dataType<<" is ";

    return max;
}
