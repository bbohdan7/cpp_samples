#include <iostream>

using namespace std;

int main()
{
    char string1[20], string2[] = "String letters";

    cout<<"Enter a string: ";
    cin>>string1;
    cout<<"Array string1: "<<string1<<"\nArray string2: "<<string2<<"\nArray string1 with spaces between symbols: \n";

    for(int i = 0; string1[i] != '\0'; i++)
        cout<<string1[i]<<' ';

    cin>>string1;
    cout<<"\nArray string1: "<<string1<<endl;

    cout<<endl;

    return 0;
}
