#include <iostream>

using namespace std;

inline double cube(const double);

int main()
{
    cout<<"Enter length of cube side: ";

    double side;

    cin>>side;
    cout<<"Volume of cube with side "<<side<<" equals to "<<cube(side)<<endl;

    return 0;

}

inline double cube(const double s){ return s * s * s; }
