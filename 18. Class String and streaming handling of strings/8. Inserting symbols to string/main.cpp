#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("beginning end"),
           s2("middle "), s3("12345678"), s4("xx");

    cout<<"Ingoing string:\ns1: "<<s1
        <<"\ns2: "<<s2<<"\ns3: "<<s3
        <<"\ns4: "<<s4<<"\n\n";

    s1.insert(10, s2);

    s3.insert(3, s4, 0, string::npos);

    cout<<"String after inserting:\ns1: "<<s1
        <<"\ns2: "<<s2<<"\ns3: "<<s3
        <<"\ns4: "<<s4<<endl;

    return 0;
}
