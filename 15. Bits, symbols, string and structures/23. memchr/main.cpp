#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[] = "This is a string";

    cout<<"Remaining part of string after found symbol 'p': '"
        <<static_cast<char*>(memchr(s, 'r', 16))<<"'"<<endl;

    return 0;
}
