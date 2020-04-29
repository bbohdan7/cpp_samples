#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int SIZE = 80;
    char buffer[SIZE];

    cout<<"Enter sentence:\n";
    cin.getline(buffer, SIZE);

    cout<<"\nEnter sentence:\n"<<buffer<<endl;

    return 0;
}
