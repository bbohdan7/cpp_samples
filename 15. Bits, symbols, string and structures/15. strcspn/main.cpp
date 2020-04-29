#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char *string1 = "Value equal to 3.14159";
    const char *string2 = "1234567890";

    cout<<"String1 = "<<string1<<"\nString2 = "<<string2
        <<"\nLength of beginning of string1,"
        <<"\ndoesn't consist of string2 = "
        <<strcspn(string1, string2)<<endl;

    return 0;
}
