#include <iostream>

using namespace std;

int main()
{
    int x = 120, *ptr = &x;

    cout<<*reinterpret_cast<char*>(ptr)<<endl;

    return 0;
}
