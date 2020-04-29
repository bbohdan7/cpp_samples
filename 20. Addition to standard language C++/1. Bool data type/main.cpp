#include <iostream>

using namespace std;

int main()
{
    bool boolean = false;
    int x = 0;

    cout<<"Boolean value: "<<boolean<<"\nEnter integer: ";
    cin>>x;

    cout<<"Integer "<<x<<" - "<<(x ? " not null " : " null ")<<"and interpreted as ";

    if(x)
        cout<<"true\n";
    else
        cout<<"false\n";

    boolean = true;
    cout<<" Boolean value: "<<boolean;
    cout<<"\nBoolean's output with boolalpha-manipulator: "
        <<boolalpha<<boolean<<endl;

    return 0;
}
