#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
    char s1[] = "ABCDEFG", s2[] = "ABCDXYZ";

    cout<<"s1 = "<<s1<<"\ns1 = "<<s2<<endl
        <<"\nmemcmp(s1, s2, 4) = "<<setw(3)
        <<memcmp(s1, s2, 4)<<"\nmemcmp(s1, s2, 7) = "
        <<setw(3)<<memcmp(s1, s2, 7)<<"\nmemcmp(s2, s1, 7) = "<<setw(3)
        <<memcmp(s2, s1, 7)<<endl;

    return 0;
}
