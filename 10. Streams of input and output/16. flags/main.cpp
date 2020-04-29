#include <iostream>

using std::cout;
using std::endl;
using std::ios;

int main()
{
    int i = 1000;
    double d = 0.0947628;

    cout<<"Value of variable flags equals: "
        <<cout.flags()
        <<"\nPrinting data of type int and double in initial format:\n"
        <<i<<'\t'<<d<<"\n\n";

    long originalFormat = cout.flags(ios::oct | ios::scientific);

    cout<<"Value of variable flags equals: "
        <<cout.flags()
        <<"\nPrinting data of type int and double in new format,\n"
        <<" has been set with function-member flags:\n"
        <<i<<'\t'<<d<<"\n\n";
    cout.flags(originalFormat);
    cout<<"Value of variable flags equals: "
        <<cout.flags()
        <<"\nRepeating printing of data in initial format:\n"
        <<i<<'\t'<<d<<endl;

    return 0;
}
