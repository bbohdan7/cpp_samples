#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char *string1 = "In a zoo many animals, including zebra";

    int c = 'z';

    cout<<"Remainder string1, beginning with last\n"
        <<"coming of symbol '"
        <<static_cast<char>(c)
        <<"': '"<<strrchr(string1, c)<<"'"<<endl;

    return 0;
}
