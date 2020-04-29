#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::ios;

int main()
{
    cout<<"Before setting ios::showpoint\n"
        <<"9.9900 is printed as: "<<9.9900
        <<"\n9.9000 is printed as: "<<9.9000
        <<"\n9.0000 is printed as: "<<9.0000
        <<"\n\nAfter setting ios:showpoint\n";
    cout.setf(ios::showpoint);
    cout<<"9.9900 is printed as: "<<9.9900
        <<"\n9.9000 is printed as: "<<9.9000
        <<"\n9.0000 is printed as: "<<9.0000<<endl;

    return 0;
}
