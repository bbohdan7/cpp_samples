#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char *string1 = "The value is 3.14159";
    const char *string2 = "aehils Tuv";

    cout<<"string1 = "<<string1
        <<"\nstring2 = "<<string2
        <<"\n\nLength of inceptive segment of string1, \n"
        <<" consists only with chars of string2 = "
        <<strspn(string1, string2)<<endl;

    return 0;
}
