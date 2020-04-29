#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char *string1 = "abcdefabcdef";
    const char *string2 = "def";

    cout<<"string1 = "<<string1<<"\nstring2 = "<<string2
        <<"\n\nRemainder of string1, that begin with\n"
        <<"first ingoing of string2: "
        <<strstr(string1, string2)<<endl;

    return 0;
}
