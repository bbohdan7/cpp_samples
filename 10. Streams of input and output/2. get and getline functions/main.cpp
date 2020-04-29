#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char c;

    cout<<"Before enter cin.eof(): "<<cin.eof()
        <<"\nEnter sentence:\n";

    while((c = cin.get()))
        cout.put(c);

    cout<<"\nEOF in this system: "<<c;
    cout<<"\nAfter entering cin.eof(): "<<cin.eof()<<endl;

    return 0;
}

