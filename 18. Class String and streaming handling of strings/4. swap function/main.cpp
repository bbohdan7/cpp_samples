#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first("one"), second("two");

    cout<<"Before swapping:\nfirst: "<<first
        <<"\nsecond: "<<second;
    first.swap(second);
    cout<<"\n\nAfter swapping:\nfirst: "<<first
        <<"\nsecond: "<<second<<endl;

    return 0;
}
