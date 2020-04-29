#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 80;
    char buffer[SIZE];

    cout<<"Enter sentence:\n";
    cin.read(buffer, 20);
    cout<<"\nEnter sentence:\n";

    cout.write(buffer, cin.gcount());
    cout<<endl;

    return 0;
}
