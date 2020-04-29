#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::dec;
using std::oct;
using std::setbase;

int main()
{
    int n;

    cout<<"Enter decimal number: ";
    cin>>n;

    cout<<n<<" in hexidecimal format: "
        <<hex<<n<<'\n'
        <<dec<<n<<" in octodecimal format: "
        <<oct<<n<<'\n'
        <<setbase(10)<<n<<" in decimal format: "
        <<n<<endl;

    return 0;
}
