#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("Checking of iterators");
    string::const_iterator i1 = s.begin();

    cout<<"s = "<<s
        <<"\n(using iterators i1) s: ";

    while(i1 != s.end()){
        cout<<*i1;
        ++i1;
    }

    cout<<endl;

    return 0;
}
