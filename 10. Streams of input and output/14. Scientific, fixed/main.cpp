#include <iostream>

using std::cout;
using std::endl;
using std::ios;

int main()
{
    double x = .001234567, y = 1.946e9;

    cout<<"Showing in default format:\n"
        <<x<<'\t'<<y<<'\n';
    cout.setf(ios::scientific, ios::floatfield);
    cout<<"Showing in exponentional format:\n"
        <<x<<'\t'<<y<<'\n';
    cout.unsetf(ios::scientific);
    cout<<"Showing in format by default after unsetf:\n"
        <<x<<'\t'<<y<<'\n';
    cout.setf(ios::fixed, ios::floatfield);
    cout<<"Showing in format with fixed point:\n"
        <<x<<'\t'<<y<<endl;

    return 0;
}
