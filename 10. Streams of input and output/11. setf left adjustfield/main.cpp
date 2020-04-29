#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::ios;
using std::setw;
using std::setiosflags;
using std::resetiosflags;

int main()
{
    int x = 12345;

    cout<<"By default - right align:\n"
        <<setw(10)<<x<<"\n\nUsing function-members"
        <<"\nFunction setf for setting ios::left:\n"<<setw(10);

    cout.setf(ios::left, ios::adjustfield);
    cout<<x<<"\nFunction unsetf for reset default:\n";
    cout.unsetf(ios::left);
    cout<<setw(10)<<x
        <<"\n\nParametrized stream manipulators"
        <<setw(10)<<setiosflags(ios::left)<<x
        <<"\nFunction setiosflags for reset default:\n"
        <<setw(10)<<resetiosflags(ios::left)
        <<x<<endl;

    return 0;

}
