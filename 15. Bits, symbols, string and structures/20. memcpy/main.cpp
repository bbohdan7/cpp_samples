#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[17], s2[] = "Copy this string";

    memcpy(s1, s2, 17);

    cout<<"After copying s2 to s1 with memcpy,\n"
        <<"s1 consist '"<<s1<<"'"<<endl;

    return 0;
}
