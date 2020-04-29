#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::ios;
using std::setiosflags;
using std::oct;
using std::hex;

int main()
{
    int x = 100;

    cout<<setiosflags(ios::showbase)
        <<"Printing integer with different bases:\n"
        <<x<<'\n'
        <<oct<<x<<'\n'
        <<hex<<x<<endl;

    return 0;
}
