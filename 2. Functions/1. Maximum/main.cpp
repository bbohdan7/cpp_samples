#include <iostream>

using namespace std;

int maximum(int, int, int);

int main()
{
    int a, b, c;

    cout<<"Enter three integer numbers: ";
    cin>>a>>b>>c;

    cout<<"Maximum value is: "<<maximum(a,b,c)<<endl;

    return 0;
}

int maximum(int x, int y, int z)
{
    int max = x;

    if(y > max)
        max = y;

    if(z > max)
        max = z;

    return max;
}
