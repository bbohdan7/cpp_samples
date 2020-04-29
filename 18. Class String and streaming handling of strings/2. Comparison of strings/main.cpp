#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("Verification of comparing function."),
           s2("Hello"),s3("stringer"),z1(s2);

    cout<<"s1: "<<s1<<"\ns2: "<<s2<<"\ns3: "<<s3<<"\nz1: "<<z1<<"\n\n";

    if(s1 == z1)
        cout<<"s1 == z1\n";
    else{
        if(s1 > z1)
            cout<<"s1 > z1\n";
        else
            cout<<"s1 < z1\n";
    }

    int f = s1.compare(s2);

    if(f == 0)
        cout<<"s1.compare(s2) == 0\n";
    else if(f > 0)
        cout<<"s1.compare(s2) > 0\n";
    else
        cout<<"s1.compare(s2) < 0\n";

    f = s1.compare(2, 5, s3, 0, 5);

    if(f == 0)
        cout<<"s1.compare(2, 5, s3, 0, 5) == 0\n";
    else if(f > 0)
        cout<<"s1.compare(2, 5, s3, 0, 5) > 0\n";
    else
        cout<<"s1.compare(2, 5, s3, 0, 5) < 0\n";

    f = z1.compare(0, s2.size(), s2);

    if(f == 0)
        cout<<"z1.compare(0, s2.size(), s2) == 0\n";
    else if(f > 0)
        cout<<"z1.compare(0, s2.size(), s2) > 0\n";
    else
        cout<<"z1.compare(0, s2.size(), s2) < 0\n";

    return 0;
}
