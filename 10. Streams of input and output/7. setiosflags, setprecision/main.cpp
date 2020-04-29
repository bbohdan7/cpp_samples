#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::setiosflags;
using std::setprecision;

int main()
{
    double root2 = sqrt(2.0);
    int places;

    cout<<setiosflags(ios::fixed)
        <<"Quadratical square of 2 with precision 0 - 2.\n"
        <<"Precision set with function-member precision: "<<endl;

    for(places = 0; places <= 9; places++){
        cout.precision(places);
        cout<<root2<<'\n';
    }

    cout<<"\nPrecision set with stream manipulator setprecision:\n";

    for(places = 0; places <= 9; places++)
        cout<<setprecision(places)<<root2<<'\n';

    return 0;
}
