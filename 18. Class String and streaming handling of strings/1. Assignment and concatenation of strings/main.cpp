#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("cat"), s2, s3;

    s2 = s1;
    s3.assign(s1);
    cout<<"s1: "<<s1<<"\ns2: "<<s2<<"\ns3: "<<s3<<"\n\n";

    s2[0] = s3[2] = 'r';

    cout<<"After conversion s2 and s3:\n"
        <<"s1: "<<s1<<"\ns2: "<<s2<<"\ns3: ";

    int len = s3.length();

    for(int x = 0; x < len; ++x)
        cout<<s3.at(x);

    string s4(s1 + "apult"), s5;

    s3 += "pet";
    s1.append("acomb");

    s5.append(s1, 4, s1.size());

    cout<<"\n\nAfter concatenation:\n"<<"s1: "<<s1
        <<"\ns2: "<<s2<<"\ns3: "<<s3<<"\ns4: "<<s4
        <<"\ns5: "<<s5<<endl;

    return 0;
}
