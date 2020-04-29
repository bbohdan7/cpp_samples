#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char *string1 = "This is a text";
    const char *string2 = "beware";

    cout<<"In chars of string '"<<string2<<"'\n"
        <<*strpbrk(string1, string2)<<"'"
        <<" first symbol, appeared in \n'"
        <<string1<<"'"<<endl;

    return 0;
}
