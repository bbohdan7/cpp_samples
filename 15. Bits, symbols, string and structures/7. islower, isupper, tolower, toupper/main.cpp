#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    cout<<"islower:\n"
        <<(islower('p') ? " p is " : " p isn't ")
        <<"a lower letter\n";
    cout<<"\nisupper\n"
        <<(isupper('d') ? " d is " : " d isn't ")
        <<" an upper letter\n";
    cout<<"\nu after conversion to uppercase: "
        <<static_cast<char>(toupper('u'));
    cout<<"\nL after conversion to lowercase: "
        <<static_cast<char>(tolower('L'))<<endl;

    return 0;
}
