#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int w = 4;
    char string[10];

    cout<<"Enter sentence:\n";
    cin.width(5);

    while(cin>>string){
        cout.width(w++);
        cout<<string<<endl;
        cin.width(5);
    }

    return 0;
}
