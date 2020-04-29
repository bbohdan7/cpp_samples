#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int arraySize = 10;
    int j, s[arraySize];

    for(j = 0; j < arraySize; j++)
        s[j] = 2 + 2 * j;

    cout<<"Element"<<setw(13)<<"Value"<<endl;

    for(j = 0; j < arraySize; j++)
        cout<<setw(7)<<j<<setw(13)<<s[j]<<endl;

    return 0;
}
