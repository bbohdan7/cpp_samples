#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("STRINGS");
    const char *ptr1 = 0;
    int len = s.length();
    char *ptr2 = new char[len + 1];

    s.copy(ptr2, len, 0);
    ptr2[len] = 0;

    cout<<"String in: "<<s
        <<"\ns converted to string C-style: "
        <<s.c_str()<<"\nptr1: ";

    ptr1 = s.data();

    for(int k = 0; k < len; ++k)
        cout<<*(ptr1 + k);

    cout<<"\nptr2: "<<ptr2<<endl;
    delete[] ptr2;

    return 0;
}
