#include <iostream>
#include <string>
using namespace std;

void printStats(const string&);

int main()
{
    string s;

    cout<<"Before entering:\n";
    printStats(s);

    cout<<"\n\nEnter string: ";
    cin>>s;
    cout<<"Entered string: "<<s;

    cout<<"\nAfter entering:\n";
    printStats(s);

    s.resize(s.length() + 10);
    cout<<"\n\nAfter changing size (length + 10):\n";
    printStats(s);

    cout<<endl;

    return 0;
}

void printStats(const string &str)
{
    cout<<"Capacity: "<<str.capacity()
        <<"\nMax size: "<<str.max_size()
        <<"\nSize: "<<str.size()
        <<"\nlength: "<<str.length()
        <<"\nEmpty: "<<(str.empty() ? "true" : "false");
}
