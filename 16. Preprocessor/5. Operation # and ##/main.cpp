#include <iostream>

#define HELLO(x) cout<<"Hello, " #x <<endl

#define TOKENCONCAT(x, y) x ## y

using namespace std;

int main()
{
    HELLO(John);
    cout<<TOKENCONCAT(5, 5);
    return 0;
}
