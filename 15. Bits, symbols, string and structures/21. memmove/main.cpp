#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char x[] = "Home Sweet Home";

    cout<<"String in array x before using memmove: "<<x;
    cout<<"\nString in array x after using memmove:     "
        <<static_cast<char*>(memmove(x, &x[5], 10))<<endl;

    return 0;
}
