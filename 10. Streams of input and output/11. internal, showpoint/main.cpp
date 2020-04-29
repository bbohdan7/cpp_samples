#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::ios;
using std::setiosflags;
using std::setw;

int main()
{
    cout<<setiosflags(ios::internal | ios::showpoint)
        <<setw(10)<<123<<endl;

    return 0;
}
